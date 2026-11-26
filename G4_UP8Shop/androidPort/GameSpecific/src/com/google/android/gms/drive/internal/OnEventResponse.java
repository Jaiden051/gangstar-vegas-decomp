// Decompiled from classes.dex (SourceFile: OnEventResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class OnEventResponse implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final int b;
    final com.google.android.gms.drive.events.ChangeEvent c;
    final com.google.android.gms.drive.events.FileConflictEvent d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.aj();
    }

    OnEventResponse(
            int p0,
            int p1,
            com.google.android.gms.drive.events.ChangeEvent p2,
            com.google.android.gms.drive.events.FileConflictEvent p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
    }

    public final int a()
    {
      return this.b;
    }

    public final com.google.android.gms.drive.events.ChangeEvent b()
    {
      return this.c;
    }

    public final com.google.android.gms.drive.events.FileConflictEvent c()
    {
      return this.d;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      aj.a(this, p0, p1);
    }

}
