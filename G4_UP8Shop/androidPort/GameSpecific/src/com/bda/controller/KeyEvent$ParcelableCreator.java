// Decompiled from classes.dex (SourceFile: KeyEvent$ParcelableCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

final class KeyEvent$ParcelableCreator implements android.os.Parcelable.Creator {
    // Methods
    KeyEvent$ParcelableCreator()
    {
      super();
    }

    public final com.bda.controller.KeyEvent createFromParcel(android.os.Parcel p0)
    {
      return new com.bda.controller.KeyEvent(p0);
    }

    public final com.bda.controller.KeyEvent[] newArray(int p0)
    {
      return new com.bda.controller.KeyEvent[p0];
    }





}
