// Decompiled from classes.dex (SourceFile: TurnBasedMatchRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.turnbased;

public final class TurnBasedMatchRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch {
    // Fields
    private final com.google.android.gms.games.Game l;
    private final int m;

    // Methods
    TurnBasedMatchRef(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      super(p0, p1);
      this.l = (com.google.android.gms.games.Game)new com.google.android.gms.games.GameRef(p0, p1);
      this.m = p2;
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch A()
    {
      return (com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchEntity((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this);
    }

    public final com.google.android.gms.games.Game a()
    {
      return this.l;
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      this.a("description", p0);
    }

    public final String b()
    {
      return this.e("external_match_id");
    }

    public final String c()
    {
      return this.e("creator_external");
    }

    public final long d()
    {
      return this.b("creation_timestamp");
    }

    public final int d_(String p0)
    {
      return TurnBasedMatchEntity.a((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this, p0);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final int e()
    {
      return this.c("status");
    }

    public final String e_(String p0)
    {
      return TurnBasedMatchEntity.b((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this, p0);
    }

    public final boolean equals(Object p0)
    {
      return TurnBasedMatchEntity.a((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this, p0);
    }

    public final int f()
    {
      return this.c("user_match_status");
    }

    public final com.google.android.gms.games.multiplayer.Participant f_(String p0)
    {
      return TurnBasedMatchEntity.c((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this, p0);
    }

    /* synthetic */ public final Object h()
    {
      return this.A();
    }

    public final int hashCode()
    {
      return TurnBasedMatchEntity.a((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this);
    }

    public final int j()
    {
      return this.c("variant");
    }

    public final String k()
    {
      return this.e("last_updater_external");
    }

    public final java.util.ArrayList<com.google.android.gms.games.multiplayer.Participant> l()
    {
      java.util.ArrayList v1;
      int i;
      v1 = new java.util.ArrayList(this.m);
      for ( i = 0; i < this.m; ++i )
        v1.add(new com.google.android.gms.games.multiplayer.ParticipantRef(this.v_, this.z_ + i));
      return v1;
    }

    public final long m()
    {
      return this.b("last_updated_timestamp");
    }

    public final String n()
    {
      return this.e("pending_participant_external");
    }

    public final byte[] o()
    {
      return this.g("data");
    }

    public final int p()
    {
      return this.c("version");
    }

    public final boolean q()
    {
      boolean v1;
      v1 = true;
      if ( this.c("user_match_status") != 3 || this.e("rematch_id") != null || this.l().size() <= 1 )
        return false;
      return v1;
    }

    public final String r()
    {
      return this.e("rematch_id");
    }

    public final byte[] s()
    {
      return this.g("previous_match_data");
    }

    public final int t()
    {
      return this.c("match_number");
    }

    public final String toString()
    {
      return TurnBasedMatchEntity.b((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this);
    }

    public final android.os.Bundle u()
    {
      if ( this.d("has_automatch_criteria") )
        return TurnBasedMatchConfig.createAutoMatchCriteria(
                 this.c("automatch_min_players"),
                 this.c("automatch_max_players"),
                 this.b("automatch_bit_mask"));
      else
        return null;
    }

    public final int v()
    {
      if ( this.d("has_automatch_criteria") )
        return this.c("automatch_max_players");
      else
        return 0;
    }

    public final String v_()
    {
      return this.e("description");
    }

    public final boolean w()
    {
      return this.d("upsync_required");
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchEntity)this.A()).writeToParcel(p0, p1);
    }

    public final java.util.ArrayList<String> x()
    {
      return TurnBasedMatchEntity.c((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this);
    }

    public final String y()
    {
      return this.e("description_participant_id");
    }

    public final com.google.android.gms.games.multiplayer.Participant z()
    {
      return TurnBasedMatchEntity.c(
               (com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)this,
               this.e("description_participant_id"));
    }

}
