// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class p implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    public final int a;
    public final int b;
    public final int c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.internal.q();
    }

    p(int p0, int p1, int p2)
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
      com.google.android.gms.wearable.internal.q.a(this, p0, p1);
    }

}
