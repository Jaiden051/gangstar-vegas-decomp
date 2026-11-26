// Decompiled from classes.dex (SourceFile: RoomEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.realtime;

import com.google.android.gms.games.internal.GamesDowngradeableSafeParcel;
import com.google.android.gms.internal.hb;
import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.il;
public final class RoomEntity extends com.google.android.gms.games.internal.GamesDowngradeableSafeParcel implements com.google.android.gms.games.multiplayer.realtime.Room {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final int f;
    private final java.lang.String g;
    private final java.lang.String h;
    private final long i;
    private final int j;
    private final java.lang.String k;
    private final int l;
    private final android.os.Bundle m;
    private final java.util.ArrayList n;
    private final int o;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.games.multiplayer.realtime.RoomEntity$RoomEntityCreatorCompat();
    }

    RoomEntity(
            int p0,
            String p1,
            String p2,
            long p3,
            int p5,
            String p6,
            int p7,
            android.os.Bundle p8,
            java.util.ArrayList<com.google.android.gms.games.multiplayer.ParticipantEntity> p9,
            int p10)
    {
      super();
      this.f = p0;
      this.g = p1;
      this.h = p2;
      this.i = p3;
      this.j = p5;
      this.k = p6;
      this.l = p7;
      this.m = p8;
      this.n = p9;
      this.o = p10;
    }

    public RoomEntity(com.google.android.gms.games.multiplayer.realtime.Room p0)
    {
      super();
      java.util.ArrayList v2;
      int v3;
      int i;
      this.f = 2;
      this.g = p0.a();
      this.h = p0.b();
      this.i = p0.c();
      this.j = p0.d();
      this.k = p0.e();
      this.l = p0.f();
      this.m = p0.q_();
      v2 = p0.l();
      v3 = v2.size();
      this.n = new java.util.ArrayList(v3);
      for ( i = 0; i < v3; ++i )
        this.n.add((com.google.android.gms.games.multiplayer.ParticipantEntity)((com.google.android.gms.games.multiplayer.Participant)v2.get(i)).h());
      this.o = p0.j();
    
    }

    static int a(com.google.android.gms.games.multiplayer.realtime.Room p0)
    {
      Object[] v1;
      v1 = new Object[9];
      v1[0] = p0.a();
      v1[1] = p0.b();
      v1[2] = Long.valueOf(p0.c());
      v1[3] = Integer.valueOf(p0.d());
      v1[4] = p0.e();
      v1[5] = Integer.valueOf(p0.f());
      v1[6] = p0.q_();
      v1[7] = p0.l();
      v1[8] = Integer.valueOf(p0.j());
      return hl.hashCode(v1);
    }

    static int a(com.google.android.gms.games.multiplayer.realtime.Room p0, String p1)
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
          throw new IllegalStateException("Participant " + p1 + " is not in room " + p0.a());
        v5 = (com.google.android.gms.games.multiplayer.Participant)v2.get(i);
        if ( v5.l().equals(p1) )
          break;
      }
      return v5.a();
    }

    static boolean a(com.google.android.gms.games.multiplayer.realtime.Room p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.multiplayer.realtime.Room v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.multiplayer.realtime.Room )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.multiplayer.realtime.Room)p1;
          if ( hl.equal(v4.a(), p0.a())
            && hl.equal(v4.b(), p0.b())
            && hl.equal(Long.valueOf(v4.c()), Long.valueOf(p0.c()))
            && hl.equal(Integer.valueOf(v4.d()), Integer.valueOf(p0.d()))
            && hl.equal(v4.e(), p0.e())
            && hl.equal(Integer.valueOf(v4.f()), Integer.valueOf(p0.f()))
            && hl.equal(v4.q_(), p0.q_())
            && hl.equal(v4.l(), p0.l()) )
          {
            return hl.equal(Integer.valueOf(v4.j()), Integer.valueOf(p0.j()));
          }
        }
      }
      return v2;
    }

    /* synthetic */ static boolean aQ(String p0)
    {
      return hb.aA(p0);
    }

    static String b(com.google.android.gms.games.multiplayer.realtime.Room p0)
    {
      return hl.e(p0).a("RoomId", p0.a()).a("CreatorId", p0.b()).a("CreationTimestamp", Long.valueOf(p0.c())).a("RoomStatus", Integer.valueOf(p0.d())).a("Description", p0.e()).a("Variant", Integer.valueOf(p0.f())).a("AutoMatchCriteria", p0.q_()).a("Participants", p0.l()).a("AutoMatchWaitEstimateSeconds", Integer.valueOf(p0.j())).toString();
    }

    static String b(com.google.android.gms.games.multiplayer.realtime.Room p0, String p1)
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

    /* synthetic */ static boolean b(Integer p0)
    {
      return GamesDowngradeableSafeParcel.c(p0);
    }

    static com.google.android.gms.games.multiplayer.Participant c(
            com.google.android.gms.games.multiplayer.realtime.Room p0,
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
          throw new IllegalStateException("Participant " + p1 + " is not in match " + p0.a());
        v5 = (com.google.android.gms.games.multiplayer.Participant)v2.get(i);
        if ( v5.l().equals(p1) )
          break;
      }
      return v5;
    }

    static java.util.ArrayList<String> c(com.google.android.gms.games.multiplayer.realtime.Room p0)
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

    /* synthetic */ static Integer gM()
    {
      return hb.fl();
    }

    private com.google.android.gms.games.multiplayer.realtime.Room n()
    {
      return (com.google.android.gms.games.multiplayer.realtime.Room)this;
    }

    public final String a()
    {
      return this.g;
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      il.b(this.k, p0);
    }

    public final int a_(String p0)
    {
      return a((com.google.android.gms.games.multiplayer.realtime.Room)this, p0);
    }

    public final String b()
    {
      return this.h;
    }

    public final String b_(String p0)
    {
      return b((com.google.android.gms.games.multiplayer.realtime.Room)this, p0);
    }

    public final long c()
    {
      return this.i;
    }

    public final com.google.android.gms.games.multiplayer.Participant c_(String p0)
    {
      return c((com.google.android.gms.games.multiplayer.realtime.Room)this, p0);
    }

    public final int d()
    {
      return this.j;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.k;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.multiplayer.realtime.Room)this, p0);
    }

    public final int f()
    {
      return this.l;
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.multiplayer.realtime.Room)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final int j()
    {
      return this.o;
    }

    public final java.util.ArrayList<String> k()
    {
      return c((com.google.android.gms.games.multiplayer.realtime.Room)this);
    }

    public final java.util.ArrayList<com.google.android.gms.games.multiplayer.Participant> l()
    {
      return new java.util.ArrayList(this.n);
    }

    public final int m()
    {
      return this.f;
    }

    public final android.os.Bundle q_()
    {
      return this.m;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.multiplayer.realtime.Room)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      int v3;
      int i;
      if ( this.A() )
      {
        p0.writeString(this.g);
        p0.writeString(this.h);
        p0.writeLong(this.i);
        p0.writeInt(this.j);
        p0.writeString(this.k);
        p0.writeInt(this.l);
        p0.writeBundle(this.m);
        v3 = this.n.size();
        p0.writeInt(v3);
        for ( i = 0; i < v3; ++i )
          ((com.google.android.gms.games.multiplayer.ParticipantEntity)this.n.get(i)).writeToParcel(p0, p1);
      }
      else
      {
        RoomEntityCreator.a(this, p0, p1);
      }
    }

}
