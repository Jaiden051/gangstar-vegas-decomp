// Decompiled from classes.dex (SourceFile: BoltsMeasurementEventListener.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.support.v4.content.LocalBroadcastManager;
public class BoltsMeasurementEventListener extends android.content.BroadcastReceiver {
    // Fields
    private static java.lang.String BOLTS_MEASUREMENT_EVENT_PREFIX;
    private static java.lang.String MEASUREMENT_EVENT_ARGS_KEY;
    private static java.lang.String MEASUREMENT_EVENT_NAME_KEY;
    private static java.lang.String MEASUREMENT_EVENT_NOTIFICATION_NAME;
    private static com.facebook.BoltsMeasurementEventListener _instance;
    private android.content.Context applicationContext;

    // Methods
    private BoltsMeasurementEventListener(android.content.Context p0)
    {
      super();
      this.applicationContext = p0.getApplicationContext();
    }

    private void close()
    {
      LocalBroadcastManager.getInstance(this.applicationContext).unregisterReceiver(this);
    }

    static com.facebook.BoltsMeasurementEventListener getInstance(android.content.Context p0)
    {
      com.facebook.BoltsMeasurementEventListener v2;
      if ( _instance == null )
      {
        v2 = new com.facebook.BoltsMeasurementEventListener(p0);
        _instance = v2;
        v2.open();
      }
      return _instance;
    }

    private void open()
    {
      LocalBroadcastManager.getInstance(this.applicationContext).registerReceiver(this, new android.content.IntentFilter("com.parse.bolts.measurement_event"));
    }

    protected void finalize()
 throws Throwable {
      try
      {
        this.close();
      }
      finally
      {
        super.finalize();
      }
    }

    public void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      com.facebook.AppEventsLogger v3;
      String v4;
      android.os.Bundle BundleExtra;
      android.os.Bundle v6;
      java.util.Iterator v7;
      String v8;
      v3 = AppEventsLogger.newLogger(p0);
      v4 = "bf_" + p1.getStringExtra("event_name");
      BundleExtra = p1.getBundleExtra("event_args");
      v6 = new android.os.Bundle();
      v7 = BundleExtra.keySet().iterator();
      while ( v7.hasNext() )
      {
        v8 = (String)v7.next();
        v6.putString(v8.replaceAll("[^0-9a-zA-Z _-]", "-").replaceAll("^[ -]*", "").replaceAll("[ -]*$", ""), (String)BundleExtra.get(v8));
      }
      v3.logEvent(v4, v6);
    }

}
