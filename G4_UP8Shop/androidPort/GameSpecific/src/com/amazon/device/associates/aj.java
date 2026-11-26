// Decompiled from classes.dex (SourceFile: aj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class aj implements android.os.Parcelable.Creator {
    // Methods
    aj()
    {
      super();
    }

    public final com.amazon.device.associates.Offset a(android.os.Parcel p0)
    {
      return new com.amazon.device.associates.Offset(p0, null);
    }

    public final com.amazon.device.associates.Offset[] a(int p0)
    {
      return new com.amazon.device.associates.Offset[p0];
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
