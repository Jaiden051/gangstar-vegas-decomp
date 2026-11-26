// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.wobs;

import com.google.android.gms.internal.ih;
public final class d implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    java.util.ArrayList c;
    private final int d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.wobs.e();
    }

    d()
    {
      super();
      this.d = 1;
      this.c = ih.fV();
    }

    d(int p0, String p1, String p2, java.util.ArrayList<com.google.android.gms.wallet.wobs.b> p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
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
      com.google.android.gms.wallet.wobs.e.a(this, p0, p1);
    }

}
