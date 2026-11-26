// Decompiled from classes.dex (SourceFile: UpdateMetadataRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class UpdateMetadataRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.DriveId b;
    final com.google.android.gms.drive.metadata.internal.MetadataBundle c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.ay();
    }

    UpdateMetadataRequest(
            int p0,
            com.google.android.gms.drive.DriveId p1,
            com.google.android.gms.drive.metadata.internal.MetadataBundle p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public UpdateMetadataRequest(
            com.google.android.gms.drive.DriveId p0,
            com.google.android.gms.drive.metadata.internal.MetadataBundle p1)
    {
      this(1, p0, p1);
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ay.a(this, p0, p1);
    }

}
