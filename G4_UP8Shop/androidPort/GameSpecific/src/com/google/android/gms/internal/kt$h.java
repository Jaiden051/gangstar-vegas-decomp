// Decompiled from classes.dex (SourceFile: kt$h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class kt$h extends com.google.android.gms.internal.hz implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.plus.model.people.Person$Urls {
    // Fields
    public static final com.google.android.gms.internal.ld CREATOR;
    private static final java.util.HashMap a;
    private final java.util.Set b;
    private final int c;
    private java.lang.String d;
    private final int e;
    private int f;
    private java.lang.String g;

    // Methods
    static
    {
      java.util.HashMap v0;
      CREATOR = new com.google.android.gms.internal.ld();
      v0 = new java.util.HashMap();
      a = v0;
      v0.put("label", hz$a.j("label", 5));
      a.put("type", hz$a.a(
                      "type",
                      6,
                      (com.google.android.gms.internal.hz$b)new com.google.android.gms.internal.hw().a("home", 0).a("work", 1).a("blog", 2).a("profile", 3).a("other", 4).a("otherProfile", 5).a("contributor", 6).a("website", 7),
                      false));
      a.put("value", hz$a.j("value", 4));
    }

    public kt$h()
    {
      super();
      this.e = 4;
      this.c = 2;
      this.b = new java.util.HashSet();
    }

    kt$h(java.util.Set<Integer> p0, int p1, String p2, int p3, String p4)
    {
      super();
      this.e = 4;
      this.b = p0;
      this.c = p1;
      this.d = p2;
      this.f = p3;
      this.g = p4;
    }

    public static int kS()
    {
      return 4;
    }

    private com.google.android.gms.internal.kt$h n()
    {
      return this;
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
      Object g;
      switch ( p0.h() )
      {
        case 4:
          g = this.g;
          break;
        case 5:
          g = this.d;
          break;
        case 6:
          g = Integer.valueOf(this.f);
          break;
        default:
          throw new IllegalStateException("Unknown safe parcelable id=" + p0.h());
      }
      return g;
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
      com.google.android.gms.internal.kt$h v4;
      java.util.Iterator v5;
      com.google.android.gms.internal.hz$a v6;
      if ( !(p0 instanceof com.google.android.gms.internal.kt$h) )
        return false;
      if ( this == p0 )
        return true;
      v4 = (com.google.android.gms.internal.kt$h)p0;
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

    public final boolean i()
    {
      return this.b.contains(Integer.valueOf(5));
    }

    public final boolean i_()
    {
      return true;
    }

    public final int j()
    {
      return this.f;
    }

    public final boolean k()
    {
      return this.b.contains(Integer.valueOf(6));
    }

    public final String l()
    {
      return this.g;
    }

    public final boolean m()
    {
      return this.b.contains(Integer.valueOf(4));
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ld.a(this, p0, p1);
    }

}
