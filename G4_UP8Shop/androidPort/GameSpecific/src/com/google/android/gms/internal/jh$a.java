// Decompiled from classes.dex (SourceFile: jh$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.location.LocationStatusCodes;
final class jh$a extends com.google.android.gms.internal.hc$b {
    // Fields
    final com.google.android.gms.internal.jh a;
    private final int b;
    private final java.lang.String[] c;

    // Methods
    public jh$a(
            com.google.android.gms.internal.jh p0,
            com.google.android.gms.location.LocationClient$OnAddGeofencesResultListener p1,
            int p2,
            String[] p3)
    {
      super(p0, p1);
      this.a = p0;
      this.b = LocationStatusCodes.cJ(p2);
      this.c = p3;
    
    }

    private void a(com.google.android.gms.location.LocationClient$OnAddGeofencesResultListener p0)
 throws android.os.RemoteException {
      if ( p0 != null )
        p0.a(this.b);
    }

    protected final void a()
    {
      ;
    }

    /* synthetic */ protected final void a(Object p0)
 throws android.os.RemoteException {
      com.google.android.gms.location.LocationClient$OnAddGeofencesResultListener v2;
      v2 = (com.google.android.gms.location.LocationClient$OnAddGeofencesResultListener)p0;
      if ( v2 != null )
        v2.a(this.b);
    }

}
