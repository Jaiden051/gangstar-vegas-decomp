// Decompiled from classes.dex (SourceFile: bm.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.os.Build;
class bm {
    // Methods
    bm()
    {
      super();
    }

    private static int le()
    {
      return Build.VERSION.SDK_INT;
    }

    public final com.google.android.gms.tagmanager.bl a()
    {
      if ( Build.VERSION.SDK_INT >= 8 )
        return (com.google.android.gms.tagmanager.bl)new com.google.android.gms.tagmanager.aw();
      else
        return (com.google.android.gms.tagmanager.bl)new com.google.android.gms.tagmanager.av();
    }

}
