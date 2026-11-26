// Decompiled from classes.dex (SourceFile: z.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class z {
    // Fields
    private final com.google.android.gms.internal.z$a a;
    private final java.lang.Runnable b;
    private com.google.android.gms.internal.aj c;
    private boolean d;
    private boolean e;
    private long f;

    // Methods
    public z(com.google.android.gms.internal.v p0)
    {
      this(p0, new com.google.android.gms.internal.z$a(eu.a));
    }

    private z(com.google.android.gms.internal.v p0, com.google.android.gms.internal.z$a p1)
    {
      super();
      this.d = false;
      this.e = false;
      this.f = 0;
      this.a = p1;
      this.b = (Runnable)new com.google.android.gms.internal.z$1(this, p0);
    }

    /* synthetic */ static com.google.android.gms.internal.aj a(com.google.android.gms.internal.z p0)
    {
      return p0.c;
    }

    /* synthetic */ static boolean a(com.google.android.gms.internal.z p0, boolean p1)
    {
      p0.d = p1;
      return p1;
    }

    public final void a()
    {
      this.d = false;
      this.a.a(this.b);
    }

    public final void a(com.google.android.gms.internal.aj p0)
    {
      this.a(p0, 60000);
    }

    public final void a(com.google.android.gms.internal.aj p0, long p1)
    {
      if ( this.d )
      {
        ev.D("An ad refresh is already scheduled.");
      }
      else
      {
        this.c = p0;
        this.d = true;
        this.f = p1;
        if ( !this.e )
        {
          ev.B("Scheduling ad refresh " + p1 + " milliseconds from now.");
          this.a.a(this.b, p1);
        }
      }
    }

    public final void b()
    {
      this.e = true;
      if ( this.d )
        this.a.a(this.b);
    }

    public final void c()
    {
      this.e = false;
      if ( this.d )
      {
        this.d = false;
        this.a(this.c, this.f);
      }
    }

}
