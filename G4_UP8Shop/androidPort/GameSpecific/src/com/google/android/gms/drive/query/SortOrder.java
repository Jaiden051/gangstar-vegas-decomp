// Decompiled from classes.dex (SourceFile: SortOrder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query;

public class SortOrder implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final java.util.List a;
    final int b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.query.b();
    }

    SortOrder(int p0, java.util.List<com.google.android.gms.drive.query.internal.FieldWithSortOrder> p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    }

    private SortOrder(java.util.List<com.google.android.gms.drive.query.internal.FieldWithSortOrder> p0)
    {
      this(1, p0);
    }

    /* synthetic */ SortOrder(java.util.List p0, int p1)
    {
      this(p0);
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.query.b.a(this, p0, p1);
    }

}
