// Decompiled from classes.dex (SourceFile: v.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class v implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    public final int a;
    public final int b;
    public final com.google.android.gms.wearable.internal.m c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.internal.w();
    }

    v(int p0, int p1, com.google.android.gms.wearable.internal.m p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wearable.internal.w.a(this, p0, p1);
    }

}
