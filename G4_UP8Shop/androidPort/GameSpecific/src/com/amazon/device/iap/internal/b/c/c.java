// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.c;

abstract class c extends com.amazon.device.iap.internal.b.i {
    // Fields
    protected final java.util.Set a;

    // Methods
    c(com.amazon.device.iap.internal.b.b_e p0, String p1, java.util.Set<String> p2)
    {
      super(p0, "getItem_data", p1);
      this.a = p2;
      this.a("skus", p2);
    }

}
