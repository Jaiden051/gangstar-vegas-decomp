// Decompiled from classes.dex (SourceFile: dl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class dl implements com.google.android.gms.ads.purchase.InAppPurchase {
    // Fields
    private final com.google.android.gms.internal.dc e;

    // Methods
    public dl(com.google.android.gms.internal.dc p0)
    {
      super();
      this.e = p0;
    }

    public final String a()
    {
      try
      {
        return this.e.a();
      }
      catch ( android.os.RemoteException v3 )
      {
        ev.c("Could not forward getProductId to InAppPurchase", v3);
        return null;
      }
    }

    public final void a(int p0)
    {
      try
      {
        this.e.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        ev.c("Could not forward recordResolution to InAppPurchase", v2);
      }
    }

    public final void b(int p0)
    {
      try
      {
        this.e.b(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        ev.c("Could not forward recordPlayBillingResolution to InAppPurchase", v2);
      }
    }

}
