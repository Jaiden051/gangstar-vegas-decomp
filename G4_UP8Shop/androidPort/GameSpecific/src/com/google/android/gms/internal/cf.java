// Decompiled from classes.dex (SourceFile: cf.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class cf implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.ce CREATOR;
    public final int a;
    public final java.lang.String b;
    public final java.lang.String c;
    public final java.lang.String d;
    public final java.lang.String e;
    public final java.lang.String f;
    public final java.lang.String g;
    public final java.lang.String h;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.ce();
    }

    public cf(int p0, String p1, String p2, String p3, String p4, String p5, String p6, String p7)
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
    }

    public cf(String p0, String p1, String p2, String p3, String p4, String p5, String p6)
    {
      this(1, p0, p1, p2, p3, p4, p5, p6);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ce.a(this, p0, p1);
    }

}
