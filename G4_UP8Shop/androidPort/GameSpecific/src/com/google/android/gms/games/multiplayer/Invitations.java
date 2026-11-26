// Decompiled from classes.dex (SourceFile: Invitations.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

public interface Invitations {
    // Methods
    public abstract android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, int p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.multiplayer.OnInvitationReceivedListener p1) ;

    public abstract void b(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract com.google.android.gms.common.api.PendingResult c(com.google.android.gms.common.api.GoogleApiClient p0) throws android.os.RemoteException;

}
