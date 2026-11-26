// Decompiled from classes.dex (SourceFile: Session$4$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Session$4$1 implements java.lang.Runnable {
    // Fields
    final com.facebook.Session$4 this$1;
    final com.facebook.Session$StatusCallback val$callback;

    // Methods
    Session$4$1(com.facebook.Session$4 p0, com.facebook.Session$StatusCallback p1)
    {
      super();
      this.this$1 = p0;
      this.val$callback = p1;
    
    }

    public void run()
    {
      this.val$callback.call(this.this$1.this$0, this.this$1.val$newState, this.this$1.val$exception);
    }

}
