// Decompiled from classes.dex (SourceFile: SortOrder$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query;

public class SortOrder$Builder {
    // Fields
    private final java.util.List a;

    // Methods
    public SortOrder$Builder()
    {
      super();
      this.a = new java.util.ArrayList();
    }

    private com.google.android.gms.drive.query.SortOrder$Builder a(
            com.google.android.gms.drive.metadata.SortableMetadataField p0)
    {
      this.a.add(new com.google.android.gms.drive.query.internal.FieldWithSortOrder(p0.a(), true));
      return this;
    }

    private com.google.android.gms.drive.query.SortOrder a()
    {
      return new com.google.android.gms.drive.query.SortOrder(this.a, 0);
    }

    private com.google.android.gms.drive.query.SortOrder$Builder b(
            com.google.android.gms.drive.metadata.SortableMetadataField p0)
    {
      this.a.add(new com.google.android.gms.drive.query.internal.FieldWithSortOrder(p0.a(), false));
      return this;
    }

}
