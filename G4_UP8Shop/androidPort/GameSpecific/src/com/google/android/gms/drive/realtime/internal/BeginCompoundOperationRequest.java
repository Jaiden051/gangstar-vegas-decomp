// Decompiled from classes.dex (SourceFile: BeginCompoundOperationRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

public class BeginCompoundOperationRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final boolean b;
    final java.lang.String c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.realtime.internal.a();
    }

    BeginCompoundOperationRequest(int p0, boolean p1, String p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.realtime.internal.a.a(this, p0, p1);
    }

}
