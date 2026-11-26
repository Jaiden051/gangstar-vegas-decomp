// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

import com.google.android.gms.internal.hl;
public class c implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    private final java.lang.String b;
    private final java.lang.String c;
    private final int d;
    private final int e;
    private final boolean f;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.d();
    }

    c(int p0, String p1, String p2, int p3, int p4, boolean p5)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
    }

    public final String a()
    {
      return this.b;
    }

    public final String b()
    {
      return this.c;
    }

    public final int c()
    {
      return this.d;
    }

    public final int d()
    {
      return this.e;
    }

    public int describeContents()
    {
      return 0;
    }

    public final boolean e()
    {
      return this.f;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.wearable.c v4;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.wearable.c )
      {
        v4 = (com.google.android.gms.wearable.c)p0;
        if ( hl.equal(Integer.valueOf(this.a), Integer.valueOf(v4.a))
          && hl.equal(this.b, v4.b)
          && hl.equal(this.c, v4.c)
          && hl.equal(Integer.valueOf(this.d), Integer.valueOf(v4.d))
          && hl.equal(Integer.valueOf(this.e), Integer.valueOf(v4.e)) )
        {
          return hl.equal(Boolean.valueOf(this.f), Boolean.valueOf(v4.f));
        }
      }
      return v2;
    }

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[6];
      v1[0] = Integer.valueOf(this.a);
      v1[1] = this.b;
      v1[2] = this.c;
      v1[3] = Integer.valueOf(this.d);
      v1[4] = Integer.valueOf(this.e);
      v1[5] = Boolean.valueOf(this.f);
      return hl.hashCode(v1);
    }

    public String toString()
    {
      StringBuilder v1;
      v1 = new StringBuilder("ConnectionConfiguration[ ");
      v1.append("mName=" + this.b);
      v1.append(", mAddress=" + this.c);
      v1.append(", mType=" + this.d);
      v1.append(", mRole=" + this.e);
      v1.append(", mEnabled=" + this.f);
      v1.append("]");
      return v1.toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wearable.d.a(this, p0, p1);
    }

}
