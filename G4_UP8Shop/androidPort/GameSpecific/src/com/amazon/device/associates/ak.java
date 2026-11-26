// Decompiled from classes.dex (SourceFile: ak.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class ak implements android.os.Parcelable.Creator {
    // Methods
    ak()
    {
      super();
    }

    public final com.amazon.device.associates.Price a(android.os.Parcel p0)
    {
      return new com.amazon.device.associates.Price(p0, null);
    }

    public final com.amazon.device.associates.Price[] a(int p0)
    {
      return new com.amazon.device.associates.Price[p0];
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
