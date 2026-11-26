// Decompiled from classes.dex (SourceFile: n$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class n$a implements java.io.Serializable {
    // Fields
    private final java.util.Map a;
    private java.util.Date b;
    private long c;

    // Methods
    private n$a()
    {
      super();
      this.a = new java.util.HashMap();
      this.b = new java.util.Date();
      this.c = 86400000;
    }

    /* synthetic */ n$a(com.amazon.device.associates.n$1 p0)
    {
      this();
    }

    /* synthetic */ static java.util.Date a(com.amazon.device.associates.n$a p0, java.util.Date p1)
    {
      p0.b = p1;
      return p1;
    }

    public final synchronized com.amazon.device.associates.br a(String p0)
    {
      return (com.amazon.device.associates.br)this.a.get(p0);
    }

    public final synchronized void a(String p0, com.amazon.device.associates.br p1)
    {
      this.a.put(p0, p1);
    }

    public final boolean a()
    {
      if ( new java.util.Date().getTime() - this.b.getTime() < this.c )
        return false;
      this.a.clear();
      p.c("PopoverCacheManager", "Expiring popover data.");
      return true;
    }

}
