// Decompiled from classes.dex (SourceFile: TurnBasedMatch.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.turnbased;

public interface TurnBasedMatch extends android.os.Parcelable, com.google.android.gms.common.data.Freezable, com.google.android.gms.games.multiplayer.Participatable {
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
    public static final int j = 0;
    public static final int[] k = new int[] { 0, 1, 2, 3 };

    // Methods


    public abstract com.google.android.gms.games.Game a();

    public abstract void a(android.database.CharArrayBuffer p0);

    public abstract java.lang.String b();

    public abstract java.lang.String c();

    public abstract long d();

    public abstract int d_(java.lang.String p0);

    public abstract int e();

    public abstract java.lang.String e_(java.lang.String p0);

    public abstract int f();

    public abstract com.google.android.gms.games.multiplayer.Participant f_(java.lang.String p0);

    public abstract int j();

    public abstract java.lang.String k();

    public abstract long m();

    public abstract java.lang.String n();

    public abstract byte[] o();

    public abstract int p();

    public abstract boolean q();

    public abstract java.lang.String r();

    public abstract byte[] s();

    public abstract int t();

    public abstract android.os.Bundle u();

    public abstract int v();

    public abstract java.lang.String v_();

    public abstract boolean w();

    public abstract java.util.ArrayList x();

    public abstract java.lang.String y();

    public abstract com.google.android.gms.games.multiplayer.Participant z();

}
