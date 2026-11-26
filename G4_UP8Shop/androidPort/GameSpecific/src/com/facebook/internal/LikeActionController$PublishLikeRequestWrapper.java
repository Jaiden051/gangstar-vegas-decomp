// Decompiled from classes.dex (SourceFile: LikeActionController$PublishLikeRequestWrapper.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.HttpMethod;
import com.facebook.LoggingBehavior;
class LikeActionController$PublishLikeRequestWrapper extends com.facebook.internal.LikeActionController$AbstractRequestWrapper {
    // Fields
    final com.facebook.internal.LikeActionController this$0;
    java.lang.String unlikeToken;

    // Methods
    LikeActionController$PublishLikeRequestWrapper(com.facebook.internal.LikeActionController p0, String p1)
    {
      super(p0, p1);
      android.os.Bundle v3;
      this.this$0 = p0;
      v3 = new android.os.Bundle();
      v3.putString("object", p1);
      this.setRequest(new com.facebook.Request(LikeActionController.access$2700(p0), "me/og.likes", v3, HttpMethod.POST));
    
    }

    protected void processError(com.facebook.FacebookRequestError p0)
    {
      Object[] v2;
      if ( p0.getErrorCode() == 3501 )
      {
        this.error = null;
      }
      else
      {
        v2 = new Object[2];
        v2[0] = this.objectId;
        v2[1] = p0;
        Logger.log(LoggingBehavior.REQUESTS, LikeActionController.access$1500(), "Error liking object '%s' : %s", v2);
        LikeActionController.access$2600(this.this$0, "publish_like", p0);
      }
    }

    protected void processSuccess(com.facebook.Response p0)
    {
      this.unlikeToken = Utility.safeGetStringFromResponse(p0.getGraphObject(), "id");
    }

}
