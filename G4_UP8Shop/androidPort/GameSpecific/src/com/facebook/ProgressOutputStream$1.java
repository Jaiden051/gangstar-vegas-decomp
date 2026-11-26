// Decompiled from classes.dex (SourceFile: ProgressOutputStream$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class ProgressOutputStream$1 implements java.lang.Runnable {
    // Fields
    final com.facebook.ProgressOutputStream this$0;
    final com.facebook.RequestBatch$OnProgressCallback val$progressCallback;

    // Methods
    ProgressOutputStream$1(com.facebook.ProgressOutputStream p0, com.facebook.RequestBatch$OnProgressCallback p1)
    {
      super();
      this.this$0 = p0;
      this.val$progressCallback = p1;
    
    }

    public void run()
    {
      this.val$progressCallback.onBatchProgress(ProgressOutputStream.access$000(this.this$0), ProgressOutputStream.access$100(this.this$0), ProgressOutputStream.access$200(this.this$0));
    }

}
