// Decompiled from classes.dex (SourceFile: GameRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.request;

public interface GameRequest extends android.os.Parcelable, com.google.android.gms.common.data.Freezable {
    // Fields
    public static final int a = 0;
    public static final int b = 0;
    public static final int c = 0;
    public static final int d = 0;
    public static final int e = 0;
    public static final int f = 0;
    public static final int g = 0;

    // Methods
    public abstract java.lang.String c();

    public abstract com.google.android.gms.games.Game d();

    public abstract com.google.android.gms.games.Player e();

    public abstract byte[] f();

    public abstract boolean g_(java.lang.String p0);

    public abstract int h_(java.lang.String p0);

    public abstract long j();

    public abstract long k();

    public abstract int l();

    public abstract java.util.List m();

    public abstract int x_();

}
