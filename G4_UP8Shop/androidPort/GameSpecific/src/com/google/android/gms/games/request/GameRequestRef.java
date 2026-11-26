// Decompiled from classes.dex (SourceFile: GameRequestRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.request;

public final class GameRequestRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.request.GameRequest {
    // Fields
    private final int h;

    // Methods
    public GameRequestRef(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      super(p0, p1);
      this.h = p2;
    }

    private com.google.android.gms.games.request.GameRequest a()
    {
      return (com.google.android.gms.games.request.GameRequest)new com.google.android.gms.games.request.GameRequestEntity((com.google.android.gms.games.request.GameRequest)this);
    }

    public final String c()
    {
      return this.e("external_request_id");
    }

    public final com.google.android.gms.games.Game d()
    {
      return (com.google.android.gms.games.Game)new com.google.android.gms.games.GameRef(this.v_, this.z_);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final com.google.android.gms.games.Player e()
    {
      return (com.google.android.gms.games.Player)new com.google.android.gms.games.PlayerRef(this.v_, this.i(), "sender_");
    }

    public final boolean equals(Object p0)
    {
      return GameRequestEntity.a((com.google.android.gms.games.request.GameRequest)this, p0);
    }

    public final byte[] f()
    {
      return this.g("data");
    }

    public final boolean g_(String p0)
    {
      return this.h_(p0) == 1;
    }

    /* synthetic */ public final Object h()
    {
      return this.a();
    }

    public final int h_(String p0)
    {
      int i;
      int v3;
      for ( i = this.z_; i < this.z_ + this.h; ++i )
      {
        v3 = this.v_.a(i);
        if ( this.v_.c("recipient_external_player_id", i, v3).equals(p0) )
          return this.v_.b("recipient_status", i, v3);
      }
      return -1;
    }

    public final int hashCode()
    {
      return GameRequestEntity.a((com.google.android.gms.games.request.GameRequest)this);
    }

    public final long j()
    {
      return this.b("creation_timestamp");
    }

    public final long k()
    {
      return this.b("expiration_timestamp");
    }

    public final int l()
    {
      return this.c("status");
    }

    public final java.util.List<com.google.android.gms.games.Player> m()
    {
      java.util.ArrayList v1;
      int i;
      v1 = new java.util.ArrayList(this.h);
      for ( i = 0; i < this.h; ++i )
        v1.add(new com.google.android.gms.games.PlayerRef(this.v_, this.z_ + i, "recipient_"));
      return v1;
    }

    public final String toString()
    {
      return GameRequestEntity.c((com.google.android.gms.games.request.GameRequest)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.request.GameRequestEntity)this.a()).writeToParcel(p0, p1);
    }

    public final int x_()
    {
      return this.c("type");
    }

}
