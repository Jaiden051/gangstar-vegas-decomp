// Decompiled from classes.dex (SourceFile: fq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fq implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.fr CREATOR;
    final int a;
    public final java.lang.String b;
    public final java.lang.String c;
    public final boolean d;
    public final int e;
    public final boolean f;
    public final java.lang.String g;
    public final com.google.android.gms.internal.fn[] h;
    final int[] i;
    public final java.lang.String j;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.fr();
    }

    fq(
            int p0,
            String p1,
            String p2,
            boolean p3,
            int p4,
            boolean p5,
            String p6,
            com.google.android.gms.internal.fn[] p7,
            int[] p8,
            String p9)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p6;
      this.h = (com.google.android.gms.internal.fn[])p7;
      this.i = (int[])p8;
      this.j = p9;
    }

    fq(
            String p0,
            String p1,
            boolean p2,
            int p3,
            boolean p4,
            String p5,
            com.google.android.gms.internal.fn[] p6,
            int[] p7,
            String p8)
    {
      this(2, p0, p1, p2, p3, p4, p5, p6, p7, p8);
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.fq v3;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.internal.fq )
      {
        v3 = (com.google.android.gms.internal.fq)p0;
        if ( this.b.equals(v3.b) && this.c.equals(v3.c) )
          return this.d == v3.d;
      }
      return v2;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      fr.a(this, p0, p1);
    }

}
