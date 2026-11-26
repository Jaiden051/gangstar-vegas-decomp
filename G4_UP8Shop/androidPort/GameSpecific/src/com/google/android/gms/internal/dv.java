// Decompiled from classes.dex (SourceFile: dv.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Collections;
public final class dv implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.dw CREATOR;
    public final int a;
    public final java.lang.String b;
    public final java.lang.String c;
    public final java.util.List d;
    public final int e;
    public final java.util.List f;
    public final long g;
    public final boolean h;
    public final long i;
    public final java.util.List j;
    public final long k;
    public final int l;
    public final java.lang.String m;
    public final long n;
    public final java.lang.String o;
    public final boolean p;
    public final java.lang.String q;
    public final java.lang.String r;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.dw();
    }

    public dv(int p0)
    {
      this(7, null, null, null, p0, null, -1, false, -1, null, -1, -1, null, -1, null, false, null, null);
    }

    public dv(int p0, long p1)
    {
      this(7, null, null, null, p0, null, -1, false, -1, null, p1, -1, null, -1, null, false, null, null);
    }

    dv(
            int p0,
            String p1,
            String p2,
            java.util.List<String> p3,
            int p4,
            java.util.List<String> p5,
            long p6,
            boolean p8,
            long p9,
            java.util.List<String> p11,
            long p12,
            int p14,
            String p15,
            long p16,
            String p18,
            boolean p19,
            String p20,
            String p21)
    {
      super();
      java.util.List v19;
      java.util.List v20;
      java.util.List v21;
      this.a = p0;
      this.b = p1;
      this.c = p2;
      if ( p3 != null )
        v19 = Collections.unmodifiableList(p3);
      else
        v19 = null;
      this.d = v19;
      this.e = p4;
      if ( p5 != null )
        v20 = Collections.unmodifiableList(p5);
      else
        v20 = null;
      this.f = v20;
      this.g = p6;
      this.h = p8;
      this.i = p9;
      if ( p11 != null )
        v21 = Collections.unmodifiableList(p11);
      else
        v21 = null;
      this.j = v21;
      this.k = p12;
      this.l = p14;
      this.m = p15;
      this.n = p16;
      this.o = p18;
      this.p = p19;
      this.q = p20;
      this.r = p21;
    
    }

    public dv(
            String p0,
            String p1,
            java.util.List<String> p2,
            java.util.List<String> p3,
            long p4,
            boolean p6,
            long p7,
            java.util.List<String> p9,
            long p10,
            int p12,
            String p13,
            long p14,
            String p16,
            String p17)
    {
      this(7, p0, p1, p2, -2, p3, p4, p6, -1, p9, p10, p12, p13, p14, p16, false, null, p17);
    }

    public dv(
            String p0,
            String p1,
            java.util.List<String> p2,
            java.util.List<String> p3,
            long p4,
            boolean p6,
            long p7,
            java.util.List<String> p9,
            long p10,
            int p12,
            String p13,
            long p14,
            String p16,
            boolean p17,
            String p18,
            String p19)
    {
      this(7, p0, p1, p2, -2, p3, p4, false, -1, p9, -1, p12, p13, p14, p16, p17, p18, p19);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      dw.a(this, p0, p1);
    }

}
