// Decompiled from classes.dex (SourceFile: LikeView$LikeControllerBroadcastReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.internal.Utility;
class LikeView$LikeControllerBroadcastReceiver extends android.content.BroadcastReceiver {
    // Fields
    final com.facebook.widget.LikeView this$0;

    // Methods
    private LikeView$LikeControllerBroadcastReceiver(com.facebook.widget.LikeView p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ LikeView$LikeControllerBroadcastReceiver(com.facebook.widget.LikeView p0, com.facebook.widget.LikeView$1 p1)
    {
      this(p0);
    }

    public void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      boolean v3;
      String Action;
      android.os.Bundle Extras; // RETVAL
      android.os.Bundle v6;
      String String;
      v3 = true;
      Action = p1.getAction();
      Extras = p1.getExtras();
      v6 = Extras;
      if ( Extras != null )
      {
        String = Extras.getString("com.facebook.sdk.LikeActionController.OBJECT_ID");
        if ( !Utility.isNullOrEmpty(String) )
          v3 = Utility.areObjectsEqual(LikeView.access$600(this.this$0), String);
      }
      if ( v3 )
      {
        if ( "com.facebook.sdk.LikeActionController.UPDATED".equals(Action) )
        {
          LikeView.access$700(this.this$0);
        }
        else if ( "com.facebook.sdk.LikeActionController.DID_ERROR".equals(Action) )
        {
          if ( LikeView.access$800(this.this$0) != null )
            LikeView.access$800(this.this$0).onError(v6);
        }
        else if ( "com.facebook.sdk.LikeActionController.DID_RESET".equals(Action) )
        {
          LikeView.access$900(this.this$0, LikeView.access$600(this.this$0));
          LikeView.access$700(this.this$0);
        }
      }
    }

}
