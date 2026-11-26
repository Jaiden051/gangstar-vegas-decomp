// Decompiled from classes.dex (SourceFile: ae.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class ae implements android.os.Parcelable.Creator {
    // Methods
    ae()
    {
      super();
    }

    public final com.amazon.device.associates.RequestId a(android.os.Parcel p0)
    {
      return new com.amazon.device.associates.RequestId(p0, null);
    }

    public final com.amazon.device.associates.RequestId[] a(int p0)
    {
      return new com.amazon.device.associates.RequestId[p0];
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
