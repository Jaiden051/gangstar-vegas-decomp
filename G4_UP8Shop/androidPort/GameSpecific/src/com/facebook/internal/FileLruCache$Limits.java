// Decompiled from classes.dex (SourceFile: FileLruCache$Limits.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

public final class FileLruCache$Limits {
    // Fields
    private int byteCount;
    private int fileCount;

    // Methods
    public FileLruCache$Limits()
    {
      super();
      this.fileCount = 1024;
      this.byteCount = 0x100000;
    }

    final int getByteCount()
    {
      return this.byteCount;
    }

    final int getFileCount()
    {
      return this.fileCount;
    }

    final void setByteCount(int p0)
    {
      if ( p0 < 0 )
        throw new java.security.InvalidParameterException("Cache byte-count limit must be >= 0");
      this.byteCount = p0;
    }

    final void setFileCount(int p0)
    {
      if ( p0 < 0 )
        throw new java.security.InvalidParameterException("Cache file count limit must be >= 0");
      this.fileCount = p0;
    }

}
