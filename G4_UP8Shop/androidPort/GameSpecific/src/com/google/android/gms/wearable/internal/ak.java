// Decompiled from classes.dex (SourceFile: ak.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class ak implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    public final int a;
    public final java.lang.String b;
    public final java.lang.String c;
    public final long d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.internal.al();
    }

    ak(int p0, String p1, String p2, long p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      al.a(this, p0, p1);
    }

}
