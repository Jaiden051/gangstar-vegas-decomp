// Decompiled from classes.dex (SourceFile: Cast$CastOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

public final class Cast$CastOptions implements com.google.android.gms.common.api.Api$ApiOptions$HasOptions {
    // Fields
    final com.google.android.gms.cast.CastDevice a;
    final com.google.android.gms.cast.Cast$Listener b;
    private final int c;

    // Methods
    private Cast$CastOptions(com.google.android.gms.cast.Cast$CastOptions$Builder p0)
    {
      super();
      this.a = p0.a;
      this.b = p0.b;
      this.c = Cast$CastOptions$Builder.a(p0);
    }

    /* synthetic */ Cast$CastOptions(com.google.android.gms.cast.Cast$CastOptions$Builder p0, int p1)
    {
      this(p0);
    }

    /* synthetic */ static int a(com.google.android.gms.cast.Cast$CastOptions p0)
    {
      return p0.c;
    }

    public static com.google.android.gms.cast.Cast$CastOptions$Builder builder(
            com.google.android.gms.cast.CastDevice p0,
            com.google.android.gms.cast.Cast$Listener p1)
    {
      return new com.google.android.gms.cast.Cast$CastOptions$Builder(p0, p1, 0);
    }

}
