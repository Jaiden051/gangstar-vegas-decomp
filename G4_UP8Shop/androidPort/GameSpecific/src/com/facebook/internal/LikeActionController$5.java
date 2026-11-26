// Decompiled from classes.dex (SourceFile: LikeActionController$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.LoggingBehavior;
class LikeActionController$5 implements com.facebook.widget.FacebookDialog$Callback {
    // Fields
    final com.facebook.internal.LikeActionController this$0;
    final android.os.Bundle val$analyticsParameters;

    // Methods
    LikeActionController$5(com.facebook.internal.LikeActionController p0, android.os.Bundle p1)
    {
      super();
      this.this$0 = p0;
      this.val$analyticsParameters = p1;
    
    }

    public void onComplete(com.facebook.widget.FacebookDialog$PendingCall p0, android.os.Bundle p1)
    {
      boolean Boolean;
      String v4;
      String String;
      String v6;
      String v7;
      String v8;
      android.os.Bundle v9;
      if ( p1 != null && p1.containsKey("object_is_liked") )
      {
        Boolean = p1.getBoolean("object_is_liked");
        v4 = LikeActionController.access$800(this.this$0);
        String = LikeActionController.access$900(this.this$0);
        if ( p1.containsKey("like_count_string") )
        {
          String = p1.getString("like_count_string");
          v4 = String;
        }
        v6 = LikeActionController.access$1000(this.this$0);
        v7 = LikeActionController.access$1100(this.this$0);
        if ( p1.containsKey("social_sentence") )
        {
          v7 = p1.getString("social_sentence");
          v6 = v7;
        }
        if ( p1.containsKey("object_is_liked") )
          v8 = p1.getString("unlike_token");
        else
          v8 = LikeActionController.access$1200(this.this$0);
        if ( this.val$analyticsParameters != null )
          v9 = this.val$analyticsParameters;
        else
          v9 = new android.os.Bundle();
        v9.putString("call_id", p0.getCallId().toString());
        LikeActionController.access$1300(this.this$0).logSdkEvent("fb_like_control_dialog_did_succeed", null, v9);
        LikeActionController.access$1400(this.this$0, Boolean, v4, String, v6, v7, v8);
      }
    }

    public void onError(
            com.facebook.widget.FacebookDialog$PendingCall p0,
            Exception p1,
            android.os.Bundle p2)
    {
      Object[] v4;
      android.os.Bundle v5;
      v4 = new Object[1];
      v4[0] = p1;
      Logger.log(LoggingBehavior.REQUESTS, LikeActionController.access$1500(), "Like Dialog failed with error : %s", v4);
      if ( this.val$analyticsParameters != null )
        v5 = this.val$analyticsParameters;
      else
        v5 = new android.os.Bundle();
      v5.putString("call_id", p0.getCallId().toString());
      LikeActionController.access$1600(this.this$0, "present_dialog", v5);
      LikeActionController.access$1800(
        LikeActionController.access$1700(this.this$0),
        this.this$0,
        "com.facebook.sdk.LikeActionController.DID_ERROR",
        p2);
    }

}
