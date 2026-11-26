// Decompiled from classes.dex (SourceFile: x.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class x {
    // Fields
    private static com.amazon.device.associates.bl a;

    // Methods
    static
    {
      a = null;
    }

    x()
    {
      super();
    }

    static void a(com.amazon.device.associates.bl p0)
    {
      a = p0;
    }

    static void a(String p0, String p1)
    {
      if ( a != null && b() )
        a.b(p0, p1);
    }

    static boolean a()
    {
      return a != null && a.a();
    }

    static void b(String p0, String p1)
    {
      if ( a != null && a() )
        a.a(p0, p1);
    }

    static boolean b()
    {
      return a != null && a.b();
    }

}
