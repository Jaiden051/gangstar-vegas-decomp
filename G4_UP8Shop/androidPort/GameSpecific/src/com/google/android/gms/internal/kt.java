// Decompiled from classes.dex (SourceFile: kt.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
public final class kt extends com.google.android.gms.internal.hz implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.plus.model.people.Person {
    // Fields
    public static final com.google.android.gms.internal.ku CREATOR;
    private static final java.util.HashMap a;
    private boolean A;
    private final java.util.Set b;
    private final int c;
    private java.lang.String d;
    private com.google.android.gms.internal.kt$a e;
    private java.lang.String f;
    private java.lang.String g;
    private int h;
    private com.google.android.gms.internal.kt$b i;
    private java.lang.String j;
    private java.lang.String k;
    private int l;
    private java.lang.String m;
    private com.google.android.gms.internal.kt$c n;
    private boolean o;
    private java.lang.String p;
    private com.google.android.gms.internal.kt$d q;
    private java.lang.String r;
    private int s;
    private java.util.List t;
    private java.util.List u;
    private int v;
    private int w;
    private java.lang.String x;
    private java.lang.String y;
    private java.util.List z;

    // Methods
    static
    {
      java.util.HashMap v0;
      CREATOR = new com.google.android.gms.internal.ku();
      v0 = new java.util.HashMap();
      a = v0;
      v0.put("aboutMe", hz$a.j("aboutMe", 2));
      a.put("ageRange", hz$a.a("ageRange", 3, com.google.android.gms.internal.kt$a.class));
      a.put("birthday", hz$a.j("birthday", 4));
      a.put("braggingRights", hz$a.j("braggingRights", 5));
      a.put("circledByCount", hz$a.g("circledByCount", 6));
      a.put("cover", hz$a.a("cover", 7, com.google.android.gms.internal.kt$b.class));
      a.put("currentLocation", hz$a.j("currentLocation", 8));
      a.put("displayName", hz$a.j("displayName", 9));
      a.put("gender", hz$a.a(
                        "gender",
                        12,
                        (com.google.android.gms.internal.hz$b)new com.google.android.gms.internal.hw().a("male", 0).a("female", 1).a("other", 2),
                        false));
      a.put("id", hz$a.j("id", 14));
      a.put("image", hz$a.a("image", 15, com.google.android.gms.internal.kt$c.class));
      a.put("isPlusUser", hz$a.i("isPlusUser", 16));
      a.put("language", hz$a.j("language", 18));
      a.put("name", hz$a.a("name", 19, com.google.android.gms.internal.kt$d.class));
      a.put("nickname", hz$a.j("nickname", 20));
      a.put("objectType", hz$a.a(
                            "objectType",
                            21,
                            (com.google.android.gms.internal.hz$b)new com.google.android.gms.internal.hw().a("person", 0).a("page", 1),
                            false));
      a.put("organizations", hz$a.b("organizations", 22, com.google.android.gms.internal.kt$f.class));
      a.put("placesLived", hz$a.b("placesLived", 23, com.google.android.gms.internal.kt$g.class));
      a.put("plusOneCount", hz$a.g("plusOneCount", 24));
      a.put("relationshipStatus", hz$a.a(
                                    "relationshipStatus",
                                    25,
                                    (com.google.android.gms.internal.hz$b)new com.google.android.gms.internal.hw().a("single", 0).a("in_a_relationship", 1).a("engaged", 2).a("married", 3).a("its_complicated", 4).a("open_relationship", 5).a("widowed", 6).a("in_domestic_partnership", 7).a("in_civil_union", 8),
                                    false));
      a.put("tagline", hz$a.j("tagline", 26));
      a.put("url", hz$a.j("url", 27));
      a.put("urls", hz$a.b("urls", 28, com.google.android.gms.internal.kt$h.class));
      a.put("verified", hz$a.i("verified", 29));
    }

    public kt()
    {
      super();
      this.c = 2;
      this.b = new java.util.HashSet();
    }

