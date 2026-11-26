// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appstate;

public final class b extends com.google.android.gms.common.data.d implements com.google.android.gms.appstate.AppState {
    // Methods
    b(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
    }

    private com.google.android.gms.appstate.AppState j()
    {
      return (com.google.android.gms.appstate.AppState)new com.google.android.gms.appstate.a((com.google.android.gms.appstate.AppState)this);
    }

    public final int a()
    {
      return this.c("key");
    }

    public final String b()
    {
      return this.e("local_version");
    }

    public final byte[] c()
    {
      return this.g("local_data");
    }

    public final boolean d()
    {
      return !this.i("conflict_version");
    }

    public final String e()
    {
      return this.e("conflict_version");
    }

    public final boolean equals(Object p0)
    {
      return a.a((com.google.android.gms.appstate.AppState)this, p0);
    }

    public final byte[] f()
    {
      return this.g("conflict_data");
    }

    /* synthetic */ public final Object h()
    {
      return new com.google.android.gms.appstate.a((com.google.android.gms.appstate.AppState)this);
    }

    public final int hashCode()
    {
      return a.a((com.google.android.gms.appstate.AppState)this);
    }

    public final String toString()
    {
      return a.b((com.google.android.gms.appstate.AppState)this);
    }

}
