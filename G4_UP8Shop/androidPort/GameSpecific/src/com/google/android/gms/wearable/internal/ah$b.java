// Decompiled from classes.dex (SourceFile: ah$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class ah$b implements com.google.android.gms.wearable.NodeApi$GetLocalNodeResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final com.google.android.gms.wearable.Node b;

    // Methods
    public ah$b(com.google.android.gms.common.api.Status p0, com.google.android.gms.wearable.Node p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.wearable.Node b()
    {
      return this.b;
    }

}
