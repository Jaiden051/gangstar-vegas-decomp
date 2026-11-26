// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.f;

abstract class a extends com.amazon.device.iap.internal.b.i {
    // Methods
    a(com.amazon.device.iap.internal.b.b_e p0, String p1)
    {
      super(p0, "response_received", p1);
      this.b(false);
    }

    protected boolean a(com.amazon.venezia.command.SuccessResult p0)
    {
      return true;
    }

}
