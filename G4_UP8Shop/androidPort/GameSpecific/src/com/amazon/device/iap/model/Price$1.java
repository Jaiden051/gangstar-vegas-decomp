// Decompiled from classes.dex (SourceFile: Price$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

final class Price$1 implements android.os.Parcelable.Creator {
    // Methods
    Price$1()
    {
      super();
    }

    public final com.amazon.device.iap.model.Price createFromParcel(android.os.Parcel p0)
    {
      return new com.amazon.device.iap.model.Price(p0, null);
    }



    public final com.amazon.device.iap.model.Price[] newArray(int p0)
    {
      return new com.amazon.device.iap.model.Price[p0];
    }



}
