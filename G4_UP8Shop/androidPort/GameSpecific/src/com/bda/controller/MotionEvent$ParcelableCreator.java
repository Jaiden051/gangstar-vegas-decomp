// Decompiled from classes.dex (SourceFile: MotionEvent$ParcelableCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

final class MotionEvent$ParcelableCreator implements android.os.Parcelable.Creator {
    // Methods
    MotionEvent$ParcelableCreator()
    {
      super();
    }

    public final com.bda.controller.MotionEvent createFromParcel(android.os.Parcel p0)
    {
      return new com.bda.controller.MotionEvent(p0);
    }

    public final com.bda.controller.MotionEvent[] newArray(int p0)
    {
      return new com.bda.controller.MotionEvent[p0];
    }





}
