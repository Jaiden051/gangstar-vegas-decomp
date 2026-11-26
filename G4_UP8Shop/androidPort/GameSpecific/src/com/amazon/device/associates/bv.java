// Decompiled from classes.dex (SourceFile: bv.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class bv implements android.os.Parcelable.Creator {
    // Methods
    bv()
    {
      super();
    }

    public final com.amazon.device.associates.Image a(android.os.Parcel p0)
    {
      return new com.amazon.device.associates.Image(p0, null);
    }

    public final com.amazon.device.associates.Image[] a(int p0)
    {
      return new com.amazon.device.associates.Image[p0];
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
