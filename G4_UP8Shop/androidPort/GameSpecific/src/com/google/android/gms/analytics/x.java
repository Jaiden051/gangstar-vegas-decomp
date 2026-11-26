// Decompiled from classes.dex (SourceFile: x.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.text.TextUtils;
class x {
    // Fields
    private java.lang.String a;
    private final long b;
    private final long c;
    private java.lang.String d;

    // Methods
    x(String p0, long p1, long p3)
    {
      super();
      this.d = "https:";
      this.a = null;
      this.b = p1;
      this.c = p3;
    }

    final String a()
    {
      return this.a;
    }

    final void a(String p0)
    {
      this.a = p0;
    }

    final long b()
    {
      return this.b;
    }

    final void b(String p0)
    {
      if ( p0 != null && !TextUtils.isEmpty(p0.trim()) && p0.toLowerCase().startsWith("http:") )
        this.d = "http:";
    }

    final long c()
    {
      return this.c;
    }

    final String d()
    {
      return this.d;
    }

}
