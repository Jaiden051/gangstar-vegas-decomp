// Decompiled from classes.dex (SourceFile: ah$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class ah$a implements com.google.android.gms.wearable.NodeApi$GetConnectedNodesResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final java.util.List b;

    // Methods
    public ah$a(com.google.android.gms.common.api.Status p0, java.util.List<com.google.android.gms.wearable.Node> p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final java.util.List<com.google.android.gms.wearable.Node> b()
    {
      return this.b;
    }

}
