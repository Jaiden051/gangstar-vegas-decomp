// Decompiled from classes.dex (SourceFile: ParticipantEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

import com.google.android.gms.common.api.Status;
import com.google.android.gms.games.internal.GamesDowngradeableSafeParcel;
import com.google.android.gms.internal.hb;
import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.il;
public final class ParticipantEntity extends com.google.android.gms.games.internal.GamesDowngradeableSafeParcel implements com.google.android.gms.games.multiplayer.Participant {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final int h;
    private final java.lang.String i;
    private final java.lang.String j;
    private final android.net.Uri k;
    private final android.net.Uri l;
    private final int m;
    private final java.lang.String n;
    private final boolean o;
    private final com.google.android.gms.games.PlayerEntity p;
    private final int q;
    private final com.google.android.gms.games.multiplayer.ParticipantResult r;
    private final java.lang.String s;
    private final java.lang.String t;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.games.multiplayer.ParticipantEntity$ParticipantEntityCreatorCompat();
    }

    ParticipantEntity(
            int p0,
            String p1,
            String p2,
            android.net.Uri p3,
            android.net.Uri p4,
            int p5,
            String p6,
            boolean p7,
            com.google.android.gms.games.PlayerEntity p8,
            int p9,
            com.google.android.gms.games.multiplayer.ParticipantResult p10,
            String p11,
            String p12)
    {
      super();
      this.h = p0;
      this.i = p1;
      this.j = p2;
      this.k = p3;
      this.l = p4;
      this.m = p5;
      this.n = p6;
      this.o = p7;
      this.p = p8;
      this.q = p9;
      this.r = p10;
      this.s = p11;
      this.t = p12;
    }

    public ParticipantEntity(com.google.android.gms.games.multiplayer.Participant p0)
    {
      super();
      com.google.android.gms.games.Player v2; // RETVAL
      com.google.android.gms.games.PlayerEntity v3;
      this.h = 3;
      this.i = p0.l();
      this.j = p0.e();
      this.k = p0.f();
      this.l = p0.j();
      this.m = p0.a();
      this.n = p0.b();
      this.o = p0.d();
      v2 = p0.m();
      if ( v2 != null )
        v3 = new com.google.android.gms.games.PlayerEntity(v2);
      else
        v3 = null;
      this.p = v3;
      this.q = p0.c();
      this.r = p0.n();
      this.s = p0.p_();
      this.t = p0.k();
    
    }

    static int a(com.google.android.gms.games.multiplayer.Participant p0)
    {
      Object[] v1;
      v1 = new Object[10];
      v1[0] = p0.m();
      v1[1] = Integer.valueOf(p0.a());
      v1[2] = p0.b();
      v1[3] = Boolean.valueOf(p0.d());
      v1[4] = p0.e();
      v1[5] = p0.f();
      v1[6] = p0.j();
      v1[7] = Integer.valueOf(p0.c());
      v1[8] = p0.n();
      v1[9] = p0.l();
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.multiplayer.Participant p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.multiplayer.Participant v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.multiplayer.Participant )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.multiplayer.Participant)p1;
          if ( hl.equal(v4.m(), p0.m())
            && hl.equal(Integer.valueOf(v4.a()), Integer.valueOf(p0.a()))
            && hl.equal(v4.b(), p0.b())
            && hl.equal(Boolean.valueOf(v4.d()), Boolean.valueOf(p0.d()))
            && hl.equal(v4.e(), p0.e())
            && hl.equal(v4.f(), p0.f())
            && hl.equal(v4.j(), p0.j())
            && hl.equal(Integer.valueOf(v4.c()), Integer.valueOf(p0.c()))
            && hl.equal(v4.n(), p0.n()) )
          {
            return hl.equal(v4.l(), p0.l());
          }
        }
      }
      return v2;
    }

    /* synthetic */ static boolean aQ(String p0)
    {
      return hb.aA(p0);
    }

    static String b(com.google.android.gms.games.multiplayer.Participant p0)
    {
      return hl.e(p0).a("ParticipantId", p0.l()).a("Player", p0.m()).a("Status", Integer.valueOf(p0.a())).a("ClientAddress", p0.b()).a("ConnectedToRoom", Boolean.valueOf(p0.d())).a("DisplayName", p0.e()).a("IconImage", p0.f()).a("IconImageUrl", p0.p_()).a("HiResImage", p0.j()).a("HiResImageUrl", p0.k()).a("Capabilities", Integer.valueOf(p0.c())).a("Result", p0.n()).toString();
    }

    /* synthetic */ static boolean b(Integer p0)
    {
      return GamesDowngradeableSafeParcel.c(p0);
    }

    /* synthetic */ static Integer gM()
    {
      return hb.fl();
    }

    private com.google.android.gms.games.multiplayer.Participant p()
    {
      return (com.google.android.gms.games.multiplayer.Participant)this;
    }

    public final int a()
    {
      return this.m;
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      if ( this.p != null )
        this.p.a(p0);
      else
        il.b(this.j, p0);
    }

    public final String b()
    {
      return this.n;
    }

    public final int c()
    {
      return this.q;
    }

    public final boolean d()
    {
      return this.o;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      if ( this.p != null )
        return this.p.b();
      else
        return this.j;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.multiplayer.Participant)this, p0);
    }

    public final android.net.Uri f()
    {
      if ( this.p != null )
        return this.p.d();
      else
        return this.k;
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.multiplayer.Participant)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final android.net.Uri j()
    {
      if ( this.p != null )
        return this.p.g_();
      else
        return this.l;
    }

    public final String k()
    {
      if ( this.p != null )
        return this.p.j();
      else
        return this.t;
    }

    public final String l()
    {
      return this.i;
    }

    public final com.google.android.gms.games.Player m()
    {
      return (com.google.android.gms.games.Player)this.p;
    }

    public final com.google.android.gms.games.multiplayer.ParticipantResult n()
    {
      return this.r;
    }

    public final int o()
    {
      return this.h;
    }

    public final String p_()
    {
      if ( this.p != null )
        return this.p.e();
      else
        return this.s;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.multiplayer.Participant)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      String v3;
      int v4;
      String v5;
      v3 = null;
      v4 = 0;
      if ( this.A() )
      {
        p0.writeString(this.i);
        p0.writeString(this.j);
        if ( this.k != null )
          v5 = this.k.toString();
        else
          v5 = null;
        p0.writeString(v5);
        if ( this.l != null )
          v3 = this.l.toString();
        p0.writeString(v3);
        p0.writeInt(this.m);
        p0.writeString(this.n);
        p0.writeInt(com.gameloft.android.DecompRT.b2i(this.o));
        if ( this.p != null )
          v4 = 1;
        p0.writeInt(v4);
        if ( this.p != null )
          this.p.writeToParcel(p0, p1);
      }
      else
      {
        ParticipantEntityCreator.a(this, p0, p1);
      }
    }

}
