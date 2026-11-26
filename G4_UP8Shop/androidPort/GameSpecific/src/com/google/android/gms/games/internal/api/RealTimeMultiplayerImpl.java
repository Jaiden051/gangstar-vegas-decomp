// Decompiled from classes.dex (SourceFile: RealTimeMultiplayerImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.games.Games;
public final class RealTimeMultiplayerImpl implements com.google.android.gms.games.multiplayer.realtime.RealTimeMultiplayer {
    // Methods
    public RealTimeMultiplayerImpl()
    {
      super();
    }

    public final int a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.multiplayer.realtime.RealTimeMultiplayer$ReliableMessageSentCallback p1,
            byte[] p2,
            String p3,
            String p4)
    {
      return Games.c(p0).a(p1, p2, p3, p4);
    }

    public final int a(com.google.android.gms.common.api.GoogleApiClient p0, byte[] p1, String p2)
    {
      return Games.c(p0).a(p1, p2);
    }

    public final int a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            byte[] p1,
            String p2,
            String p3)
    {
      String[] v5;
      v5 = new String[1];
      v5[0] = p3;
      return Games.c(p0).a(p1, p2, v5);
    }

    public final int a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            byte[] p1,
            String p2,
            java.util.List<String> p3)
    {
      return Games.c(p0).a(p1, p2, (String[])p3.toArray(new String[p3.size()]));
    }

    public final android.content.Intent a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            int p2)
    {
      return Games.c(p0).b(p1, p2, true);
    }

    public final android.content.Intent a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            int p2,
            boolean p3)
    {
      return Games.c(p0).b(p1, p2, p3);
    }

    public final android.content.Intent a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.multiplayer.realtime.Room p1,
            int p2)
    {
      return Games.c(p0).a(p1, p2);
    }

    public final com.google.android.gms.games.multiplayer.realtime.RealTimeSocket a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            String p2)
    {
      return Games.c(p0).c(p2);
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.multiplayer.realtime.RoomConfig p1)
    {
      Games.c(p0).a(p1);
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p1,
            String p2)
    {
      Games.c(p0).a(p1, p2);
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0, String p1)
    {
      Games.c(p0).c(p1, 0);
    }

    public final void b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.multiplayer.realtime.RoomConfig p1)
    {
      Games.c(p0).b(p1);
    }

    public final void b(com.google.android.gms.common.api.GoogleApiClient p0, String p1)
    {
      Games.c(p0).b(p1, 0);
    }

}
