// Decompiled from classes.dex (SourceFile: Product$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

final class Product$1 implements android.os.Parcelable.Creator {
    // Methods
    Product$1()
    {
      super();
    }

    public final com.amazon.device.iap.model.Product createFromParcel(android.os.Parcel p0)
    {
      return new com.amazon.device.iap.model.Product(p0, null);
    }



    public final com.amazon.device.iap.model.Product[] newArray(int p0)
    {
      return new com.amazon.device.iap.model.Product[p0];
    }



}
