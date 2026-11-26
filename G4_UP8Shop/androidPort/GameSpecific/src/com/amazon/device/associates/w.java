// Decompiled from classes.dex (SourceFile: w.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class w implements com.amazon.device.associates.at {
    // Fields
    private static final java.util.Map a;

    // Methods
    static
    {
      java.util.HashMap v0;
      v0 = new java.util.HashMap();
      a = v0;
      v0.put(com.amazon.device.associates.ar.class, com.amazon.device.associates.ag.class);
      a.put(com.amazon.device.associates.bg.class, com.amazon.device.associates.t.class);
    }

    public w()
    {
      super();
    }

    public <T> Class<T> a(Class<T> p0)
    {
      return (Class)a.get(p0);
    }

}
