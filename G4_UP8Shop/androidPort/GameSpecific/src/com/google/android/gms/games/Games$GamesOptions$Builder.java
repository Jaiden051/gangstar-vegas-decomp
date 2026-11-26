// Decompiled from classes.dex (SourceFile: Games$GamesOptions$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

public final class Games$GamesOptions$Builder {
    // Fields
    boolean a;
    boolean b;
    int c;
    boolean d;
    int e;
    java.lang.String f;

    // Methods
    private Games$GamesOptions$Builder()
    {
      super();
      this.a = false;
      this.b = true;
      this.c = 17;
      this.d = false;
      this.e = 4368;
      this.f = null;
    }

    /* synthetic */ Games$GamesOptions$Builder(int p0)
    {
      this();
    }

    private com.google.android.gms.games.Games$GamesOptions$Builder a(int p0)
    {
      this.e = p0;
      return this;
    }

    private com.google.android.gms.games.Games$GamesOptions$Builder a(boolean p0)
    {
      this.b = p0;
      this.c = 17;
      return this;
    }

    private com.google.android.gms.games.Games$GamesOptions$Builder a(boolean p0, int p1)
    {
      this.b = p0;
      this.c = p1;
      return this;
    }

    private com.google.android.gms.games.Games$GamesOptions a()
    {
      return new com.google.android.gms.games.Games$GamesOptions(this, 0);
    }

}
