// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

import com.google.android.gms.internal.hl;
import java.util.Arrays;
public class h implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.plus.internal.j CREATOR;
    private final int a;
    private final java.lang.String b;
    private final java.lang.String[] c;
    private final java.lang.String[] d;
    private final java.lang.String[] e;
    private final java.lang.String f;
    private final java.lang.String g;
    private final java.lang.String h;
    private final java.lang.String i;
    private final com.google.android.gms.plus.internal.PlusCommonExtras j;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.plus.internal.j();
    }

    h(
            int p0,
            String p1,
            String[] p2,
            String[] p3,
            String[] p4,
            String p5,
            String p6,
            String p7,
            String p8,
            com.google.android.gms.plus.internal.PlusCommonExtras p9)
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
    }

    public h(
            String p0,
            String[] p1,
            String[] p2,
            String[] p3,
            String p4,
            String p5,
            String p6,
            com.google.android.gms.plus.internal.PlusCommonExtras p7)
    {
      super();
      this.a = 1;
      this.b = p0;
      this.c = p1;
      this.d = p2;
      this.e = p3;
      this.f = p4;
      this.g = p5;
      this.h = p6;
      this.i = null;
      this.j = p7;
    }

    public final int a()
    {
      return this.a;
    }

    public final String b()
    {
      return this.b;
    }

    public final String[] c()
    {
      return this.c;
    }

    public final String[] d()
    {
      return this.d;
    }

    public int describeContents()
    {
      return 0;
    }

    public final String[] e()
    {
      return this.e;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.plus.internal.h v4;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.plus.internal.h )
      {
        v4 = (com.google.android.gms.plus.internal.h)p0;
        if ( this.a == v4.a
          && hl.equal(this.b, v4.b)
          && Arrays.equals(this.c, v4.c)
          && Arrays.equals(this.d, v4.d)
          && Arrays.equals(this.e, v4.e)
          && hl.equal(this.f, v4.f)
          && hl.equal(this.g, v4.g)
          && hl.equal(this.h, v4.h)
          && hl.equal(this.i, v4.i) )
        {
          return hl.equal(this.j, v4.j);
        }
      }
      return v2;
    }

    public final String f()
    {
      return this.f;
    }

    public final String g()
    {
      return this.g;
    }

    public final String h()
    {
      return this.h;
    }

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[10];
      v1[0] = Integer.valueOf(this.a);
      v1[1] = this.b;
      ((String[][])v1)[2] = this.c;
      ((String[][])v1)[3] = this.d;
      ((String[][])v1)[4] = this.e;
      v1[5] = this.f;
      v1[6] = this.g;
      v1[7] = this.h;
      v1[8] = this.i;
      v1[9] = this.j;
      return hl.hashCode(v1);
    }

    public final String i()
    {
      return this.i;
    }

    public final com.google.android.gms.plus.internal.PlusCommonExtras j()
    {
      return this.j;
    }

    public final android.os.Bundle k()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      v1.setClassLoader(com.google.android.gms.plus.internal.PlusCommonExtras.class.getClassLoader());
      this.j.a(v1);
      return v1;
    }

    public String toString()
    {
      return hl.e(this).a("versionCode", Integer.valueOf(this.a)).a("accountName", this.b).a("requestedScopes", this.c).a("visibleActivities", this.d).a("requiredFeatures", this.e).a("packageNameForAuth", this.f).a("callingPackageName", this.g).a("applicationName", this.h).a("extra", this.j.toString()).toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.plus.internal.j.a(this, p0, p1);
    }

}
