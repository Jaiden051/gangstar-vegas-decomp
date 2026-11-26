// Decompiled from classes.dex (SourceFile: AddEventListenerRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class AddEventListenerRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.DriveId b;
    final int c;
    final android.app.PendingIntent d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.a();
    }

    AddEventListenerRequest(int p0, com.google.android.gms.drive.DriveId p1, int p2, android.app.PendingIntent p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
    }

    public AddEventListenerRequest(com.google.android.gms.drive.DriveId p0, int p1, android.app.PendingIntent p2)
    {
      this(1, p0, p1, null);
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.internal.a.a(this, p0, p1);
    }

}
