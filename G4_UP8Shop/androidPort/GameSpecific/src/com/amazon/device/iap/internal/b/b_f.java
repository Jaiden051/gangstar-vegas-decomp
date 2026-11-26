// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b;

import com.amazon.android.framework.util.KiwiLogger;
public class b_f implements com.amazon.device.iap.internal.iap_a {
    // Fields
    private static com.amazon.android.framework.util.KiwiLogger a;

    // Methods
    static
    {
      a = new com.amazon.android.framework.util.KiwiLogger("In App Purchasing SDK - Production Mode");
    }

    public b_f()
    {
      super();
    }

    private static String c(String p0, String p1)
    {
      return p0 + ": " + p1;
    }

    public void a(String p0, String p1)
    {
      a.trace(c(p0, p1));
    }

    public boolean a()
    {
      return KiwiLogger.TRACE_ON;
    }

    public void b(String p0, String p1)
    {
      a.error(c(p0, p1));
    }

    public boolean b()
    {
      return KiwiLogger.ERROR_ON;
    }

}
