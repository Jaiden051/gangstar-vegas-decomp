// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b;

public class b_h {
    // Fields
    static final boolean b;
    public final java.util.Map a;

    // Methods
    static
    {
      b = !com.amazon.device.iap.internal.b.b_h.class.desiredAssertionStatus();
    }

    public b_h()
    {
      super();
      this.a = new java.util.HashMap();
    }

    public Object a()
    {
      return this.a.get("RESPONSE");
    }

    public Object a(String p0)
    {
      return this.a.get(p0);
    }

    public void a(Object p0)
    {
      if ( !b && p0 == null )
        throw new AssertionError();
      this.a.put("RESPONSE", p0);
    }

    public void a(String p0, Object p1)
    {
      this.a.put(p0, p1);
    }

    public void b()
    {
      this.a.remove("RESPONSE");
    }

}
