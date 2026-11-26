// Decompiled from classes.dex (SourceFile: Quest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.quest;

public interface Quest extends android.os.Parcelable, com.google.android.gms.common.data.Freezable {
    // Fields
    public static final int a = 0;
    public static final int b = 0;
    public static final int c = 0;
    public static final int d = 0;
    public static final int e = 0;
    public static final int f = 0;
    public static final int[] g = new int[] { 1, 2, 3, 4, 6, 5 };
    public static final java.lang.String[] h = new String[] { Integer.toString(1), Integer.toString(2), Integer.toString(3) };
    public static final long i = 0;

    // Methods


    public abstract java.lang.String a();

    public abstract void a(android.database.CharArrayBuffer p0);

    public abstract java.lang.String b();

    public abstract void b(android.database.CharArrayBuffer p0);

    public abstract java.lang.String c();

    public abstract android.net.Uri d();

    public abstract java.lang.String e();

    public abstract android.net.Uri f();

    public abstract com.google.android.gms.games.quest.Milestone j();

    public abstract java.util.List k();

    public abstract com.google.android.gms.games.Game l();

    public abstract int m();

    public abstract int n();

    public abstract long o();

    public abstract long p();

    public abstract long q();

    public abstract long r();

    public abstract long s();

    public abstract boolean t();

    public abstract java.lang.String w_();

}
