// Decompiled from classes.dex (SourceFile: ac.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

abstract class ac {
    // Fields
    protected com.amazon.device.associates.aq a;

    // Methods
    ac()
    {
      super();
      this.a = new com.amazon.device.associates.aq();
    }

    protected abstract void a() ;

    protected abstract void b() throws Exception;

    protected abstract java.lang.String c();

    public void e()
    {
      long v1;
      this.a();
      v1 = System.nanoTime();
      p.c("AbstractServiceCall", this.c() + " Started");
      try
      {
        this.b();
      }
      catch ( Exception v2 )
      {
        p.d("AbstractServiceCall", "Error making MobileAssociates service call.");
        p.a("AbstractServiceCall", "Service name: " + this.c() + " Ex=" + v2);
      }
      p.c("AbstractServiceCall", this.c() + " Completed");
      p.c("AbstractServiceCall", this.c() + ".Latency=" + (System.nanoTime() - v1) / 1000000 + "ms");
    }

}
