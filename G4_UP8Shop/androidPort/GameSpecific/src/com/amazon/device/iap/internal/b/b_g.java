// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b;

public final class b_g implements com.amazon.device.iap.internal.iap_b {
    // Fields
    private static final java.util.Map a;

    // Methods
    static
    {
      java.util.HashMap v0;
      v0 = new java.util.HashMap();
      a = v0;
      v0.put(com.amazon.device.iap.internal.iap_c.class, com.amazon.device.iap.internal.b.b_c.class);
      a.put(com.amazon.device.iap.internal.iap_a.class, com.amazon.device.iap.internal.b.b_f.class);
    }

    public b_g()
    {
      super();
    }

    public final <T> Class<T> a(Class<T> p0)
    {
      return (Class)a.get(p0);
    }

}
