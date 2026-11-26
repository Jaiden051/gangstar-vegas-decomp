// Decompiled from classes.dex (SourceFile: MilestoneRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.quest;

public final class MilestoneRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.quest.Milestone {
    // Methods
    MilestoneRef(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
    }

    private long j()
    {
      return this.b("initial_value");
    }

    private com.google.android.gms.games.quest.Milestone k()
    {
      return (com.google.android.gms.games.quest.Milestone)new com.google.android.gms.games.quest.MilestoneEntity((com.google.android.gms.games.quest.Milestone)this);
    }

    public final String a()
    {
      return this.e("external_milestone_id");
    }

    public final long b()
    {
      long v1;
      v1 = 0;
      switch ( this.c("milestone_state") )
      {
        case 2:
          v1 = this.b("current_value") - this.b("initial_value");
          break;
        case 3:
        case 4:
          v1 = this.b("target_value");
          break;
        default:
          return v1;
      }
      return v1;
    }

    public final String c()
    {
      return this.e("external_event_id");
    }

    public final int d()
    {
      return this.c("milestone_state");
    }

    public final int describeContents()
    {
      return 0;
    }

    public final long e()
    {
      return this.b("target_value");
    }

    public final boolean equals(Object p0)
    {
      return MilestoneEntity.a((com.google.android.gms.games.quest.Milestone)this, p0);
    }

    public final byte[] f()
    {
      return this.g("completion_reward_data");
    }

    /* synthetic */ public final Object h()
    {
      return this.k();
    }

    public final int hashCode()
    {
      return MilestoneEntity.a((com.google.android.gms.games.quest.Milestone)this);
    }

    public final String toString()
    {
      return MilestoneEntity.b((com.google.android.gms.games.quest.Milestone)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.quest.MilestoneEntity)this.k()).writeToParcel(p0, p1);
    }

}
