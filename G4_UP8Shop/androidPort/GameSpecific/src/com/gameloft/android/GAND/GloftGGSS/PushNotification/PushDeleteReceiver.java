// Decompiled from classes.dex (SourceFile: PushDeleteReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

public class PushDeleteReceiver extends android.content.BroadcastReceiver {
    // Methods
    public PushDeleteReceiver()
    {
      super();
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      SimplifiedAndroidUtils.LaunchPNClearStack(p0, p1);
    }

}
