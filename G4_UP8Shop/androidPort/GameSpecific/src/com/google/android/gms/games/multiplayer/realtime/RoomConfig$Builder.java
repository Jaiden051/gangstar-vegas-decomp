// Decompiled from classes.dex (SourceFile: RoomConfig$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.realtime;

import com.google.android.gms.internal.hn;
import java.util.Arrays;
public final class RoomConfig$Builder {
    // Fields
    final com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener a;
    com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener b;
    com.google.android.gms.games.multiplayer.realtime.RealTimeMessageReceivedListener c;
    java.lang.String d;
    int e;
    java.util.ArrayList f;
    android.os.Bundle g;
    boolean h;

    // Methods
    private RoomConfig$Builder(com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p0)
    {
      super();
      this.d = null;
      this.e = -1;
      this.f = new java.util.ArrayList();
      this.h = false;
      this.a = (com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener)hn.b(
                                                                                       p0,
                                                                                       "Must provide a RoomUpdateListener");
    }

    /* synthetic */ RoomConfig$Builder(com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p0, int p1)
    {
      this(p0);
    }

    private com.google.android.gms.games.multiplayer.realtime.RoomConfig$Builder a(int p0)
    {
      boolean v2;
      v2 = p0 == -1 || p0 > 0;
      hn.b(v2, "Variant must be a positive integer or Room.ROOM_VARIANT_ANY");
      this.e = p0;
      return this;
    }

    private com.google.android.gms.games.multiplayer.realtime.RoomConfig$Builder a(android.os.Bundle p0)
    {
      this.g = p0;
      return this;
    }

    private com.google.android.gms.games.multiplayer.realtime.RoomConfig$Builder a(
            com.google.android.gms.games.multiplayer.realtime.RealTimeMessageReceivedListener p0)
    {
      this.c = p0;
      return this;
    }

    private com.google.android.gms.games.multiplayer.realtime.RoomConfig$Builder a(
            com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p0)
    {
      this.b = p0;
      return this;
    }

    private com.google.android.gms.games.multiplayer.realtime.RoomConfig$Builder a(String p0)
    {
      hn.f(p0);
      this.d = p0;
      return this;
    }

    private com.google.android.gms.games.multiplayer.realtime.RoomConfig$Builder a(
            java.util.ArrayList<String> p0)
    {
      hn.f(p0);
      this.f.addAll(p0);
      return this;
    }

    private com.google.android.gms.games.multiplayer.realtime.RoomConfig$Builder a(boolean p0)
    {
      this.h = p0;
      return this;
    }

    private com.google.android.gms.games.multiplayer.realtime.RoomConfig$Builder a(String[] p0)
    {
      hn.f(p0);
      this.f.addAll(Arrays.asList(p0));
      return this;
    }

    private com.google.android.gms.games.multiplayer.realtime.RoomConfig a()
    {
      return new com.google.android.gms.games.multiplayer.realtime.RoomConfig(this, 0);
    }

}
