// Decompiled from classes.dex (SourceFile: ApplicationMetadata.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import com.google.android.gms.internal.gj;
import com.google.android.gms.internal.hl;
public final class ApplicationMetadata implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    java.util.List c;
    java.util.List d;
    java.lang.String e;
    android.net.Uri f;
    private final int g;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.cast.a();
    }

    private ApplicationMetadata()
    {
      super();
      this.g = 1;
      this.c = new java.util.ArrayList();
      this.d = new java.util.ArrayList();
    }

    ApplicationMetadata(
            int p0,
            String p1,
            String p2,
            java.util.List<com.google.android.gms.common.images.WebImage> p3,
            java.util.List<String> p4,
            String p5,
            android.net.Uri p6)
    {
      super();
      this.g = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p5;
      this.f = p6;
    }

    private boolean a(String p0)
    {
      return this.d != null && this.d.contains(p0);
    }

    private boolean a(java.util.List<String> p0)
    {
      return this.d != null && this.d.containsAll(p0);
    }

    final int a()
    {
      return this.g;
    }

    public final String b()
    {
      return this.a;
    }

    public final String c()
    {
      return this.b;
    }

    public final String d()
    {
      return this.e;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final android.net.Uri e()
    {
      return this.f;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.cast.ApplicationMetadata v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.cast.ApplicationMetadata )
        {
          v4 = (com.google.android.gms.cast.ApplicationMetadata)p0;
          if ( !gj.a(this.a, v4.a)
            || !gj.a(this.c, v4.c)
            || !gj.a(this.b, v4.b)
            || !gj.a(this.d, v4.d)
            || !gj.a(this.e, v4.e)
            || !gj.a(this.f, v4.f) )
          {
            return false;
          }
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public final java.util.List<com.google.android.gms.common.images.WebImage> f()
    {
      return this.c;
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[7];
      v1[0] = Integer.valueOf(this.g);
      v1[1] = this.a;
      v1[2] = this.b;
      v1[3] = this.c;
      v1[4] = this.d;
      v1[5] = this.e;
      v1[6] = this.f;
      return hl.hashCode(v1);
    }

    public final String toString()
    {
      return this.b;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.cast.a.a(this, p0, p1);
    }

}
