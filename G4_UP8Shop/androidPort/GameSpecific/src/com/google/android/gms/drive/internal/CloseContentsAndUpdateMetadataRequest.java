// Decompiled from classes.dex (SourceFile: CloseContentsAndUpdateMetadataRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class CloseContentsAndUpdateMetadataRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.DriveId b;
    final com.google.android.gms.drive.metadata.internal.MetadataBundle c;
    final com.google.android.gms.drive.Contents d;
    final boolean e;
    final java.lang.String f;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.e();
    }

    CloseContentsAndUpdateMetadataRequest(
            int p0,
            com.google.android.gms.drive.DriveId p1,
            com.google.android.gms.drive.metadata.internal.MetadataBundle p2,
            com.google.android.gms.drive.Contents p3,
            boolean p4,
            String p5)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
    }

    public CloseContentsAndUpdateMetadataRequest(
            com.google.android.gms.drive.DriveId p0,
            com.google.android.gms.drive.metadata.internal.MetadataBundle p1,
            com.google.android.gms.drive.Contents p2,
            boolean p3,
            String p4)
    {
      this(1, p0, p1, p2, false, null);
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.internal.e.a(this, p0, p1);
    }

}
