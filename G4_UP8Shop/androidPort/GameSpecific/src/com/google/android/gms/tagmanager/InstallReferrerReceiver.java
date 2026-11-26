// Decompiled from classes.dex (SourceFile: InstallReferrerReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

public final class InstallReferrerReceiver extends android.content.BroadcastReceiver {
    // Methods
    public InstallReferrerReceiver()
    {
      super();
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      String StringExtra;
      android.content.Intent v4;
      StringExtra = p1.getStringExtra("referrer");
      if ( "com.android.vending.INSTALL_REFERRER".equals(p1.getAction()) && StringExtra != null )
      {
        ay.bX(StringExtra);
        v4 = new android.content.Intent(p0, com.google.android.gms.tagmanager.InstallReferrerService.class);
        v4.putExtra("referrer", StringExtra);
        p0.startService(v4);
      }
    }

}
