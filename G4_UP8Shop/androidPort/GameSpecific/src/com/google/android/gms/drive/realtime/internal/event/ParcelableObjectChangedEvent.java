// Decompiled from classes.dex (SourceFile: ParcelableObjectChangedEvent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal.event;

public class ParcelableObjectChangedEvent implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final java.lang.String b;
    final java.lang.String c;
    final boolean d;
    final java.lang.String e;
    final java.lang.String f;
    final int g;
    final int h;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.realtime.internal.event.c();
    }

    ParcelableObjectChangedEvent(int p0, String p1, String p2, boolean p3, String p4, String p5, int p6, int p7)
    {
      super();
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.a = p0;
      this.g = p6;
      this.h = p7;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.realtime.internal.event.c.a(this, p0, p1);
    }

}
