// Decompiled from classes.dex (SourceFile: LikeActionController$PublishUnlikeRequestWrapper.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.HttpMethod;
import com.facebook.LoggingBehavior;
class LikeActionController$PublishUnlikeRequestWrapper extends com.facebook.internal.LikeActionController$AbstractRequestWrapper {
    // Fields
    final com.facebook.internal.LikeActionController this$0;
    private java.lang.String unlikeToken;

    // Methods
    LikeActionController$PublishUnlikeRequestWrapper(com.facebook.internal.LikeActionController p0, String p1)
    {
      super(p0, null);
      this.this$0 = p0;
      this.unlikeToken = p1;
      this.setRequest(new com.facebook.Request(LikeActionController.access$2700(p0), p1, null, HttpMethod.DELETE));
    
    }

    protected void processError(com.facebook.FacebookRequestError p0)
    {
      Object[] v2;
      v2 = new Object[2];
      v2[0] = this.unlikeToken;
      v2[1] = p0;
      Logger.log(
        LoggingBehavior.REQUESTS,
        LikeActionController.access$1500(),
        "Error unliking object with unlike token '%s' : %s",
        v2);
      LikeActionController.access$2600(this.this$0, "publish_unlike", p0);
    }

    protected void processSuccess(com.facebook.Response p0)
    {
      ;
    }

}
