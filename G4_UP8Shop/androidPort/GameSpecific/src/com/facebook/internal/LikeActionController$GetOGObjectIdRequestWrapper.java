// Decompiled from classes.dex (SourceFile: LikeActionController$GetOGObjectIdRequestWrapper.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.HttpMethod;
import com.facebook.LoggingBehavior;
class LikeActionController$GetOGObjectIdRequestWrapper extends com.facebook.internal.LikeActionController$AbstractRequestWrapper {
    // Fields
    final com.facebook.internal.LikeActionController this$0;
    java.lang.String verifiedObjectId;

    // Methods
    LikeActionController$GetOGObjectIdRequestWrapper(com.facebook.internal.LikeActionController p0, String p1)
    {
      super(p0, p1);
      android.os.Bundle v3;
      this.this$0 = p0;
      v3 = new android.os.Bundle();
      v3.putString("fields", "og_object.fields(id)");
      v3.putString("ids", p1);
      this.setRequest(new com.facebook.Request(LikeActionController.access$2700(p0), "", v3, HttpMethod.GET));
    
    }

    protected void processError(com.facebook.FacebookRequestError p0)
    {
      Object[] v2;
      if ( p0.getErrorMessage().contains("og_object") )
      {
        this.error = null;
      }
      else
      {
        v2 = new Object[2];
        v2[0] = this.objectId;
        v2[1] = p0;
        Logger.log(
          LoggingBehavior.REQUESTS,
          LikeActionController.access$1500(),
          "Error getting the FB id for object '%s' : %s",
          v2);
      }
    }

    protected void processSuccess(com.facebook.Response p0)
    {
      org.json.JSONObject JSONObjectFromResponse; // RETVAL
      org.json.JSONObject v3; // RETVAL
    
      JSONObjectFromResponse = Utility.tryGetJSONObjectFromResponse(p0.getGraphObject(), this.objectId);
      if ( JSONObjectFromResponse != null )
      {
        v3 = JSONObjectFromResponse.optJSONObject("og_object");
        if ( v3 != null )
          this.verifiedObjectId = v3.optString("id");
      }
    }

}
