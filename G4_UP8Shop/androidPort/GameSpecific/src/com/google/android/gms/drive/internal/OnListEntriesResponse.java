// Decompiled from classes.dex (SourceFile: OnListEntriesResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class OnListEntriesResponse implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.common.data.DataHolder b;
    final boolean c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.ak();
    }

    OnListEntriesResponse(int p0, com.google.android.gms.common.data.DataHolder p1, boolean p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public final com.google.android.gms.common.data.DataHolder a()
    {
      return this.b;
    }

    public final boolean b()
    {
      return this.c;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ak.a(this, p0, p1);
    }

}
