// Decompiled from classes.dex (SourceFile: LikeActionController$8$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.LoggingBehavior;
class LikeActionController$8$1 implements com.facebook.RequestBatch$Callback {
    // Fields
    final com.facebook.internal.LikeActionController$8 this$1;
    final com.facebook.internal.LikeActionController$GetEngagementRequestWrapper val$engagementRequest;
    final com.facebook.internal.LikeActionController$GetOGObjectLikesRequestWrapper val$objectLikesRequest;

    // Methods
    LikeActionController$8$1(
            com.facebook.internal.LikeActionController$8 p0,
            com.facebook.internal.LikeActionController$GetOGObjectLikesRequestWrapper p1,
            com.facebook.internal.LikeActionController$GetEngagementRequestWrapper p2)
    {
      super();
      this.this$1 = p0;
      this.val$objectLikesRequest = p1;
      this.val$engagementRequest = p2;
    
    }

    public void onBatchCompleted(com.facebook.RequestBatch p0)
    {
      String v2;
      Object[] v3;
      if ( this.val$objectLikesRequest.error != null || this.val$engagementRequest.error != null )
      {
        v2 = LikeActionController.access$1500();
        v3 = new Object[1];
        v3[0] = LikeActionController.access$2400(this.this$1.this$0);
        Logger.log(LoggingBehavior.REQUESTS, v2, "Unable to refresh like state for id: '%s'", v3);
      }
      else
      {
        LikeActionController.access$1400(
          this.this$1.this$0,
          this.val$objectLikesRequest.objectIsLiked,
          this.val$engagementRequest.likeCountStringWithLike,
          this.val$engagementRequest.likeCountStringWithoutLike,
          this.val$engagementRequest.socialSentenceStringWithLike,
          this.val$engagementRequest.socialSentenceStringWithoutLike,
          this.val$objectLikesRequest.unlikeToken);
      }
    }

}
