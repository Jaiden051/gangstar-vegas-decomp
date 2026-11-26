// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.b;

public final class d extends com.amazon.device.iap.internal.b.b_e {
    // Methods
    public d(com.amazon.device.iap.model.RequestId p0, String p1)
    {
      super(p0);
      com.amazon.device.iap.internal.b.b.c v3;
      v3 = new com.amazon.device.iap.internal.b.b.c(this, p1);
      v3.b(new com.amazon.device.iap.internal.b.b.b(this, p1));
      this.a(v3);
    
    }

    public final void a()
    {
      ;
    }

    public final void b()
    {
      com.amazon.device.iap.model.PurchaseResponse v1;
      v1 = (com.amazon.device.iap.model.PurchaseResponse)this.d().a();
      if ( v1 == null )
        v1 = new com.amazon.device.iap.internal.model.PurchaseResponseBuilder().setRequestId(this.c()).setRequestStatus(com.amazon.device.iap.model.PurchaseResponse$RequestStatus.FAILED).build();
      this.a(v1);
    }

}
