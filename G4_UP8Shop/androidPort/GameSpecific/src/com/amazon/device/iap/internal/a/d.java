// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.a;

public final class d implements com.amazon.device.iap.internal.iap_b {
    // Fields
    private static final java.util.Map a;

    // Methods
    static
    {
      java.util.HashMap v0;
      v0 = new java.util.HashMap();
      a = v0;
      v0.put(com.amazon.device.iap.internal.iap_c.class, com.amazon.device.iap.internal.a.c.class);
      a.put(com.amazon.device.iap.internal.iap_a.class, com.amazon.device.iap.internal.a.a.class);
    }

    public d()
    {
      super();
    }

    public final <T> Class<T> a(Class<T> p0)
    {
      return (Class)a.get(p0);
    }

}
