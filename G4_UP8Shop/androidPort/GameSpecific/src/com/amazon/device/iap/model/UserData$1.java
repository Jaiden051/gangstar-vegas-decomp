// Decompiled from classes.dex (SourceFile: UserData$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

final class UserData$1 implements android.os.Parcelable.Creator {
    // Methods
    UserData$1()
    {
      super();
    }

    public final com.amazon.device.iap.model.UserData createFromParcel(android.os.Parcel p0)
    {
      return new com.amazon.device.iap.model.UserData(p0, null);
    }



    public final com.amazon.device.iap.model.UserData[] newArray(int p0)
    {
      return new com.amazon.device.iap.model.UserData[p0];
    }



}
