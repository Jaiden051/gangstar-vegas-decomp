// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b;

public class b_e {
    // Fields
    private static final java.lang.String a;
    private final com.amazon.device.iap.model.RequestId b;
    private final com.amazon.device.iap.internal.b.b_h c;
    private com.amazon.device.iap.internal.b.i d;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.b.b_e.class.getSimpleName();
    }

    public b_e(com.amazon.device.iap.model.RequestId p0)
    {
      super();
      this.b = p0;
      this.c = new com.amazon.device.iap.internal.b.b_h();
      this.d = null;
    }

    /* synthetic */ static String f()
    {
      return a;
    }

    public void a()
    {
      ;
    }

    protected void a(com.amazon.device.iap.internal.b.i p0)
    {
      this.d = p0;
    }

    protected void a(Object p0)
    {
      this.a(p0, null);
    }

    protected void a(Object p0, com.amazon.device.iap.internal.b.i p1)
    {
      android.content.Context v3;
      com.amazon.device.iap.PurchasingListener v4; // RETVAL
    
      com.amazon.device.iap.internal.util.d.a(p0, "response");
      v3 = com.amazon.device.iap.internal.d.d().b();
      v4 = com.amazon.device.iap.internal.d.d().a();
      if ( v3 != null && v4 != null )
        new android.os.Handler(v3.getMainLooper()).post((Runnable)new com.amazon.device.iap.internal.b.b_e$1(this, p0, v4, p1));
      else
        com.amazon.device.iap.internal.util.e.a(a, "PurchasingListener is not set. Dropping response: " + p0);
    }

    public void b()
    {
      ;
    }

    public com.amazon.device.iap.model.RequestId c()
    {
      return this.b;
    }

    public com.amazon.device.iap.internal.b.b_h d()
    {
      return this.c;
    }

    public void e()
    {
      if ( this.d != null )
        this.d.a_();
      else
        this.a();
    }

}
