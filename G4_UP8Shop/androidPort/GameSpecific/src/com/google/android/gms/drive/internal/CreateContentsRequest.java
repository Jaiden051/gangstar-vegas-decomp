// Decompiled from classes.dex (SourceFile: CreateContentsRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class CreateContentsRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.g();
    }

    public CreateContentsRequest()
    {
      this(1);
    }

    CreateContentsRequest(int p0)
    {
      super();
      this.a = p0;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.internal.g.a(this, p0, p1);
    }

}
