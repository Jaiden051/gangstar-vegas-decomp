// Decompiled from classes.dex (SourceFile: Wearable.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

public class Wearable {
    // Fields
    public static final com.google.android.gms.wearable.DataApi a;
    public static final com.google.android.gms.wearable.MessageApi b;
    public static final com.google.android.gms.wearable.NodeApi c;
    public static final com.google.android.gms.wearable.b d;
    public static final com.google.android.gms.common.api.Api$c e;
    public static final com.google.android.gms.common.api.Api f;
    private static final com.google.android.gms.common.api.Api$b g;

    // Methods
    static
    {
      a = (com.google.android.gms.wearable.DataApi)new com.google.android.gms.wearable.internal.f();
      b = (com.google.android.gms.wearable.MessageApi)new com.google.android.gms.wearable.internal.ae();
      c = (com.google.android.gms.wearable.NodeApi)new com.google.android.gms.wearable.internal.ah();
      d = (com.google.android.gms.wearable.b)new com.google.android.gms.wearable.internal.e();
      e = new com.google.android.gms.common.api.Api$c();
      g = (com.google.android.gms.common.api.Api$b)new com.google.android.gms.wearable.Wearable$1();
      f = new com.google.android.gms.common.api.Api(g, e, new com.google.android.gms.common.api.Scope[0]);
    }

    private Wearable()
    {
      super();
    }

}
