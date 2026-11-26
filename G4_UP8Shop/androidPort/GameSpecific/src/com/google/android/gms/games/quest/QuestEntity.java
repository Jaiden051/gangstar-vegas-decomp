// Decompiled from classes.dex (SourceFile: QuestEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.quest;

import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.il;
public final class QuestEntity implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.games.quest.Quest {
    // Fields
    public static final com.google.android.gms.games.quest.QuestEntityCreator CREATOR;
    private final int j;
    private final com.google.android.gms.games.GameEntity k;
    private final java.lang.String l;
    private final long m;
    private final android.net.Uri n;
    private final java.lang.String o;
    private final java.lang.String p;
    private final long q;
    private final long r;
    private final android.net.Uri s;
    private final java.lang.String t;
    private final java.lang.String u;
    private final long v;
    private final long w;
    private final int x;
    private final int y;
    private final java.util.ArrayList z;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.quest.QuestEntityCreator();
    }

    QuestEntity(
            int p0,
            com.google.android.gms.games.GameEntity p1,
            String p2,
            long p3,
            android.net.Uri p5,
            String p6,
            String p7,
            long p8,
            long p10,
            android.net.Uri p12,
            String p13,
            String p14,
            long p15,
            long p17,
            int p19,
            int p20,
            java.util.ArrayList<com.google.android.gms.games.quest.MilestoneEntity> p21)
    {
      super();
      this.j = p0;
      this.k = p1;
      this.l = p2;
      this.m = p3;
      this.n = p5;
      this.o = p6;
      this.p = p7;
      this.q = p8;
      this.r = p10;
      this.s = p12;
      this.t = p13;
      this.u = p14;
      this.v = p15;
      this.w = p17;
      this.x = p19;
      this.y = p20;
      this.z = p21;
    }

    public QuestEntity(com.google.android.gms.games.quest.Quest p0)
    {
      super();
      java.util.List v2;
      int v3;
      int i;
      this.j = 2;
      this.k = new com.google.android.gms.games.GameEntity(p0.l());
      this.l = p0.a();
      this.m = p0.o();
      this.p = p0.c();
      this.n = p0.d();
      this.o = p0.e();
      this.q = p0.p();
      this.s = p0.f();
      this.t = p0.w_();
      this.r = p0.q();
      this.u = p0.b();
      this.v = p0.r();
      this.w = p0.s();
      this.x = p0.m();
      this.y = p0.n();
      v2 = p0.k();
      v3 = v2.size();
      this.z = new java.util.ArrayList(v3);
      for ( i = 0; i < v3; ++i )
        this.z.add((com.google.android.gms.games.quest.MilestoneEntity)((com.google.android.gms.games.quest.Milestone)v2.get(i)).h());
    
    }

    static int a(com.google.android.gms.games.quest.Quest p0)
    {
      Object[] v1;
      v1 = new Object[13];
      v1[0] = p0.l();
      v1[1] = p0.a();
      v1[2] = Long.valueOf(p0.o());
      v1[3] = p0.d();
      v1[4] = p0.c();
      v1[5] = Long.valueOf(p0.p());
      v1[6] = p0.f();
      v1[7] = Long.valueOf(p0.q());
      v1[8] = p0.k();
      v1[9] = p0.b();
      v1[10] = Long.valueOf(p0.r());
      v1[11] = Long.valueOf(p0.s());
      v1[12] = Integer.valueOf(p0.m());
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.quest.Quest p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.quest.Quest v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.quest.Quest )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.quest.Quest)p1;
          if ( hl.equal(v4.l(), p0.l())
            && hl.equal(v4.a(), p0.a())
            && hl.equal(Long.valueOf(v4.o()), Long.valueOf(p0.o()))
            && hl.equal(v4.d(), p0.d())
            && hl.equal(v4.c(), p0.c())
            && hl.equal(Long.valueOf(v4.p()), Long.valueOf(p0.p()))
            && hl.equal(v4.f(), p0.f())
            && hl.equal(Long.valueOf(v4.q()), Long.valueOf(p0.q()))
            && hl.equal(v4.k(), p0.k())
            && hl.equal(v4.b(), p0.b())
            && hl.equal(Long.valueOf(v4.r()), Long.valueOf(p0.r()))
            && hl.equal(Long.valueOf(v4.s()), Long.valueOf(p0.s())) )
          {
            return hl.equal(Integer.valueOf(v4.m()), Integer.valueOf(p0.m()));
          }
        }
      }
      return v2;
    }

    static String b(com.google.android.gms.games.quest.Quest p0)
    {
      return hl.e(p0).a("Game", p0.l()).a("QuestId", p0.a()).a("AcceptedTimestamp", Long.valueOf(p0.o())).a("BannerImageUri", p0.d()).a("BannerImageUrl", p0.e()).a("Description", p0.c()).a("EndTimestamp", Long.valueOf(p0.p())).a("IconImageUri", p0.f()).a("IconImageUrl", p0.w_()).a("LastUpdatedTimestamp", Long.valueOf(p0.q())).a("Milestones", p0.k()).a("Name", p0.b()).a("NotifyTimestamp", Long.valueOf(p0.r())).a("StartTimestamp", Long.valueOf(p0.s())).a("State", Integer.valueOf(p0.m())).toString();
    }

    private com.google.android.gms.games.quest.Quest v()
    {
      return (com.google.android.gms.games.quest.Quest)this;
    }

    public final String a()
    {
      return this.l;
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      il.b(this.u, p0);
    }

    public final String b()
    {
      return this.u;
    }

    public final void b(android.database.CharArrayBuffer p0)
    {
      il.b(this.p, p0);
    }

    public final String c()
    {
      return this.p;
    }

    public final android.net.Uri d()
    {
      return this.n;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.o;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.quest.Quest)this, p0);
    }

    public final android.net.Uri f()
    {
      return this.s;
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.quest.Quest)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final com.google.android.gms.games.quest.Milestone j()
    {
      return (com.google.android.gms.games.quest.Milestone)this.k().get(0);
    }

    public final java.util.List<com.google.android.gms.games.quest.Milestone> k()
    {
      return new java.util.ArrayList(this.z);
    }

    public final com.google.android.gms.games.Game l()
    {
      return (com.google.android.gms.games.Game)this.k;
    }

    public final int m()
    {
      return this.x;
    }

    public final int n()
    {
      return this.y;
    }

    public final long o()
    {
      return this.m;
    }

    public final long p()
    {
      return this.q;
    }

    public final long q()
    {
      return this.r;
    }

    public final long r()
    {
      return this.v;
    }

    public final long s()
    {
      return this.w;
    }

    public final boolean t()
    {
      return this.v <= System.currentTimeMillis() + 1800000;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.quest.Quest)this);
    }

    public final int u()
    {
      return this.j;
    }

    public final String w_()
    {
      return this.t;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      QuestEntityCreator.a(this, p0, p1);
    }

}
