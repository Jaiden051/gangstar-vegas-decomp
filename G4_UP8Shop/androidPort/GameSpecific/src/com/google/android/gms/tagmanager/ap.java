// Decompiled from classes.dex (SourceFile: ap.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.text.TextUtils;
class ap {
    // Fields
    private final long a;
    private final long b;
    private final long c;
    private java.lang.String d;

    // Methods
    ap(long p0, long p2, long p4)
    {
      super();
      this.a = p0;
      this.b = p2;
      this.c = p4;
    }

    final long a()
    {
      return this.a;
    }

    final void a(String p0)
    {
      if ( p0 != null && !TextUtils.isEmpty(p0.trim()) )
        this.d = p0;
    }

    final long b()
    {
      return this.c;
    }

    final String c()
    {
      return this.d;
    }

}
