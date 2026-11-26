// Decompiled from classes.dex (SourceFile: LoadMatchesResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.turnbased;

import com.google.android.gms.games.internal.constants.TurnBasedMatchTurnStatus;
public final class LoadMatchesResponse {
    // Fields
    private final com.google.android.gms.games.multiplayer.InvitationBuffer a;
    private final com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer b;
    private final com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer c;
    private final com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer d;

    // Methods
    public LoadMatchesResponse(android.os.Bundle p0)
    {
      super();
      com.google.android.gms.common.data.DataHolder v2; // RETVAL
      com.google.android.gms.common.data.DataHolder v3; // RETVAL
      com.google.android.gms.common.data.DataHolder v4; // RETVAL
      com.google.android.gms.common.data.DataHolder v5; // RETVAL
      v2 = a(p0, 0);
      if ( v2 != null )
        this.a = new com.google.android.gms.games.multiplayer.InvitationBuffer(v2);
      else
        this.a = null;
      v3 = a(p0, 1);
      if ( v3 != null )
        this.b = new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer(v3);
      else
        this.b = null;
      v4 = a(p0, 2);
      if ( v4 != null )
        this.c = new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer(v4);
      else
        this.c = null;
      v5 = a(p0, 3);
      if ( v5 != null )
        this.d = new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer(v5);
      else
        this.d = null;
    
    }

    private static com.google.android.gms.common.data.DataHolder a(android.os.Bundle p0, int p1)
    {
      String v2;
      v2 = TurnBasedMatchTurnStatus.cm(p1);
      if ( p0.containsKey(v2) )
        return (com.google.android.gms.common.data.DataHolder)p0.getParcelable(v2);
      else
        return null;
    }

    private com.google.android.gms.games.multiplayer.InvitationBuffer b()
    {
      return this.a;
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer c()
    {
      return this.b;
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer d()
    {
      return this.c;
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer e()
    {
      return this.d;
    }

    private boolean f()
    {
      boolean v1;
      v1 = true;
      if ( (this.a == null || this.a.b() <= 0)
        && (this.b == null || this.b.b() <= 0)
        && (this.c == null || this.c.b() <= 0)
        && (this.d == null || this.d.b() <= 0) )
      {
        return false;
      }
      return v1;
    }

    public final void a()
    {
      if ( this.a != null )
        this.a.c();
      if ( this.b != null )
        this.b.c();
      if ( this.c != null )
        this.c.c();
      if ( this.d != null )
        this.d.c();
    }

}
