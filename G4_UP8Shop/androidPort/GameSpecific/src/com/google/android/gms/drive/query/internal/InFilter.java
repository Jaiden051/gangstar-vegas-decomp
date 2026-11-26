// Decompiled from classes.dex (SourceFile: InFilter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query.internal;

import com.google.android.gms.drive.metadata.internal.MetadataBundle;
import java.util.Collections;
public class InFilter<T> implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.drive.query.Filter {
    // Fields
    public static final com.google.android.gms.drive.query.internal.g CREATOR;
    final com.google.android.gms.drive.metadata.internal.MetadataBundle a;
    final int b;
    private final com.google.android.gms.drive.metadata.b c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.drive.query.internal.g();
    }

    InFilter(int p0, com.google.android.gms.drive.metadata.internal.MetadataBundle p1)
    {
      super();
      this.b = p0;
      this.a = p1;
      this.c = (com.google.android.gms.drive.metadata.b)e.b(p1);
    }

    public InFilter(com.google.android.gms.drive.metadata.SearchableCollectionMetadataField<T> p0, T p1)
    {
      this(1, MetadataBundle.a((com.google.android.gms.drive.metadata.MetadataField)p0, Collections.singleton(p1)));
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.query.internal.g.a(this, p0, p1);
    }

}
