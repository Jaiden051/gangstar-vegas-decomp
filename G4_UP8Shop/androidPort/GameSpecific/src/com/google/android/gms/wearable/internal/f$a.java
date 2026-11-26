// Decompiled from classes.dex (SourceFile: f$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class f$a implements com.google.android.gms.wearable.DataApi$DataItemResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final com.google.android.gms.wearable.DataItem b;

    // Methods
    public f$a(com.google.android.gms.common.api.Status p0, com.google.android.gms.wearable.DataItem p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.wearable.DataItem b()
    {
      return this.b;
    }

}
