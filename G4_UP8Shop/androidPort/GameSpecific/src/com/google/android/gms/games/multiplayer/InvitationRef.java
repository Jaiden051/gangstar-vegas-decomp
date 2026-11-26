// Decompiled from classes.dex (SourceFile: InvitationRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

import com.google.android.gms.internal.hn;
public final class InvitationRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.multiplayer.Invitation {
    // Fields
    private final com.google.android.gms.games.Game c;
    private final com.google.android.gms.games.multiplayer.ParticipantRef d;
    private final java.util.ArrayList e;

    // Methods
    InvitationRef(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      super(p0, p1);
      String v4;
      int v5;
      Object v6;
      com.google.android.gms.games.multiplayer.ParticipantRef v7;
      this.c = (com.google.android.gms.games.Game)new com.google.android.gms.games.GameRef(p0, p1);
      this.e = new java.util.ArrayList(p2);
      v4 = this.e("external_inviter_id");
      v5 = 0;
      v6 = null;
      while ( v5 < p2 )
      {
        v7 = new com.google.android.gms.games.multiplayer.ParticipantRef(this.v_, this.z_ + v5);
        if ( v7.l().equals(v4) )
          v6 = v7;
        this.e.add(v7);
        ++v5;
      }
      this.d = (com.google.android.gms.games.multiplayer.ParticipantRef)hn.b(v6, "Must have a valid inviter!");
    
    }

    private com.google.android.gms.games.multiplayer.Invitation a()
    {
      return (com.google.android.gms.games.multiplayer.Invitation)new com.google.android.gms.games.multiplayer.InvitationEntity((com.google.android.gms.games.multiplayer.Invitation)this);
    }

    public final com.google.android.gms.games.Game c()
    {
      return this.c;
    }

    public final String d()
    {
      return this.e("external_invitation_id");
    }

    public final int describeContents()
    {
      return 0;
    }

    public final com.google.android.gms.games.multiplayer.Participant e()
    {
      return (com.google.android.gms.games.multiplayer.Participant)this.d;
    }

    public final boolean equals(Object p0)
    {
      return InvitationEntity.a((com.google.android.gms.games.multiplayer.Invitation)this, p0);
    }

    public final long f()
    {
      return Math.max(this.b("creation_timestamp"), this.b("last_modified_timestamp"));
    }

    /* synthetic */ public final Object h()
    {
      return this.a();
    }

    public final int hashCode()
    {
      return InvitationEntity.a((com.google.android.gms.games.multiplayer.Invitation)this);
    }

    public final int j()
    {
      return this.c("variant");
    }

    public final int k()
    {
      if ( this.d("has_automatch_criteria") )
        return this.c("automatch_max_players");
      else
        return 0;
    }

    public final java.util.ArrayList<com.google.android.gms.games.multiplayer.Participant> l()
    {
      return this.e;
    }

    public final int o_()
    {
      return this.c("type");
    }

    public final String toString()
    {
      return InvitationEntity.b((com.google.android.gms.games.multiplayer.Invitation)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.multiplayer.InvitationEntity)this.a()).writeToParcel(p0, p1);
    }

}
