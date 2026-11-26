// Decompiled from classes.dex (SourceFile: AuthorizeAccessRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class AuthorizeAccessRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final long b;
    final com.google.android.gms.drive.DriveId c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.b();
    }

    AuthorizeAccessRequest(int p0, long p1, com.google.android.gms.drive.DriveId p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p3;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.internal.b.a(this, p0, p1);
    }

}
