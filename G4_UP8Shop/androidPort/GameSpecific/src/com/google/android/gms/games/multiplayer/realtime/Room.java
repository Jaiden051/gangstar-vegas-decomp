// Decompiled from classes.dex (SourceFile: Room.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.realtime;

public interface Room extends android.os.Parcelable, com.google.android.gms.common.data.Freezable, com.google.android.gms.games.multiplayer.Participatable {
    // Fields
    public static final int a = 0;
    public static final int b = 0;
    public static final int c = 0;
    public static final int d = 0;
    public static final int e = 0;

    // Methods
    public abstract java.lang.String a();

    public abstract void a(android.database.CharArrayBuffer p0);

    public abstract int a_(java.lang.String p0);

    public abstract java.lang.String b();

    public abstract java.lang.String b_(java.lang.String p0);

    public abstract long c();

    public abstract com.google.android.gms.games.multiplayer.Participant c_(java.lang.String p0);

    public abstract int d();

    public abstract java.lang.String e();

    public abstract int f();

    public abstract int j();

    public abstract java.util.ArrayList k();

    public abstract android.os.Bundle q_();

}
