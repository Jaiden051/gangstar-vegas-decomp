// Decompiled from classes.dex (SourceFile: jn.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Collections;
public final class jn implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.jo CREATOR;
    final int a;
    final java.util.List b;
    final java.util.List c;
    final java.util.List d;
    private final java.lang.String e;
    private final boolean f;
    private final java.lang.String g;
    private final java.util.Set h;
    private final java.util.Set i;
    private final java.util.Set j;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.jo();
    }

    jn(
            int p0,
            java.util.List<com.google.android.gms.internal.jt> p1,
            String p2,
            boolean p3,
            java.util.List<com.google.android.gms.internal.jx> p4,
            String p5,
            java.util.List<String> p6)
    {
      super();
      java.util.List v8;
      java.util.List v9;
      java.util.List v10;
      this.a = p0;
      if ( p1 != null )
        v8 = Collections.unmodifiableList(p1);
      else
        v8 = Collections.emptyList();
      this.b = v8;
      if ( p2 == null )
        p2 = "";
      this.e = p2;
      this.f = p3;
      if ( p4 != null )
        v9 = Collections.unmodifiableList(p4);
      else
        v9 = Collections.emptyList();
      this.c = v9;
      if ( p5 == null )
        p5 = "";
      this.g = p5;
      if ( p6 != null )
        v10 = Collections.unmodifiableList(p6);
      else
        v10 = Collections.emptyList();
      this.d = v10;
      this.h = c(this.b);
      this.i = c(this.c);
      this.j = c(this.d);
    
    }

    private static <E> java.util.Set<E> c(java.util.List<E> p0)
    {
      if ( p0.isEmpty() )
        return Collections.emptySet();
      else
        return Collections.unmodifiableSet(new java.util.HashSet(p0));
    }

    public final String a()
    {
      return this.e;
    }

    public final boolean b()
    {
      return this.f;
    }

    public final String c()
    {
      return this.g;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.jn v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.internal.jn )
        {
          v4 = (com.google.android.gms.internal.jn)p0;
          if ( !this.h.equals(v4.h)
            || this.f != v4.f
            || !this.g.equals(v4.g)
            || !this.i.equals(v4.i)
            || !this.j.equals(v4.j) )
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

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[5];
      v1[0] = this.h;
      v1[1] = Boolean.valueOf(this.f);
      v1[2] = this.i;
      v1[3] = this.g;
      v1[4] = this.j;
      return hl.hashCode(v1);
    }

    public final String toString()
    {
      return hl.e(this).a("types", this.h).a("placeIds", this.j).a("requireOpenNow", Boolean.valueOf(this.f)).a("userAccountName", this.g).a("requestedUserDataTypes", this.i).toString();
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      jo.a(this, p0, p1);
    }

}
