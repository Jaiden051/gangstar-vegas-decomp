// Decompiled from classes.dex (SourceFile: MaskedWalletRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class MaskedWalletRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    boolean b;
    boolean c;
    boolean d;
    java.lang.String e;
    java.lang.String f;
    java.lang.String g;
    com.google.android.gms.wallet.Cart h;
    boolean i;
    boolean j;
    com.google.android.gms.wallet.CountrySpecification[] k;
    boolean l;
    boolean m;
    java.util.ArrayList n;
    private final int o;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.l();
    }

    MaskedWalletRequest()
    {
      super();
      this.o = 3;
      this.l = true;
      this.m = true;
    }

    MaskedWalletRequest(
            int p0,
            String p1,
            boolean p2,
            boolean p3,
            boolean p4,
            String p5,
            String p6,
            String p7,
            com.google.android.gms.wallet.Cart p8,
            boolean p9,
            boolean p10,
            com.google.android.gms.wallet.CountrySpecification[] p11,
            boolean p12,
            boolean p13,
            java.util.ArrayList<com.google.android.gms.identity.intents.model.CountrySpecification> p14)
    {
      super();
      this.o = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p5;
      this.f = p6;
      this.g = p7;
      this.h = p8;
      this.i = p9;
      this.j = p10;
      this.k = (com.google.android.gms.wallet.CountrySpecification[])p11;
      this.l = p12;
      this.m = p13;
      this.n = p14;
    }

    private String b()
    {
      return this.a;
    }

    private boolean c()
    {
      return this.b;
    }

    private boolean d()
    {
      return this.c;
    }

    private boolean e()
    {
      return this.d;
    }

    private String f()
    {
      return this.e;
    }

    private String g()
    {
      return this.f;
    }

    private String h()
    {
      return this.g;
    }

    private com.google.android.gms.wallet.Cart i()
    {
      return this.h;
    }

    private boolean j()
    {
      return this.i;
    }

    private boolean k()
    {
      return this.j;
    }

    private com.google.android.gms.wallet.CountrySpecification[] l()
    {
      return this.k;
    }

    private boolean m()
    {
      return this.l;
    }

    private boolean n()
    {
      return this.m;
    }

    public static com.google.android.gms.wallet.MaskedWalletRequest$Builder newBuilder()
    {
      com.google.android.gms.wallet.MaskedWalletRequest v0;
      v0 = new com.google.android.gms.wallet.MaskedWalletRequest();
      v0.getClass();
      return new com.google.android.gms.wallet.MaskedWalletRequest$Builder(v0, 0);
    }

    private java.util.ArrayList<com.google.android.gms.identity.intents.model.CountrySpecification> o()
    {
      return this.n;
    }

    public final int a()
    {
      return this.o;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.l.a(this, p0, p1);
    }

}
