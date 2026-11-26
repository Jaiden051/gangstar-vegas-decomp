// Decompiled from classes.dex (SourceFile: HasFilter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query.internal;

public class HasFilter<T> implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.drive.query.Filter {
    // Fields
    public static final com.google.android.gms.drive.query.internal.f CREATOR;
    final com.google.android.gms.drive.metadata.internal.MetadataBundle a;
    final int b;
    final com.google.android.gms.drive.metadata.MetadataField c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.drive.query.internal.f();
    }

    HasFilter(int p0, com.google.android.gms.drive.metadata.internal.MetadataBundle p1)
    {
      super();
      this.b = p0;
      this.a = p1;
      this.c = e.b(p1);
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.query.internal.f.a(this, p0, p1);
    }

}
