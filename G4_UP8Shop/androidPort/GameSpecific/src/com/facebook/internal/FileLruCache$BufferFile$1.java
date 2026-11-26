// Decompiled from classes.dex (SourceFile: FileLruCache$BufferFile$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class FileLruCache$BufferFile$1 implements java.io.FilenameFilter {
    // Methods
    FileLruCache$BufferFile$1()
    {
      super();
    }

    public final boolean accept(java.io.File p0, String p1)
    {
      return !p1.startsWith("buffer");
    }

}
