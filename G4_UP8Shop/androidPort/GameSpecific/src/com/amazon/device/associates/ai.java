// Decompiled from classes.dex (SourceFile: ai.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Log;
final class ai implements com.amazon.device.associates.bl {
    // Methods
    ai()
    {
      super();
    }

    private static String a(String p0)
    {
      return "IAP Physical SDK/Sandbox Mode: " + p0;
    }

    public final void a(String p0, String p1)
    {
      Log.d(p0, a(p1));
    }

    public final boolean a()
    {
      return true;
    }

    public final void b(String p0, String p1)
    {
      Log.e(p0, a(p1));
    }

    public final boolean b()
    {
      return true;
    }

}
