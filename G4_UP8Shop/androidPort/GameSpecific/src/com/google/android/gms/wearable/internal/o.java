// Decompiled from classes.dex (SourceFile: o.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

import android.net.Uri;
public final class o extends com.google.android.gms.common.data.d implements com.google.android.gms.wearable.DataItem {
    // Fields
    private final int c;

    // Methods
    public o(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      super(p0, p1);
      this.c = p2;
    }

    private com.google.android.gms.wearable.DataItem d()
    {
      return (com.google.android.gms.wearable.DataItem)new com.google.android.gms.wearable.internal.l((com.google.android.gms.wearable.DataItem)this);
    }

    public final android.net.Uri a()
    {
      return Uri.parse(this.e("path"));
    }

    public final com.google.android.gms.wearable.DataItem a(byte[] p0)
    {
      throw new UnsupportedOperationException();
    }

    public final byte[] b()
    {
      return this.g("data");
    }

    public final java.util.Map<String, com.google.android.gms.wearable.DataItemAsset> c()
    {
      java.util.Map v1;
      int i;
      com.google.android.gms.wearable.internal.k v3;
      v1 = new java.util.HashMap(this.c);
      for ( i = 0; i < this.c; ++i )
      {
        v3 = new com.google.android.gms.wearable.internal.k(this.v_, this.z_ + i);
        if ( v3.b() != null )
          v1.put(v3.b(), v3);
      }
      return v1;
    }

    /* synthetic */ public final Object h()
    {
      return new com.google.android.gms.wearable.internal.l((com.google.android.gms.wearable.DataItem)this);
    }

}
