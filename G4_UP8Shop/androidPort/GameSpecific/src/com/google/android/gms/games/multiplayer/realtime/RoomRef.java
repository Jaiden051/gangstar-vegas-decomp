// Decompiled from classes.dex (SourceFile: RoomRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.realtime;

public final class RoomRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.multiplayer.realtime.Room {
    // Fields
    private final int f;

    // Methods
    RoomRef(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      super(p0, p1);
      this.f = p2;
    }

    private com.google.android.gms.games.multiplayer.realtime.Room m()
    {
      return (com.google.android.gms.games.multiplayer.realtime.Room)new com.google.android.gms.games.multiplayer.realtime.RoomEntity((com.google.android.gms.games.multiplayer.realtime.Room)this);
    }

    public final String a()
    {
      return this.e("external_match_id");
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      this.a("description", p0);
    }

    public final int a_(String p0)
    {
      return RoomEntity.a((com.google.android.gms.games.multiplayer.realtime.Room)this, p0);
    }

    public final String b()
    {
      return this.e("creator_external");
    }

    public final String b_(String p0)
    {
      return RoomEntity.b((com.google.android.gms.games.multiplayer.realtime.Room)this, p0);
    }

    public final long c()
    {
      return this.b("creation_timestamp");
    }

    public final com.google.android.gms.games.multiplayer.Participant c_(String p0)
    {
      return RoomEntity.c((com.google.android.gms.games.multiplayer.realtime.Room)this, p0);
    }

    public final int d()
    {
      return this.c("status");
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.e("description");
    }

    public final boolean equals(Object p0)
    {
      return RoomEntity.a((com.google.android.gms.games.multiplayer.realtime.Room)this, p0);
    }

    public final int f()
    {
      return this.c("variant");
    }

    /* synthetic */ public final Object h()
    {
      return this.m();
    }

    public final int hashCode()
    {
      return RoomEntity.a((com.google.android.gms.games.multiplayer.realtime.Room)this);
    }

    public final int j()
    {
      return this.c("automatch_wait_estimate_sec");
    }

    public final java.util.ArrayList<String> k()
    {
      return RoomEntity.c((com.google.android.gms.games.multiplayer.realtime.Room)this);
    }

    public final java.util.ArrayList<com.google.android.gms.games.multiplayer.Participant> l()
    {
      java.util.ArrayList v1;
      int i;
      v1 = new java.util.ArrayList(this.f);
      for ( i = 0; i < this.f; ++i )
        v1.add(new com.google.android.gms.games.multiplayer.ParticipantRef(this.v_, this.z_ + i));
      return v1;
    }

    public final android.os.Bundle q_()
    {
      if ( this.d("has_automatch_criteria") )
        return RoomConfig.createAutoMatchCriteria(
                 this.c("automatch_min_players"),
                 this.c("automatch_max_players"),
                 this.b("automatch_bit_mask"));
      else
        return null;
    }

    public final String toString()
    {
      return RoomEntity.b((com.google.android.gms.games.multiplayer.realtime.Room)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.multiplayer.realtime.RoomEntity)this.m()).writeToParcel(p0, p1);
    }

}
