// Decompiled from classes.dex (SourceFile: GCMBroadcastReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gcm;

import android.util.Log;
public class GCMBroadcastReceiver extends android.content.BroadcastReceiver {
    // Fields
    private static java.lang.String a;
    private static boolean b;

    // Methods
    static
    {
      b = false;
    }

    public GCMBroadcastReceiver()
    {
      super();
    }

    static final String getDefaultIntentServiceClassName(android.content.Context p0)
    {
      return p0.getPackageName() + ".GCMIntentService";
    }

    private static String getGCMIntentServiceClassName(android.content.Context p0)
    {
      return getDefaultIntentServiceClassName(p0);
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      String Name;
      String DefaultIntentServiceClassName;
      Log.v("GCMBroadcastReceiver", "onReceive: " + p1.getAction());
      if ( !b )
      {
        b = true;
        Name = this.getClass().getName();
        if ( !Name.equals(com.google.android.gcm.GCMBroadcastReceiver.class.getName()) )
          GCMRegistrar.setRetryReceiverClassName(Name);
      }
      DefaultIntentServiceClassName = getDefaultIntentServiceClassName(p0);
      Log.v("GCMBroadcastReceiver", "GCM IntentService class: " + DefaultIntentServiceClassName);
      GCMBaseIntentService.runIntentInService(p0, p1, DefaultIntentServiceClassName);
      this.setResult(-1, null, null);
    }

}
