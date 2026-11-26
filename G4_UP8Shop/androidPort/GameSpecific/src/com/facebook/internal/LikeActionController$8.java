// Decompiled from classes.dex (SourceFile: LikeActionController$8.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class LikeActionController$8 implements com.facebook.internal.LikeActionController$RequestCompletionCallback {
    // Fields
    final com.facebook.internal.LikeActionController this$0;

    // Methods
    LikeActionController$8(com.facebook.internal.LikeActionController p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onComplete()
    {
      com.facebook.internal.LikeActionController$GetOGObjectLikesRequestWrapper v1;
      com.facebook.internal.LikeActionController$GetEngagementRequestWrapper v2;
      com.facebook.RequestBatch v3;
      v1 = new com.facebook.internal.LikeActionController$GetOGObjectLikesRequestWrapper(this.this$0, LikeActionController.access$1900(this.this$0));
      v2 = new com.facebook.internal.LikeActionController$GetEngagementRequestWrapper(this.this$0, LikeActionController.access$1900(this.this$0));
      v3 = new com.facebook.RequestBatch();
      v1.addToBatch(v3);
      v2.addToBatch(v3);
      v3.addCallback((com.facebook.RequestBatch$Callback)new com.facebook.internal.LikeActionController$8$1(this, v1, v2));
      v3.executeAsync();
    }

}
