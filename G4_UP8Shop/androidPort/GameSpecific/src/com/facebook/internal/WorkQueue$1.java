// Decompiled from classes.dex (SourceFile: WorkQueue$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class WorkQueue$1 implements java.lang.Runnable {
    // Fields
    final com.facebook.internal.WorkQueue this$0;
    final com.facebook.internal.WorkQueue$WorkNode val$node;

    // Methods
    WorkQueue$1(com.facebook.internal.WorkQueue p0, com.facebook.internal.WorkQueue$WorkNode p1)
    {
      super();
      this.this$0 = p0;
      this.val$node = p1;
    
    }

    public void run()
    {
      try
      {
        this.val$node.getCallback().run();
      }
      finally
      {
        WorkQueue.access$000(this.this$0, this.val$node);
      }
    }

}
