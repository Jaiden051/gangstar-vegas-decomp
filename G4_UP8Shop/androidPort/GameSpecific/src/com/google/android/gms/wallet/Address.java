// Decompiled from classes.dex (SourceFile: Address.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class Address implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    java.lang.String c;
    java.lang.String d;
    java.lang.String e;
    java.lang.String f;
    java.lang.String g;
    java.lang.String h;
    java.lang.String i;
    boolean j;
    java.lang.String k;
    private final int l;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.a();
    }

    Address()
    {
      super();
      this.l = 1;
    }

    Address(
            int p0,
            String p1,
            String p2,
            String p3,
            String p4,
            String p5,
            String p6,
            String p7,
            String p8,
            String p9,
            boolean p10,
            String p11)
    {
      super();
      this.l = p0;
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
      this.k = p11;
    }

    private String b()
    {
      return this.a;
    }

    private String c()
    {
      return this.b;
    }

    private String d()
    {
      return this.c;
    }

    private String e()
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

    private String i()
    {
      return this.h;
    }

    private String j()
    {
      return this.i;
    }

    private boolean k()
    {
      return this.j;
    }

    private String l()
    {
      return this.k;
    }

    public final int a()
    {
      return this.l;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.a.a(this, p0, p1);
    }

}
