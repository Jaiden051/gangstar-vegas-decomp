// Decompiled from classes.dex (SourceFile: Player.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

public interface Player extends android.os.Parcelable, com.google.android.gms.common.data.Freezable {
    // Fields
    public static final long a = 0;
    public static final long w_ = 0;

    // Methods
    public abstract java.lang.String a();

    public abstract void a(android.database.CharArrayBuffer p0);

    public abstract java.lang.String b();

    public abstract void b(android.database.CharArrayBuffer p0);

    public abstract boolean c();

    public abstract android.net.Uri d();

    public abstract java.lang.String e();

    public abstract boolean f();

    public abstract android.net.Uri g_();

    public abstract java.lang.String j();

    public abstract long k();

    public abstract long l();

    public abstract int m();

    public abstract boolean n();

    public abstract java.lang.String o();

    public abstract com.google.android.gms.games.PlayerLevelInfo p();

    public abstract com.google.android.gms.games.internal.player.MostRecentGameInfo q();

}
