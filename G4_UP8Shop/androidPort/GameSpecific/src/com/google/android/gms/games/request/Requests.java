// Decompiled from classes.dex (SourceFile: Requests.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.request;

public interface Requests {
    // Fields
    public static final int a = 0;
    public static final int b = 0;
    public static final int c = 0;
    public static final int d = 0;
    public static final int e = 0;
    public static final int f = 0;
    public static final int g = 0;
    public static final int h = 0;
    public static final int i = 0;
    public static final java.lang.String j = null;
    public static final int k = 0;

    // Methods
    public abstract android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0, int p1, byte[] p2, int p3, android.graphics.Bitmap p4, java.lang.String p5) ;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, int p1, int p2, int p3) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.util.List<String> p1) throws android.os.RemoteException;

    public abstract java.util.ArrayList a(android.content.Intent p0) ;

    public abstract java.util.ArrayList a(android.os.Bundle p0) ;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.request.OnRequestReceivedListener p1) ;

    public abstract android.content.Intent b(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, java.util.List<String> p1) throws android.os.RemoteException;

    public abstract int c(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract int d(com.google.android.gms.common.api.GoogleApiClient p0) ;

}
