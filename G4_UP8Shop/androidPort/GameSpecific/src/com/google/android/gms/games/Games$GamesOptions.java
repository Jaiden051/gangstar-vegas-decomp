// Decompiled from classes.dex (SourceFile: Games$GamesOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

public final class Games$GamesOptions implements com.google.android.gms.common.api.Api$ApiOptions$Optional {
    // Fields
    final boolean a;
    final boolean b;
    final int c;
    final boolean d;
    final int e;
    final java.lang.String f;

    // Methods
    private Games$GamesOptions()
    {
      super();
      this.a = false;
      this.b = true;
      this.c = 17;
      this.d = false;
      this.e = 4368;
      this.f = null;
    }

    /* synthetic */ Games$GamesOptions(int p0)
    {
      this();
    }

    private Games$GamesOptions(com.google.android.gms.games.Games$GamesOptions$Builder p0)
    {
      super();
      this.a = p0.a;
      this.b = p0.b;
      this.c = p0.c;
      this.d = p0.d;
      this.e = p0.e;
      this.f = p0.f;
    }

    /* synthetic */ Games$GamesOptions(com.google.android.gms.games.Games$GamesOptions$Builder p0, int p1)
    {
      this(p0);
    }

    public static com.google.android.gms.games.Games$GamesOptions$Builder builder()
    {
      return new com.google.android.gms.games.Games$GamesOptions$Builder(0);
    }

}
