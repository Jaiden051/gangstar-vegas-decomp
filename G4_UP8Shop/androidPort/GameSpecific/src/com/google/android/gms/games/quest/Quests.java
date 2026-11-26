// Decompiled from classes.dex (SourceFile: Quests.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.quest;

public interface Quests {
    // Fields
    public static final int a = 0;
    public static final int b = 0;
    public static final int c = 0;
    public static final int d = 0;
    public static final int e = 0;
    public static final int f = 0;
    public static final int g = 0;
    public static final int h = 0;
    public static final int[] i = new int[] { 1, 2, 3, 4, 101, 5, 102, 6 };
    public static final int j = 0;
    public static final int k = 0;
    public static final java.lang.String l = null;

    // Methods


    public abstract android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) ;

    public abstract android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0, int[] p1) ;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, boolean p1, java.lang.String[] p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, int[] p1, int p2, boolean p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.quest.QuestUpdateListener p1) ;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

}
