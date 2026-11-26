// Decompiled from classes.dex (SourceFile: Query.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query;

public class Query implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final com.google.android.gms.drive.query.internal.LogicalFilter a;
    final java.lang.String b;
    final com.google.android.gms.drive.query.SortOrder c;
    final int d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.query.a();
    }

    Query(
            int p0,
            com.google.android.gms.drive.query.internal.LogicalFilter p1,
            String p2,
            com.google.android.gms.drive.query.SortOrder p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    }

    Query(
            com.google.android.gms.drive.query.internal.LogicalFilter p0,
            String p1,
            com.google.android.gms.drive.query.SortOrder p2)
    {
      this(1, p0, p1, p2);
    }

    public final com.google.android.gms.drive.query.Filter a()
    {
      return (com.google.android.gms.drive.query.Filter)this.a;
    }

    public final String b()
    {
      return this.b;
    }

    public final com.google.android.gms.drive.query.SortOrder c()
    {
      return this.c;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.query.a.a(this, p0, p1);
    }

}
