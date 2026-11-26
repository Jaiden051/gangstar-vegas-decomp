// Decompiled from classes.dex (SourceFile: AnalyticsReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

import android.util.Log;
public class AnalyticsReceiver extends android.content.BroadcastReceiver {
    // Fields
    static java.lang.String d;
    static java.lang.String e;

    // Methods
    public AnalyticsReceiver()
    {
      super();
    }

    public void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      String StringExtra;
      StringExtra = p1.getStringExtra("referrer");
      if ( "com.android.vending.INSTALL_REFERRER".equals(p1.getAction()) && StringExtra != null )
      {
        Log.i("GoogleAnalyticsTracker", "referrer=" + StringExtra);
        if ( ((com.google.android.apps.analytics.j)new com.google.android.apps.analytics.PersistentHitStore(p0)).a(StringExtra) )
        {
          Log.d("GoogleAnalyticsTracker", "Referrer store attemped succeeded.");
        }
        else
        {
          Log.w("GoogleAnalyticsTracker", "Referrer store attempt failed.");
        }
      }
    }

}
