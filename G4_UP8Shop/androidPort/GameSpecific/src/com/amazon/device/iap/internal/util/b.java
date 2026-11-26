// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.util;

public class b {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.util.b.class.getName() + "_PREFS";
    }

    public b()
    {
      super();
    }

    public static String a(String p0)
    {
      android.content.Context v1; // RETVAL
    
      com.amazon.device.iap.internal.util.d.a(p0, "userId");
      v1 = com.amazon.device.iap.internal.d.d().b();
      com.amazon.device.iap.internal.util.d.a(v1, "context");
      return v1.getSharedPreferences(a, 0).getString(p0, null);
    }

    public static void a(String p0, String p1)
    {
      android.content.Context v2; // RETVAL
      android.content.SharedPreferences.Editor v3;
      com.amazon.device.iap.internal.util.d.a(p0, "userId");
      v2 = com.amazon.device.iap.internal.d.d().b();
      com.amazon.device.iap.internal.util.d.a(v2, "context");
      v3 = v2.getSharedPreferences(a, 0).edit();
      v3.putString(p0, p1);
      v3.commit();
    }

}
