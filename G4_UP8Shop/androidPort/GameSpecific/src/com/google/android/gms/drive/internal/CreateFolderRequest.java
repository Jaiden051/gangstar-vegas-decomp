// Decompiled from classes.dex (SourceFile: CreateFolderRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.internal.hn;
public class CreateFolderRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.DriveId b;
    final com.google.android.gms.drive.metadata.internal.MetadataBundle c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.k();
    }

    CreateFolderRequest(
            int p0,
            com.google.android.gms.drive.DriveId p1,
            com.google.android.gms.drive.metadata.internal.MetadataBundle p2)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.drive.DriveId)hn.f(p1);
      this.c = (com.google.android.gms.drive.metadata.internal.MetadataBundle)hn.f(p2);
    }

    public CreateFolderRequest(
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
      com.google.android.gms.drive.internal.k.a(this, p0, p1);
    }

}
