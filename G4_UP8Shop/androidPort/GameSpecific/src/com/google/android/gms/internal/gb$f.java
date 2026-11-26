// Decompiled from classes.dex (SourceFile: gb$f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class gb$f extends com.google.android.gms.common.api.b implements com.google.android.gms.appstate.AppStateManager$StateConflictResult, com.google.android.gms.appstate.AppStateManager$StateLoadedResult, com.google.android.gms.appstate.AppStateManager$StateResult {
    // Fields
    private final int c;
    private final com.google.android.gms.appstate.AppStateBuffer d;

    // Methods
    public gb$f(int p0, com.google.android.gms.common.data.DataHolder p1)
    {
      super(p1);
      this.c = p0;
      this.d = new com.google.android.gms.appstate.AppStateBuffer(p1);
    }

    private boolean i()
    {
      return this.a.g() == 2000;
    }

    public final com.google.android.gms.appstate.AppStateManager$StateLoadedResult b()
    {
      if ( this.i() )
        return null;
      return (com.google.android.gms.appstate.AppStateManager$StateLoadedResult)this;
    }

    public final com.google.android.gms.appstate.AppStateManager$StateConflictResult c()
    {
      if ( !this.i() )
        return null;
      return (com.google.android.gms.appstate.AppStateManager$StateConflictResult)this;
    }

    public final void d()
    {
      this.d.c();
    }

    public final int e()
    {
      return this.c;
    }

    public final String f()
    {
      if ( this.d.b() != 0 )
        return this.d.a(0).e();
      else
        return null;
    }

    public final byte[] g()
    {
      if ( this.d.b() != 0 )
        return this.d.a(0).c();
      else
        return null;
    }

    public final byte[] h()
    {
      if ( this.d.b() != 0 )
        return this.d.a(0).f();
      else
        return null;
    }

}
