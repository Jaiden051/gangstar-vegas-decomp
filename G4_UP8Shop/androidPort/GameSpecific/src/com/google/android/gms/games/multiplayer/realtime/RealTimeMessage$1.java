// Decompiled from classes.dex (SourceFile: RealTimeMessage$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.realtime;

final class RealTimeMessage$1 implements android.os.Parcelable.Creator {
    // Methods
    RealTimeMessage$1()
    {
      super();
    }

    private static com.google.android.gms.games.multiplayer.realtime.RealTimeMessage bn(
            android.os.Parcel p0)
    {
      return new com.google.android.gms.games.multiplayer.realtime.RealTimeMessage(p0, 0);
    }

    private static com.google.android.gms.games.multiplayer.realtime.RealTimeMessage[] cz(int p0)
    {
      return new com.google.android.gms.games.multiplayer.realtime.RealTimeMessage[p0];
    }

    /* synthetic */ public final Object createFromParcel(android.os.Parcel p0)
    {
      return new com.google.android.gms.games.multiplayer.realtime.RealTimeMessage(p0, 0);
    }

    /* synthetic */ public final Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.multiplayer.realtime.RealTimeMessage[p0];
    }

}
