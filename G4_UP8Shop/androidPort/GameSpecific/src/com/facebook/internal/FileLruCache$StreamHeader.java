// Decompiled from classes.dex (SourceFile: FileLruCache$StreamHeader.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.LoggingBehavior;
import org.json.JSONObject;
final class FileLruCache$StreamHeader {
    // Fields
    private static int HEADER_VERSION;

    // Methods
    private FileLruCache$StreamHeader()
    {
      super();
    }

    static org.json.JSONObject readHeader(java.io.InputStream p0)
 throws java.io.IOException {
      int v1;
      org.json.JSONObject v2;
      int v4;
      int v5;
      int v6; // RETVAL
      byte[] v7;
      int v8; // RETVAL
      String v9;
      org.json.JSONTokener v10;
      Object Value; // RETVAL
    
      v1 = 0;
      if ( p0.read() != 0 )
        return null;
      v4 = 0;
      v5 = 0;
      while ( v4 < 3 )
      {
        v6 = p0.read();
        if ( v6 == -1 )
        {
          Logger.log(
            LoggingBehavior.CACHE,
            FileLruCache.TAG,
            "readHeader: stream.read returned -1 while reading header size");
          return null;
        }
        v5 = (v5 << 8) + (v6 & 0xFF);
        ++v4;
      }
      v7 = new byte[v5];
      while ( v1 < v7.length )
      {
        v8 = p0.read(v7, v1, v7.length - v1);
        if ( v8 <= 0 )
        {
          Logger.log(
            LoggingBehavior.CACHE,
            FileLruCache.TAG,
            "readHeader: stream.read stopped at " + Integer.valueOf(v1) + " when expected " + v7.length);
          return null;
        }
        v1 += v8;
      }
      v9 = new String(v7);
      v10 = new org.json.JSONTokener(v9);
      try
      {
        Value = v10.nextValue();
        if ( Value instanceof org.json.JSONObject )
        {
          v2 = (org.json.JSONObject)Value;
        }
        else
        {
          Logger.log(
            LoggingBehavior.CACHE,
            FileLruCache.TAG,
            "readHeader: expected JSONObject, got " + Value.getClass().getCanonicalName());
          v2 = null;
        }
      }
      catch ( org.json.JSONException v12 )
      {
        throw new java.io.IOException(v12.getMessage());
      }
      return v2;
    }

    static void writeHeader(java.io.OutputStream p0, org.json.JSONObject p1)
 throws java.io.IOException {
      byte[] Bytes; // RETVAL
    
      Bytes = p1.toString().getBytes();
      p0.write(0);
      p0.write((Bytes.length >> 16) & 0xFF);
      p0.write((Bytes.length >> 8) & 0xFF);
      p0.write((int)Bytes.length);
      p0.write(Bytes);
    }

}
