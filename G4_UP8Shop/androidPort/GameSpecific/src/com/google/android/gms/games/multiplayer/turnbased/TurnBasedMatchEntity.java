// Decompiled from classes.dex (SourceFile: TurnBasedMatchEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.turnbased;

import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.il;
public final class TurnBasedMatchEntity implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch {
    // Fields
    public static final com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchEntityCreator CREATOR;
    private final int A;
    private final android.os.Bundle B;
    private final int C;
    private final boolean D;
    private final java.lang.String E;
    private final java.lang.String F;
    private final int l;
    private final com.google.android.gms.games.GameEntity m;
    private final java.lang.String n;
    private final java.lang.String o;
    private final long p;
    private final java.lang.String q;
    private final long r;
    private final java.lang.String s;
    private final int t;
    private final int u;
    private final int v;
    private final byte[] w;
    private final java.util.ArrayList x;
    private final java.lang.String y;
    private final byte[] z;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchEntityCreator();
    }

    TurnBasedMatchEntity(
            int p0,
            com.google.android.gms.games.GameEntity p1,
            String p2,
            String p3,
            long p4,
            String p6,
            long p7,
            String p9,
            int p10,
            int p11,
            int p12,
            byte[] p13,
            java.util.ArrayList<com.google.android.gms.games.multiplayer.ParticipantEntity> p14,
            String p15,
            byte[] p16,
            int p17,
            android.os.Bundle p18,
            int p19,
            boolean p20,
            String p21,
            String p22)
    {
      super();
      this.l = p0;
      this.m = p1;
      this.n = p2;
      this.o = p3;
      this.p = p4;
      this.q = p6;
      this.r = p7;
      this.s = p9;
      this.t = p10;
      this.C = p19;
      this.u = p11;
      this.v = p12;
      this.w = (byte[])p13;
      this.x = p14;
      this.y = p15;
      this.z = (byte[])p16;
      this.A = p17;
      this.B = p18;
      this.D = p20;
      this.E = p21;
      this.F = p22;
    }

    public TurnBasedMatchEntity(com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch p0)
    {
      super();
      byte[] v2; // RETVAL
      byte[] v3; // RETVAL
      java.util.ArrayList v4;
      int v5;
      int i;
      this.l = 2;
      this.m = new com.google.android.gms.games.GameEntity(p0.a());
      this.n = p0.b();
      this.o = p0.c();
      this.p = p0.d();
      this.q = p0.k();
      this.r = p0.m();
      this.s = p0.n();
      this.t = p0.e();
      this.C = p0.f();
      this.u = p0.j();
      this.v = p0.p();
      this.y = p0.r();
      this.A = p0.t();
      this.B = p0.u();
      this.D = p0.w();
      this.E = p0.v_();
      this.F = p0.y();
      v2 = p0.o();
      if ( v2 != null )
      {
        this.w = new byte[v2.length];
        System.arraycopy(v2, 0, this.w, 0, v2.length);
      }
      else
      {
        this.w = null;
      }
      v3 = p0.s();
      if ( v3 != null )
      {
        this.z = new byte[v3.length];
        System.arraycopy(v3, 0, this.z, 0, v3.length);
      }
      else
      {
        this.z = null;
      }
      v4 = p0.l();
      v5 = v4.size();
      this.x = new java.util.ArrayList(v5);
      for ( i = 0; i < v5; ++i )
        this.x.add((com.google.android.gms.games.multiplayer.ParticipantEntity)((com.google.android.gms.games.multiplayer.Participant)v4.get(i)).h());
    
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch B()
    {
      return (com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this;
    }

    static int a(com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch p0)
    {
      Object[] v1;
      v1 = new Object[18];
      v1[0] = p0.a();
      v1[1] = p0.b();
      v1[2] = p0.c();
      v1[3] = Long.valueOf(p0.d());
      v1[4] = p0.k();
      v1[5] = Long.valueOf(p0.m());
      v1[6] = p0.n();
      v1[7] = Integer.valueOf(p0.e());
      v1[8] = Integer.valueOf(p0.f());
      v1[9] = p0.v_();
      v1[10] = Integer.valueOf(p0.j());
      v1[11] = Integer.valueOf(p0.p());
      v1[12] = p0.l();
      v1[13] = p0.r();
      v1[14] = Integer.valueOf(p0.t());
      v1[15] = p0.u();
      v1[16] = Integer.valueOf(p0.v());
      v1[17] = Boolean.valueOf(p0.w());
      return hl.hashCode(v1);
    }

    static int a(com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch p0, String p1)
    {
      java.util.ArrayList v2;
      int v3;
      int i;
      com.google.android.gms.games.multiplayer.Participant v5;
      v2 = p0.l();
      v3 = v2.size();
      for ( i = 0; ; ++i )
      {
        if ( i >= v3 )
          throw new IllegalStateException("Participant " + p1 + " is not in match " + p0.b());
        v5 = (com.google.android.gms.games.multiplayer.Participant)v2.get(i);
        if ( v5.l().equals(p1) )
          break;
      }
      return v5.a();
    }

    static boolean a(com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)p1;
          if ( hl.equal(v4.a(), p0.a())
            && hl.equal(v4.b(), p0.b())
            && hl.equal(v4.c(), p0.c())
            && hl.equal(Long.valueOf(v4.d()), Long.valueOf(p0.d()))
            && hl.equal(v4.k(), p0.k())
            && hl.equal(Long.valueOf(v4.m()), Long.valueOf(p0.m()))
            && hl.equal(v4.n(), p0.n())
            && hl.equal(Integer.valueOf(v4.e()), Integer.valueOf(p0.e()))
            && hl.equal(Integer.valueOf(v4.f()), Integer.valueOf(p0.f()))
            && hl.equal(v4.v_(), p0.v_())
            && hl.equal(Integer.valueOf(v4.j()), Integer.valueOf(p0.j()))
            && hl.equal(Integer.valueOf(v4.p()), Integer.valueOf(p0.p()))
            && hl.equal(v4.l(), p0.l())
            && hl.equal(v4.r(), p0.r())
            && hl.equal(Integer.valueOf(v4.t()), Integer.valueOf(p0.t()))
            && hl.equal(v4.u(), p0.u())
            && hl.equal(Integer.valueOf(v4.v()), Integer.valueOf(p0.v())) )
          {
            return hl.equal(Boolean.valueOf(v4.w()), Boolean.valueOf(p0.w()));
          }
        }
      }
      return v2;
    }

    static String b(com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch p0)
    {
      return hl.e(p0).a("Game", p0.a()).a("MatchId", p0.b()).a("CreatorId", p0.c()).a("CreationTimestamp", Long.valueOf(p0.d())).a("LastUpdaterId", p0.k()).a("LastUpdatedTimestamp", Long.valueOf(p0.m())).a("PendingParticipantId", p0.n()).a("MatchStatus", Integer.valueOf(p0.e())).a("TurnStatus", Integer.valueOf(p0.f())).a("Description", p0.v_()).a("Variant", Integer.valueOf(p0.j())).a("Data", p0.o()).a("Version", Integer.valueOf(p0.p())).a("Participants", p0.l()).a("RematchId", p0.r()).a("PreviousData", p0.s()).a("MatchNumber", Integer.valueOf(p0.t())).a("AutoMatchCriteria", p0.u()).a("AvailableAutoMatchSlots", Integer.valueOf(p0.v())).a("LocallyModified", Boolean.valueOf(p0.w())).a("DescriptionParticipantId", p0.y()).toString();
    }

    static String b(com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch p0, String p1)
    {
      java.util.ArrayList v2;
      int v3;
      int i;
      com.google.android.gms.games.multiplayer.Participant v5;
      com.google.android.gms.games.Player v6; // RETVAL
    
      v2 = p0.l();
      v3 = v2.size();
      for ( i = 0; i < v3; ++i )
      {
        v5 = (com.google.android.gms.games.multiplayer.Participant)v2.get(i);
        v6 = v5.m();
        if ( v6 != null && v6.a().equals(p1) )
          return v5.l();
      }
      return null;
    }

    static com.google.android.gms.games.multiplayer.Participant c(
            com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch p0,
            String p1)
    {
      java.util.ArrayList v2;
      int v3;
      int i;
      com.google.android.gms.games.multiplayer.Participant v5;
      v2 = p0.l();
      v3 = v2.size();
      for ( i = 0; ; ++i )
      {
        if ( i >= v3 )
          throw new IllegalStateException("Participant " + p1 + " is not in match " + p0.b());
        v5 = (com.google.android.gms.games.multiplayer.Participant)v2.get(i);
        if ( v5.l().equals(p1) )
          break;
      }
      return v5;
    }

    static java.util.ArrayList<String> c(
            com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch p0)
    {
      java.util.ArrayList v1;
      int v2;
      java.util.ArrayList v3;
      int i;
      v1 = p0.l();
      v2 = v1.size();
      v3 = new java.util.ArrayList(v2);
      for ( i = 0; i < v2; ++i )
        v3.add(((com.google.android.gms.games.multiplayer.Participant)v1.get(i)).l());
      return v3;
    }

    public final int A()
    {
      return this.l;
    }

    public final com.google.android.gms.games.Game a()
    {
      return (com.google.android.gms.games.Game)this.m;
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      il.b(this.E, p0);
    }

    public final String b()
    {
      return this.n;
    }

    public final String c()
    {
      return this.o;
    }

    public final long d()
    {
      return this.p;
    }

    public final int d_(String p0)
    {
      return a((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this, p0);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final int e()
    {
      return this.t;
    }

    public final String e_(String p0)
    {
      return b((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this, p0);
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this, p0);
    }

    public final int f()
    {
      return this.C;
    }

    public final com.google.android.gms.games.multiplayer.Participant f_(String p0)
    {
      return c((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this, p0);
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final int j()
    {
      return this.u;
    }

    public final String k()
    {
      return this.q;
    }

    public final java.util.ArrayList<com.google.android.gms.games.multiplayer.Participant> l()
    {
      return new java.util.ArrayList(this.x);
    }

    public final long m()
    {
      return this.r;
    }

    public final String n()
    {
      return this.s;
    }

    public final byte[] o()
    {
      return this.w;
    }

    public final int p()
    {
      return this.v;
    }

    public final boolean q()
    {
      return this.t == 2 && this.y == null;
    }

    public final String r()
    {
      return this.y;
    }

    public final byte[] s()
    {
      return this.z;
    }

    public final int t()
    {
      return this.A;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this);
    }

    public final android.os.Bundle u()
    {
      return this.B;
    }

    public final int v()
    {
      if ( this.B != null )
        return this.B.getInt("max_automatch_players");
      else
        return 0;
    }

    public final String v_()
    {
      return this.E;
    }

    public final boolean w()
    {
      return this.D;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      TurnBasedMatchEntityCreator.a(this, p0, p1);
    }

    public final java.util.ArrayList<String> x()
    {
      return c((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this);
    }

    public final String y()
    {
      return this.F;
    }

    public final com.google.android.gms.games.multiplayer.Participant z()
    {
      return c((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this, this.F);
    }

}
