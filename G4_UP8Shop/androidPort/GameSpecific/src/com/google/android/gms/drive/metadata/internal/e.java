// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

import com.google.android.gms.internal.ir;
import com.google.android.gms.internal.it;
import com.google.android.gms.internal.iv;
import java.util.Collections;
public final class e {
    // Fields
    private static java.util.Map a;

    // Methods
    static
    {
      a = new java.util.HashMap();
      b(ir.a);
      b((com.google.android.gms.drive.metadata.MetadataField)ir.y);
      b((com.google.android.gms.drive.metadata.MetadataField)ir.r);
      b((com.google.android.gms.drive.metadata.MetadataField)ir.w);
      b((com.google.android.gms.drive.metadata.MetadataField)ir.z);
      b(ir.l);
      b((com.google.android.gms.drive.metadata.MetadataField)ir.m);
      b(ir.j);
      b(ir.o);
      b((com.google.android.gms.drive.metadata.MetadataField)ir.u);
      b(ir.b);
      b((com.google.android.gms.drive.metadata.MetadataField)ir.t);
      b(ir.d);
      b(ir.k);
      b(ir.e);
      b(ir.f);
      b(ir.g);
      b(ir.q);
      b(ir.n);
      b(ir.s);
      b((com.google.android.gms.drive.metadata.MetadataField)ir.v);
      b(ir.A);
      b(ir.B);
      b(ir.i);
      b(ir.h);
      b(ir.x);
      b(ir.p);
      b((com.google.android.gms.drive.metadata.MetadataField)ir.c);
      b(ir.C);
      b((com.google.android.gms.drive.metadata.MetadataField)it.a);
      b((com.google.android.gms.drive.metadata.MetadataField)it.c);
      b((com.google.android.gms.drive.metadata.MetadataField)it.d);
      b((com.google.android.gms.drive.metadata.MetadataField)it.e);
      b((com.google.android.gms.drive.metadata.MetadataField)it.b);
      b(iv.a);
      b(iv.b);
    }

    public static com.google.android.gms.drive.metadata.MetadataField<?> aN(String p0)
    {
      return (com.google.android.gms.drive.metadata.MetadataField)a.get(p0);
    }

    private static void b(com.google.android.gms.drive.metadata.MetadataField<?> p0)
    {
      if ( a.containsKey(p0.a()) )
        throw new IllegalArgumentException("Duplicate field name registered: " + p0.a());
      a.put(p0.a(), p0);
    }

    public static java.util.Collection<com.google.android.gms.drive.metadata.MetadataField<?>> gz()
    {
      return Collections.unmodifiableCollection(a.values());
    }

}
