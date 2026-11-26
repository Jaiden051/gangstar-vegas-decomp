// Decompiled from classes.dex (SourceFile: StateEvent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

public class StateEvent extends com.bda.controller.BaseEvent implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    public static int i;
    public static int j;
    public static int k;
    public static int l;
    public static int m;
    public static int n;
    public static int o;
    public static int p;
    final int q;
    final int r;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.bda.controller.StateEvent$ParcelableCreator();
    }

    private StateEvent(long p0, int p2, int p3, int p4)
    {
      super(p0, p2);
      this.q = p3;
      this.r = p4;
    }

    StateEvent(android.os.Parcel p0)
    {
      super(p0);
      this.q = p0.readInt();
      this.r = p0.readInt();
    }

    public final int b()
    {
      return this.r;
    }

    public final int c()
    {
      return this.q;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      super.writeToParcel(p0, p1);
      p0.writeInt(this.q);
      p0.writeInt(this.r);
    }

}
