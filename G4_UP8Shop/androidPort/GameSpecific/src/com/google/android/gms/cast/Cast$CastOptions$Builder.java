// Decompiled from classes.dex (SourceFile: Cast$CastOptions$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import com.google.android.gms.internal.hn;
public final class Cast$CastOptions$Builder {
    // Fields
    com.google.android.gms.cast.CastDevice a;
    com.google.android.gms.cast.Cast$Listener b;
    private int c;

    // Methods
    private Cast$CastOptions$Builder(com.google.android.gms.cast.CastDevice p0, com.google.android.gms.cast.Cast$Listener p1)
    {
      super();
      hn.b(p0, "CastDevice parameter cannot be null");
      hn.b(p1, "CastListener parameter cannot be null");
      this.a = p0;
      this.b = p1;
      this.c = 0;
    }

    /* synthetic */ Cast$CastOptions$Builder(
            com.google.android.gms.cast.CastDevice p0,
            com.google.android.gms.cast.Cast$Listener p1,
            int p2)
    {
      this(p0, p1);
    }

    /* synthetic */ static int a(com.google.android.gms.cast.Cast$CastOptions$Builder p0)
    {
      return p0.c;
    }

    private com.google.android.gms.cast.Cast$CastOptions$Builder a(boolean p0)
    {
      int v2;
      if ( p0 )
        v2 = this.c | 1;
      else
        v2 = this.c & 0xFFFFFFFE;
      this.c = v2;
      return this;
    }

    private com.google.android.gms.cast.Cast$CastOptions a()
    {
      return new com.google.android.gms.cast.Cast$CastOptions(this, 0);
    }

}
