// Decompiled from classes.dex (SourceFile: ValueChangedDetails.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal.event;

public class ValueChangedDetails implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final int b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.realtime.internal.event.g();
    }

    ValueChangedDetails(int p0, int p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.realtime.internal.event.g.a(this, p0, p1);
    }

}
