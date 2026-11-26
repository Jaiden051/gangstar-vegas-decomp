// Decompiled from classes.dex (SourceFile: ko.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ko extends com.google.android.gms.internal.hz implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.plus.model.moments.ItemScope {
    // Fields
    public static final com.google.android.gms.internal.kp CREATOR;
    private static final java.util.HashMap a;
    private java.lang.String A;
    private java.lang.String B;
    private java.lang.String C;
    private java.lang.String D;
    private com.google.android.gms.internal.ko E;
    private java.lang.String F;
    private java.lang.String G;
    private java.lang.String H;
    private java.lang.String I;
    private com.google.android.gms.internal.ko J;
    private double K;
    private com.google.android.gms.internal.ko L;
    private double M;
    private java.lang.String N;
    private com.google.android.gms.internal.ko O;
    private java.util.List P;
    private java.lang.String Q;
    private java.lang.String R;
    private java.lang.String S;
    private java.lang.String T;
    private com.google.android.gms.internal.ko U;
    private java.lang.String V;
    private java.lang.String W;
    private java.lang.String X;
    private com.google.android.gms.internal.ko Y;
    private java.lang.String Z;
    private java.lang.String aa;
    private java.lang.String ab;
    private java.lang.String ac;
    private java.lang.String ad;
    private java.lang.String ae;
    private final java.util.Set b;
    private final int c;
    private com.google.android.gms.internal.ko d;
    private java.util.List e;
    private com.google.android.gms.internal.ko f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.util.List j;
    private int k;
    private java.util.List l;
    private com.google.android.gms.internal.ko m;
    private java.util.List n;
    private java.lang.String o;
    private java.lang.String p;
    private com.google.android.gms.internal.ko q;
    private java.lang.String r;
    private java.lang.String s;
    private java.lang.String t;
    private java.util.List u;
    private java.lang.String v;
    private java.lang.String w;
    private java.lang.String x;
    private java.lang.String y;
    private java.lang.String z;

    // Methods
    static
    {
      java.util.HashMap v0;
      CREATOR = new com.google.android.gms.internal.kp();
      v0 = new java.util.HashMap();
      a = v0;
      v0.put("about", hz$a.a("about", 2, com.google.android.gms.internal.ko.class));
      a.put("additionalName", hz$a.k("additionalName", 3));
      a.put("address", hz$a.a("address", 4, com.google.android.gms.internal.ko.class));
      a.put("addressCountry", hz$a.j("addressCountry", 5));
      a.put("addressLocality", hz$a.j("addressLocality", 6));
      a.put("addressRegion", hz$a.j("addressRegion", 7));
      a.put("associated_media", hz$a.b("associated_media", 8, com.google.android.gms.internal.ko.class));
      a.put("attendeeCount", hz$a.g("attendeeCount", 9));
      a.put("attendees", hz$a.b("attendees", 10, com.google.android.gms.internal.ko.class));
      a.put("audio", hz$a.a("audio", 11, com.google.android.gms.internal.ko.class));
      a.put("author", hz$a.b("author", 12, com.google.android.gms.internal.ko.class));
      a.put("bestRating", hz$a.j("bestRating", 13));
      a.put("birthDate", hz$a.j("birthDate", 14));
      a.put("byArtist", hz$a.a("byArtist", 15, com.google.android.gms.internal.ko.class));
      a.put("caption", hz$a.j("caption", 16));
      a.put("contentSize", hz$a.j("contentSize", 17));
      a.put("contentUrl", hz$a.j("contentUrl", 18));
      a.put("contributor", hz$a.b("contributor", 19, com.google.android.gms.internal.ko.class));
      a.put("dateCreated", hz$a.j("dateCreated", 20));
      a.put("dateModified", hz$a.j("dateModified", 21));
      a.put("datePublished", hz$a.j("datePublished", 22));
      a.put("description", hz$a.j("description", 23));
      a.put("duration", hz$a.j("duration", 24));
      a.put("embedUrl", hz$a.j("embedUrl", 25));
      a.put("endDate", hz$a.j("endDate", 26));
      a.put("familyName", hz$a.j("familyName", 27));
      a.put("gender", hz$a.j("gender", 28));
      a.put("geo", hz$a.a("geo", 29, com.google.android.gms.internal.ko.class));
      a.put("givenName", hz$a.j("givenName", 30));
      a.put("height", hz$a.j("height", 31));
      a.put("id", hz$a.j("id", 32));
      a.put("image", hz$a.j("image", 33));
      a.put("inAlbum", hz$a.a("inAlbum", 34, com.google.android.gms.internal.ko.class));
      a.put("latitude", hz$a.h("latitude", 36));
      a.put("location", hz$a.a("location", 37, com.google.android.gms.internal.ko.class));
      a.put("longitude", hz$a.h("longitude", 38));
      a.put("name", hz$a.j("name", 39));
      a.put("partOfTVSeries", hz$a.a("partOfTVSeries", 40, com.google.android.gms.internal.ko.class));
      a.put("performers", hz$a.b("performers", 41, com.google.android.gms.internal.ko.class));
      a.put("playerType", hz$a.j("playerType", 42));
      a.put("postOfficeBoxNumber", hz$a.j("postOfficeBoxNumber", 43));
      a.put("postalCode", hz$a.j("postalCode", 44));
      a.put("ratingValue", hz$a.j("ratingValue", 45));
      a.put("reviewRating", hz$a.a("reviewRating", 46, com.google.android.gms.internal.ko.class));
      a.put("startDate", hz$a.j("startDate", 47));
      a.put("streetAddress", hz$a.j("streetAddress", 48));
      a.put("text", hz$a.j("text", 49));
      a.put("thumbnail", hz$a.a("thumbnail", 50, com.google.android.gms.internal.ko.class));
      a.put("thumbnailUrl", hz$a.j("thumbnailUrl", 51));
      a.put("tickerSymbol", hz$a.j("tickerSymbol", 52));
      a.put("type", hz$a.j("type", 53));
      a.put("url", hz$a.j("url", 54));
      a.put("width", hz$a.j("width", 55));
      a.put("worstRating", hz$a.j("worstRating", 56));
    }

    public ko()
    {
      super();
      this.c = 1;
      this.b = new java.util.HashSet();
    }

    ko(
            java.util.Set<Integer> p0,
            int p1,
            com.google.android.gms.internal.ko p2,
            java.util.List<String> p3,
            com.google.android.gms.internal.ko p4,
            String p5,
            String p6,
            String p7,
            java.util.List<com.google.android.gms.internal.ko> p8,
            int p9,
            java.util.List<com.google.android.gms.internal.ko> p10,
            com.google.android.gms.internal.ko p11,
            java.util.List<com.google.android.gms.internal.ko> p12,
            String p13,
            String p14,
            com.google.android.gms.internal.ko p15,
            String p16,
            String p17,
            String p18,
            java.util.List<com.google.android.gms.internal.ko> p19,
            String p20,
            String p21,
            String p22,
            String p23,
            String p24,
            String p25,
            String p26,
            String p27,
            String p28,
            com.google.android.gms.internal.ko p29,
            String p30,
            String p31,
            String p32,
            String p33,
            com.google.android.gms.internal.ko p34,
            double p35,
            com.google.android.gms.internal.ko p36,
            double p37,
            String p38,
            com.google.android.gms.internal.ko p39,
            java.util.List<com.google.android.gms.internal.ko> p40,
            String p41,
            String p42,
            String p43,
            String p44,
            com.google.android.gms.internal.ko p45,
            String p46,
            String p47,
            String p48,
            com.google.android.gms.internal.ko p49,
            String p50,
            String p51,
            String p52,
            String p53,
            String p54,
            String p55)
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
      this.B = p26;
      this.C = p27;
      this.D = p28;
      this.E = p29;
      this.F = p30;
      this.G = p31;
      this.H = p32;
      this.I = p33;
      this.J = p34;
      this.K = p35;
      this.L = p36;
      this.M = p37;
      this.N = p38;
      this.O = p39;
      this.P = p40;
      this.Q = p41;
      this.R = p42;
      this.S = p43;
      this.T = p44;
      this.U = p45;
      this.V = p46;
      this.W = p47;
      this.X = p48;
      this.Y = p49;
      this.Z = p50;
      this.aa = p51;
      this.ab = p52;
      this.ac = p53;
      this.ad = p54;
      this.ae = p55;
    }

    public ko(
            java.util.Set<Integer> p0,
            com.google.android.gms.internal.ko p1,
            java.util.List<String> p2,
            com.google.android.gms.internal.ko p3,
            String p4,
            String p5,
            String p6,
            java.util.List<com.google.android.gms.internal.ko> p7,
            int p8,
            java.util.List<com.google.android.gms.internal.ko> p9,
            com.google.android.gms.internal.ko p10,
            java.util.List<com.google.android.gms.internal.ko> p11,
            String p12,
            String p13,
            com.google.android.gms.internal.ko p14,
            String p15,
            String p16,
            String p17,
            java.util.List<com.google.android.gms.internal.ko> p18,
            String p19,
            String p20,
            String p21,
            String p22,
            String p23,
            String p24,
            String p25,
            String p26,
            String p27,
            com.google.android.gms.internal.ko p28,
            String p29,
            String p30,
            String p31,
            String p32,
            com.google.android.gms.internal.ko p33,
            double p34,
            com.google.android.gms.internal.ko p35,
            double p36,
            String p37,
            com.google.android.gms.internal.ko p38,
            java.util.List<com.google.android.gms.internal.ko> p39,
            String p40,
            String p41,
            String p42,
            String p43,
            com.google.android.gms.internal.ko p44,
            String p45,
            String p46,
            String p47,
            com.google.android.gms.internal.ko p48,
            String p49,
            String p50,
            String p51,
            String p52,
            String p53,
            String p54)
    {
      super();
      this.b = p0;
      this.c = 1;
      this.d = p1;
      this.e = p2;
      this.f = p3;
      this.g = p4;
      this.h = p5;
      this.i = p6;
      this.j = p7;
      this.k = p8;
      this.l = p9;
      this.m = p10;
      this.n = p11;
      this.o = p12;
      this.p = p13;
      this.q = p14;
      this.r = p15;
      this.s = p16;
      this.t = p17;
      this.u = p18;
      this.v = p19;
      this.w = p20;
      this.x = p21;
      this.y = p22;
      this.z = p23;
      this.A = p24;
      this.B = p25;
      this.C = p26;
      this.D = p27;
      this.E = p28;
      this.F = p29;
      this.G = p30;
      this.H = p31;
      this.I = p32;
      this.J = p33;
      this.K = p34;
      this.L = p35;
      this.M = p36;
      this.N = p37;
      this.O = p38;
      this.P = p39;
      this.Q = p40;
      this.R = p41;
      this.S = p42;
      this.T = p43;
      this.U = p44;
      this.V = p45;
      this.W = p46;
      this.X = p47;
      this.Y = p48;
      this.Z = p49;
      this.aa = p50;
      this.ab = p51;
      this.ac = p52;
      this.ad = p53;
      this.ae = p54;
    }

    private com.google.android.gms.internal.ko bA()
    {
      return this;
    }

    public final java.util.List<com.google.android.gms.plus.model.moments.ItemScope> A()
    {
      return (java.util.ArrayList)this.l;
    }

    final java.util.List<com.google.android.gms.internal.ko> B()
    {
      return this.l;
    }

    public final boolean C()
    {
      return this.b.contains(Integer.valueOf(10));
    }

    public final com.google.android.gms.plus.model.moments.ItemScope D()
    {
      return (com.google.android.gms.plus.model.moments.ItemScope)this.m;
    }

    final com.google.android.gms.internal.ko E()
    {
      return this.m;
    }

    public final boolean F()
    {
      return this.b.contains(Integer.valueOf(11));
    }

    public final java.util.List<com.google.android.gms.plus.model.moments.ItemScope> G()
    {
      return (java.util.ArrayList)this.n;
    }

    final java.util.List<com.google.android.gms.internal.ko> H()
    {
      return this.n;
    }

    public final boolean I()
    {
      return this.b.contains(Integer.valueOf(12));
    }

    public final String J()
    {
      return this.o;
    }

    public final boolean K()
    {
      return this.b.contains(Integer.valueOf(13));
    }

    public final String L()
    {
      return this.p;
    }

    public final boolean M()
    {
      return this.b.contains(Integer.valueOf(14));
    }

    public final com.google.android.gms.plus.model.moments.ItemScope N()
    {
      return (com.google.android.gms.plus.model.moments.ItemScope)this.q;
    }

    final com.google.android.gms.internal.ko O()
    {
      return this.q;
    }

    public final boolean P()
    {
      return this.b.contains(Integer.valueOf(15));
    }

    public final String Q()
    {
      return this.r;
    }

    public final boolean R()
    {
      return this.b.contains(Integer.valueOf(16));
    }

    public final String S()
    {
      return this.s;
    }

    public final boolean T()
    {
      return this.b.contains(Integer.valueOf(17));
    }

    public final String U()
    {
      return this.t;
    }

    public final boolean V()
    {
      return this.b.contains(Integer.valueOf(18));
    }

    public final java.util.List<com.google.android.gms.plus.model.moments.ItemScope> W()
    {
      return (java.util.ArrayList)this.u;
    }

    final java.util.List<com.google.android.gms.internal.ko> X()
    {
      return this.u;
    }

    public final boolean Y()
    {
      return this.b.contains(Integer.valueOf(19));
    }

    public final String Z()
    {
      return this.v;
    }

    public final java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>> a()
    {
      return a;
    }

    protected final boolean a(com.google.android.gms.internal.hz$a p0)
    {
      return this.b.contains(Integer.valueOf(p0.h()));
    }

    public final String aA()
    {
      return this.I;
    }

    public final boolean aB()
    {
      return this.b.contains(Integer.valueOf(33));
    }

    public final com.google.android.gms.plus.model.moments.ItemScope aC()
    {
      return (com.google.android.gms.plus.model.moments.ItemScope)this.J;
    }

    final com.google.android.gms.internal.ko aD()
    {
      return this.J;
    }

    public final boolean aE()
    {
      return this.b.contains(Integer.valueOf(34));
    }

    public final double aF()
    {
      return this.K;
    }

    public final boolean aG()
    {
      return this.b.contains(Integer.valueOf(36));
    }

    public final com.google.android.gms.plus.model.moments.ItemScope aH()
    {
      return (com.google.android.gms.plus.model.moments.ItemScope)this.L;
    }

    final com.google.android.gms.internal.ko aI()
    {
      return this.L;
    }

    public final boolean aJ()
    {
      return this.b.contains(Integer.valueOf(37));
    }

    public final double aK()
    {
      return this.M;
    }

    public final boolean aL()
    {
      return this.b.contains(Integer.valueOf(38));
    }

    public final String aM()
    {
      return this.N;
    }

    public final boolean aN()
    {
      return this.b.contains(Integer.valueOf(39));
    }

    public final com.google.android.gms.plus.model.moments.ItemScope aO()
    {
      return (com.google.android.gms.plus.model.moments.ItemScope)this.O;
    }

    final com.google.android.gms.internal.ko aP()
    {
      return this.O;
    }

    public final boolean aQ()
    {
      return this.b.contains(Integer.valueOf(40));
    }

    public final java.util.List<com.google.android.gms.plus.model.moments.ItemScope> aR()
    {
      return (java.util.ArrayList)this.P;
    }

    final java.util.List<com.google.android.gms.internal.ko> aS()
    {
      return this.P;
    }

    public final boolean aT()
    {
      return this.b.contains(Integer.valueOf(41));
    }

    public final String aU()
    {
      return this.Q;
    }

    public final boolean aV()
    {
      return this.b.contains(Integer.valueOf(42));
    }

    public final String aW()
    {
      return this.R;
    }

    public final boolean aX()
    {
      return this.b.contains(Integer.valueOf(43));
    }

    public final String aY()
    {
      return this.S;
    }

    public final boolean aZ()
    {
      return this.b.contains(Integer.valueOf(44));
    }

    public final boolean aa()
    {
      return this.b.contains(Integer.valueOf(20));
    }

    public final String ab()
    {
      return this.w;
    }

    public final boolean ac()
    {
      return this.b.contains(Integer.valueOf(21));
    }

    public final String ad()
    {
      return this.x;
    }

    public final boolean ae()
    {
      return this.b.contains(Integer.valueOf(22));
    }

    public final String af()
    {
      return this.y;
    }

    public final boolean ag()
    {
      return this.b.contains(Integer.valueOf(23));
    }

    public final String ah()
    {
      return this.z;
    }

    public final boolean ai()
    {
      return this.b.contains(Integer.valueOf(24));
    }

    public final String aj()
    {
      return this.A;
    }

    public final boolean ak()
    {
      return this.b.contains(Integer.valueOf(25));
    }

    public final String al()
    {
      return this.B;
    }

    public final boolean am()
    {
      return this.b.contains(Integer.valueOf(26));
    }

    public final String an()
    {
      return this.C;
    }

    public final boolean ao()
    {
      return this.b.contains(Integer.valueOf(27));
    }

    public final String ap()
    {
      return this.D;
    }

    public final boolean aq()
    {
      return this.b.contains(Integer.valueOf(28));
    }

    public final com.google.android.gms.plus.model.moments.ItemScope ar()
    {
      return (com.google.android.gms.plus.model.moments.ItemScope)this.E;
    }

    final com.google.android.gms.internal.ko as()
    {
      return this.E;
    }

    public final boolean at()
    {
      return this.b.contains(Integer.valueOf(29));
    }

    public final String au()
    {
      return this.F;
    }

    public final boolean av()
    {
      return this.b.contains(Integer.valueOf(30));
    }

    public final String aw()
    {
      return this.G;
    }

    public final boolean ax()
    {
      return this.b.contains(Integer.valueOf(31));
    }

    public final String ay()
    {
      return this.H;
    }

    public final boolean az()
    {
      return this.b.contains(Integer.valueOf(32));
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
          d = this.h;
          break;
        case 7:
          d = this.i;
          break;
        case 8:
          d = this.j;
          break;
        case 9:
          d = Integer.valueOf(this.k);
          break;
        case 10:
          d = this.l;
          break;
        case 11:
          d = this.m;
          break;
        case 12:
          d = this.n;
          break;
        case 13:
          d = this.o;
          break;
        case 14:
          d = this.p;
          break;
        case 15:
          d = this.q;
          break;
        case 16:
          d = this.r;
          break;
        case 17:
          d = this.s;
          break;
        case 18:
          d = this.t;
          break;
        case 19:
          d = this.u;
          break;
        case 20:
          d = this.v;
          break;
        case 21:
          d = this.w;
          break;
        case 22:
          d = this.x;
          break;
        case 23:
          d = this.y;
          break;
        case 24:
          d = this.z;
          break;
        case 25:
          d = this.A;
          break;
        case 26:
          d = this.B;
          break;
        case 27:
          d = this.C;
          break;
        case 28:
          d = this.D;
          break;
        case 29:
          d = this.E;
          break;
        case 30:
          d = this.F;
          break;
        case 31:
          d = this.G;
          break;
        case 32:
          d = this.H;
          break;
        case 33:
          d = this.I;
          break;
        case 34:
          d = this.J;
          break;
        case 36:
          d = Double.valueOf(this.K);
          break;
        case 37:
          d = this.L;
          break;
        case 38:
          d = Double.valueOf(this.M);
          break;
        case 39:
          d = this.N;
          break;
        case 40:
          d = this.O;
          break;
        case 41:
          d = this.P;
          break;
        case 42:
          d = this.Q;
          break;
        case 43:
          d = this.R;
          break;
        case 44:
          d = this.S;
          break;
        case 45:
          d = this.T;
          break;
        case 46:
          d = this.U;
          break;
        case 47:
          d = this.V;
          break;
        case 48:
          d = this.W;
          break;
        case 49:
          d = this.X;
          break;
        case 50:
          d = this.Y;
          break;
        case 51:
          d = this.Z;
          break;
        case 52:
          d = this.aa;
          break;
        case 53:
          d = this.ab;
          break;
        case 54:
          d = this.ac;
          break;
        case 55:
          d = this.ad;
          break;
        case 56:
          d = this.ae;
          break;
        default:
          throw new IllegalStateException("Unknown safe parcelable id=" + p0.h());
      }
      return d;
    }

    public final String ba()
    {
      return this.T;
    }

    public final boolean bb()
    {
      return this.b.contains(Integer.valueOf(45));
    }

    public final com.google.android.gms.plus.model.moments.ItemScope bc()
    {
      return (com.google.android.gms.plus.model.moments.ItemScope)this.U;
    }

    final com.google.android.gms.internal.ko bd()
    {
      return this.U;
    }

    public final boolean be()
    {
      return this.b.contains(Integer.valueOf(46));
    }

    public final String bf()
    {
      return this.V;
    }

    public final boolean bg()
    {
      return this.b.contains(Integer.valueOf(47));
    }

    public final String bh()
    {
      return this.W;
    }

    public final boolean bi()
    {
      return this.b.contains(Integer.valueOf(48));
    }

    public final String bj()
    {
      return this.X;
    }

    public final boolean bk()
    {
      return this.b.contains(Integer.valueOf(49));
    }

    public final com.google.android.gms.plus.model.moments.ItemScope bl()
    {
      return (com.google.android.gms.plus.model.moments.ItemScope)this.Y;
    }

    final com.google.android.gms.internal.ko bm()
    {
      return this.Y;
    }

    public final boolean bn()
    {
      return this.b.contains(Integer.valueOf(50));
    }

    public final String bo()
    {
      return this.Z;
    }

    public final boolean bp()
    {
      return this.b.contains(Integer.valueOf(51));
    }

    public final String bq()
    {
      return this.aa;
    }

    public final boolean br()
    {
      return this.b.contains(Integer.valueOf(52));
    }

    public final String bs()
    {
      return this.ab;
    }

    public final boolean bt()
    {
      return this.b.contains(Integer.valueOf(53));
    }

    public final String bu()
    {
      return this.ac;
    }

    public final boolean bv()
    {
      return this.b.contains(Integer.valueOf(54));
    }

    public final String bw()
    {
      return this.ad;
    }

    public final boolean bx()
    {
      return this.b.contains(Integer.valueOf(55));
    }

    public final String by()
    {
      return this.ae;
    }

    public final boolean bz()
    {
      return this.b.contains(Integer.valueOf(56));
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
      com.google.android.gms.internal.ko v4;
      java.util.Iterator v5;
      com.google.android.gms.internal.hz$a v6;
      if ( !(p0 instanceof com.google.android.gms.internal.ko) )
        return false;
      if ( this == p0 )
        return true;
      v4 = (com.google.android.gms.internal.ko)p0;
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

    public final com.google.android.gms.plus.model.moments.ItemScope f()
    {
      return (com.google.android.gms.plus.model.moments.ItemScope)this.d;
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

    final com.google.android.gms.internal.ko i()
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

    public final java.util.List<String> k()
    {
      return this.e;
    }

    public final boolean l()
    {
      return this.b.contains(Integer.valueOf(3));
    }

    public final com.google.android.gms.plus.model.moments.ItemScope m()
    {
      return (com.google.android.gms.plus.model.moments.ItemScope)this.f;
    }

    final com.google.android.gms.internal.ko n()
    {
      return this.f;
    }

    public final boolean o()
    {
      return this.b.contains(Integer.valueOf(4));
    }

    public final String p()
    {
      return this.g;
    }

    public final boolean q()
    {
      return this.b.contains(Integer.valueOf(5));
    }

    public final String r()
    {
      return this.h;
    }

    public final boolean s()
    {
      return this.b.contains(Integer.valueOf(6));
    }

    public final String t()
    {
      return this.i;
    }

    public final boolean u()
    {
      return this.b.contains(Integer.valueOf(7));
    }

    public final java.util.List<com.google.android.gms.plus.model.moments.ItemScope> v()
    {
      return (java.util.ArrayList)this.j;
    }

    final java.util.List<com.google.android.gms.internal.ko> w()
    {
      return this.j;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      kp.a(this, p0, p1);
    }

    public final boolean x()
    {
      return this.b.contains(Integer.valueOf(8));
    }

    public final int y()
    {
      return this.k;
    }

    public final boolean z()
    {
      return this.b.contains(Integer.valueOf(9));
    }

}
