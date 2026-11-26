// Decompiled from classes.dex (SourceFile: CreateFileIntentSenderRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class CreateFileIntentSenderRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.metadata.internal.MetadataBundle b;
    final int c;
    final java.lang.String d;
    final com.google.android.gms.drive.DriveId e;
    final java.lang.Integer f;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.i();
    }

    CreateFileIntentSenderRequest(
            int p0,
            com.google.android.gms.drive.metadata.internal.MetadataBundle p1,
            int p2,
            String p3,
            com.google.android.gms.drive.DriveId p4,
            Integer p5)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
    }

    public CreateFileIntentSenderRequest(
            com.google.android.gms.drive.metadata.internal.MetadataBundle p0,
            int p1,
            String p2,
            com.google.android.gms.drive.DriveId p3,
            int p4)
    {
      this(1, p0, p1, p2, p3, Integer.valueOf(p4));
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.internal.i.a(this, p0, p1);
    }

}
