// Decompiled from classes.dex (SourceFile: InstallReferrerService.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import com.google.android.gms.analytics.CampaignTrackingService;
public final class InstallReferrerService extends android.app.IntentService {
    // Fields
    com.google.android.gms.analytics.CampaignTrackingService a;
    android.content.Context b;

    // Methods
    public InstallReferrerService()
    {
      super("InstallReferrerService");
    }

    private InstallReferrerService(String p0)
    {
      super(p0);
    }

    private void a(android.content.Context p0, android.content.Intent p1)
    {
      if ( this.a == null )
        this.a = new com.google.android.gms.analytics.CampaignTrackingService();
      CampaignTrackingService.processIntent(p0, p1);
    }

    protected final void onHandleIntent(android.content.Intent p0)
    {
      String StringExtra;
      android.content.Context b;
      StringExtra = p0.getStringExtra("referrer");
      if ( this.b != null )
        b = this.b;
      else
        b = this.getApplicationContext();
      ay.d(b, StringExtra);
      if ( this.a == null )
        this.a = new com.google.android.gms.analytics.CampaignTrackingService();
      CampaignTrackingService.processIntent(b, p0);
    }

}
