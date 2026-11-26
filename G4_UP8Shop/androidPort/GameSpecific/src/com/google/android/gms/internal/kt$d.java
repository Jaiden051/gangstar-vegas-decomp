// Decompiled from classes.dex (SourceFile: kt$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class kt$d extends com.google.android.gms.internal.hz implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.plus.model.people.Person$Name {
    // Fields
    public static final com.google.android.gms.internal.la CREATOR;
    private static final java.util.HashMap a;
    private final java.util.Set b;
    private final int c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;

    // Methods
    static
    {
      java.util.HashMap v0;
      CREATOR = new com.google.android.gms.internal.la();
      v0 = new java.util.HashMap();
      a = v0;
      v0.put("familyName", hz$a.j("familyName", 2));
      a.put("formatted", hz$a.j("formatted", 3));
      a.put("givenName", hz$a.j("givenName", 4));
      a.put("honorificPrefix", hz$a.j("honorificPrefix", 5));
      a.put("honorificSuffix", hz$a.j("honorificSuffix", 6));
      a.put("middleName", hz$a.j("middleName", 7));
    }

    public kt$d()
    {
      super();
      this.c = 1;
      this.b = new java.util.HashSet();
    }

    kt$d(java.util.Set<Integer> p0, int p1, String p2, String p3, String p4, String p5, String p6, String p7)
    {
      super();
      this.b = p0;
      this.c = p1;
      this.d = p2;
      this.e = p3;
      this.f = p4;
      this.g = p5;
      this.h = p6;
      this.i = p7;
    }

    private com.google.android.gms.internal.kt$d t()
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
      String d;
      switch ( p0.h() )
      {
        case 2:
          d = this.d;
          break;
        case 3:
          d = this.e;
          break;
        case 4:
          d = this.f;
          break;
        case 5:
          d = this.g;
          break;
        case 6:
          d = this.h;
          break;
        case 7:
          d = this.i;
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
      com.google.android.gms.internal.kt$d v4;
      java.util.Iterator v5;
      com.google.android.gms.internal.hz$a v6;
      if ( !(p0 instanceof com.google.android.gms.internal.kt$d) )
        return false;
      if ( this == p0 )
        return true;
      v4 = (com.google.android.gms.internal.kt$d)p0;
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

    public final String j()
    {
      return this.e;
    }

    public final boolean k()
    {
      return this.b.contains(Integer.valueOf(3));
    }

    public final String l()
    {
      return this.f;
    }

    public final boolean m()
    {
      return this.b.contains(Integer.valueOf(4));
    }

    public final String n()
    {
      return this.g;
    }

    public final boolean o()
    {
      return this.b.contains(Integer.valueOf(5));
    }

    public final String p()
    {
      return this.h;
    }

    public final boolean q()
    {
      return this.b.contains(Integer.valueOf(6));
    }

    public final String r()
    {
      return this.i;
    }

    public final boolean s()
    {
      return this.b.contains(Integer.valueOf(7));
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      la.a(this, p0, p1);
    }

}
