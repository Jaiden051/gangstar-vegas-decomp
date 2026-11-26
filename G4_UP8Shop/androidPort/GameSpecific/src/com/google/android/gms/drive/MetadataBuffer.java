// Decompiled from classes.dex (SourceFile: MetadataBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

public final class MetadataBuffer extends com.google.android.gms.common.data.DataBuffer {
    // Fields
    private static final java.lang.String[] b;
    private final java.lang.String c;
    private com.google.android.gms.drive.MetadataBuffer$a d;

    // Methods
    static
    {
      java.util.List v0;
      java.util.Iterator i;
      v0 = new java.util.ArrayList();
      for ( i = com.google.android.gms.drive.metadata.internal.e.gz().iterator(); i.hasNext(); v0.addAll(((com.google.android.gms.drive.metadata.MetadataField)i.next()).b()) )
        ;
      b = (String[])v0.toArray(new String[0]);
    }

    public MetadataBuffer(com.google.android.gms.common.data.DataHolder p0, String p1)
    {
      super(p0);
      this.c = null;
      p0.f().setClassLoader(com.google.android.gms.drive.MetadataBuffer.class.getClassLoader());
    }

    private com.google.android.gms.drive.Metadata a(int p0)
    {
      com.google.android.gms.drive.MetadataBuffer$a d;
      d = this.d;
      if ( d == null || MetadataBuffer$a.a(d) != p0 )
      {
        d = new com.google.android.gms.drive.MetadataBuffer$a(this.a, p0);
        this.d = d;
      }
      return d;
    }

    private String a()
    {
      return this.c;
    }

    /* synthetic */ public final Object b(int p0)
    {
      com.google.android.gms.drive.MetadataBuffer$a d;
      d = this.d;
      if ( d == null || MetadataBuffer$a.a(d) != p0 )
      {
        d = new com.google.android.gms.drive.MetadataBuffer$a(this.a, p0);
        this.d = d;
      }
      return d;
    }

}
