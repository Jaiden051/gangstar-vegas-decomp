// Decompiled from classes.dex (SourceFile: BaseEvent$ParcelableCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

final class BaseEvent$ParcelableCreator implements android.os.Parcelable.Creator {
    // Methods
    BaseEvent$ParcelableCreator()
    {
      super();
    }

    public final com.bda.controller.BaseEvent createFromParcel(android.os.Parcel p0)
    {
      return new com.bda.controller.BaseEvent(p0);
    }

    public final com.bda.controller.BaseEvent[] newArray(int p0)
    {
      return new com.bda.controller.BaseEvent[p0];
    }





}
