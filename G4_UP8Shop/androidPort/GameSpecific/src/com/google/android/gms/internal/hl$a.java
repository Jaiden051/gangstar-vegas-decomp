// Decompiled from classes.dex (SourceFile: hl$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class hl$a {
    // Fields
    private final java.util.List a;
    private final java.lang.Object b;

    // Methods
    private hl$a(Object p0)
    {
      super();
      this.b = hn.f(p0);
      this.a = new java.util.ArrayList();
    }

    /* synthetic */ hl$a(Object p0, int p1)
    {
      this(p0);
    }

    public final com.google.android.gms.internal.hl$a a(String p0, Object p1)
    {
      this.a.add((String)hn.f(p0) + "=" + String.valueOf(p1));
      return this;
    }

    public final String toString()
    {
      StringBuilder v1;
      int v2;
      int i;
      v1 = new StringBuilder(100).append(this.b.getClass().getSimpleName()).append('{');
      v2 = this.a.size();
      for ( i = 0; i < v2; ++i )
      {
        v1.append((String)this.a.get(i));
        if ( i < v2 - 1 )
          v1.append(", ");
      }
      return v1.append('}').toString();
    }

}
