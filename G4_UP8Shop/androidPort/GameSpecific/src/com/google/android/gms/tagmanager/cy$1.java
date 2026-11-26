// Decompiled from classes.dex (SourceFile: cy$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

final class cy$1 implements java.lang.Runnable {
    // Fields
    final android.content.SharedPreferences.Editor a;

    // Methods
    cy$1(android.content.SharedPreferences.Editor p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      this.a.commit();
    }

}
