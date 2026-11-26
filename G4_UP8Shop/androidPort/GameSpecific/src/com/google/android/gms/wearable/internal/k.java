// Decompiled from classes.dex (SourceFile: k.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class k extends com.google.android.gms.common.data.d implements com.google.android.gms.wearable.DataItemAsset {
    // Methods
    public k(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
    }

    private com.google.android.gms.wearable.DataItemAsset c()
    {
      return (com.google.android.gms.wearable.DataItemAsset)new com.google.android.gms.wearable.internal.i((com.google.android.gms.wearable.DataItemAsset)this);
    }

    public final String a()
    {
      return this.e("asset_id");
    }

    public final String b()
    {
      return this.e("asset_key");
    }

    /* synthetic */ public final Object h()
    {
      return new com.google.android.gms.wearable.internal.i((com.google.android.gms.wearable.DataItemAsset)this);
    }

}
