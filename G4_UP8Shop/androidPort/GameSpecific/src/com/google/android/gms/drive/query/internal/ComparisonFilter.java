// Decompiled from classes.dex (SourceFile: ComparisonFilter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query.internal;

import com.google.android.gms.drive.metadata.internal.MetadataBundle;
public class ComparisonFilter<T> implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.drive.query.Filter {
    // Fields
    public static final com.google.android.gms.drive.query.internal.a CREATOR;
    final com.google.android.gms.drive.query.internal.Operator a;
    final com.google.android.gms.drive.metadata.internal.MetadataBundle b;
    final int c;
    final com.google.android.gms.drive.metadata.MetadataField d;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.drive.query.internal.a();
    }

    ComparisonFilter(
            int p0,
            com.google.android.gms.drive.query.internal.Operator p1,
            com.google.android.gms.drive.metadata.internal.MetadataBundle p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
      this.d = e.b(p2);
    }

    public ComparisonFilter(
            com.google.android.gms.drive.query.internal.Operator p0,
            com.google.android.gms.drive.metadata.SearchableMetadataField<T> p1,
            T p2)
    {
      this(1, p0, MetadataBundle.a((com.google.android.gms.drive.metadata.MetadataField)p1, p2));
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.query.internal.a.a(this, p0, p1);
    }

}
