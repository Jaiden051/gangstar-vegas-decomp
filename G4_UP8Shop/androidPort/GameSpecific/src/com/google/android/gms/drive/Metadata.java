// Decompiled from classes.dex (SourceFile: Metadata.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

import com.google.android.gms.internal.ir;
import com.google.android.gms.internal.it;
import com.google.android.gms.internal.iv;
public abstract class Metadata implements com.google.android.gms.common.data.Freezable {
    // Fields
    public static int a;
    public static int b;

    // Methods
    public Metadata()
    {
      super();
    }

    private boolean A()
    {
      Boolean v1;
      v1 = (Boolean)this.a(ir.o);
      return v1 != null && v1.booleanValue();
    }

    private boolean B()
    {
      Boolean v1;
      v1 = (Boolean)this.a((com.google.android.gms.drive.metadata.MetadataField)ir.w);
      return v1 != null && v1.booleanValue();
    }

    private boolean C()
    {
      Boolean v1;
      v1 = (Boolean)this.a((com.google.android.gms.drive.metadata.MetadataField)ir.z);
      return v1 != null && v1.booleanValue();
    }

    private boolean D()
    {
      Boolean v1;
      v1 = (Boolean)this.a(ir.q);
      return v1 != null && v1.booleanValue();
    }

    private String b()
    {
      return (String)this.a(ir.b);
    }

    private int c()
    {
      Integer v1;
      v1 = (Integer)this.a(iv.a);
      if ( v1 != null )
        return v1.intValue();
      else
        return 0;
    }

    private java.util.Date d()
    {
      return (java.util.Date)this.a((com.google.android.gms.drive.metadata.MetadataField)it.a);
    }

    private String e()
    {
      return (String)this.a(ir.d);
    }

    private String f()
    {
      return (String)this.a(ir.e);
    }

    private String i()
    {
      return (String)this.a(ir.f);
    }

    private long j()
    {
      return ((Long)this.a(ir.g)).longValue();
    }

    private java.util.Date k()
    {
      return (java.util.Date)this.a((com.google.android.gms.drive.metadata.MetadataField)it.b);
    }

    private String l()
    {
      return (String)this.a((com.google.android.gms.drive.metadata.MetadataField)ir.r);
    }

    private java.util.Date m()
    {
      return (java.util.Date)this.a((com.google.android.gms.drive.metadata.MetadataField)it.d);
    }

    private java.util.Date n()
    {
      return (java.util.Date)this.a((com.google.android.gms.drive.metadata.MetadataField)it.c);
    }

    private String o()
    {
      return (String)this.a(ir.s);
    }

    private boolean p()
    {
      Boolean v1;
      v1 = (Boolean)this.a(iv.b);
      return v1 != null && v1.booleanValue();
    }

    private boolean q()
    {
      Boolean v1;
      v1 = (Boolean)this.a((com.google.android.gms.drive.metadata.MetadataField)ir.m);
      return v1 != null && v1.booleanValue();
    }

    private long r()
    {
      return ((Long)this.a((com.google.android.gms.drive.metadata.MetadataField)ir.v)).longValue();
    }

    private java.util.Date s()
    {
      return (java.util.Date)this.a((com.google.android.gms.drive.metadata.MetadataField)it.e);
    }

    private String t()
    {
      return (String)this.a((com.google.android.gms.drive.metadata.MetadataField)ir.y);
    }

    private String u()
    {
      return (String)this.a(ir.A);
    }

    private String v()
    {
      return (String)this.a(ir.B);
    }

    private boolean w()
    {
      Boolean v1;
      v1 = (Boolean)this.a(ir.j);
      return v1 != null && v1.booleanValue();
    }

    private boolean x()
    {
      Boolean v1;
      v1 = (Boolean)this.a(ir.l);
      return v1 != null && v1.booleanValue();
    }

    private boolean y()
    {
      return "application/vnd.google-apps.folder".equals((String)this.a((com.google.android.gms.drive.metadata.MetadataField)ir.r));
    }

    private boolean z()
    {
      Boolean v1;
      v1 = (Boolean)this.a(ir.n);
      return v1 != null && v1.booleanValue();
    }

    public final com.google.android.gms.drive.DriveId a()
    {
      return (com.google.android.gms.drive.DriveId)this.a(ir.a);
    }

    protected abstract <T> T a(com.google.android.gms.drive.metadata.MetadataField<T> p0);

}
