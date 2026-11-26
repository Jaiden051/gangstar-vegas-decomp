// Decompiled from classes.dex (SourceFile: cy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.os.Build;
class cy {
    // Methods
    static void a(android.content.Context p0, String p1, String p2, String p3)
    {
      android.content.SharedPreferences.Editor v4;
      v4 = p0.getSharedPreferences(p1, 0).edit();
      v4.putString(p2, p3);
      a(v4);
    }

    static void a(android.content.SharedPreferences.Editor p0)
    {
      if ( Build.VERSION.SDK_INT < 9 )
        new Thread((Runnable)new com.google.android.gms.tagmanager.cy$1(p0)).start();
      else
        p0.apply();
    }

}
