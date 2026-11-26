// Decompiled from classes.dex (SourceFile: FileLruCache.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.text.format.Time;
import com.facebook.LoggingBehavior;
import com.facebook.Settings;
import java.io.File;
import org.apache.http.Header;
public final class FileLruCache {
    // Fields
    private static java.lang.String HEADER_CACHEKEY_KEY;
    private static java.lang.String HEADER_CACHE_CONTENT_TAG_KEY;
    static final java.lang.String TAG;
    private static final java.util.concurrent.atomic.AtomicLong bufferIndex;
    private final java.io.File directory;
    private boolean isTrimInProgress;
    private boolean isTrimPending;
    private java.util.concurrent.atomic.AtomicLong lastClearCacheTime;
    private final com.facebook.internal.FileLruCache$Limits limits;
    private final java.lang.Object lock;
    private final java.lang.String tag;

    // Methods
    static
    {
      TAG = com.facebook.internal.FileLruCache.class.getSimpleName();
      bufferIndex = new java.util.concurrent.atomic.AtomicLong();
    }

    public FileLruCache(android.content.Context p0, String p1, com.facebook.internal.FileLruCache$Limits p2)
    {
      super();
      this.lastClearCacheTime = new java.util.concurrent.atomic.AtomicLong(0);
      this.tag = p1;
      this.limits = p2;
      this.directory = new java.io.File(p0.getCacheDir(), p1);
      this.lock = new Object();
      if ( this.directory.mkdirs() || this.directory.isDirectory() )
        FileLruCache$BufferFile.deleteAll(this.directory);
    }

    /* synthetic */ static java.util.concurrent.atomic.AtomicLong access$000(
            com.facebook.internal.FileLruCache p0)
    {
      return p0.lastClearCacheTime;
    }

    /* synthetic */ static void access$100(com.facebook.internal.FileLruCache p0, String p1, java.io.File p2)
    {
      p0.renameToTargetAndTrim(p1, p2);
    }

    /* synthetic */ static void access$200(com.facebook.internal.FileLruCache p0)
    {
      p0.trim();
    }

    /* synthetic */ static java.util.concurrent.atomic.AtomicLong access$300()
    {
      return bufferIndex;
    }

    private void postTrim()
    {
      Object lock;
      lock = this.lock;
      synchronized ( lock )
      {
        if ( !this.isTrimPending )
        {
          this.isTrimPending = true;
          Settings.getExecutor().execute((Runnable)new com.facebook.internal.FileLruCache$3(this));
        }
      }
    }

    private void renameToTargetAndTrim(String p0, java.io.File p1)
    {
      if ( !p1.renameTo(new java.io.File(this.directory, Utility.md5hash(p0))) )
        p1.delete();
      this.postTrim();
    }

    private void trim()
    {
      Object lock;
      java.util.PriorityQueue v2;
      long v3;
      long v4;
      java.io.File[] v5; // RETVAL
      java.io.File[] v6;
      int v7;
      int i;
      java.io.File v9;
      com.facebook.internal.FileLruCache$ModifiedFile v10;
      java.io.File File;
      long v13;
      long j;
      Object v15;
      Object v18;
      lock = this.lock;
      com.gameloft.android.DecompRT.monitorEnter(lock);
      try
      {
        try
        {
          this.isTrimPending = false;
          this.isTrimInProgress = true;
        }
        finally
        {
          com.gameloft.android.DecompRT.monitorExit(lock);
        }
        Logger.log(LoggingBehavior.CACHE, TAG, "trim started");
        v2 = new java.util.PriorityQueue();
        v3 = 0;
        v4 = 0;
        v5 = this.directory.listFiles(FileLruCache$BufferFile.excludeBufferFiles());
        v6 = v5;
        if ( v5 != null )
        {
          v7 = v5.length;
          for ( i = 0; i < v7; ++i )
          {
            v9 = v6[i];
            v10 = new com.facebook.internal.FileLruCache$ModifiedFile(v9);
            v2.add(v10);
            Logger.log(
              LoggingBehavior.CACHE,
              TAG,
              "  trim considering time=" + Long.valueOf(v10.getModified()) + " name=" + v10.getFile().getName());
            ++v4;
            v3 += v9.length();
          }
        }
        v13 = v3;
        for ( j = v4; v13 > this.limits.getByteCount() || j > this.limits.getFileCount(); --j )
        {
          File = ((com.facebook.internal.FileLruCache$ModifiedFile)v2.remove()).getFile();
          Logger.log(LoggingBehavior.CACHE, TAG, "  trim removing " + File.getName());
          v13 -= File.length();
          File.delete();
        }
        v15 = this.lock;
        synchronized ( v15 )
        {
          this.isTrimInProgress = false;
          this.lock.notifyAll();
          return;
        }
      }
      catch ( Throwable v17 )
      {
        v18 = this.lock;
        synchronized ( v18 )
        {
          this.isTrimInProgress = false;
          this.lock.notifyAll();
          com.gameloft.android.DecompRT.monitorExit(v18);
          throw v17;
        }
      }
    }

