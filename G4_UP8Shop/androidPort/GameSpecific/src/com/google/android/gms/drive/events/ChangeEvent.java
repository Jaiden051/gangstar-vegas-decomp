// Decompiled from classes.dex (SourceFile: ChangeEvent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.events;

public final class ChangeEvent implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.drive.events.ResourceEvent {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.DriveId b;
    final int c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.events.a();
    }

    ChangeEvent(int p0, com.google.android.gms.drive.DriveId p1, int p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    private boolean c()
    {
      return (this.c & 1) != 0;
    }

    private boolean d()
    {
      return (this.c & 2) != 0;
    }

    public final int a()
    {
      return 1;
    }

    public final com.google.android.gms.drive.DriveId b()
    {
      return this.b;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String toString()
    {
      Object[] v1;
      v1 = new Object[2];
      v1[0] = this.b;
      v1[1] = Integer.valueOf(this.c);
      return String.format("ChangeEvent [id=%s,changeFlags=%x]", v1);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.events.a.a(this, p0, p1);
    }

}
