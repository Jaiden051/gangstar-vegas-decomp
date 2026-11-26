// Decompiled from classes.dex (SourceFile: kt$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class kt$c extends com.google.android.gms.internal.hz implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.plus.model.people.Person$Image {
    // Fields
    public static final com.google.android.gms.internal.kz CREATOR;
    private static final java.util.HashMap a;
    private final java.util.Set b;
    private final int c;
    private java.lang.String d;

    // Methods
    static
    {
      java.util.HashMap v0;
      CREATOR = new com.google.android.gms.internal.kz();
      v0 = new java.util.HashMap();
      a = v0;
      v0.put("url", hz$a.j("url", 2));
    }

    public kt$c()
    {
      super();
      this.c = 1;
      this.b = new java.util.HashSet();
    }

    public kt$c(String p0)
    {
      super();
      this.b = new java.util.HashSet();
      this.c = 1;
      this.d = p0;
      this.b.add(Integer.valueOf(2));
    }

    kt$c(java.util.Set<Integer> p0, int p1, String p2)
    {
      super();
      this.b = p0;
      this.c = p1;
      this.d = p2;
    }

    private com.google.android.gms.internal.kt$c j()
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
      if ( p0.h() != 2 )
        throw new IllegalStateException("Unknown safe parcelable id=" + p0.h());
      return this.d;
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
      com.google.android.gms.internal.kt$c v4;
      java.util.Iterator v5;
      com.google.android.gms.internal.hz$a v6;
      if ( !(p0 instanceof com.google.android.gms.internal.kt$c) )
        return false;
      if ( this == p0 )
        return true;
      v4 = (com.google.android.gms.internal.kt$c)p0;
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
      return this.b.contains(Integer.valueOf(2));
    }

    public final boolean i_()
    {
      return true;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      kz.a(this, p0, p1);
    }

}