    public final void clearCache()
    {
      java.io.File[] v1;
      v1 = this.directory.listFiles(FileLruCache$BufferFile.excludeBufferFiles());
      this.lastClearCacheTime.set(System.currentTimeMillis());
      if ( v1 != null )
        Settings.getExecutor().execute((Runnable)new com.facebook.internal.FileLruCache$2(this, v1));
    }

    public final java.io.InputStream get(String p0)
    {
      return this.get(p0, null);
    }

    public final java.io.InputStream get(String p0, String p1)
    {
      java.io.InputStream v3;
      String v4; // RETVAL
      java.io.File v5;
      java.io.InputStream v6;
      org.json.JSONObject Header; // RETVAL
      org.json.JSONObject v8;
      String v10; // RETVAL
      String v11; // RETVAL
      long Time;
      v3 = null;
      v4 = Utility.md5hash(p0);
      v5 = new java.io.File(this.directory, v4);
      try
      {
        v6 = new java.io.BufferedInputStream(new java.io.FileInputStream(v5), 0x2000);
        try
        {
          Header = FileLruCache$StreamHeader.readHeader(v6);
          v8 = Header;
          if ( Header != null )
          {
            v10 = Header.optString("key");
            if ( v10 != null && v10.equals(p0) )
            {
              v11 = v8.optString("tag", null);
              if ( (p1 != null || v11 == null) && (p1 == null || p1.equals(v11)) )
              {
                Time = new java.util.Date().getTime();
                Logger.log(
                  LoggingBehavior.CACHE,
                  TAG,
                  "Setting lastModified to " + Long.valueOf(Time) + " for " + v5.getName());
                v5.setLastModified(Time);
                return v6;
              }
              else
              {
                v6.close();
              }
            }
            else
            {
              v6.close();
            }
          }
          else
          {
            v6.close();
          }
          return v3;
        }
        catch ( Throwable v13 )
        {
          v6.close();
          throw v13;
        }
      }
      catch ( java.io.IOException e )
      {
      }
      return v3;
    }

    public final java.io.InputStream interceptAndPut(String p0, java.io.InputStream p1)
 throws java.io.IOException {
      return new com.facebook.internal.FileLruCache$CopyingInputStream(p1, this.openPutStream(p0));
    }

    final java.io.OutputStream openPutStream(String p0)
 throws java.io.IOException {
      return this.openPutStream(p0, null);
    }

    public final java.io.OutputStream openPutStream(String p0, String p1)
 throws java.io.IOException {
      java.io.File v3;
      java.io.FileOutputStream v4;
      long v5; // RETVAL
      java.io.BufferedOutputStream v6;
      org.json.JSONObject v7;
      v3 = FileLruCache$BufferFile.newFile(this.directory);
      v3.delete();
      if ( !v3.createNewFile() )
        throw new java.io.IOException("Could not create file at " + v3.getAbsolutePath());
      try
      {
        v4 = new java.io.FileOutputStream(v3);
      }
      catch ( java.io.FileNotFoundException v9 )
      {
        Logger.log(LoggingBehavior.CACHE, 5, TAG, "Error creating buffer output stream: " + v9);
        throw new java.io.IOException(v9.getMessage());
      }
      v5 = System.currentTimeMillis();
      v6 = new java.io.BufferedOutputStream(new com.facebook.internal.FileLruCache$CloseCallbackOutputStream(v4, (com.facebook.internal.FileLruCache$StreamCloseCallback)new com.facebook.internal.FileLruCache$1(this, v5, v3, p0)), 0x2000);
      try
      {
        try
        {
          v7 = new org.json.JSONObject();
          v7.put("key", p0);
          if ( !Utility.isNullOrEmpty(p1) )
            v7.put("tag", p1);
          FileLruCache$StreamHeader.writeHeader(v6, v7);
          return v6;
        }
        catch ( org.json.JSONException v10 )
        {
          Logger.log(LoggingBehavior.CACHE, 5, TAG, "Error creating JSON header for cache file: " + v10);
          throw new java.io.IOException(v10.getMessage());
        }
      }
      catch ( Throwable v11 )
      {
        v6.close();
        throw v11;
      }
    }

    final long sizeInBytesForTest()
    {
      Object lock;
      java.io.File[] v2; // RETVAL
      java.io.File[] v3;
      long v4;
      int v5;
      int i;
      long v7; // RETVAL
    
      lock = this.lock;
      synchronized ( lock )
      {
        while ( this.isTrimPending || this.isTrimInProgress )
        {
          try
          {
            this.lock.wait();
          }
          catch ( InterruptedException e )
          {
          }
        }
      }
      v2 = this.directory.listFiles();
      v3 = v2;
      v4 = 0;
      if ( v2 != null )
      {
        v5 = v2.length;
        for ( i = 0; i < v5; ++i )
        {
          v7 = v3[i].length();
          v4 += v7;
        }
      }
      return v4;
    }

    public final String toString()
    {
      return "{FileLruCache: tag:" + this.tag + " file:" + this.directory.getName() + "}";
    }

}
