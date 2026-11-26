// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class i implements com.google.android.gms.wearable.DataItemAsset {
    // Fields
    private final java.lang.String a;
    private final java.lang.String b;

    // Methods
    public i(com.google.android.gms.wearable.DataItemAsset p0)
    {
      super();
      this.a = p0.a();
      this.b = p0.b();
    }

    private com.google.android.gms.wearable.DataItemAsset c()
    {
      return (com.google.android.gms.wearable.DataItemAsset)this;
    }

    public final String a()
    {
      return this.a;
    }

    public final String b()
    {
      return this.b;
    }

    /* synthetic */ public final Object h()
    {
      return this;
    }

    public final boolean i_()
    {
      return true;
    }

    public String toString()
    {
      StringBuilder v1;
      v1 = new StringBuilder();
      v1.append("DataItemAssetEntity[");
      v1.append("@");
      v1.append(Integer.toHexString(this.hashCode()));
      if ( this.a != null )
      {
        v1.append(",");
        v1.append(this.a);
      }
      else
      {
        v1.append(",noid");
      }
      v1.append(", key=");
      v1.append(this.b);
      v1.append("]");
      return v1.toString();
    }

}
