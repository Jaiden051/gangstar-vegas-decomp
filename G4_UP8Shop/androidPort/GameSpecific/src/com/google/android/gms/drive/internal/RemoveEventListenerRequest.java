// Decompiled from classes.dex (SourceFile: RemoveEventListenerRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class RemoveEventListenerRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.DriveId b;
    final int c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.au();
    }

    RemoveEventListenerRequest(int p0, com.google.android.gms.drive.DriveId p1, int p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public RemoveEventListenerRequest(com.google.android.gms.drive.DriveId p0, int p1)
    {
      this(1, p0, p1);
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      au.a(this, p0, p1);
    }

}
