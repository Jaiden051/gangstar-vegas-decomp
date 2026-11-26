// Decompiled from classes.dex (SourceFile: DataItemBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

public class DataItemBuffer extends com.google.android.gms.common.data.g implements com.google.android.gms.common.api.Result {
    // Fields
    private final com.google.android.gms.common.api.Status b;

    // Methods
    public DataItemBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.b = new com.google.android.gms.common.api.Status(p0.e());
    }

    private com.google.android.gms.wearable.DataItem b(int p0, int p1)
    {
      return (com.google.android.gms.wearable.DataItem)new com.google.android.gms.wearable.internal.o(this.a, p0, p1);
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.b;
    }

    /* synthetic */ protected final Object a(int p0, int p1)
    {
      return new com.google.android.gms.wearable.internal.o(this.a, p0, p1);
    }

    protected final String f()
    {
      return "path";
    }

}
