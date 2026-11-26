// Decompiled from classes.dex (SourceFile: dt.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class dt implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.du CREATOR;
    public final int a;
    public final android.os.Bundle b;
    public final com.google.android.gms.internal.aj c;
    public final com.google.android.gms.internal.am d;
    public final java.lang.String e;
    public final android.content.pm.ApplicationInfo f;
    public final android.content.pm.PackageInfo g;
    public final java.lang.String h;
    public final java.lang.String i;
    public final java.lang.String j;
    public final com.google.android.gms.internal.ew k;
    public final android.os.Bundle l;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.du();
    }

    dt(
            int p0,
            android.os.Bundle p1,
            com.google.android.gms.internal.aj p2,
            com.google.android.gms.internal.am p3,
            String p4,
            android.content.pm.ApplicationInfo p5,
            android.content.pm.PackageInfo p6,
            String p7,
            String p8,
            String p9,
            com.google.android.gms.internal.ew p10,
            android.os.Bundle p11)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p6;
      this.h = p7;
      this.i = p8;
      this.j = p9;
      this.k = p10;
      this.l = p11;
    }

    private dt(
            android.os.Bundle p0,
            com.google.android.gms.internal.aj p1,
            com.google.android.gms.internal.am p2,
            String p3,
            android.content.pm.ApplicationInfo p4,
            android.content.pm.PackageInfo p5,
            String p6,
            String p7,
            String p8,
            com.google.android.gms.internal.ew p9,
            android.os.Bundle p10)
    {
      this(2, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
    }

    public dt(com.google.android.gms.internal.dt$a p0, String p1)
    {
      this(p0.a, p0.b, p0.c, p0.d, p0.e, p0.f, p1, p0.g, p0.h, p0.j, p0.i);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      du.a(this, p0, p1);
    }

}
