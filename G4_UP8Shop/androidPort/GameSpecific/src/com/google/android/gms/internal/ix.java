// Decompiled from classes.dex (SourceFile: ix.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.TextUtils;
import android.util.Log;
public class ix extends com.google.android.gms.internal.hc {
    // Fields
    private android.app.Activity a;
    private com.google.android.gms.internal.ix$a b;
    private final java.lang.String c;
    private final int g;

    // Methods
    public ix(
            android.app.Activity p0,
            android.os.Looper p1,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p2,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p3,
            String p4,
            int p5)
    {
      super(p0, p1, p2, p3, new String[0]);
      this.c = p4;
      this.a = p0;
      this.g = p5;
    }

    private static com.google.android.gms.internal.iz an(android.os.IBinder p0)
    {
      return iz$a.ap(p0);
    }

    private com.google.android.gms.internal.iz g()
    {
      return (com.google.android.gms.internal.iz)super.H();
    }

    private void h()
    {
      super.G();
    }

    /* synthetic */ protected final android.os.IInterface a(android.os.IBinder p0)
    {
      return (android.os.IInterface)iz$a.ap(p0);
    }

    public final void a(com.google.android.gms.identity.intents.UserAddressRequest p0, int p1)
    {
      android.os.Bundle v3;
      android.os.Bundle v5;
      super.G();
      this.b = new com.google.android.gms.internal.ix$a(p1, this.a);
      try
      {
        v3 = new android.os.Bundle();
        v3.putString("com.google.android.gms.identity.intents.EXTRA_CALLING_PACKAGE_NAME", this.E().getPackageName());
        if ( !TextUtils.isEmpty(this.c) )
          v3.putParcelable("com.google.android.gms.identity.intents.EXTRA_ACCOUNT", new android.accounts.Account(this.c, "com.google"));
        v3.putInt("com.google.android.gms.identity.intents.EXTRA_THEME", this.g);
        ((com.google.android.gms.internal.iz)super.H()).a(this.b, p0, v3);
      }
      catch ( android.os.RemoteException v4 )
      {
        Log.e("AddressClientImpl", "Exception requesting user address", v4);
        v5 = new android.os.Bundle();
        v5.putInt("com.google.android.gms.identity.intents.EXTRA_ERROR_CODE", 555);
        this.b.a(1, v5);
      }
    }

    protected final void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1)
 throws android.os.RemoteException {
      p0.d(p1, 5077000, this.E().getPackageName());
    }

    public final void b()
 throws android.os.RemoteException {
      super.b();
      if ( this.b != null )
      {
        ix$a.a(this.b, null);
        this.b = null;
      }
    }

    protected final String e()
    {
      return "com.google.android.gms.identity.intents.internal.IAddressService";
    }

    protected final String f()
    {
      return "com.google.android.gms.identity.service.BIND";
    }

}
