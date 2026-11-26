// Decompiled from classes.dex (SourceFile: ea.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ea {
    // Fields
    public final com.google.android.gms.internal.bd a;
    public final com.google.android.gms.internal.bd b;
    private final java.lang.Object c;
    private com.google.android.gms.internal.ey d;
    private java.lang.String e;
    private int f;
    private com.google.android.gms.internal.ec g;

    // Methods
    public ea(String p0)
    {
      super();
      this.c = new Object();
      this.f = -2;
      this.a = (com.google.android.gms.internal.bd)new com.google.android.gms.internal.ea$1(this);
      this.b = (com.google.android.gms.internal.bd)new com.google.android.gms.internal.ea$2(this);
      this.e = p0;
    }

    /* synthetic */ static int a(com.google.android.gms.internal.ea p0, int p1)
    {
      p0.f = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.internal.ec a(
            com.google.android.gms.internal.ea p0,
            com.google.android.gms.internal.ec p1)
    {
      p0.g = p1;
      return p1;
    }

    /* synthetic */ static Object a(com.google.android.gms.internal.ea p0)
    {
      return p0.c;
    }

    /* synthetic */ static String b(com.google.android.gms.internal.ea p0)
    {
      return p0.e;
    }

    public final int a()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        return this.f;
      }
    }

    public final void a(com.google.android.gms.internal.ey p0)
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        this.d = p0;
      }
    }

    public final com.google.android.gms.internal.ec b()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        while ( true )
        {
          if ( this.g != null || this.f != -2 )
            return this.g;
          try
          {
            this.c.wait();
          }
          catch ( InterruptedException e )
          {
            ev.D("Ad request service was interrupted.");
            return null;
          }
        }
      }
    }

}
