// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.f;

public final class b extends com.amazon.device.iap.internal.b.f.a {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.b.f.b.class.getSimpleName();
    }

    public b(com.amazon.device.iap.internal.b.b_e p0, String p1)
    {
      super(p0, "1.0");
      this.getCommandData().put("requestId", p1);
    }

}
