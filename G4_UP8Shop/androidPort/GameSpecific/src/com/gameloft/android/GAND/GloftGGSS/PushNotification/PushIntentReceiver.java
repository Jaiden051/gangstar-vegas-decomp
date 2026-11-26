// Decompiled from classes.dex (SourceFile: PushIntentReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

public class PushIntentReceiver extends android.content.BroadcastReceiver {
    // Methods
    public PushIntentReceiver()
    {
      super();
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      SimplifiedAndroidUtils.LaunchAppFromPN(p0, p1);
    }

}
