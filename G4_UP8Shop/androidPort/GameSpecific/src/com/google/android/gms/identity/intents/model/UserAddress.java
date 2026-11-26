// Decompiled from classes.dex (SourceFile: UserAddress.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.identity.intents.model;

public final class UserAddress implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
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
    java.lang.String j;
    java.lang.String k;
    java.lang.String l;
    boolean m;
    java.lang.String n;
    java.lang.String o;
    private final int p;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.identity.intents.model.b();
    }

    UserAddress()
    {
      super();
      this.p = 1;
    }

    UserAddress(
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
            String p10,
            String p11,
            String p12,
            boolean p13,
            String p14,
            String p15)
    {
      super();
      this.p = p0;
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
      this.l = p12;
      this.m = p13;
      this.n = p14;
      this.o = p15;
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

    public static com.google.android.gms.identity.intents.model.UserAddress fromIntent(
            android.content.Intent p0)
    {
      if ( p0 != null && p0.hasExtra("com.google.android.gms.identity.intents.EXTRA_ADDRESS") )
        return (com.google.android.gms.identity.intents.model.UserAddress)p0.getParcelableExtra("com.google.android.gms.ident" +
                                                                                                "ity.intents.EXTRA_ADDRESS");
      else
        return null;
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

    private String k()
    {
      return this.j;
    }

    private String l()
    {
      return this.k;
    }

    private String m()
    {
      return this.l;
    }

    private boolean n()
    {
      return this.m;
    }

    private String o()
    {
      return this.n;
    }

    private String p()
    {
      return this.o;
    }

    public final int a()
    {
      return this.p;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.identity.intents.model.b.a(this, p0, p1);
    }

}
