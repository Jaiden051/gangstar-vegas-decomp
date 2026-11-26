// Decompiled from classes.dex (SourceFile: af.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class af implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.wearable.MessageEvent {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    private final int b;
    private final java.lang.String c;
    private final byte[] d;
    private final java.lang.String e;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.internal.ag();
    }

    af(int p0, int p1, String p2, byte[] p3, String p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = (byte[])p3;
      this.e = p4;
    }

    public final int a()
    {
      return this.b;
    }

    public final String b()
    {
      return this.c;
    }

    public final byte[] c()
    {
      return this.d;
    }

    public final String d()
    {
      return this.e;
    }

    public int describeContents()
    {
      return 0;
    }

    public String toString()
    {
      StringBuilder v1;
      Object v2;
      v1 = new StringBuilder("MessageEventParcelable[").append(this.b).append(",").append(this.c).append(", size=");
      if ( this.d != null )
        v2 = Integer.valueOf(this.d.length);
      else
        v2 = "null";
      return v1.append(v2).append("]").toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ag.a(this, p0, p1);
    }

}
