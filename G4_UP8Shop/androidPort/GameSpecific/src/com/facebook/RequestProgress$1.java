// Decompiled from classes.dex (SourceFile: RequestProgress$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class RequestProgress$1 implements java.lang.Runnable {
    // Fields
    final com.facebook.RequestProgress this$0;
    final com.facebook.Request$OnProgressCallback val$callbackCopy;
    final long val$currentCopy;
    final long val$maxProgressCopy;

    // Methods
    RequestProgress$1(com.facebook.RequestProgress p0, com.facebook.Request$OnProgressCallback p1, long p2, long p4)
    {
      super();
      this.this$0 = p0;
      this.val$callbackCopy = p1;
      this.val$currentCopy = p2;
      this.val$maxProgressCopy = p4;
    
    }

    public void run()
    {
      this.val$callbackCopy.onProgress(this.val$currentCopy, this.val$maxProgressCopy);
    }

}
