// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

final class h extends android.content.BroadcastReceiver {
    // Methods
    h()
    {
      super();
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      SimplifiedAndroidUtils.nativeSendPNData(p1.getStringExtra("get_broadcast_push"));
    }

}
