// Decompiled from classes.dex (SourceFile: c$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import com.google.android.gms.internal.ff$a;
final class c$a implements android.content.ServiceConnection {
    // Fields
    final com.google.android.gms.analytics.c a;

    // Methods
    c$a(com.google.android.gms.analytics.c p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onServiceConnected(android.content.ComponentName p0, android.os.IBinder p1)
    {
      aa.C("service connected, binder: " + p1);
      try
      {
        if ( "com.google.android.gms.analytics.internal.IAnalyticsService".equals(p1.getInterfaceDescriptor()) )
        {
          aa.C("bound to service");
          c.a(this.a, ff$a.z(p1));
          c.a(this.a);
          return;
        }
      }
      catch ( android.os.RemoteException e )
      {
      }
      c.b(this.a).unbindService((android.content.ServiceConnection)this);
      c.a(this.a, (com.google.android.gms.internal.ff)null);
      c.c(this.a).a(2);
    }

    public final void onServiceDisconnected(android.content.ComponentName p0)
    {
      aa.C("service disconnected: " + p0);
      c.a(this.a, (com.google.android.gms.internal.ff)null);
      c.d(this.a).f();
    }

}
