// Decompiled from classes.dex (SourceFile: FullWallet.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class FullWallet implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    com.google.android.gms.wallet.ProxyCard c;
    java.lang.String d;
    com.google.android.gms.wallet.Address e;
    com.google.android.gms.wallet.Address f;
    java.lang.String[] g;
    com.google.android.gms.identity.intents.model.UserAddress h;
    com.google.android.gms.identity.intents.model.UserAddress i;
    com.google.android.gms.wallet.InstrumentInfo[] j;
    private final int k;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.f();
    }

    private FullWallet()
    {
      super();
      this.k = 1;
    }

    FullWallet(
            int p0,
            String p1,
            String p2,
            com.google.android.gms.wallet.ProxyCard p3,
            String p4,
            com.google.android.gms.wallet.Address p5,
            com.google.android.gms.wallet.Address p6,
            String[] p7,
            com.google.android.gms.identity.intents.model.UserAddress p8,
            com.google.android.gms.identity.intents.model.UserAddress p9,
            com.google.android.gms.wallet.InstrumentInfo[] p10)
    {
      super();
      this.k = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p5;
      this.f = p6;
      this.g = p7;
      this.h = p8;
      this.i = p9;
      this.j = (com.google.android.gms.wallet.InstrumentInfo[])p10;
    }

    private String b()
    {
      return this.a;
    }

    private String c()
    {
      return this.b;
    }

    private com.google.android.gms.wallet.ProxyCard d()
    {
      return this.c;
    }

    private String e()
    {
      return this.d;
    }

    private com.google.android.gms.wallet.Address f()
    {
      return this.e;
    }

    private com.google.android.gms.wallet.Address g()
    {
      return this.f;
    }

    private String[] h()
    {
      return this.g;
    }

    private com.google.android.gms.identity.intents.model.UserAddress i()
    {
      return this.h;
    }

    private com.google.android.gms.identity.intents.model.UserAddress j()
    {
      return this.i;
    }

    private com.google.android.gms.wallet.InstrumentInfo[] k()
    {
      return this.j;
    }

    public final int a()
    {
      return this.k;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.f.a(this, p0, p1);
    }

}
