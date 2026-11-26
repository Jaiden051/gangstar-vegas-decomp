// Decompiled from classes.dex (SourceFile: jv.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class jv implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    private final java.lang.String b;
    private final com.google.android.gms.maps.model.LatLng c;
    private final java.lang.String d;
    private final java.util.List e;
    private final java.lang.String f;
    private final java.lang.String g;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.internal.jw();
    }

    jv(
            int p0,
            String p1,
            com.google.android.gms.maps.model.LatLng p2,
            String p3,
            java.util.List<com.google.android.gms.internal.jt> p4,
            String p5,
            String p6)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = new java.util.ArrayList(p4);
      this.f = p5;
      this.g = p6;
    }

    public final String a()
    {
      return this.b;
    }

    public final com.google.android.gms.maps.model.LatLng b()
    {
      return this.c;
    }

    public final String c()
    {
      return this.d;
    }

    public final java.util.List<com.google.android.gms.internal.jt> d()
    {
      return this.e;
    }

    public int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.f;
    }

    public final String f()
    {
      return this.g;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      jw.a(this, p0, p1);
    }

}
