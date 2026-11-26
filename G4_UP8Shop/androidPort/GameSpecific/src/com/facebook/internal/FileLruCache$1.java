// Decompiled from classes.dex (SourceFile: FileLruCache$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class FileLruCache$1 implements com.facebook.internal.FileLruCache$StreamCloseCallback {
    // Fields
    final com.facebook.internal.FileLruCache this$0;
    final java.io.File val$buffer;
    final long val$bufferFileCreateTime;
    final java.lang.String val$key;

    // Methods
    FileLruCache$1(com.facebook.internal.FileLruCache p0, long p1, java.io.File p3, String p4)
    {
      super();
      this.this$0 = p0;
      this.val$bufferFileCreateTime = p1;
      this.val$buffer = p3;
      this.val$key = p4;
    
    }

    public void onClose()
    {
      if ( this.val$bufferFileCreateTime >= FileLruCache.access$000(this.this$0).get() )
        FileLruCache.access$100(this.this$0, this.val$key, this.val$buffer);
      else
        this.val$buffer.delete();
    }

}
