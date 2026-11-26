// Decompiled from classes.dex (SourceFile: RoomConfig.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.realtime;

import com.google.android.gms.internal.hn;
public final class RoomConfig {
    // Fields
    private final com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener a;
    private final com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener b;
    private final com.google.android.gms.games.multiplayer.realtime.RealTimeMessageReceivedListener c;
    private final java.lang.String d;
    private final int e;
    private final java.lang.String[] f;
    private final android.os.Bundle g;
    private final boolean h;

    // Methods
    private RoomConfig(com.google.android.gms.games.multiplayer.realtime.RoomConfig$Builder p0)
    {
      super();
      this.a = p0.a;
      this.b = p0.b;
      this.c = p0.c;
      this.d = p0.d;
      this.e = p0.e;
      this.g = p0.g;
      this.h = p0.h;
      this.f = (String[])p0.f.toArray(new String[p0.f.size()]);
      if ( this.c == null )
        hn.a(this.h, "Must either enable sockets OR specify a message listener");
    }

    /* synthetic */ RoomConfig(com.google.android.gms.games.multiplayer.realtime.RoomConfig$Builder p0, int p1)
    {
      this(p0);
    }

    public static com.google.android.gms.games.multiplayer.realtime.RoomConfig$Builder builder(
            com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p0)
    {
      return new com.google.android.gms.games.multiplayer.realtime.RoomConfig$Builder(p0, 0);
    }

    public static android.os.Bundle createAutoMatchCriteria(int p0, int p1, long p2)
    {
      android.os.Bundle v3;
      v3 = new android.os.Bundle();
      v3.putInt("min_automatch_players", p0);
      v3.putInt("max_automatch_players", p1);
      v3.putLong("exclusive_bit_mask", p2);
      return v3;
    }

    public final com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener a()
    {
      return this.a;
    }

    public final String b()
    {
      return this.d;
    }

    public final com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener c()
    {
      return this.b;
    }

    public final com.google.android.gms.games.multiplayer.realtime.RealTimeMessageReceivedListener d()
    {
      return this.c;
    }

    public final int e()
    {
      return this.e;
    }

    public final String[] f()
    {
      return this.f;
    }

    public final android.os.Bundle g()
    {
      return this.g;
    }

    public final boolean h()
    {
      return this.h;
    }

}
