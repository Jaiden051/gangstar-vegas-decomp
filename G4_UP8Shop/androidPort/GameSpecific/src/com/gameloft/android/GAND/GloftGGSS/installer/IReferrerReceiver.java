// Decompiled from classes.dex (SourceFile: IReferrerReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

public class IReferrerReceiver extends com.google.android.apps.analytics.AnalyticsReceiver {
    // Fields
    static java.lang.String a;
    static java.lang.String b;
    static java.lang.String c;

    // Methods
    public IReferrerReceiver()
    {
      super();
    }

    public static String getReferrer(android.content.Context p0)
    {
      if ( p0 != null )
        return p0.getSharedPreferences("rsend_referrer", 0).getString("referrer", "");
      else
        return "";
    }

    private static String getReferrer(String p0)
    {
      String v1;
      v1 = null;
      try
      {
        v1 = new java.net.URI(p0).getQuery().split("referrer=")[1];
      }
      catch ( Exception e )
      {
      }
      if ( v1 != null || !p0.contains("utm_source") && p0.indexOf("utm_source") < 0 )
        return v1;
      return p0;
    }

    public static void sendBroadcastIntent(android.content.Context p0)
    {
      android.content.Intent v1;
      v1 = new android.content.Intent("com.android.vending.INSTALL_REFERRER");
      v1.setPackage(p0.getPackageName());
      v1.putExtra("referrer", "utm_source=source+test&utm_medium=medium+test&utm_term=term+test&utm_content=content+test&utm_" +
                              "campaign=campaign+test");
      p0.sendBroadcast(v1);
    }

    public void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      String Referrer;
      android.content.SharedPreferences.Editor v4; // RETVAL
      android.content.SharedPreferences.Editor v5;
      super.onReceive(p0, p1);
      new com.google.android.gms.analytics.CampaignTrackingReceiver().onReceive(p0, p1);
      Referrer = getReferrer(p1.getStringExtra("referrer"));
      v4 = p0.getSharedPreferences("rsend_referrer", 0).edit();
      v5 = v4;
      if ( Referrer != null )
        v4.putString("referrer", Referrer);
      else
        v4.putString("referrer", "");
      v5.commit();
    }

}
