// Decompiled from classes.dex (SourceFile: GamesLog.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import com.google.android.gms.games.Games;
public final class GamesLog {
    // Fields
    private static final com.google.android.gms.internal.hg a;

    // Methods
    static
    {
      a = new com.google.android.gms.internal.hg("Games");
    }

    private GamesLog()
    {
      super();
    }

    public static void a(String p0, String p1, Throwable p2)
    {
      a.a(p0, p1, p2);
    }

    public static void b(String p0, String p1, Throwable p2)
    {
      a.b(p0, p1, p2);
    }

    public static void i(String p0, String p1)
    {
      a.a(p0, p1);
    }

    public static void j(String p0, String p1)
    {
      a.b(p0, p1);
    }

    public static void k(String p0, String p1)
    {
      a.c(p0, p1);
    }

}
