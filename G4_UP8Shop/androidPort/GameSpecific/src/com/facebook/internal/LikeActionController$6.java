// Decompiled from classes.dex (SourceFile: LikeActionController$6.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class LikeActionController$6 implements com.facebook.internal.LikeActionController$RequestCompletionCallback {
    // Fields
    final com.facebook.internal.LikeActionController this$0;
    final android.app.Activity val$activity;
    final android.os.Bundle val$analyticsParameters;

    // Methods
    LikeActionController$6(com.facebook.internal.LikeActionController p0, android.app.Activity p1, android.os.Bundle p2)
    {
      super();
      this.this$0 = p0;
      this.val$activity = p1;
      this.val$analyticsParameters = p2;
    
    }

    public void onComplete()
    {
      android.os.Bundle v1;
      com.facebook.RequestBatch v2;
      com.facebook.internal.LikeActionController$PublishLikeRequestWrapper v3;
      if ( Utility.isNullOrEmpty(LikeActionController.access$1900(this.this$0)) )
      {
        v1 = new android.os.Bundle();
        v1.putString("com.facebook.platform.status.ERROR_DESCRIPTION", "Invalid Object Id");
        LikeActionController.access$1800(
          LikeActionController.access$1700(this.this$0),
          this.this$0,
          "com.facebook.sdk.LikeActionController.DID_ERROR",
          v1);
      }
      else
      {
        v2 = new com.facebook.RequestBatch();
        v3 = new com.facebook.internal.LikeActionController$PublishLikeRequestWrapper(this.this$0, LikeActionController.access$1900(this.this$0));
        v3.addToBatch(v2);
        v2.addCallback((com.facebook.RequestBatch$Callback)new com.facebook.internal.LikeActionController$6$1(this, v3));
        v2.executeAsync();
      }
    }

}
