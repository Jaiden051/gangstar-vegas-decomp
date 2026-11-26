// Decompiled from classes.dex (SourceFile: ir$h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ir$h extends com.google.android.gms.drive.metadata.internal.b implements com.google.android.gms.drive.metadata.SearchableMetadataField {
    // Methods
    public ir$h(String p0, int p1)
    {
      super(p0, 4100000);
    }

    /* synthetic */ protected final Object b(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return this.c(p0, p1, p2);
    }

    protected final Boolean c(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return Boolean.valueOf(p0.b(this.a(), p1, p2) != 0);
    }

}
