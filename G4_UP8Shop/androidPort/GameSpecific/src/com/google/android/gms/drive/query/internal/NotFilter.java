// Decompiled from classes.dex (SourceFile: NotFilter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query.internal;

public class NotFilter implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.drive.query.Filter {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final com.google.android.gms.drive.query.internal.FilterHolder a;
    final int b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.query.internal.j();
    }

    NotFilter(int p0, com.google.android.gms.drive.query.internal.FilterHolder p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    }

    public NotFilter(com.google.android.gms.drive.query.Filter p0)
    {
      this(1, new com.google.android.gms.drive.query.internal.FilterHolder(p0));
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.query.internal.j.a(this, p0, p1);
    }

}
