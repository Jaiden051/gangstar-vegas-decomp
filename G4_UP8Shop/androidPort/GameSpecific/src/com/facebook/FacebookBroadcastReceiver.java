// Decompiled from classes.dex (SourceFile: FacebookBroadcastReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.internal.NativeProtocol;
public class FacebookBroadcastReceiver extends android.content.BroadcastReceiver {
    // Methods
    public FacebookBroadcastReceiver()
    {
      super();
    }

    protected void onFailedAppCall(String p0, String p1, android.os.Bundle p2)
    {
      ;
    }

    public void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      String StringExtra;
      String v4; // RETVAL
      String v5;
      android.os.Bundle Extras;
      StringExtra = p1.getStringExtra("com.facebook.platform.protocol.CALL_ID");
      v4 = p1.getStringExtra("com.facebook.platform.protocol.PROTOCOL_ACTION");
      v5 = v4;
      if ( StringExtra != null && v4 != null )
      {
        Extras = p1.getExtras();
        if ( NativeProtocol.isErrorResult(p1) )
          this.onFailedAppCall(StringExtra, v5, Extras);
        else
          this.onSuccessfulAppCall(StringExtra, v5, Extras);
      }
    }

    protected void onSuccessfulAppCall(String p0, String p1, android.os.Bundle p2)
    {
      ;
    }

}
