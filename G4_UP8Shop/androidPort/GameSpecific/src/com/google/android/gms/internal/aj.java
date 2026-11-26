// Decompiled from classes.dex (SourceFile: aj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class aj implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.ak CREATOR;
    public final int a;
    public final long b;
    public final android.os.Bundle c;
    public final int d;
    public final java.util.List e;
    public final boolean f;
    public final int g;
    public final boolean h;
    public final java.lang.String i;
    public final com.google.android.gms.internal.ax j;
    public final android.location.Location k;
    public final java.lang.String l;
    public final android.os.Bundle m;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.ak();
    }

    public aj(
            int p0,
            long p1,
            android.os.Bundle p3,
            int p4,
            java.util.List<String> p5,
            boolean p6,
            int p7,
            boolean p8,
            String p9,
            com.google.android.gms.internal.ax p10,
            android.location.Location p11,
            String p12,
            android.os.Bundle p13)
    {
      super();
      this.a = p0;
      this.b = p1;
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
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ak.a(this, p0, p1);
    }

}
