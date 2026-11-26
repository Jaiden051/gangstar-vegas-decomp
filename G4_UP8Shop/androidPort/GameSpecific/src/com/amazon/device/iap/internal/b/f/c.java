// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.f;

public final class c extends com.amazon.device.iap.internal.b.f.a {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.b.f.c.class.getSimpleName();
    }

    public c(com.amazon.device.iap.internal.b.b_e p0, boolean p1)
    {
      super(p0, "2.0");
      this.a("receiptDelivered", Boolean.valueOf(p1));
    }

    public final void a_()
    {
      Object v1; // RETVAL
    
      v1 = this.b().d().a("notifyListenerResult");
      if ( v1 != null && Boolean.TRUE.equals(v1) )
        this.a("notifyListenerSucceeded", Boolean.valueOf(true));
      else
        this.a("notifyListenerSucceeded", Boolean.valueOf(false));
      super.a_();
    }

}
