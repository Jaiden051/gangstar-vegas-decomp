// Decompiled from classes.dex (SourceFile: bw.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class bw implements android.os.Parcelable.Creator {
    // Methods
    bw()
    {
      super();
    }

    public final com.amazon.device.associates.Product a(android.os.Parcel p0)
    {
      return new com.amazon.device.associates.Product(p0, null);
    }

    public final com.amazon.device.associates.Product[] a(int p0)
    {
      return new com.amazon.device.associates.Product[p0];
    }

    /* synthetic */ public final Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

    /* synthetic */ public final Object[] newArray(int p0)
    {
      return this.a(p0);
    }

}