    public kt(String p0, String p1, com.google.android.gms.internal.kt$c p2, int p3, String p4)
    {
      super();
      this.c = 2;
      this.b = new java.util.HashSet();
      this.k = p0;
      this.b.add(Integer.valueOf(9));
      this.m = p1;
      this.b.add(Integer.valueOf(14));
      this.n = p2;
      this.b.add(Integer.valueOf(15));
      this.s = p3;
      this.b.add(Integer.valueOf(21));
      this.y = p4;
      this.b.add(Integer.valueOf(27));
    }

    kt(
            java.util.Set<Integer> p0,
            int p1,
            String p2,
            com.google.android.gms.internal.kt$a p3,
            String p4,
            String p5,
            int p6,
            com.google.android.gms.internal.kt$b p7,
            String p8,
            String p9,
            int p10,
            String p11,
            com.google.android.gms.internal.kt$c p12,
            boolean p13,
            String p14,
            com.google.android.gms.internal.kt$d p15,
            String p16,
            int p17,
            java.util.List<com.google.android.gms.internal.kt$f> p18,
            java.util.List<com.google.android.gms.internal.kt$g> p19,
            int p20,
            int p21,
            String p22,
            String p23,
            java.util.List<com.google.android.gms.internal.kt$h> p24,
            boolean p25)
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
      this.j = p8;
      this.k = p9;
      this.l = p10;
      this.m = p11;
      this.n = p12;
      this.o = p13;
      this.p = p14;
      this.q = p15;
      this.r = p16;
      this.s = p17;
      this.t = p18;
      this.u = p19;
      this.v = p20;
      this.w = p21;
      this.x = p22;
      this.y = p23;
      this.z = p24;
      this.A = p25;
    }

    private com.google.android.gms.internal.kt ak()
    {
      return this;
    }

    public static com.google.android.gms.internal.kt i(byte[] p0)
    {
      android.os.Parcel v1;
      com.google.android.gms.internal.kt result; // RETVAL
    
      v1 = Parcel.obtain();
      v1.unmarshall(p0, 0, p0.length);
      v1.setDataPosition(0);
      result = ku.bG(v1);
      v1.recycle();
      return result;
    }

    public final boolean A()
    {
      return this.b.contains(Integer.valueOf(12));
    }

    public final String B()
    {
      return this.m;
    }

    public final boolean C()
    {
      return this.b.contains(Integer.valueOf(14));
    }

    public final boolean C_()
    {
      return this.b.contains(Integer.valueOf(2));
    }

    public final com.google.android.gms.plus.model.people.Person$Image D()
    {
      return (com.google.android.gms.plus.model.people.Person$Image)this.n;
    }

    final com.google.android.gms.internal.kt$c E()
    {
      return this.n;
    }

    public final boolean F()
    {
      return this.b.contains(Integer.valueOf(15));
    }

    public final boolean G()
    {
      return this.o;
    }

    public final boolean H()
    {
      return this.b.contains(Integer.valueOf(16));
    }

    public final String I()
    {
      return this.p;
    }

    public final boolean J()
    {
      return this.b.contains(Integer.valueOf(18));
    }

    public final com.google.android.gms.plus.model.people.Person$Name K()
    {
      return (com.google.android.gms.plus.model.people.Person$Name)this.q;
    }

    final com.google.android.gms.internal.kt$d L()
    {
      return this.q;
    }

    public final boolean M()
    {
      return this.b.contains(Integer.valueOf(19));
    }

    public final String N()
    {
      return this.r;
    }

    public final boolean O()
    {
      return this.b.contains(Integer.valueOf(20));
    }

    public final int P()
    {
      return this.s;
    }

    public final boolean Q()
    {
      return this.b.contains(Integer.valueOf(21));
    }

    public final java.util.List<com.google.android.gms.plus.model.people.Person$Organizations> R()
    {
      return (java.util.ArrayList)this.t;
    }

    final java.util.List<com.google.android.gms.internal.kt$f> S()
    {
      return this.t;
    }

    public final boolean T()
    {
      return this.b.contains(Integer.valueOf(22));
    }

    public final java.util.List<com.google.android.gms.plus.model.people.Person$PlacesLived> U()
    {
      return (java.util.ArrayList)this.u;
    }

    final java.util.List<com.google.android.gms.internal.kt$g> V()
    {
      return this.u;
    }

    public final boolean W()
    {
      return this.b.contains(Integer.valueOf(23));
    }

    public final int X()
    {
      return this.v;
    }

    public final boolean Y()
    {
      return this.b.contains(Integer.valueOf(24));
    }

    public final int Z()
    {
      return this.w;
    }

    public final java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>> a()
    {
      return a;
    }

    protected final boolean a(com.google.android.gms.internal.hz$a p0)
    {
      return this.b.contains(Integer.valueOf(p0.h()));
    }

    public final boolean aa()
    {
      return this.b.contains(Integer.valueOf(25));
    }

    public final String ab()
    {
      return this.x;
    }

    public final boolean ac()
    {
      return this.b.contains(Integer.valueOf(26));
    }

    public final String ad()
    {
      return this.y;
    }

    public final boolean ae()
    {
      return this.b.contains(Integer.valueOf(27));
    }

    public final java.util.List<com.google.android.gms.plus.model.people.Person$Urls> af()
    {
      return (java.util.ArrayList)this.z;
    }

    final java.util.List<com.google.android.gms.internal.kt$h> ag()
    {
      return this.z;
    }

    public final boolean ah()
    {
      return this.b.contains(Integer.valueOf(28));
    }

    public final boolean ai()
    {
      return this.A;
    }

    public final boolean aj()
    {
      return this.b.contains(Integer.valueOf(29));
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
          d = this.f;
          break;
        case 5:
          d = this.g;
          break;
        case 6:
          d = Integer.valueOf(this.h);
          break;
        case 7:
          d = this.i;
          break;
        case 8:
          d = this.j;
          break;
        case 9:
          d = this.k;
          break;
        case 12:
          d = Integer.valueOf(this.l);
          break;
        case 14:
          d = this.m;
          break;
        case 15:
          d = this.n;
          break;
        case 16:
          d = Boolean.valueOf(this.o);
          break;
        case 18:
          d = this.p;
          break;
        case 19:
          d = this.q;
          break;
        case 20:
          d = this.r;
          break;
        case 21:
          d = Integer.valueOf(this.s);
          break;
        case 22:
          d = this.t;
          break;
        case 23:
          d = this.u;
          break;
        case 24:
          d = Integer.valueOf(this.v);
          break;
        case 25:
          d = Integer.valueOf(this.w);
          break;
        case 26:
          d = this.x;
          break;
        case 27:
          d = this.y;
          break;
        case 28:
          d = this.z;
          break;
        case 29:
          d = Boolean.valueOf(this.A);
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
      com.google.android.gms.internal.kt v4;
      java.util.Iterator v5;
      com.google.android.gms.internal.hz$a v6;
      if ( !(p0 instanceof com.google.android.gms.internal.kt) )
        return false;
      if ( this == p0 )
        return true;
      v4 = (com.google.android.gms.internal.kt)p0;
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

    public final com.google.android.gms.plus.model.people.Person$AgeRange j()
    {
      return (com.google.android.gms.plus.model.people.Person$AgeRange)this.e;
    }

    final com.google.android.gms.internal.kt$a k()
    {
      return this.e;
    }

    public final boolean l()
    {
      return this.b.contains(Integer.valueOf(3));
    }

    public final String m()
    {
      return this.f;
    }

    public final boolean n()
    {
      return this.b.contains(Integer.valueOf(4));
    }

    public final String o()
    {
      return this.g;
    }

    public final boolean p()
    {
      return this.b.contains(Integer.valueOf(5));
    }

    public final int q()
    {
      return this.h;
    }

    public final boolean r()
    {
      return this.b.contains(Integer.valueOf(6));
    }

    public final com.google.android.gms.plus.model.people.Person$Cover s()
    {
      return (com.google.android.gms.plus.model.people.Person$Cover)this.i;
    }

    final com.google.android.gms.internal.kt$b t()
    {
      return this.i;
    }

    public final boolean u()
    {
      return this.b.contains(Integer.valueOf(7));
    }

    public final String v()
    {
      return this.j;
    }

    public final boolean w()
    {
      return this.b.contains(Integer.valueOf(8));
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ku.a(this, p0, p1);
    }

    public final String x()
    {
      return this.k;
    }

    public final boolean y()
    {
      return this.b.contains(Integer.valueOf(9));
    }

    public final int z()
    {
      return this.l;
    }

}
