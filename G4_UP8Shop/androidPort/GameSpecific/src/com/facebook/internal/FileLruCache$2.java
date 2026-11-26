// Decompiled from classes.dex (SourceFile: FileLruCache$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class FileLruCache$2 implements java.lang.Runnable {
    // Fields
    final com.facebook.internal.FileLruCache this$0;
    final java.io.File[] val$filesToDelete;

    // Methods
    FileLruCache$2(com.facebook.internal.FileLruCache p0, java.io.File[] p1)
    {
      super();
      this.this$0 = p0;
      this.val$filesToDelete = (java.io.File[])p1;
    
    }

    public void run()
    {
      java.io.File[] v1;
      int v2;
      int i;
      v1 = this.val$filesToDelete;
      v2 = v1.length;
      for ( i = 0; i < v2; ++i )
        v1[i].delete();
    }

}
