// Decompiled from classes.dex (SourceFile: ParcelableEventList.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal.event;

public class ParcelableEventList implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.realtime.internal.event.ParcelableEvent[] b;
    final com.google.android.gms.common.data.DataHolder c;
    final boolean d;
    final com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent[] e;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.realtime.internal.event.b();
    }

    ParcelableEventList(
            int p0,
            com.google.android.gms.drive.realtime.internal.event.ParcelableEvent[] p1,
            com.google.android.gms.common.data.DataHolder p2,
            boolean p3,
            com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent[] p4)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.drive.realtime.internal.event.ParcelableEvent[])p1;
      this.c = p2;
      this.d = p3;
      this.e = (com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent[])p4;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.realtime.internal.event.b.a(this, p0, p1);
    }

}
