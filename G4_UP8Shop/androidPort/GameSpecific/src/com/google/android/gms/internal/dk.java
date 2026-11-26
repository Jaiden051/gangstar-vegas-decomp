// Decompiled from classes.dex (SourceFile: dk.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class dk implements com.google.android.gms.ads.purchase.InAppPurchaseResult {
    // Fields
    private final com.google.android.gms.internal.dg a;

    // Methods
    public dk(com.google.android.gms.internal.dg p0)
    {
      super();
      this.a = p0;
    }

    public final String a()
    {
      try
      {
        return this.a.b();
      }
      catch ( android.os.RemoteException v3 )
      {
        ev.c("Could not forward getProductId to InAppPurchaseResult", v3);
        return null;
      }
    }

    public final android.content.Intent b()
    {
      try
      {
        return this.a.c();
      }
      catch ( android.os.RemoteException v3 )
      {
        ev.c("Could not forward getPurchaseData to InAppPurchaseResult", v3);
        return null;
      }
    }

    public final int c()
    {
      try
      {
        return this.a.d();
      }
      catch ( android.os.RemoteException v3 )
      {
        ev.c("Could not forward getPurchaseData to InAppPurchaseResult", v3);
        return 0;
      }
    }

    public final boolean d()
    {
      try
      {
        return this.a.a();
      }
      catch ( android.os.RemoteException v3 )
      {
        ev.c("Could not forward isVerified to InAppPurchaseResult", v3);
        return false;
      }
    }

    public final void e()
    {
      try
      {
        this.a.e();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not forward finishPurchase to InAppPurchaseResult", v1);
      }
    }

}
