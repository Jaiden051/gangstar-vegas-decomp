// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.d;

abstract class b extends com.amazon.device.iap.internal.b.i {
    // Fields
    protected final boolean a;

    // Methods
    b(com.amazon.device.iap.internal.b.b_e p0, String p1, boolean p2)
    {
      super(p0, "purchase_updates", p1);
      this.a = p2;
    }

    protected void preExecution()
    {
      String v1;
      String v2;
      super.preExecution();
      v1 = (String)this.b().d().a("userId");
      if ( this.a )
        v2 = null;
      else
        v2 = com.amazon.device.iap.internal.util.b.a(v1);
      this.a("cursor", v2);
    }

}
