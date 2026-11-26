// Decompiled from classes.dex (SourceFile: GetMetadataRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class GetMetadataRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.DriveId b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.z();
    }

    GetMetadataRequest(int p0, com.google.android.gms.drive.DriveId p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public GetMetadataRequest(com.google.android.gms.drive.DriveId p0)
    {
      this(1, p0);
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.internal.z.a(this, p0, p1);
    }

}
