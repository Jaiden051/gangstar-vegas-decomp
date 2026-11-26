// Decompiled from classes.dex (SourceFile: ah.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class ah {
    // Fields
    private static final java.util.Map a;

    // Methods
    static
    {
      a = new java.util.HashMap();
    }

    private ah()
    {
      super();
    }

    public static <T extends com.amazon.device.associates.al<? extends com.amazon.device.associates.bj>> T a(
            Class<T> p0)
    {
      com.amazon.device.associates.al v1;
      v1 = (com.amazon.device.associates.al)a.get(p0);
      if ( v1 == null )
        return null;
      return (T)v1;
    }

    public static void a()
    {
      java.util.Iterator i;
      a.put(com.amazon.device.associates.bb.class, new com.amazon.device.associates.bb());
      a.put(com.amazon.device.associates.f.class, new com.amazon.device.associates.f());
      a.put(com.amazon.device.associates.h.class, new com.amazon.device.associates.h());
      for ( i = a.values().iterator(); i.hasNext(); ((com.amazon.device.associates.al)i.next()).j() )
        ;
    }

}
