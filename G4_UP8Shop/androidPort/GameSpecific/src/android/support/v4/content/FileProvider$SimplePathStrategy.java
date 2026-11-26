// Decompiled from classes.dex (SourceFile: FileProvider$SimplePathStrategy.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import android.net.Uri;
import android.text.TextUtils;
class FileProvider$SimplePathStrategy implements android.support.v4.content.FileProvider$PathStrategy {
    // Fields
    private final java.lang.String mAuthority;
    private final java.util.HashMap mRoots;

    // Methods
    public FileProvider$SimplePathStrategy(String p0)
    {
      super();
      this.mRoots = new java.util.HashMap();
      this.mAuthority = p0;
    }

    public void addRoot(String p0, java.io.File p1)
    {
      java.io.File CanonicalFile; // RETVAL
    
      if ( TextUtils.isEmpty(p0) )
        throw new IllegalArgumentException("Name must not be empty");
      try
      {
        CanonicalFile = p1.getCanonicalFile();
      }
      catch ( java.io.IOException v5 )
      {
        throw new IllegalArgumentException("Failed to resolve canonical path for " + p1, v5);
      }
      this.mRoots.put(p0, CanonicalFile);
    }

    public java.io.File getFileForUri(android.net.Uri p0)
    {
      String EncodedPath;
      int v3;
      String v4;
      String v5;
      Object v6; // RETVAL
      java.io.File v7;
      java.io.File v8;
      java.io.File CanonicalFile; // RETVAL
      java.io.File v10;
      EncodedPath = p0.getEncodedPath();
      v3 = EncodedPath.indexOf(47, 1);
      v4 = Uri.decode(EncodedPath.substring(1, v3));
      v5 = Uri.decode(EncodedPath.substring(v3 + 1));
      v6 = this.mRoots.get(v4);
      v7 = (java.io.File)v6;
      if ( v7 == null )
        throw new IllegalArgumentException("Unable to find configured root for " + p0);
      v8 = new java.io.File(v7, v5);
      try
      {
        CanonicalFile = v8.getCanonicalFile();
      }
      catch ( java.io.IOException e )
      {
        throw new IllegalArgumentException("Failed to resolve canonical path for " + v8);
      }
      v10 = CanonicalFile;
      if ( !CanonicalFile.getPath().startsWith(v7.getPath()) )
        throw new SecurityException("Resolved path jumped beyond configured root");
      return v10;
    }

    public android.net.Uri getUriForFile(java.io.File p0)
    {
      String CanonicalPath; // RETVAL
      String v3;
      java.util.Map.Entry v4;
      java.util.Iterator v5;
      java.util.Map.Entry v6;
      String Path;
      String v8;
      String v9;
      try
      {
        CanonicalPath = p0.getCanonicalPath();
      }
      catch ( java.io.IOException e )
      {
        throw new IllegalArgumentException("Failed to resolve canonical path for " + p0);
      }
      v3 = CanonicalPath;
      v4 = null;
      v5 = this.mRoots.entrySet().iterator();
      while ( v5.hasNext() )
      {
        v6 = (java.util.Map.Entry)v5.next();
        Path = ((java.io.File)v6.getValue()).getPath();
        if ( !v3.startsWith(Path) || v4 != null && Path.length() <= ((java.io.File)v4.getValue()).getPath().length() )
          v6 = v4;
        v4 = v6;
      }
      if ( v4 == null )
        throw new IllegalArgumentException("Failed to find configured root that contains " + v3);
      v8 = ((java.io.File)v4.getValue()).getPath();
      if ( v8.endsWith("/") )
        v9 = v3.substring(v8.length());
      else
        v9 = v3.substring(v8.length() + 1);
      return new android.net.Uri.Builder().scheme("content").authority(this.mAuthority).encodedPath(Uri.encode((String)v4.getKey())
                                                                                                  + '/'
                                                                                                  + Uri.encode(v9, "/")).build();
    }

}
