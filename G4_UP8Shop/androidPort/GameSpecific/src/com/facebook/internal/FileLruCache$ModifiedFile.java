// Decompiled from classes.dex (SourceFile: FileLruCache$ModifiedFile.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class FileLruCache$ModifiedFile implements java.lang.Comparable {
    // Fields
    private static int HASH_MULTIPLIER;
    private static int HASH_SEED;
    private final java.io.File file;
    private final long modified;

    // Methods
    FileLruCache$ModifiedFile(java.io.File p0)
    {
      super();
      this.file = p0;
      this.modified = p0.lastModified();
    }

    public final int compareTo(com.facebook.internal.FileLruCache$ModifiedFile p0)
    {
      if ( this.getModified() < p0.getModified() )
        return -1;
      if ( this.getModified() <= p0.getModified() )
        return this.getFile().compareTo(p0.getFile());
      return 1;
    }

    /* bridge */ public final int compareTo(Object p0)
    {
      return this.compareTo/* int */((com.facebook.internal.FileLruCache$ModifiedFile)p0);
    }

    public final boolean equals(Object p0)
    {
      return p0 instanceof com.facebook.internal.FileLruCache$ModifiedFile
          && this.compareTo((com.facebook.internal.FileLruCache$ModifiedFile)p0) == 0;
    }

    final java.io.File getFile()
    {
      return this.file;
    }

    final long getModified()
    {
      return this.modified;
    }

    public final int hashCode()
    {
      return (int)(37 * (this.file.hashCode() + 1073) + this.modified % 0x7FFFFFFF);
    }

}
