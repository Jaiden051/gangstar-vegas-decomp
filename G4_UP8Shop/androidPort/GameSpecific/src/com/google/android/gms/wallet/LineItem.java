// Decompiled from classes.dex (SourceFile: LineItem.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class LineItem implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    java.lang.String c;
    java.lang.String d;
    int e;
    java.lang.String f;
    private final int g;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.i();
    }

    LineItem()
    {
      super();
      this.g = 1;
      this.e = 0;
    }

    LineItem(int p0, String p1, String p2, String p3, String p4, int p5, String p6)
    {
      super();
      this.g = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p5;
      this.f = p6;
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

    private int f()
    {
      return this.e;
    }

    private String g()
    {
      return this.f;
    }

    public static com.google.android.gms.wallet.LineItem$Builder newBuilder()
    {
      com.google.android.gms.wallet.LineItem v0;
      v0 = new com.google.android.gms.wallet.LineItem();
      v0.getClass();
      return new com.google.android.gms.wallet.LineItem$Builder(v0, 0);
    }

    public final int a()
    {
      return this.g;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.i.a(this, p0, p1);
    }

}
