// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class g implements android.os.Parcelable.Creator {
    // Methods
    g()
    {
      super();
    }

    public final com.amazon.device.associates.Receipt a(android.os.Parcel p0)
    {
      return new com.amazon.device.associates.Receipt(p0, null);
    }

    public final com.amazon.device.associates.Receipt[] a(int p0)
    {
      return new com.amazon.device.associates.Receipt[p0];
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
