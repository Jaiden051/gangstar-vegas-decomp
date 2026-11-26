// Decompiled from classes.dex (SourceFile: KeyEvent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

public final class KeyEvent extends com.bda.controller.BaseEvent implements android.os.Parcelable {
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
    public static int q;
    public static int r;
    public static int s;
    public static int t;
    public static int u;
    final int v;
    final int w;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.bda.controller.KeyEvent$ParcelableCreator();
    }

    private KeyEvent(long p0, int p2, int p3, int p4)
    {
      super(p0, p2);
      this.v = p3;
      this.w = p4;
    }

    KeyEvent(android.os.Parcel p0)
    {
      super(p0);
      this.v = p0.readInt();
      this.w = p0.readInt();
    }

    public final int b()
    {
      return this.w;
    }

    public final int c()
    {
      return this.v;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      super.writeToParcel(p0, p1);
      p0.writeInt(this.v);
      p0.writeInt(this.w);
    }

}
