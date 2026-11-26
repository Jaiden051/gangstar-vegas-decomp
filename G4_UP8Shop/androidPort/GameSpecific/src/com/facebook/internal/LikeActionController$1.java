// Decompiled from classes.dex (SourceFile: LikeActionController$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class LikeActionController$1 implements com.facebook.internal.LikeActionController$CreationCallback {
    // Fields
    final java.util.UUID val$callId;
    final android.content.Intent val$data;
    final int val$requestCode;
    final int val$resultCode;

    // Methods
    LikeActionController$1(int p0, int p1, android.content.Intent p2, java.util.UUID p3)
    {
      super();
      this.val$requestCode = p0;
      this.val$resultCode = p1;
      this.val$data = p2;
      this.val$callId = p3;
    
    }

    public final void onComplete(com.facebook.internal.LikeActionController p0)
    {
      LikeActionController.access$000(p0, this.val$requestCode, this.val$resultCode, this.val$data, this.val$callId);
    }

}
