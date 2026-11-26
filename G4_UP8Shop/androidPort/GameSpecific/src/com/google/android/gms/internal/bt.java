// Decompiled from classes.dex (SourceFile: bt.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class bt extends com.google.android.gms.internal.bu$a {
    // Fields
    private java.util.Map a;

    // Methods
    public bt()
    {
      super();
    }

    private <NETWORK_EXTRAS extends com.google.ads.mediation.i, SERVER_PARAMETERS extends com.google.ads.mediation.MediationServerParameters> com.google.android.gms.internal.bv b(
            String p0)
 throws android.os.RemoteException {
      Class v2;
      com.google.ads.mediation.b v3;
      try
      {
        v2 = Class.forName(p0, false, com.google.android.gms.internal.bt.class.getClassLoader());
        if ( com.google.ads.mediation.b.class.isAssignableFrom(v2) )
        {
          v3 = (com.google.ads.mediation.b)v2.newInstance();
          return new com.google.android.gms.internal.ca(v3, (com.google.ads.mediation.i)this.a.get(v3.b()));
        }
        else
        {
          if ( !com.google.android.gms.ads.mediation.MediationAdapter.class.isAssignableFrom(v2) )
          {
            ev.D("Could not instantiate mediation adapter: " + p0 + " (not a valid adapter).");
            throw new android.os.RemoteException();
          }
          return new com.google.android.gms.internal.by((com.google.android.gms.ads.mediation.MediationAdapter)v2.newInstance());
        }
      }
      catch ( Throwable v6 )
      {
        ev.D("Could not instantiate mediation adapter: " + p0 + ". " + v6.getMessage());
        throw new android.os.RemoteException();
      }
    }

    public final com.google.android.gms.internal.bv a(String p0)
 throws android.os.RemoteException {
      return this.b(p0);
    }

    public final void a(
            java.util.Map<Class<? extends com.google.android.gms.ads.mediation.NetworkExtras>, com.google.android.gms.ads.mediation.NetworkExtras> p0)
    {
      this.a = p0;
    }

}
