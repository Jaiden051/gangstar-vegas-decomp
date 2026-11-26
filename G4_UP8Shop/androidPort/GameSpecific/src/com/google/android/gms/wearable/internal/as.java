// Decompiled from classes.dex (SourceFile: as.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class as implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    public final int a;
    public final int b;
    public final long c;
    public final java.util.List d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.internal.at();
    }

    as(int p0, int p1, long p2, java.util.List<com.google.android.gms.wearable.internal.ak> p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p4;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      at.a(this, p0, p1);
    }

}
