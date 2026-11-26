// Decompiled from classes.dex (SourceFile: OpenFileIntentSenderRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class OpenFileIntentSenderRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final java.lang.String b;
    final java.lang.String[] c;
    final com.google.android.gms.drive.DriveId d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.as();
    }

    OpenFileIntentSenderRequest(int p0, String p1, String[] p2, com.google.android.gms.drive.DriveId p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
    }

    public OpenFileIntentSenderRequest(String p0, String[] p1, com.google.android.gms.drive.DriveId p2)
    {
      this(1, p0, p1, p2);
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      as.a(this, p0, p1);
    }

}
