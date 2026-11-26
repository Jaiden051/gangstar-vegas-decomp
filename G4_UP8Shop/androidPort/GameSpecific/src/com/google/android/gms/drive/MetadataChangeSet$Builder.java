// Decompiled from classes.dex (SourceFile: MetadataChangeSet$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

import com.google.android.gms.drive.metadata.internal.MetadataBundle;
import com.google.android.gms.internal.ir;
import com.google.android.gms.internal.it;
public class MetadataChangeSet$Builder {
    // Fields
    private final com.google.android.gms.drive.metadata.internal.MetadataBundle a;
    private final android.content.Context b;
    private com.google.android.gms.drive.metadata.internal.AppVisibleCustomProperties$a c;

    // Methods
    public MetadataChangeSet$Builder()
    {
      this(null);
    }

    private MetadataChangeSet$Builder(android.content.Context p0)
    {
      super();
      this.a = MetadataBundle.gA();
      this.b = null;
    }

    private com.google.android.gms.drive.MetadataChangeSet$Builder a(String p0)
    {
      this.a.b(ir.d, p0);
      return this;
    }

    private com.google.android.gms.drive.MetadataChangeSet$Builder a(java.util.Date p0)
    {
      this.a.b((com.google.android.gms.drive.metadata.MetadataField)it.b, p0);
      return this;
    }

    private com.google.android.gms.drive.MetadataChangeSet$Builder a(boolean p0)
    {
      this.a.b((com.google.android.gms.drive.metadata.MetadataField)ir.m, Boolean.valueOf(p0));
      return this;
    }

    private com.google.android.gms.drive.MetadataChangeSet a()
    {
      if ( this.c != null )
        this.a.b((com.google.android.gms.drive.metadata.MetadataField)ir.c, this.c.a());
      return new com.google.android.gms.drive.MetadataChangeSet(this.a);
    }

    private com.google.android.gms.drive.MetadataChangeSet$Builder b(String p0)
    {
      this.a.b(ir.i, p0);
      return this;
    }

    private com.google.android.gms.drive.MetadataChangeSet$Builder b(boolean p0)
    {
      this.a.b((com.google.android.gms.drive.metadata.MetadataField)ir.w, Boolean.valueOf(p0));
      return this;
    }

    private com.google.android.gms.drive.MetadataChangeSet$Builder c(String p0)
    {
      this.a.b((com.google.android.gms.drive.metadata.MetadataField)ir.r, p0);
      return this;
    }

    private com.google.android.gms.drive.MetadataChangeSet$Builder c(boolean p0)
    {
      this.a.b(ir.q, Boolean.valueOf(p0));
      return this;
    }

    private com.google.android.gms.drive.MetadataChangeSet$Builder d(String p0)
    {
      this.a.b((com.google.android.gms.drive.metadata.MetadataField)ir.y, p0);
      return this;
    }

}
