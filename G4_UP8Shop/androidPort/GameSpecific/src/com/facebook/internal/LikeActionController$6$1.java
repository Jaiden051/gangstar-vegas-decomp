// Decompiled from classes.dex (SourceFile: LikeActionController$6$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class LikeActionController$6$1 implements com.facebook.RequestBatch$Callback {
    // Fields
    final com.facebook.internal.LikeActionController$6 this$1;
    final com.facebook.internal.LikeActionController$PublishLikeRequestWrapper val$likeRequest;

    // Methods
    LikeActionController$6$1(
            com.facebook.internal.LikeActionController$6 p0,
            com.facebook.internal.LikeActionController$PublishLikeRequestWrapper p1)
    {
      super();
      this.this$1 = p0;
      this.val$likeRequest = p1;
    
    }

    public void onBatchCompleted(com.facebook.RequestBatch p0)
    {
      LikeActionController.access$2002(this.this$1.this$0, false);
      if ( this.val$likeRequest.error != null )
      {
        LikeActionController.access$2100(
          this.this$1.this$0,
          this.this$1.val$activity,
          this.this$1.val$analyticsParameters,
          false);
      }
      else
      {
        LikeActionController.access$1202(
          this.this$1.this$0,
          Utility.coerceValueIfNullOrEmpty(this.val$likeRequest.unlikeToken, null));
        LikeActionController.access$2202(this.this$1.this$0, true);
        LikeActionController.access$1300(this.this$1.this$0).logSdkEvent("fb_like_control_did_like", null, this.this$1.val$analyticsParameters);
        LikeActionController.access$2300(this.this$1.this$0, this.this$1.val$activity, this.this$1.val$analyticsParameters);
      }
    }

}
