// Decompiled from classes.dex (SourceFile: RealTimeMultiplayer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.realtime;

public interface RealTimeMultiplayer {
    // Fields
    public static final int a = 0;

    // Methods
    public abstract int a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.multiplayer.realtime.RealTimeMultiplayer$ReliableMessageSentCallback p1, byte[] p2, java.lang.String p3, java.lang.String p4) ;

    public abstract int a(com.google.android.gms.common.api.GoogleApiClient p0, byte[] p1, java.lang.String p2) ;

    public abstract int a(com.google.android.gms.common.api.GoogleApiClient p0, byte[] p1, java.lang.String p2, java.lang.String p3) ;

    public abstract int a(com.google.android.gms.common.api.GoogleApiClient p0, byte[] p1, java.lang.String p2, java.util.List<String> p3) ;

    public abstract android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0, int p1, int p2) ;

    public abstract android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0, int p1, int p2, boolean p3) ;

    public abstract android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.multiplayer.realtime.Room p1, int p2) ;

    public abstract com.google.android.gms.games.multiplayer.realtime.RealTimeSocket a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, java.lang.String p2) ;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.multiplayer.realtime.RoomConfig p1) ;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p1, java.lang.String p2) ;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) ;

    public abstract void b(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.multiplayer.realtime.RoomConfig p1) ;

    public abstract void b(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) ;

}
