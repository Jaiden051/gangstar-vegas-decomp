// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.c;

public final class d extends com.amazon.device.iap.internal.b.b_e {
    // Methods
    public d(com.amazon.device.iap.model.RequestId p0, java.util.Set<String> p1)
    {
      super(p0);
      com.amazon.device.iap.internal.b.c.a v3;
      v3 = new com.amazon.device.iap.internal.b.c.a(this, p1);
      v3.b(new com.amazon.device.iap.internal.b.c.b(this, p1));
      this.a(v3);
    
    }

    public final void a()
    {
      this.a((com.amazon.device.iap.model.ProductDataResponse)this.d().a());
    }

    public final void b()
    {
      com.amazon.device.iap.model.ProductDataResponse v1;
      v1 = (com.amazon.device.iap.model.ProductDataResponse)this.d().a();
      if ( v1 == null )
        v1 = new com.amazon.device.iap.internal.model.ProductDataResponseBuilder().setRequestId(this.c()).setRequestStatus(com.amazon.device.iap.model.ProductDataResponse$RequestStatus.FAILED).build();
      this.a(v1);
    }

}
