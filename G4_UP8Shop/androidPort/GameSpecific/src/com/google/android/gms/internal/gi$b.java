// Decompiled from classes.dex (SourceFile: gi$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class gi$b implements com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener {
    // Fields
    final com.google.android.gms.internal.gi a;

    // Methods
    private gi$b(com.google.android.gms.internal.gi p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ gi$b(com.google.android.gms.internal.gi p0, int p1)
    {
      this(p0);
    }

    public final void a(com.google.android.gms.common.ConnectionResult p0)
    {
      gi.j(this.a);
    }

}
