// Decompiled from classes.dex (SourceFile: LikeActionController$CreateLikeActionControllerWorkItem.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class LikeActionController$CreateLikeActionControllerWorkItem implements java.lang.Runnable {
    // Fields
    private com.facebook.internal.LikeActionController$CreationCallback callback;
    private android.content.Context context;
    private java.lang.String objectId;

    // Methods
    LikeActionController$CreateLikeActionControllerWorkItem(
            android.content.Context p0,
            String p1,
            com.facebook.internal.LikeActionController$CreationCallback p2)
    {
      super();
      this.context = p0;
      this.objectId = p1;
      this.callback = p2;
    }

    public void run()
    {
      LikeActionController.access$3000(this.context, this.objectId, this.callback);
    }

}
