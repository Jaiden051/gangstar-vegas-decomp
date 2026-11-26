// Decompiled from classes.dex (SourceFile: ValuesSetDetails.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal.event;

public class ValuesSetDetails implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final int b;
    final int c;
    final int d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.realtime.internal.event.j();
    }

    ValuesSetDetails(int p0, int p1, int p2, int p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.realtime.internal.event.j.a(this, p0, p1);
    }

}
