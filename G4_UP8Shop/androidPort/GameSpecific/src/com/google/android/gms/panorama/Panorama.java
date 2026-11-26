// Decompiled from classes.dex (SourceFile: Panorama.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.panorama;

public final class Panorama {
    // Fields
    public static final com.google.android.gms.common.api.Api$c a;
    static final com.google.android.gms.common.api.Api$b b;
    public static final com.google.android.gms.common.api.Api c;
    public static final com.google.android.gms.panorama.PanoramaApi d;

    // Methods
    static
    {
      a = new com.google.android.gms.common.api.Api$c();
      b = (com.google.android.gms.common.api.Api$b)new com.google.android.gms.panorama.Panorama$1();
      c = new com.google.android.gms.common.api.Api(b, a, new com.google.android.gms.common.api.Scope[0]);
      d = (com.google.android.gms.panorama.PanoramaApi)new com.google.android.gms.internal.kg();
    }

    private Panorama()
    {
      super();
    }

}
