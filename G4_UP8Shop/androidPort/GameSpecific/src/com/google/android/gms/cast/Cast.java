// Decompiled from classes.dex (SourceFile: Cast.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

public final class Cast {
    // Fields
    public static int a;
    public static int b;
    public static java.lang.String c;
    static final com.google.android.gms.common.api.Api$c d;
    public static final com.google.android.gms.common.api.Api e;
    public static final com.google.android.gms.cast.Cast$CastApi f;
    private static final com.google.android.gms.common.api.Api$b g;

    // Methods
    static
    {
      d = new com.google.android.gms.common.api.Api$c();
      g = (com.google.android.gms.common.api.Api$b)new com.google.android.gms.cast.Cast$1();
      e = new com.google.android.gms.common.api.Api(g, d, new com.google.android.gms.common.api.Scope[0]);
      f = (com.google.android.gms.cast.Cast$CastApi)new com.google.android.gms.cast.Cast$CastApi$a();
    }

    private Cast()
    {
      super();
    }

}
