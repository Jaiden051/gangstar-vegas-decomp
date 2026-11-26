// Decompiled from classes.dex (SourceFile: LikeActionController$GetOGObjectLikesRequestWrapper.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.HttpMethod;
import com.facebook.LoggingBehavior;
class LikeActionController$GetOGObjectLikesRequestWrapper extends com.facebook.internal.LikeActionController$AbstractRequestWrapper {
    // Fields
    boolean objectIsLiked;
    final com.facebook.internal.LikeActionController this$0;
    java.lang.String unlikeToken;

    // Methods
    LikeActionController$GetOGObjectLikesRequestWrapper(com.facebook.internal.LikeActionController p0, String p1)
    {
      super(p0, p1);
      android.os.Bundle v3;
      this.this$0 = p0;
      this.objectIsLiked = LikeActionController.access$2800(this.this$0);
      v3 = new android.os.Bundle();
      v3.putString("fields", "id,application");
      v3.putString("object", p1);
      this.setRequest(new com.facebook.Request(LikeActionController.access$2700(p0), "me/og.likes", v3, HttpMethod.GET));
    
    }

    protected void processError(com.facebook.FacebookRequestError p0)
    {
      Object[] v2;
      v2 = new Object[2];
      v2[0] = this.objectId;
      v2[1] = p0;
      Logger.log(
        LoggingBehavior.REQUESTS,
        LikeActionController.access$1500(),
        "Error fetching like status for object '%s' : %s",
        v2);
      LikeActionController.access$2600(this.this$0, "get_og_object_like", p0);
    }

    protected void processSuccess(com.facebook.Response p0)
    {
      org.json.JSONArray JSONArrayFromResponse;
      int i;
      org.json.JSONObject v4; // RETVAL
      org.json.JSONObject v5;
      org.json.JSONObject v6;
      JSONArrayFromResponse = Utility.tryGetJSONArrayFromResponse(p0.getGraphObject(), "data");
      if ( JSONArrayFromResponse != null )
      {
        for ( i = 0; i < JSONArrayFromResponse.length(); ++i )
        {
          v4 = JSONArrayFromResponse.optJSONObject(i);
          v5 = v4;
          if ( v4 != null )
          {
            this.objectIsLiked = true;
            v6 = v4.optJSONObject("application");
            if ( v6 != null
              && Utility.areObjectsEqual(
                   LikeActionController.access$2700(this.this$0).getApplicationId(),
                   v6.optString("id")) )
            {
              this.unlikeToken = v5.optString("id");
            }
          }
        }
      }
    }

}
