// Decompiled from classes.dex (SourceFile: TurnBasedMultiplayer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.turnbased;

public interface TurnBasedMultiplayer {
    // Methods
    public abstract android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0, int p1, int p2) ;

    public abstract android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0, int p1, int p2, boolean p3) ;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, int p1, int[] p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, byte[] p2, java.lang.String p3) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, byte[] p2, java.lang.String p3, java.util.List<com.google.android.gms.games.multiplayer.ParticipantResult> p4) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, byte[] p2, java.lang.String p3, com.google.android.gms.games.multiplayer.ParticipantResult[] p4) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, byte[] p2, java.util.List<com.google.android.gms.games.multiplayer.ParticipantResult> p3) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, byte[] p2, com.google.android.gms.games.multiplayer.ParticipantResult[] p3) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, int[] p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.multiplayer.turnbased.OnTurnBasedMatchUpdateReceivedListener p1) ;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract int c(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract void c(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) ;

    public abstract void d(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) ;

    public abstract com.google.android.gms.common.api.PendingResult e(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult f(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult g(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void h(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) ;

    public abstract com.google.android.gms.common.api.PendingResult i(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

}
