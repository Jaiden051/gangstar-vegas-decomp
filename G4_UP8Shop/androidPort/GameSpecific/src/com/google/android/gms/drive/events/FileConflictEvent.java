// Decompiled from classes.dex (SourceFile: FileConflictEvent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.events;

public final class FileConflictEvent implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.drive.events.DriveEvent {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.DriveId b;
    final java.lang.String c;
    final android.os.ParcelFileDescriptor e;
    final android.os.ParcelFileDescriptor f;
    final com.google.android.gms.drive.metadata.internal.MetadataBundle g;
    final java.util.ArrayList h;
    private boolean i;
    private boolean j;
    private boolean k;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.events.c();
    }

    FileConflictEvent(
            int p0,
            com.google.android.gms.drive.DriveId p1,
            String p2,
            android.os.ParcelFileDescriptor p3,
            android.os.ParcelFileDescriptor p4,
            com.google.android.gms.drive.metadata.internal.MetadataBundle p5,
            java.util.ArrayList<String> p6)
    {
      super();
      this.i = false;
      this.j = false;
      this.k = false;
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.e = p3;
      this.f = p4;
      this.g = p5;
      this.h = p6;
    }

    public final int a()
    {
      return 2;
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
      v1 = new Object[1];
      v1[0] = this.b;
      return String.format("FileConflictEvent [id=%s]", v1);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.events.c.a(this, p0, p1);
    }

}
