// Decompiled from classes.dex (SourceFile: Cart.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class Cart implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    java.util.ArrayList c;
    private final int d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.b();
    }

    Cart()
    {
      super();
      this.d = 1;
      this.c = new java.util.ArrayList();
    }

    Cart(int p0, String p1, String p2, java.util.ArrayList<com.google.android.gms.wallet.LineItem> p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    }

    private String b()
    {
      return this.a;
    }

    private String c()
    {
      return this.b;
    }

    private java.util.ArrayList<com.google.android.gms.wallet.LineItem> d()
    {
      return this.c;
    }

    public static com.google.android.gms.wallet.Cart$Builder newBuilder()
    {
      com.google.android.gms.wallet.Cart v0;
      v0 = new com.google.android.gms.wallet.Cart();
      v0.getClass();
      return new com.google.android.gms.wallet.Cart$Builder(v0, 0);
    }

    public final int a()
    {
      return this.d;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.b.a(this, p0, p1);
    }

}
