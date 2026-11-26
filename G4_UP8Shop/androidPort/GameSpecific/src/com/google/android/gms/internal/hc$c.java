// Decompiled from classes.dex (SourceFile: hc$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class hc$c implements com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks {
    // Fields
    private final com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks c;

    // Methods
    public hc$c(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0)
    {
      super();
      this.c = p0;
    }

    public final void a(int p0)
    {
      this.c.b();
    }

    public final void a(android.os.Bundle p0)
    {
      this.c.z_();
    }

    public final boolean equals(Object p0)
    {
      if ( p0 instanceof com.google.android.gms.internal.hc$c )
        return this.c.equals(((com.google.android.gms.internal.hc$c)p0).c);
      else
        return this.c.equals(p0);
    }

}
