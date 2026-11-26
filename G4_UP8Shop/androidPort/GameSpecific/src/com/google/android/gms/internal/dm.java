// Decompiled from classes.dex (SourceFile: dm.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class dm extends com.google.android.gms.internal.dh$a {
    // Fields
    private final com.google.android.gms.ads.purchase.PlayStorePurchaseListener a;

    // Methods
    public dm(com.google.android.gms.ads.purchase.PlayStorePurchaseListener p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.internal.dg p0)
    {
      new com.google.android.gms.internal.dk(p0);
      this.a.b();
    }

    public final boolean a(String p0)
    {
      return this.a.a();
    }

}
