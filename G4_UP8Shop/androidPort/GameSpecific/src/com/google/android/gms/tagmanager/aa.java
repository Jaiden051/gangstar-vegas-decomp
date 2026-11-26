// Decompiled from classes.dex (SourceFile: aa.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.os.Build;
class aa extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.l.toString();
    }

    public aa()
    {
      super(a, new String[0]);
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      String v2;
      String v3;
      v2 = Build.MANUFACTURER;
      v3 = Build.MODEL;
      if ( !v3.startsWith(v2) && !v2.equals("unknown") )
        v3 = v2 + " " + v3;
      return dh.r(v3);
    }

    public final boolean a()
    {
      return true;
    }

}
