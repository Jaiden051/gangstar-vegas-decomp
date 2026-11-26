// Decompiled from classes.dex (SourceFile: CreateFileRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.internal.hn;
public class CreateFileRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.DriveId b;
    final com.google.android.gms.drive.metadata.internal.MetadataBundle c;
    final com.google.android.gms.drive.Contents d;
    final java.lang.Integer e;
    final boolean f;
    final java.lang.String g;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.j();
    }

    CreateFileRequest(
            int p0,
            com.google.android.gms.drive.DriveId p1,
            com.google.android.gms.drive.metadata.internal.MetadataBundle p2,
            com.google.android.gms.drive.Contents p3,
            Integer p4,
            boolean p5,
            String p6)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.drive.DriveId)hn.f(p1);
      this.c = (com.google.android.gms.drive.metadata.internal.MetadataBundle)hn.f(p2);
      if ( p4 != null && p4.intValue() != 0 )
        this.d = null;
      else
        this.d = (com.google.android.gms.drive.Contents)hn.f(p3);
      this.e = p4;
      this.f = p5;
      this.g = p6;
    }

    public CreateFileRequest(
            com.google.android.gms.drive.DriveId p0,
            com.google.android.gms.drive.metadata.internal.MetadataBundle p1,
            com.google.android.gms.drive.Contents p2,
            int p3,
            boolean p4,
            String p5)
    {
      this(2, p0, p1, p2, Integer.valueOf(p3), p4, p5);
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.internal.j.a(this, p0, p1);
    }

}
