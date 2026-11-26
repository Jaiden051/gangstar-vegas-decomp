// Decompiled from classes.dex (SourceFile: LikeActionController$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class LikeActionController$3 implements java.lang.Runnable {
    // Fields
    final com.facebook.internal.LikeActionController$CreationCallback val$callback;
    final com.facebook.internal.LikeActionController val$controller;

    // Methods
    LikeActionController$3(com.facebook.internal.LikeActionController$CreationCallback p0, com.facebook.internal.LikeActionController p1)
    {
      super();
      this.val$callback = p0;
      this.val$controller = p1;
    
    }

    public final void run()
    {
      this.val$callback.onComplete(this.val$controller);
    }

}
