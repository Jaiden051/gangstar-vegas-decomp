// Decompiled from classes.dex (SourceFile: q.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class q extends android.content.BroadcastReceiver {
    // Fields
    static final java.lang.String a;
    private final com.google.android.gms.analytics.af b;

    // Methods
    static
    {
      a = com.google.android.gms.analytics.q.class.getName();
    }

    q(com.google.android.gms.analytics.af p0)
    {
      super();
      this.b = p0;
    }

    public static void t(android.content.Context p0)
    {
      android.content.Intent v1;
      v1 = new android.content.Intent("com.google.analytics.RADIO_POWERED");
      v1.addCategory(p0.getPackageName());
      v1.putExtra(a, true);
      p0.sendBroadcast(v1);
    }

    public final void a(android.content.Context p0)
    {
      android.content.IntentFilter v2;
      android.content.IntentFilter v3;
      v2 = new android.content.IntentFilter();
      v2.addAction("android.net.conn.CONNECTIVITY_CHANGE");
      com.gameloft.android.GAND.GloftGGSS.CompatUtil.registerReceiverCompat(p0, this, v2);
      v3 = new android.content.IntentFilter();
      v3.addAction("com.google.analytics.RADIO_POWERED");
      v3.addCategory(p0.getPackageName());
      com.gameloft.android.GAND.GloftGGSS.CompatUtil.registerReceiverCompat(p0, this, v3);
    }

    public void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      String Action;
      Action = p1.getAction();
      if ( "android.net.conn.CONNECTIVITY_CHANGE".equals(Action) )
      {
        this.b.a(!p1.getBooleanExtra("noConnectivity", false));
      }
      else if ( "com.google.analytics.RADIO_POWERED".equals(Action) && !p1.hasExtra(a) )
      {
        this.b.b();
      }
    }

}
