// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.a;

import android.util.Log;
public class a implements com.amazon.device.iap.internal.iap_a {
    // Methods
    public a()
    {
      super();
    }

    private static String a(String p0)
    {
      return "In App Purchasing SDK - Sandbox Mode: " + p0;
    }

    public void a(String p0, String p1)
    {
      Log.d(p0, a(p1));
    }

    public boolean a()
    {
      return true;
    }

    public void b(String p0, String p1)
    {
      Log.e(p0, a(p1));
    }

    public boolean b()
    {
      return true;
    }

}
