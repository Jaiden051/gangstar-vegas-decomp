// Decompiled from classes.dex (SourceFile: FileLruCache$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class FileLruCache$3 implements java.lang.Runnable {
    // Fields
    final com.facebook.internal.FileLruCache this$0;

    // Methods
    FileLruCache$3(com.facebook.internal.FileLruCache p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void run()
    {
      FileLruCache.access$200(this.this$0);
    }

}
