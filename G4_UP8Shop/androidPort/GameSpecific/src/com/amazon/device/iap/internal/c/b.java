// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.c;

public class b {
    // Fields
    private static final com.amazon.device.iap.internal.c.b b;
    private final java.util.Set a;

    // Methods
    static
    {
      b = new com.amazon.device.iap.internal.c.b();
    }

    public b()
    {
      super();
      this.a = new java.util.concurrent.ConcurrentSkipListSet();
    }

    public static com.amazon.device.iap.internal.c.b a()
    {
      return b;
    }

    public boolean a(String p0)
    {
      return !com.amazon.device.iap.internal.util.d.a(p0) && this.a.remove(p0);
    }

    public void b(String p0)
    {
      if ( !com.amazon.device.iap.internal.util.d.a(p0) )
        this.a.add(p0);
    }

}
