// Decompiled from classes.dex (SourceFile: LikeActionController$7.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class LikeActionController$7 implements com.facebook.RequestBatch$Callback {
    // Fields
    final com.facebook.internal.LikeActionController this$0;
    final android.app.Activity val$activity;
    final android.os.Bundle val$analyticsParameters;
    final com.facebook.internal.LikeActionController$PublishUnlikeRequestWrapper val$unlikeRequest;

    // Methods
    LikeActionController$7(
            com.facebook.internal.LikeActionController p0,
            com.facebook.internal.LikeActionController$PublishUnlikeRequestWrapper p1,
            android.app.Activity p2,
            android.os.Bundle p3)
    {
      super();
      this.this$0 = p0;
      this.val$unlikeRequest = p1;
      this.val$activity = p2;
      this.val$analyticsParameters = p3;
    
    }

    public void onBatchCompleted(com.facebook.RequestBatch p0)
    {
      LikeActionController.access$2002(this.this$0, false);
      if ( this.val$unlikeRequest.error != null )
      {
        LikeActionController.access$2100(this.this$0, this.val$activity, this.val$analyticsParameters, true);
      }
      else
      {
        LikeActionController.access$1202(this.this$0, null);
        LikeActionController.access$2202(this.this$0, false);
        LikeActionController.access$1300(this.this$0).logSdkEvent("fb_like_control_did_unlike", null, this.val$analyticsParameters);
        LikeActionController.access$2300(this.this$0, this.val$activity, this.val$analyticsParameters);
      }
    }

}
