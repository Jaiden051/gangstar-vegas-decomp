// Decompiled from classes.dex (SourceFile: kq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class kq extends com.google.android.gms.internal.hz implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.plus.model.moments.Moment {
    // Fields
    public static final com.google.android.gms.internal.kr CREATOR;
    private static final java.util.HashMap a;
    private final java.util.Set b;
    private final int c;
    private java.lang.String d;
    private com.google.android.gms.internal.ko e;
    private java.lang.String f;
    private com.google.android.gms.internal.ko g;
    private java.lang.String h;

    // Methods
    static
    {
      java.util.HashMap v0;
      CREATOR = new com.google.android.gms.internal.kr();
      v0 = new java.util.HashMap();
      a = v0;
      v0.put("id", hz$a.j("id", 2));
      a.put("result", hz$a.a("result", 4, com.google.android.gms.internal.ko.class));
      a.put("startDate", hz$a.j("startDate", 5));
      a.put("target", hz$a.a("target", 6, com.google.android.gms.internal.ko.class));
      a.put("type", hz$a.j("type", 7));
    }

    public kq()
    {
      super();
      this.c = 1;
      this.b = new java.util.HashSet();
    }

    kq(
            java.util.Set<Integer> p0,
            int p1,
            String p2,
            com.google.android.gms.internal.ko p3,
            String p4,
            com.google.android.gms.internal.ko p5,
            String p6)
    {
      super();
      this.b = p0;
      this.c = p1;
      this.d = p2;
      this.e = p3;
      this.f = p4;
      this.g = p5;
      this.h = p6;
    }

    public kq(
            java.util.Set<Integer> p0,
            String p1,
            com.google.android.gms.internal.ko p2,
            String p3,
            com.google.android.gms.internal.ko p4,
            String p5)
    {
      super();
      this.b = p0;
      this.c = 1;
      this.d = p1;
      this.e = p2;
      this.f = p3;
      this.g = p4;
      this.h = p5;
    }

    private com.google.android.gms.internal.kq t()
    {
      return this;
    }

    public final boolean B_()
    {
      return this.b.contains(Integer.valueOf(2));
    }

    public final java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>> a()
    {
      return a;
    }

    protected final boolean a(com.google.android.gms.internal.hz$a p0)
    {
      return this.b.contains(Integer.valueOf(p0.h()));
    }

    protected final Object b()
    {
      return null;
    }

    protected final Object b(com.google.android.gms.internal.hz$a p0)
    {
      Object d;
      switch ( p0.h() )
      {
        case 2:
          d = this.d;
          break;
        case 4:
          d = this.e;
          break;
        case 5:
          d = this.f;
          break;
        case 6:
          d = this.g;
          break;
        case 7:
          d = this.h;
          break;
        default:
          throw new IllegalStateException("Unknown safe parcelable id=" + p0.h());
      }
      return d;
    }

    protected final boolean c()
    {
      return false;
    }

    final java.util.Set<Integer> d()
    {
      return this.b;
    }

    public final int describeContents()
    {
      return 0;
    }

    final int e()
    {
      return this.c;
    }

    public final boolean equals(Object p0)
    {
      com.google.android.gms.internal.kq v4;
      java.util.Iterator v5;
      com.google.android.gms.internal.hz$a v6;
      if ( !(p0 instanceof com.google.android.gms.internal.kq) )
        return false;
      if ( this == p0 )
        return true;
      v4 = (com.google.android.gms.internal.kq)p0;
      v5 = a.values().iterator();
      while ( v5.hasNext() )
      {
        v6 = (com.google.android.gms.internal.hz$a)v5.next();
        if ( this.a(v6) )
        {
          if ( !v4.a(v6) )
            return false;
          if ( !this.b(v6).equals(v4.b(v6)) )
            return false;
        }
        else if ( v4.a(v6) )
        {
          return false;
        }
      }
      return true;
    }

    public final String f()
    {
      return this.d;
    }

    /* synthetic */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      java.util.Iterator v1;
      int v2;
      com.google.android.gms.internal.hz$a v3;
      int v4;
      v1 = a.values().iterator();
      v2 = 0;
      while ( v1.hasNext() )
      {
        v3 = (com.google.android.gms.internal.hz$a)v1.next();
        if ( this.a(v3) )
          v4 = this.b(v3).hashCode() + v2 + v3.h();
        else
          v4 = v2;
        v2 = v4;
      }
      return v2;
    }

    public final boolean i_()
    {
      return true;
    }

    public final com.google.android.gms.plus.model.moments.ItemScope j()
    {
      return (com.google.android.gms.plus.model.moments.ItemScope)this.e;
    }

    final com.google.android.gms.internal.ko k()
    {
      return this.e;
    }

    public final boolean l()
    {
      return this.b.contains(Integer.valueOf(4));
    }

    public final String m()
    {
      return this.f;
    }

    public final boolean n()
    {
      return this.b.contains(Integer.valueOf(5));
    }

    public final com.google.android.gms.plus.model.moments.ItemScope o()
    {
      return (com.google.android.gms.plus.model.moments.ItemScope)this.g;
    }

    final com.google.android.gms.internal.ko p()
    {
      return this.g;
    }

    public final boolean q()
    {
      return this.b.contains(Integer.valueOf(6));
    }

    public final String r()
    {
      return this.h;
    }

    public final boolean s()
    {
      return this.b.contains(Integer.valueOf(7));
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      kr.a(this, p0, p1);
    }

}
