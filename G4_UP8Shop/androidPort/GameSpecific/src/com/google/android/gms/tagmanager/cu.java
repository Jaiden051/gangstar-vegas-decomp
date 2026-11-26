// Decompiled from classes.dex (SourceFile: cu.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.os.Build;
class cu extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.y.toString();
    }

    public cu()
    {
      super(a, new String[0]);
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      return dh.r(Integer.valueOf(Build.VERSION.SDK_INT));
    }

    public final boolean a()
    {
      return true;
    }

}
