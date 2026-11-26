// Decompiled from classes.dex (SourceFile: QueryRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class QueryRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.query.Query b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.internal.at();
    }

    QueryRequest(int p0, com.google.android.gms.drive.query.Query p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public QueryRequest(com.google.android.gms.drive.query.Query p0)
    {
      this(1, p0);
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      at.a(this, p0, p1);
    }

}
