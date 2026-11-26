// Decompiled from classes.dex (SourceFile: MetadataChangeSet.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

import com.google.android.gms.drive.metadata.internal.MetadataBundle;
import com.google.android.gms.internal.ir;
import com.google.android.gms.internal.it;
public final class MetadataChangeSet {
    // Fields
    public static final com.google.android.gms.drive.MetadataChangeSet a;
    private final com.google.android.gms.drive.metadata.internal.MetadataBundle b;

    // Methods
    static
    {
      a = new com.google.android.gms.drive.MetadataChangeSet(MetadataBundle.gA());
    }

    public MetadataChangeSet(com.google.android.gms.drive.metadata.internal.MetadataBundle p0)
    {
      super();
      this.b = MetadataBundle.a(p0);
    }

    private String c()
    {
      return (String)this.b.a(ir.d);
    }

    private String d()
    {
      return (String)this.b.a(ir.i);
    }

    private java.util.Date e()
    {
      return (java.util.Date)this.b.a((com.google.android.gms.drive.metadata.MetadataField)it.b);
    }

    private String f()
    {
      return (String)this.b.a((com.google.android.gms.drive.metadata.MetadataField)ir.y);
    }

    private Boolean g()
    {
      return (Boolean)this.b.a((com.google.android.gms.drive.metadata.MetadataField)ir.m);
    }

    private Boolean h()
    {
      return (Boolean)this.b.a((com.google.android.gms.drive.metadata.MetadataField)ir.w);
    }

    private Boolean i()
    {
      return (Boolean)this.b.a(ir.q);
    }

    public final String a()
    {
      return (String)this.b.a((com.google.android.gms.drive.metadata.MetadataField)ir.r);
    }

    public final com.google.android.gms.drive.metadata.internal.MetadataBundle b()
    {
      return this.b;
    }

}
