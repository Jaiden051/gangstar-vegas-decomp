// Decompiled from classes.dex (SourceFile: MilestoneEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.quest;

import com.google.android.gms.internal.hl;
public final class MilestoneEntity implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.games.quest.Milestone {
    // Fields
    public static final com.google.android.gms.games.quest.MilestoneEntityCreator CREATOR;
    private final int f;
    private final java.lang.String g;
    private final long h;
    private final long i;
    private final byte[] j;
    private final int k;
    private final java.lang.String l;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.quest.MilestoneEntityCreator();
    }

    MilestoneEntity(int p0, String p1, long p2, long p4, byte[] p6, int p7, String p8)
    {
      super();
      this.f = p0;
      this.g = p1;
      this.h = p2;
      this.i = p4;
      this.j = (byte[])p6;
      this.k = p7;
      this.l = p8;
    }

    public MilestoneEntity(com.google.android.gms.games.quest.Milestone p0)
    {
      super();
      byte[] v2; // RETVAL
      this.f = 4;
      this.g = p0.a();
      this.h = p0.b();
      this.i = p0.e();
      this.k = p0.d();
      this.l = p0.c();
      v2 = p0.f();
      if ( v2 != null )
      {
        this.j = new byte[v2.length];
        System.arraycopy(v2, 0, this.j, 0, v2.length);
      }
      else
      {
        this.j = null;
      }
    
    }

    static int a(com.google.android.gms.games.quest.Milestone p0)
    {
      Object[] v1;
      v1 = new Object[5];
      v1[0] = p0.a();
      v1[1] = Long.valueOf(p0.b());
      v1[2] = Long.valueOf(p0.e());
      v1[3] = Integer.valueOf(p0.d());
      v1[4] = p0.c();
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.quest.Milestone p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.quest.Milestone v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.quest.Milestone )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.quest.Milestone)p1;
          if ( hl.equal(v4.a(), p0.a())
            && hl.equal(Long.valueOf(v4.b()), Long.valueOf(p0.b()))
            && hl.equal(Long.valueOf(v4.e()), Long.valueOf(p0.e()))
            && hl.equal(Integer.valueOf(v4.d()), Integer.valueOf(p0.d())) )
          {
            return hl.equal(v4.c(), p0.c());
          }
        }
      }
      return v2;
    }

    static String b(com.google.android.gms.games.quest.Milestone p0)
    {
      return hl.e(p0).a("MilestoneId", p0.a()).a("CurrentProgress", Long.valueOf(p0.b())).a("TargetProgress", Long.valueOf(p0.e())).a("State", Integer.valueOf(p0.d())).a("CompletionRewardData", p0.f()).a("EventId", p0.c()).toString();
    }

    private com.google.android.gms.games.quest.Milestone j()
    {
      return (com.google.android.gms.games.quest.Milestone)this;
    }

    public final String a()
    {
      return this.g;
    }

    public final long b()
    {
      return this.h;
    }

    public final String c()
    {
      return this.l;
    }

    public final int d()
    {
      return this.k;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final long e()
    {
      return this.i;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.quest.Milestone)this, p0);
    }

    public final byte[] f()
    {
      return this.j;
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.quest.Milestone)this);
    }

    public final int i()
    {
      return this.f;
    }

    public final boolean i_()
    {
      return true;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.quest.Milestone)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      MilestoneEntityCreator.a(this, p0, p1);
    }

}
