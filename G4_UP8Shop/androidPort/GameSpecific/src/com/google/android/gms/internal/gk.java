// Decompiled from classes.dex (SourceFile: gk.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class gk implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final int a;
    private double b;
    private boolean c;
    private int d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.internal.gl();
    }

    public gk()
    {
      this(1, Double.NaN, false, -1);
    }

    gk(int p0, double p1, boolean p3, int p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p3;
      this.d = p4;
    }

    public final int a()
    {
      return this.a;
    }

    public final double b()
    {
      return this.b;
    }

    public final boolean c()
    {
      return this.c;
    }

    public final int d()
    {
      return this.d;
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.gk v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.gk )
        {
          v4 = (com.google.android.gms.internal.gk)p0;
          if ( this.b != v4.b || this.c != v4.c || this.d != v4.d )
            return false;
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[3];
      v1[0] = Double.valueOf(this.b);
      v1[1] = Boolean.valueOf(this.c);
      v1[2] = Integer.valueOf(this.d);
      return hl.hashCode(v1);
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      gl.a(this, p0, p1);
    }

}
