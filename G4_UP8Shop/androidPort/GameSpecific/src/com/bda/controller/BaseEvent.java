// Decompiled from classes.dex (SourceFile: BaseEvent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

class BaseEvent implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final long a;
    final int b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.bda.controller.BaseEvent$ParcelableCreator();
    }

    public BaseEvent(long p0, int p2)
    {
      super();
      this.a = p0;
      this.b = p2;
    }

    BaseEvent(android.os.Parcel p0)
    {
      super();
      this.a = p0.readLong();
      this.b = p0.readInt();
    }

    private long b()
    {
      return this.a;
    }

    public final int a()
    {
      return this.b;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      p0.writeLong(this.a);
      p0.writeInt(this.b);
    }

}
