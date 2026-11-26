// Decompiled from classes.dex (SourceFile: FieldWithSortOrder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query.internal;

public class FieldWithSortOrder implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.drive.query.internal.c CREATOR;
    final java.lang.String a;
    final boolean b;
    final int c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.drive.query.internal.c();
    }

    FieldWithSortOrder(int p0, String p1, boolean p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    }

    public FieldWithSortOrder(String p0, boolean p1)
    {
      this(1, p0, p1);
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.query.internal.c.a(this, p0, p1);
    }

}
