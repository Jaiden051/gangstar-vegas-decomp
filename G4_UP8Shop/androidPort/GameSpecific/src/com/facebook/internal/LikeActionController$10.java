// Decompiled from classes.dex (SourceFile: LikeActionController$10.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.LoggingBehavior;
class LikeActionController$10 implements com.facebook.RequestBatch$Callback {
    // Fields
    final com.facebook.internal.LikeActionController this$0;
    final com.facebook.internal.LikeActionController$RequestCompletionCallback val$completionHandler;
    final com.facebook.internal.LikeActionController$GetOGObjectIdRequestWrapper val$objectIdRequest;
    final com.facebook.internal.LikeActionController$GetPageIdRequestWrapper val$pageIdRequest;

    // Methods
    LikeActionController$10(
            com.facebook.internal.LikeActionController p0,
            com.facebook.internal.LikeActionController$GetOGObjectIdRequestWrapper p1,
            com.facebook.internal.LikeActionController$GetPageIdRequestWrapper p2,
            com.facebook.internal.LikeActionController$RequestCompletionCallback p3)
    {
      super();
      this.this$0 = p0;
      this.val$objectIdRequest = p1;
      this.val$pageIdRequest = p2;
      this.val$completionHandler = p3;
    
    }

    public void onBatchCompleted(com.facebook.RequestBatch p0)
    {
      String v2;
      Object[] v3;
      com.facebook.internal.LikeActionController v4;
      com.facebook.internal.LikeActionController$GetPageIdRequestWrapper v5;
      LikeActionController.access$1902(this.this$0, this.val$objectIdRequest.verifiedObjectId);
      if ( Utility.isNullOrEmpty(LikeActionController.access$1900(this.this$0)) )
      {
        LikeActionController.access$1902(this.this$0, this.val$pageIdRequest.verifiedObjectId);
        LikeActionController.access$2502(this.this$0, this.val$pageIdRequest.objectIsPage);
      }
      if ( Utility.isNullOrEmpty(LikeActionController.access$1900(this.this$0)) )
      {
        v2 = LikeActionController.access$1500();
        v3 = new Object[1];
        v3[0] = LikeActionController.access$2400(this.this$0);
        Logger.log(
          LoggingBehavior.DEVELOPER_ERRORS,
          v2,
          "Unable to verify the FB id for '%s'. Verify that it is a valid FB object or page",
          v3);
        v4 = this.this$0;
        if ( this.val$pageIdRequest.error != null )
          v5 = this.val$pageIdRequest;
        else
          v5 = this.val$pageIdRequest != null ? (com.facebook.internal.LikeActionController$GetPageIdRequestWrapper)this.val$pageIdRequest : null;
        LikeActionController.access$2600(v4, "get_verified_id", v5.error);
      }
      if ( this.val$completionHandler != null )
        this.val$completionHandler.onComplete();
    }

}
