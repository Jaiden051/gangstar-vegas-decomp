// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.drive.metadata.internal.MetadataBundle;
public final class l extends com.google.android.gms.drive.Metadata {
    // Fields
    private final com.google.android.gms.drive.metadata.internal.MetadataBundle c;

    // Methods
    public l(com.google.android.gms.drive.metadata.internal.MetadataBundle p0)
    {
      super();
      this.c = p0;
    }

    private com.google.android.gms.drive.Metadata b()
    {
      return new com.google.android.gms.drive.internal.l(MetadataBundle.a(this.c));
    }

    protected final <T> T a(com.google.android.gms.drive.metadata.MetadataField<T> p0)
    {
      return this.c.a(p0);
    }

    /* synthetic */ public final Object h()
    {
      return new com.google.android.gms.drive.internal.l(MetadataBundle.a(this.c));
    }

    public final boolean i_()
    {
      return this.c != null;
    }

    public final String toString()
    {
      return "Metadata [mImpl=" + this.c + "]";
    }

}
