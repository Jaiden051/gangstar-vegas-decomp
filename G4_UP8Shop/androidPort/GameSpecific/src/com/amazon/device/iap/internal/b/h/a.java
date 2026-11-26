// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.h;

public class a extends com.amazon.device.iap.internal.b.i {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.b.h.a.class.getSimpleName();
    }

    public a(com.amazon.device.iap.internal.b.b_e p0, String p1, String p2)
    {
      super(p0, "submit_metric", "1.0");
      this.a("metricName", p1);
      this.a("metricAttributes", p2);
      this.b(false);
    }

    protected boolean a(com.amazon.venezia.command.SuccessResult p0)
    {
      return true;
    }

}
