// Decompiled from classes.dex (SourceFile: cv.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class cv extends com.google.android.gms.internal.de$a implements android.content.ServiceConnection {
    // Fields
    private final android.app.Activity a;
    private final com.google.android.gms.internal.cy b;
    private android.content.Context c;
    private com.google.android.gms.internal.dh d;
    private com.google.android.gms.internal.dc e;
    private com.google.android.gms.internal.cs f;
    private com.google.android.gms.internal.cw g;
    private com.google.android.gms.internal.da h;
    private java.lang.String i;

    // Methods
    public cv(android.app.Activity p0)
    {
      super();
      this.i = null;
      this.a = p0;
      this.b = cy.h(this.a.getApplicationContext());
    }

    public static void a(android.content.Context p0, boolean p1, com.google.android.gms.internal.cr p2)
    {
      android.content.Intent v3;
      v3 = new android.content.Intent();
      v3.setClassName(p0, "com.google.android.gms.ads.purchase.InAppPurchaseActivity");
      v3.putExtra("com.google.android.gms.ads.internal.purchase.useClientJar", p1);
      cr.a(v3, p2);
      p0.startActivity(v3);
    }

    private void a(String p0, boolean p1, int p2, android.content.Intent p3)
    {
      try
      {
        this.d.a(new com.google.android.gms.internal.cx(this.c, p0, p1, p2, p3, this.g));
      }
      catch ( android.os.RemoteException e )
      {
        ev.D("Fail to invoke PlayStorePurchaseListener.");
      }
    }

    public final void a()
    {
      com.google.android.gms.internal.cr v1;
      v1 = cr.b(this.a.getIntent());
      this.d = v1.b;
      this.h = v1.c;
      this.e = v1.d;
      this.f = new com.google.android.gms.internal.cs(this.a.getApplicationContext());
      this.c = v1.e;
      this.a.getApplicationContext();
      this.a.bindService(new android.content.Intent("com.android.vending.billing.InAppBillingService.BIND"), this, 1);
    }

    public final void a(int p0, int p1, android.content.Intent p2)
    {
      int v4; // RETVAL
      int v5;
      if ( p0 != 1001 )
        return;
      try
      {
        try
        {
          v4 = cz.c(p2);
          v5 = v4;
          if ( p1 != -1 || v4 != 0 )
          {
            this.b.a(this.g);
            this.a(this.e.a(), false, p1, p2);
          }
          else if ( this.h.a(this.i, p2) )
          {
            this.a(this.e.a(), true, -1, p2);
          }
          else
          {
            this.a(this.e.a(), false, -1, p2);
          }
          this.e.b(v5);
          return;
        }
        catch ( android.os.RemoteException e )
        {
          ev.D("Fail to process purchase result.");
        }
      }
      finally
      {
        this.i = null;
        this.a.finish();
      }
      return;
    }

    public final void b()
    {
      this.a.unbindService(this);
      this.f.a();
    }

    public void onServiceConnected(android.content.ComponentName p0, android.os.IBinder p1)
    {
      android.os.Bundle v3;
      android.app.PendingIntent v4;
      int v5;
      this.f.a(p1);
      try
      {
        this.i = da.bh();
        v3 = this.f.a(this.a.getPackageName(), this.e.a(), this.i);
        v4 = (android.app.PendingIntent)v3.getParcelable("BUY_INTENT");
        if ( v4 != null )
        {
          this.g = new com.google.android.gms.internal.cw(this.e.a(), this.i);
          this.b.b(this.g);
          this.a.startIntentSenderForResult(v4.getIntentSender(), 1001, new android.content.Intent(), Integer.valueOf(0).intValue(), Integer.valueOf(0).intValue(), Integer.valueOf(0).intValue());
        }
        else
        {
          v5 = cz.a(v3);
          this.e.b(v5);
          this.a(this.e.a(), false, v5, null);
          this.a.finish();
        }
      }
      catch ( android.os.RemoteException |
              android.content.IntentSender.SendIntentException v6 )
      {
        ev.c("Error when connecting in-app billing service", v6);
        this.a.finish();
      }
    }

    public void onServiceDisconnected(android.content.ComponentName p0)
    {
      ev.B("In-app billing service disconnected.");
      this.f.a();
    }

}
