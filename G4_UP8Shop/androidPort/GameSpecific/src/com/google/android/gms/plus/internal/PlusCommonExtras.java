// Decompiled from classes.dex (SourceFile: PlusCommonExtras.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

import com.google.android.gms.internal.hl;
public class PlusCommonExtras implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.plus.internal.f CREATOR;
    public static java.lang.String a;
    private final int b;
    private java.lang.String c;
    private java.lang.String d;

    // Methods
    static
    {
      a = "PlusCommonExtras";
      CREATOR = new com.google.android.gms.plus.internal.f();
    }

    public PlusCommonExtras()
    {
      super();
      this.b = 1;
      this.c = "";
      this.d = "";
    }

    PlusCommonExtras(int p0, String p1, String p2)
    {
      super();
      this.b = p0;
      this.c = p1;
      this.d = p2;
    }

    public final int a()
    {
      return this.b;
    }

    public final void a(android.os.Bundle p0)
    {
      p0.putByteArray("android.gms.plus.internal.PlusCommonExtras.extraPlusCommon", com.google.android.gms.common.internal.safeparcel.c.a((com.google.android.gms.common.internal.safeparcel.SafeParcelable)this));
    }

    public final String b()
    {
      return this.c;
    }

    public final String c()
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
      com.google.android.gms.plus.internal.PlusCommonExtras v4;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.plus.internal.PlusCommonExtras )
      {
        v4 = (com.google.android.gms.plus.internal.PlusCommonExtras)p0;
        if ( this.b == v4.b && hl.equal(this.c, v4.c) )
          return hl.equal(this.d, v4.d);
      }
      return v2;
    }

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[3];
      v1[0] = Integer.valueOf(this.b);
      v1[1] = this.c;
      v1[2] = this.d;
      return hl.hashCode(v1);
    }

    public String toString()
    {
      return hl.e(this).a("versionCode", Integer.valueOf(this.b)).a("Gpsrc", this.c).a("ClientCallingPackage", this.d).toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.plus.internal.f.a(this, p0, p1);
    }

}
