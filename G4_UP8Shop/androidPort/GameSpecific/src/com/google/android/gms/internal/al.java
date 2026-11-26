// Decompiled from classes.dex (SourceFile: al.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.format.Time;
import java.util.Collections;
public class al {
    // Fields
    public static final com.google.android.gms.internal.al a;

    // Methods
    static
    {
      a = new com.google.android.gms.internal.al();
    }

    private al()
    {
      super();
    }

    public static com.google.android.gms.internal.aj a(
            android.content.Context p0,
            com.google.android.gms.internal.au p1)
    {
      java.util.Date v2; // RETVAL
      long Time;
      String v4;
      int v5;
      java.util.Collection v6;
      java.util.List v7;
      boolean v8;
      int v9;
      android.location.Location v10;
      android.os.Bundle v11;
      boolean v12;
      String v13;
      com.google.android.gms.ads.search.SearchAdRequest v14; // RETVAL
      com.google.android.gms.internal.ax v15;
      v2 = p1.a();
      if ( v2 != null )
        Time = v2.getTime();
      else
        Time = -1;
      v4 = p1.b();
      v5 = p1.c();
      v6 = p1.d();
      if ( v6.isEmpty() )
        v7 = null;
      else
        v7 = Collections.unmodifiableList(new java.util.ArrayList(v6));
      v8 = p1.a(p0);
      v9 = p1.k();
      v10 = p1.e();
      v11 = p1.b(com.google.ads.mediation.admob.AdMobAdapter.class);
      v12 = p1.f();
      v13 = p1.g();
      v14 = p1.h();
      if ( v14 != null )
        v15 = new com.google.android.gms.internal.ax(v14);
      else
        v15 = null;
      return new com.google.android.gms.internal.aj(4, Time, v11, v5, v7, v8, v9, v12, v13, v15, v10, v4, p1.j());
    }

    public static com.google.android.gms.internal.al aA()
    {
      return a;
    }

}
