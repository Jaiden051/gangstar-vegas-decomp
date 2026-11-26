// Decompiled from classes.dex (SourceFile: ParticipantRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

public final class ParticipantRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.multiplayer.Participant {
    // Fields
    private final com.google.android.gms.games.PlayerRef h;

    // Methods
    public ParticipantRef(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
      this.h = new com.google.android.gms.games.PlayerRef(p0, p1);
    }

    private com.google.android.gms.games.multiplayer.Participant o()
    {
      return (com.google.android.gms.games.multiplayer.Participant)new com.google.android.gms.games.multiplayer.ParticipantEntity((com.google.android.gms.games.multiplayer.Participant)this);
    }

    public final int a()
    {
      return this.c("player_status");
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      if ( this.i("external_player_id") )
        this.a("default_display_name", p0);
      else
        this.h.a(p0);
    }

    public final String b()
    {
      return this.e("client_address");
    }

    public final int c()
    {
      return this.c("capabilities");
    }

    public final boolean d()
    {
      return this.c("connected") > 0;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      if ( this.i("external_player_id") )
        return this.e("default_display_name");
      else
        return this.h.b();
    }

    public final boolean equals(Object p0)
    {
      return ParticipantEntity.a((com.google.android.gms.games.multiplayer.Participant)this, p0);
    }

    public final android.net.Uri f()
    {
      if ( this.i("external_player_id") )
        return this.h("default_display_image_uri");
      else
        return this.h.d();
    }

    /* synthetic */ public final Object h()
    {
      return this.o();
    }

    public final int hashCode()
    {
      return ParticipantEntity.a((com.google.android.gms.games.multiplayer.Participant)this);
    }

    public final android.net.Uri j()
    {
      if ( this.i("external_player_id") )
        return this.h("default_display_hi_res_image_uri");
      else
        return this.h.g_();
    }

    public final String k()
    {
      if ( this.i("external_player_id") )
        return this.e("default_display_hi_res_image_url");
      else
        return this.h.j();
    }

    public final String l()
    {
      return this.e("external_participant_id");
    }

    public final com.google.android.gms.games.Player m()
    {
      if ( this.i("external_player_id") )
        return null;
      else
        return (com.google.android.gms.games.Player)this.h;
    }

    public final com.google.android.gms.games.multiplayer.ParticipantResult n()
    {
      if ( this.i("result_type") )
        return null;
      else
        return new com.google.android.gms.games.multiplayer.ParticipantResult(this.e("external_participant_id"), this.c("result_type"), this.c("placing"));
    }

    public final String p_()
    {
      if ( this.i("external_player_id") )
        return this.e("default_display_image_url");
      else
        return this.h.e();
    }

    public final String toString()
    {
      return ParticipantEntity.b((com.google.android.gms.games.multiplayer.Participant)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.multiplayer.ParticipantEntity)this.o()).writeToParcel(p0, p1);
    }

}
