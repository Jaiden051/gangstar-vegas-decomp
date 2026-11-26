// Decompiled from classes.dex (SourceFile: ParcelableEvent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal.event;

public class ParcelableEvent implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final java.lang.String b;
    final java.lang.String c;
    final boolean d;
    final java.lang.String e;
    final java.lang.String f;
    final com.google.android.gms.drive.realtime.internal.event.TextInsertedDetails g;
    final com.google.android.gms.drive.realtime.internal.event.TextDeletedDetails h;
    final com.google.android.gms.drive.realtime.internal.event.ValuesAddedDetails i;
    final com.google.android.gms.drive.realtime.internal.event.ValuesRemovedDetails j;
    final com.google.android.gms.drive.realtime.internal.event.ValuesSetDetails k;
    final com.google.android.gms.drive.realtime.internal.event.ValueChangedDetails l;
    final com.google.android.gms.drive.realtime.internal.event.ReferenceShiftedDetails m;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.realtime.internal.event.a();
    }

    ParcelableEvent(
            int p0,
            String p1,
            String p2,
            boolean p3,
            String p4,
            String p5,
            com.google.android.gms.drive.realtime.internal.event.TextInsertedDetails p6,
            com.google.android.gms.drive.realtime.internal.event.TextDeletedDetails p7,
            com.google.android.gms.drive.realtime.internal.event.ValuesAddedDetails p8,
            com.google.android.gms.drive.realtime.internal.event.ValuesRemovedDetails p9,
            com.google.android.gms.drive.realtime.internal.event.ValuesSetDetails p10,
            com.google.android.gms.drive.realtime.internal.event.ValueChangedDetails p11,
            com.google.android.gms.drive.realtime.internal.event.ReferenceShiftedDetails p12)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p6;
      this.h = p7;
      this.i = p8;
      this.j = p9;
      this.k = p10;
      this.l = p11;
      this.m = p12;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.realtime.internal.event.a.a(this, p0, p1);
    }

}
