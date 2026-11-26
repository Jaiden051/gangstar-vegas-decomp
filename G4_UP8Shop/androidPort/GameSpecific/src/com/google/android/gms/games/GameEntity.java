// Decompiled from classes.dex (SourceFile: GameEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

import com.google.android.gms.games.internal.GamesDowngradeableSafeParcel;
import com.google.android.gms.internal.hb;
import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.il;
public final class GameEntity extends com.google.android.gms.games.internal.GamesDowngradeableSafeParcel implements com.google.android.gms.games.Game {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final int a;
    private final java.lang.String b;
    private final java.lang.String c;
    private final java.lang.String d;
    private final java.lang.String e;
    private final java.lang.String f;
    private final java.lang.String g;
    private final android.net.Uri h;
    private final android.net.Uri i;
    private final android.net.Uri j;
    private final boolean k;
    private final boolean l;
    private final java.lang.String m;
    private final int n;
    private final int o;
    private final int p;
    private final boolean q;
    private final boolean r;
    private final java.lang.String s;
    private final java.lang.String t;
    private final java.lang.String u;
    private final boolean v;
    private final boolean w;
    private final boolean x;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.games.GameEntity$GameEntityCreatorCompat();
    }

    GameEntity(
            int p0,
            String p1,
            String p2,
            String p3,
            String p4,
            String p5,
            String p6,
            android.net.Uri p7,
            android.net.Uri p8,
            android.net.Uri p9,
            boolean p10,
            boolean p11,
            String p12,
            int p13,
            int p14,
            int p15,
            boolean p16,
            boolean p17,
            String p18,
            String p19,
            String p20,
            boolean p21,
            boolean p22,
            boolean p23)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p6;
      this.h = p7;
      this.s = p18;
      this.i = p8;
      this.t = p19;
      this.j = p9;
      this.u = p20;
      this.k = p10;
      this.l = p11;
      this.m = p12;
      this.n = p13;
      this.o = p14;
      this.p = p15;
      this.q = p16;
      this.r = p17;
      this.v = p21;
      this.w = p22;
      this.x = p23;
    }

    public GameEntity(com.google.android.gms.games.Game p0)
    {
      super();
      this.a = 4;
      this.b = p0.a();
      this.d = p0.c();
      this.e = p0.d();
      this.f = p0.e();
      this.g = p0.f();
      this.c = p0.b();
      this.h = p0.f_();
      this.s = p0.j();
      this.i = p0.k();
      this.t = p0.l();
      this.j = p0.m();
      this.u = p0.n();
      this.k = p0.o();
      this.l = p0.r();
      this.m = p0.s();
      this.n = p0.t();
      this.o = p0.u();
      this.p = p0.v();
      this.q = p0.w();
      this.r = p0.x();
      this.v = p0.p();
      this.w = p0.q();
      this.x = p0.y();
    }

    private com.google.android.gms.games.Game B()
    {
      return (com.google.android.gms.games.Game)this;
    }

    static int a(com.google.android.gms.games.Game p0)
    {
      Object[] v1;
      v1 = new Object[20];
      v1[0] = p0.a();
      v1[1] = p0.b();
      v1[2] = p0.c();
      v1[3] = p0.d();
      v1[4] = p0.e();
      v1[5] = p0.f();
      v1[6] = p0.f_();
      v1[7] = p0.k();
      v1[8] = p0.m();
      v1[9] = Boolean.valueOf(p0.o());
      v1[10] = Boolean.valueOf(p0.r());
      v1[11] = p0.s();
      v1[12] = Integer.valueOf(p0.t());
      v1[13] = Integer.valueOf(p0.u());
      v1[14] = Integer.valueOf(p0.v());
      v1[15] = Boolean.valueOf(p0.w());
      v1[16] = Boolean.valueOf(p0.x());
      v1[17] = Boolean.valueOf(p0.p());
      v1[18] = Boolean.valueOf(p0.q());
      v1[19] = Boolean.valueOf(p0.y());
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.Game p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.Game v4;
      Boolean v5;
      boolean v6;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.Game )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.Game)p1;
          if ( hl.equal(v4.a(), p0.a())
            && hl.equal(v4.b(), p0.b())
            && hl.equal(v4.c(), p0.c())
            && hl.equal(v4.d(), p0.d())
            && hl.equal(v4.e(), p0.e())
            && hl.equal(v4.f(), p0.f())
            && hl.equal(v4.f_(), p0.f_())
            && hl.equal(v4.k(), p0.k())
            && hl.equal(v4.m(), p0.m())
            && hl.equal(Boolean.valueOf(v4.o()), Boolean.valueOf(p0.o()))
            && hl.equal(Boolean.valueOf(v4.r()), Boolean.valueOf(p0.r()))
            && hl.equal(v4.s(), p0.s())
            && hl.equal(Integer.valueOf(v4.t()), Integer.valueOf(p0.t()))
            && hl.equal(Integer.valueOf(v4.u()), Integer.valueOf(p0.u()))
            && hl.equal(Integer.valueOf(v4.v()), Integer.valueOf(p0.v()))
            && hl.equal(Boolean.valueOf(v4.w()), Boolean.valueOf(p0.w())) )
          {
            v5 = Boolean.valueOf(v4.x());
            v6 = p0.x()
              && hl.equal(Boolean.valueOf(v4.p()), Boolean.valueOf(p0.p()))
              && hl.equal(Boolean.valueOf(v4.q()), Boolean.valueOf(p0.q()));
            if ( hl.equal(v5, Boolean.valueOf(v6)) && hl.equal(Boolean.valueOf(v4.y()), Boolean.valueOf(p0.y())) )
              return true;
          }
        }
      }
      return v2;
    }

    /* synthetic */ static boolean aQ(String p0)
    {
      return hb.aA(p0);
    }

    static String b(com.google.android.gms.games.Game p0)
    {
      return hl.e(p0).a("ApplicationId", p0.a()).a("DisplayName", p0.b()).a("PrimaryCategory", p0.c()).a("SecondaryCategory", p0.d()).a("Description", p0.e()).a("DeveloperName", p0.f()).a("IconImageUri", p0.f_()).a("IconImageUrl", p0.j()).a("HiResImageUri", p0.k()).a("HiResImageUrl", p0.l()).a("FeaturedImageUri", p0.m()).a("FeaturedImageUrl", p0.n()).a("PlayEnabledGame", Boolean.valueOf(p0.o())).a("InstanceInstalled", Boolean.valueOf(p0.r())).a("InstancePackageName", p0.s()).a("AchievementTotalCount", Integer.valueOf(p0.u())).a("LeaderboardCount", Integer.valueOf(p0.v())).a("RealTimeMultiplayerEnabled", Boolean.valueOf(p0.w())).a("TurnBasedMultiplayerEnabled", Boolean.valueOf(p0.x())).a("AreSnapshotsEnabled", Boolean.valueOf(p0.y())).toString();
    }

    /* synthetic */ static boolean b(Integer p0)
    {
      return GamesDowngradeableSafeParcel.c(p0);
    }

    /* synthetic */ static Integer gM()
    {
      return hb.fl();
    }

    public final String a()
    {
      return this.b;
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      il.b(this.c, p0);
    }

    public final String b()
    {
      return this.c;
    }

    public final void b(android.database.CharArrayBuffer p0)
    {
      il.b(this.f, p0);
    }

    public final String c()
    {
      return this.d;
    }

    public final void c(android.database.CharArrayBuffer p0)
    {
      il.b(this.g, p0);
    }

    public final String d()
    {
      return this.e;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.f;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.Game)this, p0);
    }

    public final String f()
    {
      return this.g;
    }

    public final android.net.Uri f_()
    {
      return this.h;
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.Game)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final String j()
    {
      return this.s;
    }

    public final android.net.Uri k()
    {
      return this.i;
    }

    public final String l()
    {
      return this.t;
    }

    public final android.net.Uri m()
    {
      return this.j;
    }

    public final String n()
    {
      return this.u;
    }

    public final boolean o()
    {
      return this.k;
    }

    public final boolean p()
    {
      return this.v;
    }

    public final boolean q()
    {
      return this.w;
    }

    public final boolean r()
    {
      return this.l;
    }

    public final String s()
    {
      return this.m;
    }

    public final int t()
    {
      return this.n;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.Game)this);
    }

    public final int u()
    {
      return this.o;
    }

    public final int v()
    {
      return this.p;
    }

    public final boolean w()
    {
      return this.q;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      int v3;
      String v4;
      String v5;
      String v6;
      v3 = 1;
      v4 = null;
      if ( this.A() )
      {
        p0.writeString(this.b);
        p0.writeString(this.c);
        p0.writeString(this.d);
        p0.writeString(this.e);
        p0.writeString(this.f);
        p0.writeString(this.g);
        if ( this.h != null )
          v5 = this.h.toString();
        else
          v5 = null;
        p0.writeString(v5);
        if ( this.i != null )
          v6 = this.i.toString();
        else
          v6 = null;
        p0.writeString(v6);
        if ( this.j != null )
          v4 = this.j.toString();
        p0.writeString(v4);
        p0.writeInt(com.gameloft.android.DecompRT.b2i(this.k));
        if ( !this.l )
          v3 = 0;
        p0.writeInt(v3);
        p0.writeString(this.m);
        p0.writeInt(this.n);
        p0.writeInt(this.o);
        p0.writeInt(this.p);
      }
      else
      {
        GameEntityCreator.a(this, p0, p1);
      }
    }

    public final boolean x()
    {
      return this.r;
    }

    public final boolean y()
    {
      return this.x;
    }

    public final int z()
    {
      return this.a;
    }

}
