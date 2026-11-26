// Decompiled from classes.dex (SourceFile: MetadataBuffer$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

import com.google.android.gms.internal.ir;
class MetadataBuffer$a extends com.google.android.gms.drive.Metadata {
    // Fields
    private final com.google.android.gms.common.data.DataHolder c;
    private final int d;
    private final int e;

    // Methods
    public MetadataBuffer$a(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super();
      this.c = p0;
      this.d = p1;
      this.e = p0.a(p1);
    }

    /* synthetic */ static int a(com.google.android.gms.drive.MetadataBuffer$a p0)
    {
      return p0.d;
    }

    private com.google.android.gms.drive.Metadata b()
    {
      com.google.android.gms.drive.metadata.internal.MetadataBundle v1;
      java.util.Iterator v2;
      com.google.android.gms.drive.metadata.MetadataField v3;
      v1 = com.google.android.gms.drive.metadata.internal.MetadataBundle.gA();
      v2 = com.google.android.gms.drive.metadata.internal.e.gz().iterator();
      while ( v2.hasNext() )
      {
        v3 = (com.google.android.gms.drive.metadata.MetadataField)v2.next();
        if ( !(v3 instanceof com.google.android.gms.drive.metadata.b) && v3 != ir.x )
          v3.a(this.c, v1, this.d, this.e);
      }
      return new com.google.android.gms.drive.internal.l(v1);
    }

    protected final <T> T a(com.google.android.gms.drive.metadata.MetadataField<T> p0)
    {
      return p0.a(this.c, this.d, this.e);
    }

    /* synthetic */ public final Object h()
    {
      com.google.android.gms.drive.metadata.internal.MetadataBundle v1;
      java.util.Iterator v2;
      com.google.android.gms.drive.metadata.MetadataField v3;
      v1 = com.google.android.gms.drive.metadata.internal.MetadataBundle.gA();
      v2 = com.google.android.gms.drive.metadata.internal.e.gz().iterator();
      while ( v2.hasNext() )
      {
        v3 = (com.google.android.gms.drive.metadata.MetadataField)v2.next();
        if ( !(v3 instanceof com.google.android.gms.drive.metadata.b) && v3 != ir.x )
          v3.a(this.c, v1, this.d, this.e);
      }
      return new com.google.android.gms.drive.internal.l(v1);
    }

    public final boolean i_()
    {
      return !this.c.h();
    }

}
