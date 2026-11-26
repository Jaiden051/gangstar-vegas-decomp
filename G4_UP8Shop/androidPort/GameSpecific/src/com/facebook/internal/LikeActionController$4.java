// Decompiled from classes.dex (SourceFile: LikeActionController$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class LikeActionController$4 extends android.content.BroadcastReceiver {
    // Methods
    LikeActionController$4()
    {
      super();
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      String Action;
      boolean v4;
      if ( !LikeActionController.access$200() )
      {
        Action = p1.getAction();
        v4 = Utility.areObjectsEqual("com.facebook.sdk.ACTIVE_SESSION_UNSET", Action)
          || Utility.areObjectsEqual("com.facebook.sdk.ACTIVE_SESSION_CLOSED", Action);
        LikeActionController.access$202(true);
        LikeActionController.access$700().postDelayed((Runnable)new com.facebook.internal.LikeActionController$4$1(this, v4, p0), 100);
      }
    }

}
