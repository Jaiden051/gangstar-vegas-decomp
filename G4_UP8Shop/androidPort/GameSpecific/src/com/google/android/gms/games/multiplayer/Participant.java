// Decompiled from classes.dex (SourceFile: Participant.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

public interface Participant extends android.os.Parcelable, com.google.android.gms.common.data.Freezable {
    // Fields
    public static final int a = 0;
    public static final int b = 0;
    public static final int c = 0;
    public static final int d = 0;
    public static final int e = 0;
    public static final int f = 0;
    public static final int g = 0;

    // Methods
    public abstract int a();

    public abstract void a(android.database.CharArrayBuffer p0);

    public abstract java.lang.String b();

    public abstract int c();

    public abstract boolean d();

    public abstract java.lang.String e();

    public abstract android.net.Uri f();

    public abstract android.net.Uri j();

    public abstract java.lang.String k();

    public abstract java.lang.String l();

    public abstract com.google.android.gms.games.Player m();

    public abstract com.google.android.gms.games.multiplayer.ParticipantResult n();

    public abstract java.lang.String p_();

}
