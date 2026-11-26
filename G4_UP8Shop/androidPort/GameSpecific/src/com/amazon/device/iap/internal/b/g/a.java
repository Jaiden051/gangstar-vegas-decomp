// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.g;

public final class a extends com.amazon.device.iap.internal.b.i {
    // Fields
    protected final java.util.Set a;
    protected final java.lang.String b;

    // Methods
    public a(com.amazon.device.iap.internal.b.b_e p0, java.util.Set<String> p1, String p2)
    {
      super(p0, "purchase_fulfilled", "2.0");
      this.a = p1;
      this.b = p2;
      this.b(false);
      this.a("receiptIds", this.a);
      this.a("fulfillmentStatus", this.b);
    }

    protected final boolean a(com.amazon.venezia.command.SuccessResult p0)
    {
      return true;
    }

    public final void a_()
    {
      Object v1; // RETVAL
    
      v1 = this.b().d().a("notifyListenerResult");
      if ( v1 != null && Boolean.FALSE.equals(v1) )
        this.a("fulfillmentStatus", b.toString());
      super.a_();
    }

}
