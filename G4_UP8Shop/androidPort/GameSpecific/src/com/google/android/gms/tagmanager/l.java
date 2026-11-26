// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.os.Build;
class l<K, V> {
    // Fields
    final com.google.android.gms.tagmanager.l$a a;

    // Methods
    public l()
    {
      super();
      this.a = (com.google.android.gms.tagmanager.l$a)new com.google.android.gms.tagmanager.l$1(this);
    }

    private static int le()
    {
      return Build.VERSION.SDK_INT;
    }

    public final com.google.android.gms.tagmanager.k<K, V> a(int p0, com.google.android.gms.tagmanager.l$a<K, V> p1)
    {
      if ( Build.VERSION.SDK_INT >= 12 )
        return (com.google.android.gms.tagmanager.k)new com.google.android.gms.tagmanager.bb(0x100000, p1);
      else
        return (com.google.android.gms.tagmanager.k)new com.google.android.gms.tagmanager.cz(0x100000, p1);
    }

}
