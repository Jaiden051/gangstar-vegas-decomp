// Decompiled from classes.dex (SourceFile: cx.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class cx extends com.google.android.gms.internal.dg$a implements android.content.ServiceConnection {
    // Fields
    private boolean a;
    private android.content.Context b;
    private int c;
    private android.content.Intent d;
    private com.google.android.gms.internal.cs e;
    private com.google.android.gms.internal.cw f;
    private java.lang.String g;

    // Methods
    public cx(
            android.content.Context p0,
            String p1,
            boolean p2,
            int p3,
            android.content.Intent p4,
            com.google.android.gms.internal.cw p5)
    {
      super();
      this.a = false;
      this.g = p1;
      this.c = p3;
      this.d = p4;
      this.a = p2;
      this.b = p0;
      this.f = p5;
    }

    public final boolean a()
    {
      return this.a;
    }

    public final String b()
    {
      return this.g;
    }

    public final android.content.Intent c()
    {
      return this.d;
    }

    public final int d()
    {
      return this.c;
    }

    public final void e()
    {
      int v1; // RETVAL
    
      v1 = cz.c(this.d);
      if ( this.c == -1 && v1 == 0 )
      {
        this.e = new com.google.android.gms.internal.cs(this.b);
        this.b.bindService(new android.content.Intent("com.android.vending.billing.InAppBillingService.BIND"), this, 1);
      }
    }

    public final void onServiceConnected(android.content.ComponentName p0, android.os.IBinder p1)
    {
      String v3;
      ev.B("In-app billing service connected.");
      this.e.a(p1);
      v3 = cz.q(cz.d(this.d));
      if ( v3 != null )
      {
        if ( this.e.a(this.b.getPackageName(), v3) == 0 )
          cy.h(this.b).a(this.f);
        this.b.unbindService(this);
        this.e.a();
      }
    }

    public final void onServiceDisconnected(android.content.ComponentName p0)
    {
      ev.B("In-app billing service disconnected.");
      this.e.a();
    }

}
