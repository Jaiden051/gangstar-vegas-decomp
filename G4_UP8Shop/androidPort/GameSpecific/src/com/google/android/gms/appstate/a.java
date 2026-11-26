// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appstate;

import com.google.android.gms.internal.hl;
public final class a implements com.google.android.gms.appstate.AppState {
    // Fields
    private final int a;
    private final java.lang.String b;
    private final byte[] c;
    private final boolean d;
    private final java.lang.String e;
    private final byte[] f;

    // Methods
    public a(com.google.android.gms.appstate.AppState p0)
    {
      super();
      this.a = p0.a();
      this.b = p0.b();
      this.c = p0.c();
      this.d = p0.d();
      this.e = p0.e();
      this.f = p0.f();
    }

    static int a(com.google.android.gms.appstate.AppState p0)
    {
      Object[] v1;
      v1 = new Object[6];
      v1[0] = Integer.valueOf(p0.a());
      v1[1] = p0.b();
      ((byte[][])v1)[2] = p0.c();
      v1[3] = Boolean.valueOf(p0.d());
      v1[4] = p0.e();
      ((byte[][])v1)[5] = p0.f();
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.appstate.AppState p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.appstate.AppState v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.appstate.AppState )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.appstate.AppState)p1;
          if ( hl.equal(Integer.valueOf(v4.a()), Integer.valueOf(p0.a()))
            && hl.equal(v4.b(), p0.b())
            && hl.equal(v4.c(), p0.c())
            && hl.equal(Boolean.valueOf(v4.d()), Boolean.valueOf(p0.d()))
            && hl.equal(v4.e(), p0.e()) )
          {
            return hl.equal(v4.f(), p0.f());
          }
        }
      }
      return v2;
    }

    static String b(com.google.android.gms.appstate.AppState p0)
    {
      return hl.e(p0).a("Key", Integer.valueOf(p0.a())).a("LocalVersion", p0.b()).a("LocalData", p0.c()).a("HasConflict", Boolean.valueOf(p0.d())).a("ConflictVersion", p0.e()).a("ConflictData", p0.f()).toString();
    }

    private com.google.android.gms.appstate.AppState i()
    {
      return (com.google.android.gms.appstate.AppState)this;
    }

    public final int a()
    {
      return this.a;
    }

    public final String b()
    {
      return this.b;
    }

    public final byte[] c()
    {
      return this.c;
    }

    public final boolean d()
    {
      return this.d;
    }

    public final String e()
    {
      return this.e;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.appstate.AppState)this, p0);
    }

    public final byte[] f()
    {
      return this.f;
    }

    /* synthetic */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.appstate.AppState)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final String toString()
    {
      return b((com.google.android.gms.appstate.AppState)this);
    }

}
