// Decompiled from classes.dex (SourceFile: LikeActionController$GetEngagementRequestWrapper.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.HttpMethod;
import com.facebook.LoggingBehavior;
class LikeActionController$GetEngagementRequestWrapper extends com.facebook.internal.LikeActionController$AbstractRequestWrapper {
    // Fields
    java.lang.String likeCountStringWithLike;
    java.lang.String likeCountStringWithoutLike;
    java.lang.String socialSentenceStringWithLike;
    java.lang.String socialSentenceStringWithoutLike;
    final com.facebook.internal.LikeActionController this$0;

    // Methods
    LikeActionController$GetEngagementRequestWrapper(com.facebook.internal.LikeActionController p0, String p1)
    {
      super(p0, p1);
      android.os.Bundle v3;
      this.this$0 = p0;
      this.likeCountStringWithLike = LikeActionController.access$800(this.this$0);
      this.likeCountStringWithoutLike = LikeActionController.access$900(this.this$0);
      this.socialSentenceStringWithLike = LikeActionController.access$1000(this.this$0);
      this.socialSentenceStringWithoutLike = LikeActionController.access$1100(this.this$0);
      v3 = new android.os.Bundle();
      v3.putString("fields", "engagement.fields(count_string_with_like,count_string_without_like,social_sentence_with_like,so" +
                             "cial_sentence_without_like)");
      this.setRequest(new com.facebook.Request(LikeActionController.access$2700(p0), p1, v3, HttpMethod.GET));
    
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
        "Error fetching engagement for object '%s' : %s",
        v2);
      LikeActionController.access$2600(this.this$0, "get_engagement", p0);
    }

    protected void processSuccess(com.facebook.Response p0)
    {
      org.json.JSONObject JSONObjectFromResponse; // RETVAL
      org.json.JSONObject v3;
      JSONObjectFromResponse = Utility.tryGetJSONObjectFromResponse(p0.getGraphObject(), "engagement");
      v3 = JSONObjectFromResponse;
      if ( JSONObjectFromResponse != null )
      {
        this.likeCountStringWithLike = JSONObjectFromResponse.optString("count_string_with_like", this.likeCountStringWithLike);
        this.likeCountStringWithoutLike = v3.optString("count_string_without_like", this.likeCountStringWithoutLike);
        this.socialSentenceStringWithLike = v3.optString("social_sentence_with_like", this.socialSentenceStringWithLike);
        this.socialSentenceStringWithoutLike = v3.optString("social_sentence_without_like", this.socialSentenceStringWithoutLike);
      }
    }

}
