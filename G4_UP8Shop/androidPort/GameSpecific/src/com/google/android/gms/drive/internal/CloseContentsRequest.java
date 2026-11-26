// Decompiled from classes.dex (SourceFile: CloseContentsRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class CloseContentsRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.Contents b;
    final java.lang.Boolean c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.f();
    }

    CloseContentsRequest(int p0, com.google.android.gms.drive.Contents p1, Boolean p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public CloseContentsRequest(com.google.android.gms.drive.Contents p0, boolean p1)
    {
      this(1, p0, Boolean.valueOf(p1));
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.internal.f.a(this, p0, p1);
    }

}
