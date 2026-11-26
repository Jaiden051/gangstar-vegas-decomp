// Decompiled from classes.dex (SourceFile: LikeActionController$9.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class LikeActionController$9 implements com.facebook.internal.PlatformServiceClient$CompletedListener {
    // Fields
    final com.facebook.internal.LikeActionController this$0;

    // Methods
    LikeActionController$9(com.facebook.internal.LikeActionController p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void completed(android.os.Bundle p0)
    {
      boolean Boolean;
      String String;
      String v4;
      String v5;
      String v6;
      String v7;
      if ( p0 != null && p0.containsKey("com.facebook.platform.extra.OBJECT_IS_LIKED") )
      {
        Boolean = p0.getBoolean("com.facebook.platform.extra.OBJECT_IS_LIKED");
        if ( p0.containsKey("com.facebook.platform.extra.LIKE_COUNT_STRING_WITH_LIKE") )
          String = p0.getString("com.facebook.platform.extra.LIKE_COUNT_STRING_WITH_LIKE");
        else
          String = LikeActionController.access$800(this.this$0);
        if ( p0.containsKey("com.facebook.platform.extra.LIKE_COUNT_STRING_WITHOUT_LIKE") )
          v4 = p0.getString("com.facebook.platform.extra.LIKE_COUNT_STRING_WITHOUT_LIKE");
        else
          v4 = LikeActionController.access$900(this.this$0);
        if ( p0.containsKey("com.facebook.platform.extra.SOCIAL_SENTENCE_WITH_LIKE") )
          v5 = p0.getString("com.facebook.platform.extra.SOCIAL_SENTENCE_WITH_LIKE");
        else
          v5 = LikeActionController.access$1000(this.this$0);
        if ( p0.containsKey("com.facebook.platform.extra.SOCIAL_SENTENCE_WITHOUT_LIKE") )
          v6 = p0.getString("com.facebook.platform.extra.SOCIAL_SENTENCE_WITHOUT_LIKE");
        else
          v6 = LikeActionController.access$1100(this.this$0);
        if ( p0.containsKey("com.facebook.platform.extra.UNLIKE_TOKEN") )
          v7 = p0.getString("com.facebook.platform.extra.UNLIKE_TOKEN");
        else
          v7 = LikeActionController.access$1200(this.this$0);
        LikeActionController.access$1400(this.this$0, Boolean, String, v4, v5, v6, v7);
      }
    }

}
