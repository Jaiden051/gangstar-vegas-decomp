// Decompiled from classes.dex (SourceFile: LikeActionController$4$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class LikeActionController$4$1 implements java.lang.Runnable {
    // Fields
    final com.facebook.internal.LikeActionController$4 this$0;
    final android.content.Context val$broadcastContext;
    final boolean val$shouldClearDisk;

    // Methods
    LikeActionController$4$1(com.facebook.internal.LikeActionController$4 p0, boolean p1, android.content.Context p2)
    {
      super();
      this.this$0 = p0;
      this.val$shouldClearDisk = p1;
      this.val$broadcastContext = p2;
    
    }

    public void run()
    {
      if ( this.val$shouldClearDisk )
      {
        LikeActionController.access$302((LikeActionController.access$300() + 1) % 1000);
        this.val$broadcastContext.getSharedPreferences("com.facebook.LikeActionController.CONTROLLER_STORE_KEY", 0).edit().putInt("OBJECT_SUFFIX", LikeActionController.access$300()).apply();
        LikeActionController.access$400().clear();
        LikeActionController.access$500().clearCache();
      }
      LikeActionController.access$600(this.val$broadcastContext, null, "com.facebook.sdk.LikeActionController.DID_RESET");
      LikeActionController.access$202(false);
    }

}
