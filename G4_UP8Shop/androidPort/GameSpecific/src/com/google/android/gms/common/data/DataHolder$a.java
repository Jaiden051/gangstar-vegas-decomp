// Decompiled from classes.dex (SourceFile: DataHolder$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.data;

import com.google.android.gms.internal.hn;
public class DataHolder$a {
    // Fields
    private final java.lang.String[] a;
    private final java.util.ArrayList b;
    private final java.lang.String c;
    private final java.util.HashMap d;
    private boolean e;
    private java.lang.String f;

    // Methods
    private DataHolder$a(String[] p0, String p1)
    {
      super();
      this.a = (String[])hn.f(p0);
      this.b = new java.util.ArrayList();
      this.c = p1;
      this.d = new java.util.HashMap();
      this.e = false;
      this.f = null;
    }

    /* synthetic */ DataHolder$a(String[] p0, String p1, int p2)
    {
      this(p0, p1);
    }

    /* synthetic */ static String[] a(com.google.android.gms.common.data.DataHolder$a p0)
    {
      return p0.a;
    }

    /* synthetic */ static java.util.ArrayList b(com.google.android.gms.common.data.DataHolder$a p0)
    {
      return p0.b;
    }

}
