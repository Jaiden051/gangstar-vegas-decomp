// Decompiled from classes.dex (SourceFile: RealTimeMessage.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.realtime;

import com.google.android.gms.internal.hn;
public final class RealTimeMessage implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    public static int a;
    public static int b;
    private final java.lang.String c;
    private final byte[] d;
    private final int e;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.games.multiplayer.realtime.RealTimeMessage$1();
    }

    private RealTimeMessage(android.os.Parcel p0)
    {
      this(p0.readString(), p0.createByteArray(), p0.readInt());
    }

    /* synthetic */ RealTimeMessage(android.os.Parcel p0, int p1)
    {
      this(p0);
    }

    private RealTimeMessage(String p0, byte[] p1, int p2)
    {
      super();
      this.c = (String)hn.f(p0);
      this.d = (byte[])((byte[])hn.f(p1)).clone();
      this.e = p2;
    }

    private String a()
    {
      return this.c;
    }

    private byte[] b()
    {
      return this.d;
    }

    private boolean c()
    {
      return this.e == 1;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      p0.writeString(this.c);
      p0.writeByteArray(this.d);
      p0.writeInt(this.e);
    }

}
