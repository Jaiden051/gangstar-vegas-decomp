// Decompiled from classes.dex (SourceFile: OnStorageStatsResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class OnStorageStatsResponse implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    com.google.android.gms.drive.StorageStats b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.ap();
    }

    OnStorageStatsResponse(int p0, com.google.android.gms.drive.StorageStats p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ap.a(this, p0, p1);
    }

}
