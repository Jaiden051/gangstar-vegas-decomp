// Decompiled from classes.dex (SourceFile: k.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class k implements com.amazon.device.associates.at {
    // Fields
    private static final java.util.Map a;

    // Methods
    static
    {
      java.util.HashMap v0;
      v0 = new java.util.HashMap();
      a = v0;
      v0.put(com.amazon.device.associates.ar.class, com.amazon.device.associates.af.class);
      a.put(com.amazon.device.associates.bg.class, com.amazon.device.associates.bh.class);
    }

    k()
    {
      super();
    }

    public final <T> Class<T> a(Class<T> p0)
    {
      return (Class)a.get(p0);
    }

}
