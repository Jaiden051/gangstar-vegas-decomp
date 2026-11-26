// Decompiled from classes.dex (SourceFile: bj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

abstract class bj implements java.io.Serializable {
    // Fields
    private java.lang.String a;
    protected long i;
    protected long j;
    protected long k;

    // Methods
    bj()
    {
      super();
      this.i = System.currentTimeMillis();
      this.j = -1;
      this.k = 0;
    }

    protected void a(long p0)
    {
      this.k = p0;
    }

    public void a(String p0)
    {
      this.a = p0;
    }

    protected long b()
    {
      return this.k;
    }

    protected void b(long p0)
    {
      this.i = p0;
    }

    protected long c()
    {
      return this.i;
    }

    protected void c(long p0)
    {
      this.j = p0;
    }

    protected long d()
    {
      return this.j;
    }

}
