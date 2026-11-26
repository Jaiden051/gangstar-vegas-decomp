// Decompiled from classes.dex (SourceFile: LikeActionController$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class LikeActionController$2 implements java.lang.Runnable {
    // Fields
    final com.facebook.internal.LikeActionController val$controllerToRefresh;

    // Methods
    LikeActionController$2(com.facebook.internal.LikeActionController p0)
    {
      super();
      this.val$controllerToRefresh = p0;
    
    }

    public final void run()
    {
      LikeActionController.access$100(this.val$controllerToRefresh);
    }

}
