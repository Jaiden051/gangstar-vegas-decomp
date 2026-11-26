// Decompiled from classes.dex (SourceFile: CampaignTrackingReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

public final class CampaignTrackingReceiver extends android.content.BroadcastReceiver {
    // Methods
    public CampaignTrackingReceiver()
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
        v4 = new android.content.Intent(p0, com.google.android.gms.analytics.CampaignTrackingService.class);
        v4.putExtra("referrer", StringExtra);
        p0.startService(v4);
      }
    }

}
