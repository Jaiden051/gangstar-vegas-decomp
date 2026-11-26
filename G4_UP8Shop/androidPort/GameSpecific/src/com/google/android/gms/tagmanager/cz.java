// Decompiled from classes.dex (SourceFile: cz.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class cz<K, V> implements com.google.android.gms.tagmanager.k<K, V> {
    // Fields
    private final java.util.Map a;
    private final int b;
    private final com.google.android.gms.tagmanager.l$a c;
    private int d;

    // Methods
    cz(int p0, com.google.android.gms.tagmanager.l$a<K, V> p1)
    {
      super();
      this.a = new java.util.HashMap();
      this.b = p0;
      this.c = p1;
    }

    public final synchronized V a(K p0)
    {
      return (V)this.a.get(p0);
    }

    public final synchronized void a(K p0, V p1)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      java.util.Iterator v4;
      java.util.Map.Entry v5;
      if ( p0 == null || p1 == null )
        throw new NullPointerException("key == null || value == null");
      try
      {
        this.d += this.c.a(p0, p1);
        if ( this.d > this.b )
        {
          v4 = this.a.entrySet().iterator();
          do
          {
            if ( !v4.hasNext() )
              break;
            v5 = (java.util.Map.Entry)v4.next();
            this.d -= this.c.a(v5.getKey(), v5.getValue());
            v4.remove();
          }
          while ( this.d > this.b );
        }
        this.a.put(p0, p1);
      }
      finally
      {
      }
    }

}
