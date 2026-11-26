// Decompiled from classes.dex (SourceFile: InvitationEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

import com.google.android.gms.games.internal.GamesDowngradeableSafeParcel;
import com.google.android.gms.internal.hb;
import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.hn;
public final class InvitationEntity extends com.google.android.gms.games.internal.GamesDowngradeableSafeParcel implements com.google.android.gms.games.multiplayer.Invitation {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final int c;
    private final com.google.android.gms.games.GameEntity d;
    private final java.lang.String e;
    private final long f;
    private final int g;
    private final com.google.android.gms.games.multiplayer.ParticipantEntity h;
    private final java.util.ArrayList i;
    private final int j;
    private final int k;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.games.multiplayer.InvitationEntity$InvitationEntityCreatorCompat();
    }

    InvitationEntity(
            int p0,
            com.google.android.gms.games.GameEntity p1,
            String p2,
            long p3,
            int p5,
            com.google.android.gms.games.multiplayer.ParticipantEntity p6,
            java.util.ArrayList<com.google.android.gms.games.multiplayer.ParticipantEntity> p7,
            int p8,
            int p9)
    {
      super();
      this.c = p0;
      this.d = p1;
      this.e = p2;
      this.f = p3;
      this.g = p5;
      this.h = p6;
      this.i = p7;
      this.j = p8;
      this.k = p9;
    }

    InvitationEntity(com.google.android.gms.games.multiplayer.Invitation p0)
    {
      super();
      String v2;
      com.google.android.gms.games.multiplayer.Participant v3;
      java.util.ArrayList v4;
      int v5;
      int i;
      com.google.android.gms.games.multiplayer.Participant v7;
      this.c = 2;
      this.d = new com.google.android.gms.games.GameEntity(p0.c());
      this.e = p0.d();
      this.f = p0.f();
      this.g = p0.o_();
      this.j = p0.j();
      this.k = p0.k();
      v2 = p0.e().l();
      v3 = null;
      v4 = p0.l();
      v5 = v4.size();
      this.i = new java.util.ArrayList(v5);
      for ( i = 0; i < v5; ++i )
      {
        v7 = (com.google.android.gms.games.multiplayer.Participant)v4.get(i);
        if ( v7.l().equals(v2) )
          v3 = v7;
        this.i.add((com.google.android.gms.games.multiplayer.ParticipantEntity)v7.h());
      }
      hn.b(v3, "Must have a valid inviter!");
      this.h = (com.google.android.gms.games.multiplayer.ParticipantEntity)v3.h();
    
    }

    static int a(com.google.android.gms.games.multiplayer.Invitation p0)
    {
      Object[] v1;
      v1 = new Object[8];
      v1[0] = p0.c();
      v1[1] = p0.d();
      v1[2] = Long.valueOf(p0.f());
      v1[3] = Integer.valueOf(p0.o_());
      v1[4] = p0.e();
      v1[5] = p0.l();
      v1[6] = Integer.valueOf(p0.j());
      v1[7] = Integer.valueOf(p0.k());
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.multiplayer.Invitation p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.multiplayer.Invitation v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.multiplayer.Invitation )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.multiplayer.Invitation)p1;
          if ( hl.equal(v4.c(), p0.c())
            && hl.equal(v4.d(), p0.d())
            && hl.equal(Long.valueOf(v4.f()), Long.valueOf(p0.f()))
            && hl.equal(Integer.valueOf(v4.o_()), Integer.valueOf(p0.o_()))
            && hl.equal(v4.e(), p0.e())
            && hl.equal(v4.l(), p0.l())
            && hl.equal(Integer.valueOf(v4.j()), Integer.valueOf(p0.j())) )
          {
            return hl.equal(Integer.valueOf(v4.k()), Integer.valueOf(p0.k()));
          }
        }
      }
      return v2;
    }

    /* synthetic */ static boolean aQ(String p0)
    {
      return hb.aA(p0);
    }

    private com.google.android.gms.games.multiplayer.Invitation b()
    {
      return (com.google.android.gms.games.multiplayer.Invitation)this;
    }

    static String b(com.google.android.gms.games.multiplayer.Invitation p0)
    {
      return hl.e(p0).a("Game", p0.c()).a("InvitationId", p0.d()).a("CreationTimestamp", Long.valueOf(p0.f())).a("InvitationType", Integer.valueOf(p0.o_())).a("Inviter", p0.e()).a("Participants", p0.l()).a("Variant", Integer.valueOf(p0.j())).a("AvailableAutoMatchSlots", Integer.valueOf(p0.k())).toString();
    }

    /* synthetic */ static boolean b(Integer p0)
    {
      return GamesDowngradeableSafeParcel.c(p0);
    }

    /* synthetic */ static Integer gM()
    {
      return hb.fl();
    }

    public final int a()
    {
      return this.c;
    }

    public final com.google.android.gms.games.Game c()
    {
      return (com.google.android.gms.games.Game)this.d;
    }

    public final String d()
    {
      return this.e;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final com.google.android.gms.games.multiplayer.Participant e()
    {
      return (com.google.android.gms.games.multiplayer.Participant)this.h;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.multiplayer.Invitation)this, p0);
    }

    public final long f()
    {
      return this.f;
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.multiplayer.Invitation)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final int j()
    {
      return this.j;
    }

    public final int k()
    {
      return this.k;
    }

    public final java.util.ArrayList<com.google.android.gms.games.multiplayer.Participant> l()
    {
      return new java.util.ArrayList(this.i);
    }

    public final int o_()
    {
      return this.g;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.multiplayer.Invitation)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      int v3;
      int i;
      if ( this.A() )
      {
        this.d.writeToParcel(p0, p1);
        p0.writeString(this.e);
        p0.writeLong(this.f);
        p0.writeInt(this.g);
        this.h.writeToParcel(p0, p1);
        v3 = this.i.size();
        p0.writeInt(v3);
        for ( i = 0; i < v3; ++i )
          ((com.google.android.gms.games.multiplayer.ParticipantEntity)this.i.get(i)).writeToParcel(p0, p1);
      }
      else
      {
        InvitationEntityCreator.a(this, p0, p1);
      }
    }

}
