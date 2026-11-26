// Decompiled from classes.dex (SourceFile: OnMetadataResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class OnMetadataResponse implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.metadata.internal.MetadataBundle b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.am();
    }

    OnMetadataResponse(int p0, com.google.android.gms.drive.metadata.internal.MetadataBundle p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.drive.metadata.internal.MetadataBundle a()
    {
      return this.b;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      am.a(this, p0, p1);
    }

}
