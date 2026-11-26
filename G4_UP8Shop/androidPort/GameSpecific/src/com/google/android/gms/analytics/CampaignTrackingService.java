// Decompiled from classes.dex (SourceFile: CampaignTrackingService.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

public class CampaignTrackingService extends android.app.IntentService {
    // Methods
    public CampaignTrackingService()
    {
      super("CampaignIntentService");
    }

    private CampaignTrackingService(String p0)
    {
      super(p0);
    }

    public static void processIntent(android.content.Context p0, android.content.Intent p1)
    {
      String StringExtra;
      java.io.FileOutputStream v3;
      StringExtra = p1.getStringExtra("referrer");
      try
      {
        v3 = p0.openFileOutput("gaInstallData", 0);
        v3.write(StringExtra.getBytes());
        v3.close();
        aa.C("Stored campaign information.");
      }
      catch ( java.io.IOException e )
      {
        aa.A("Error storing install campaign.");
      }
    }

    public void onHandleIntent(android.content.Intent p0)
    {
      processIntent(this, p0);
    }

}
