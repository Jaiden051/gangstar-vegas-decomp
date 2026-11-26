// Decompiled from classes.dex (SourceFile: RequestId$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

final class RequestId$1 implements android.os.Parcelable.Creator {
    // Methods
    RequestId$1()
    {
      super();
    }

    public final com.amazon.device.iap.model.RequestId createFromParcel(android.os.Parcel p0)
    {
      return new com.amazon.device.iap.model.RequestId(p0, null);
    }



    public final com.amazon.device.iap.model.RequestId[] newArray(int p0)
    {
      return new com.amazon.device.iap.model.RequestId[p0];
    }



}
