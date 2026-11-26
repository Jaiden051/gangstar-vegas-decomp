// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.content.Intent;
public final class e {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.associates.e.class.getSimpleName();
    }

    public e()
    {
      super();
    }

    public final void a(android.content.Intent p0, com.amazon.device.associates.ay p1)
    {
      p.c(a, "Intent action receiveed by dummy response receiver:" + p0.getAction());
      ((com.amazon.device.associates.bg)new com.amazon.device.associates.bh()).a(null, p0, p1);
    }

}
