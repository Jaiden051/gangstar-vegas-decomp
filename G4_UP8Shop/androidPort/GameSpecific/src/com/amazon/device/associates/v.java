// Decompiled from classes.dex (SourceFile: v.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import com.amazon.android.framework.util.KiwiLogger;
final class v implements com.amazon.device.associates.bl {
    // Fields
    private static final com.amazon.android.framework.util.KiwiLogger a;

    // Methods
    static
    {
      a = new com.amazon.android.framework.util.KiwiLogger("In App Purchasing SDK/Real Mode");
    }

    v()
    {
      super();
    }

    private static String c(String p0, String p1)
    {
      return p0 + ": " + p1;
    }

    public final void a(String p0, String p1)
    {
      if ( KiwiLogger.TRACE_ON )
        a.trace(c(p0, p1));
    }

    public final boolean a()
    {
      return KiwiLogger.TRACE_ON;
    }

    public final void b(String p0, String p1)
    {
      if ( KiwiLogger.ERROR_ON )
        a.error(c(p0, p1));
    }

    public final boolean b()
    {
      return KiwiLogger.ERROR_ON;
    }

}
