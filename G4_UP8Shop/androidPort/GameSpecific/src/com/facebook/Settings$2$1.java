// Decompiled from classes.dex (SourceFile: Settings$2$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Settings$2$1 implements java.lang.Runnable {
    // Fields
    final com.facebook.Settings$2 this$0;
    final com.facebook.Response val$response;

    // Methods
    Settings$2$1(com.facebook.Settings$2 p0, com.facebook.Response p1)
    {
      super();
      this.this$0 = p0;
      this.val$response = p1;
    
    }

    public void run()
    {
      this.this$0.val$callback.onCompleted(this.val$response);
    }

}
