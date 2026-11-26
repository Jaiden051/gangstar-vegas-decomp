// Decompiled from classes.dex (SourceFile: q.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class q implements com.google.android.gms.internal.o {
    // Fields
    private com.google.android.gms.internal.ma a;
    private byte[] b;
    private final int c;

    // Methods
    public q(int p0)
    {
      super();
      this.c = 239;
      this.a();
    }

    public final void a()
    {
      this.b = new byte[this.c];
      this.a = ma.q(this.b);
    }

    public final void a(int p0, long p1)
 throws com.google.android.gms.internal.ma$a {
      this.a.a(p0, p1);
    }

    public final void a(int p0, String p1)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.ma$a {
      this.a.a(p0, p1);
    }

    public final byte[] b()
 throws java.io.IOException {
      int v1; // RETVAL
      byte[] v2;
      v1 = this.a.a();
      if ( v1 < 0 )
        throw new java.io.IOException();
      if ( v1 == 0 )
        return this.b;
      v2 = new byte[(this.b.length - v1)];
      System.arraycopy(this.b, 0, v2, 0, v2.length);
      return (byte[])v2;
    }

}
