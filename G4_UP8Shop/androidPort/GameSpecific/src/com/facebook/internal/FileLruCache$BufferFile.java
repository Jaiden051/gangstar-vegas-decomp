// Decompiled from classes.dex (SourceFile: FileLruCache$BufferFile.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class FileLruCache$BufferFile {
    // Fields
    private static java.lang.String FILE_NAME_PREFIX;
    private static final java.io.FilenameFilter filterExcludeBufferFiles;
    private static final java.io.FilenameFilter filterExcludeNonBufferFiles;

    // Methods
    static
    {
      filterExcludeBufferFiles = (java.io.FilenameFilter)new com.facebook.internal.FileLruCache$BufferFile$1();
      filterExcludeNonBufferFiles = (java.io.FilenameFilter)new com.facebook.internal.FileLruCache$BufferFile$2();
    }

    private FileLruCache$BufferFile()
    {
      super();
    }

    static void deleteAll(java.io.File p0)
    {
      java.io.File[] v1; // RETVAL
      java.io.File[] v2;
      int v3;
      int i;
      v1 = p0.listFiles(excludeNonBufferFiles());
      v2 = v1;
      if ( v1 != null )
      {
        v3 = v1.length;
        for ( i = 0; i < v3; ++i )
          v2[i].delete();
      }
    }

    static java.io.FilenameFilter excludeBufferFiles()
    {
      return filterExcludeBufferFiles;
    }

    static java.io.FilenameFilter excludeNonBufferFiles()
    {
      return filterExcludeNonBufferFiles;
    }

    static java.io.File newFile(java.io.File p0)
    {
      return new java.io.File(p0, "buffer" + Long.valueOf(FileLruCache.access$300().incrementAndGet()).toString());
    }

}
