// Decompiled from classes.dex (SourceFile: cc.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

abstract class cc extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;

    // Methods
    static
    {
      a = com.google.android.gms.internal.b.n.toString();
      b = com.google.android.gms.internal.b.o.toString();
    }

    public cc(String p0)
    {
      super(p0, new String[] { a, b });
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      java.util.Iterator v2;
      com.google.android.gms.internal.d$a v5;
      com.google.android.gms.internal.d$a v6;
      boolean v7;
      v2 = p0.values().iterator();
      while ( v2.hasNext() )
      {
        if ( (com.google.android.gms.internal.d$a)v2.next() == dh.mY() )
          return dh.r(Boolean.valueOf(false));
      }
      v5 = (com.google.android.gms.internal.d$a)p0.get(a);
      v6 = (com.google.android.gms.internal.d$a)p0.get(b);
      v7 = v5 != null && v6 != null && this.a(v5, v6, p0);
      return dh.r(Boolean.valueOf(v7));
    }

    public final boolean a()
    {
      return true;
    }

    protected abstract boolean a(com.google.android.gms.internal.d$a p0, com.google.android.gms.internal.d$a p1, java.util.Map<String, com.google.android.gms.internal.d$a> p2);

}
