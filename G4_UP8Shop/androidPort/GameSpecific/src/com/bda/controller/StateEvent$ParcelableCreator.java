// Decompiled from classes.dex (SourceFile: StateEvent$ParcelableCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

final class StateEvent$ParcelableCreator implements android.os.Parcelable.Creator {
    // Methods
    StateEvent$ParcelableCreator()
    {
      super();
    }

    public final com.bda.controller.StateEvent createFromParcel(android.os.Parcel p0)
    {
      return new com.bda.controller.StateEvent(p0);
    }

    public final com.bda.controller.StateEvent[] newArray(int p0)
    {
      return new com.bda.controller.StateEvent[p0];
    }





}
