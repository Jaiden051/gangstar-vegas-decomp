// Decompiled from classes.dex (SourceFile: kt$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class kt$b extends com.google.android.gms.internal.hz implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.plus.model.people.Person$Cover {
    // Fields
    public static final com.google.android.gms.internal.kw CREATOR;
    private static final java.util.HashMap a;
    private final java.util.Set b;
    private final int c;
    private com.google.android.gms.internal.kt$b$a d;
    private com.google.android.gms.internal.kt$b$b e;
    private int f;

    // Methods
    static
    {
      java.util.HashMap v0;
      CREATOR = new com.google.android.gms.internal.kw();
      v0 = new java.util.HashMap();
      a = v0;
      v0.put("coverInfo", hz$a.a("coverInfo", 2, com.google.android.gms.internal.kt$b$a.class));
      a.put("coverPhoto", hz$a.a("coverPhoto", 3, com.google.android.gms.internal.kt$b$b.class));
      a.put("layout", hz$a.a(
                        "layout",
                        4,
                        (com.google.android.gms.internal.hz$b)new com.google.android.gms.internal.hw().a("banner", 0),
                        false));
    }

    public kt$b()
    {
      super();
      this.c = 1;
      this.b = new java.util.HashSet();
    }

    kt$b(
            java.util.Set<Integer> p0,
            int p1,
            com.google.android.gms.internal.kt$b$a p2,
            com.google.android.gms.internal.kt$b$b p3,
            int p4)
    {
      super();
      this.b = p0;
      this.c = p1;
      this.d = p2;
      this.e = p3;
      this.f = p4;
    }

    private com.google.android.gms.internal.kt$b p()
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
      Object d;
      switch ( p0.h() )
      {
        case 2:
          d = this.d;
          break;
        case 3:
          d = this.e;
          break;
        case 4:
          d = Integer.valueOf(this.f);
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
      com.google.android.gms.internal.kt$b v4;
      java.util.Iterator v5;
      com.google.android.gms.internal.hz$a v6;
      if ( !(p0 instanceof com.google.android.gms.internal.kt$b) )
        return false;
      if ( this == p0 )
        return true;
      v4 = (com.google.android.gms.internal.kt$b)p0;
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

    public final com.google.android.gms.plus.model.people.Person$Cover$CoverInfo f()
    {
      return (com.google.android.gms.plus.model.people.Person$Cover$CoverInfo)this.d;
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

    final com.google.android.gms.internal.kt$b$a i()
    {
      return this.d;
    }

    public final boolean i_()
    {
      return true;
    }

    public final boolean j()
    {
      return this.b.contains(Integer.valueOf(2));
    }

    public final com.google.android.gms.plus.model.people.Person$Cover$CoverPhoto k()
    {
      return (com.google.android.gms.plus.model.people.Person$Cover$CoverPhoto)this.e;
    }

    final com.google.android.gms.internal.kt$b$b l()
    {
      return this.e;
    }

    public final boolean m()
    {
      return this.b.contains(Integer.valueOf(3));
    }

    public final int n()
    {
      return this.f;
    }

    public final boolean o()
    {
      return this.b.contains(Integer.valueOf(4));
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      kw.a(this, p0, p1);
    }

}
