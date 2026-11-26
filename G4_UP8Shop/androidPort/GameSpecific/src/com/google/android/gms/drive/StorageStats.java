// Decompiled from classes.dex (SourceFile: StorageStats.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

public class StorageStats implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final long b;
    final long c;
    final long d;
    final long e;
    final int f;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.e();
    }

    StorageStats(int p0, long p1, long p3, long p5, long p7, int p9)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p3;
      this.d = p5;
      this.e = p7;
      this.f = p9;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.e.a(this, p0, p1);
    }

}
