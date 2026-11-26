// Decompiled from classes.dex (SourceFile: DataItemAssetParcelable.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

import com.google.android.gms.internal.hn;
public class DataItemAssetParcelable implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.wearable.DataItemAsset {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    private final java.lang.String b;
    private final java.lang.String c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.internal.j();
    }

    DataItemAssetParcelable(int p0, String p1, String p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public DataItemAssetParcelable(com.google.android.gms.wearable.DataItemAsset p0)
    {
      super();
      this.a = 1;
      this.b = (String)hn.f(p0.a());
      this.c = (String)hn.f(p0.b());
    }

    private com.google.android.gms.wearable.DataItemAsset c()
    {
      return (com.google.android.gms.wearable.DataItemAsset)this;
    }

    public final String a()
    {
      return this.b;
    }

    public final String b()
    {
      return this.c;
    }

    public int describeContents()
    {
      return 0;
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
      v1.append("DataItemAssetParcelable[");
      v1.append("@");
      v1.append(Integer.toHexString(this.hashCode()));
      if ( this.b != null )
      {
        v1.append(",");
        v1.append(this.b);
      }
      else
      {
        v1.append(",noid");
      }
      v1.append(", key=");
      v1.append(this.c);
      v1.append("]");
      return v1.toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wearable.internal.j.a(this, p0, p1);
    }

}
