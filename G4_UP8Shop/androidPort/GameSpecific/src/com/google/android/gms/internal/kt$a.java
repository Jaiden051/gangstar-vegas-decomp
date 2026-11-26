// Decompiled from classes.dex (SourceFile: kt$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class kt$a extends com.google.android.gms.internal.hz implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.plus.model.people.Person$AgeRange {
    // Fields
    public static final com.google.android.gms.internal.kv CREATOR;
    private static final java.util.HashMap a;
    private final java.util.Set b;
    private final int c;
    private int d;
    private int e;

    // Methods
    static
    {
      java.util.HashMap v0;
      CREATOR = new com.google.android.gms.internal.kv();
      v0 = new java.util.HashMap();
      a = v0;
      v0.put("max", hz$a.g("max", 2));
      a.put("min", hz$a.g("min", 3));
    }

    public kt$a()
    {
      super();
      this.c = 1;
      this.b = new java.util.HashSet();
    }

    kt$a(java.util.Set<Integer> p0, int p1, int p2, int p3)
    {
      super();
      this.b = p0;
      this.c = p1;
      this.d = p2;
      this.e = p3;
    }

    private com.google.android.gms.internal.kt$a l()
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
      Integer v2;
      switch ( p0.h() )
      {
        case 2:
          v2 = Integer.valueOf(this.d);
          break;
        case 3:
          v2 = Integer.valueOf(this.e);
          break;
        default:
          throw new IllegalStateException("Unknown safe parcelable id=" + p0.h());
      }
      return v2;
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
      com.google.android.gms.internal.kt$a v4;
      java.util.Iterator v5;
      com.google.android.gms.internal.hz$a v6;
      if ( !(p0 instanceof com.google.android.gms.internal.kt$a) )
        return false;
      if ( this == p0 )
        return true;
      v4 = (com.google.android.gms.internal.kt$a)p0;
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

    public final int f()
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
      return this.b.contains(Integer.valueOf(2));
    }

    public final boolean i_()
    {
      return true;
    }

    public final int j()
    {
      return this.e;
    }

    public final boolean k()
    {
      return this.b.contains(Integer.valueOf(3));
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      kv.a(this, p0, p1);
    }

}
