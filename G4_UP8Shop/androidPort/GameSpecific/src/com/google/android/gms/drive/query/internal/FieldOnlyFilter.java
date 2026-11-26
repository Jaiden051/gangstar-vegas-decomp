// Decompiled from classes.dex (SourceFile: FieldOnlyFilter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query.internal;

import com.google.android.gms.drive.metadata.internal.MetadataBundle;
public class FieldOnlyFilter implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.drive.query.Filter {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final com.google.android.gms.drive.metadata.internal.MetadataBundle a;
    final int b;
    private final com.google.android.gms.drive.metadata.MetadataField c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.query.internal.b();
    }

    FieldOnlyFilter(int p0, com.google.android.gms.drive.metadata.internal.MetadataBundle p1)
    {
      super();
      this.b = p0;
      this.a = p1;
      this.c = e.b(p1);
    }

    public FieldOnlyFilter(com.google.android.gms.drive.metadata.SearchableMetadataField<?> p0)
    {
      this(1, MetadataBundle.a((com.google.android.gms.drive.metadata.MetadataField)p0, null));
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.query.internal.b.a(this, p0, p1);
    }

}
