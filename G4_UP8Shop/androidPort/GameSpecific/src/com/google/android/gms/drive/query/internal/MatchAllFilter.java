// Decompiled from classes.dex (SourceFile: MatchAllFilter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query.internal;

public class MatchAllFilter implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.drive.query.Filter {
    // Fields
    public static final com.google.android.gms.drive.query.internal.i CREATOR;
    final int a;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.drive.query.internal.i();
    }

    public MatchAllFilter()
    {
      this(1);
    }

    MatchAllFilter(int p0)
    {
      super();
      this.a = p0;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.query.internal.i.a(this, p0, p1);
    }

}
