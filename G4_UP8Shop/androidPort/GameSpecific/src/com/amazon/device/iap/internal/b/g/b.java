// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.g;

import com.amazon.device.iap.model.FulfillmentResult;
public final class b extends com.amazon.device.iap.internal.b.b_e {
    // Fields
    private final java.lang.String a;
    private final com.amazon.device.iap.model.FulfillmentResult b;

    // Methods
    public b(com.amazon.device.iap.model.RequestId p0, String p1, com.amazon.device.iap.model.FulfillmentResult p2)
    {
      super(p0);
      java.util.HashSet v4;
      v4 = new java.util.HashSet();
      v4.add(p1);
      this.a = p1;
      this.b = p2;
      this.a(new com.amazon.device.iap.internal.b.g.a(this, v4, p2.toString()));
    
    }

    public final void a()
    {
      ;
    }

    public final void b()
    {
      String v1; // RETVAL
    
      if ( FulfillmentResult.FULFILLED == this.b || FulfillmentResult.UNAVAILABLE == this.b )
      {
        v1 = com.amazon.device.iap.internal.c.a.a().c(this.a);
        if ( v1 != null )
        {
          new com.amazon.device.iap.internal.b.f.b(this, v1).a_();
          com.amazon.device.iap.internal.c.a.a().a(this.a);
        }
      }
    }

}
