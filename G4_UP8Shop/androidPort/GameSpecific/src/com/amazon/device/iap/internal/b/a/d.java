// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.a;

import com.amazon.device.iap.model.ProductType;
import com.amazon.device.iap.model.Receipt;
public final class d extends com.amazon.device.iap.internal.b.b_e {
    // Methods
    public d(com.amazon.device.iap.model.RequestId p0)
    {
      super(p0);
      com.amazon.device.iap.internal.b.a.a v2;
      v2 = new com.amazon.device.iap.internal.b.a.a(this);
      v2.b(new com.amazon.device.iap.internal.b.a.b(this));
      this.a(v2);
    
    }

    public final void a()
    {
      com.amazon.device.iap.model.PurchaseResponse v1;
      com.amazon.device.iap.model.Receipt Receipt; // RETVAL
      com.amazon.device.iap.model.Receipt v3;
      com.amazon.device.iap.internal.b.f.c v4;
      v1 = (com.amazon.device.iap.model.PurchaseResponse)this.d().a();
      if ( v1 != null )
      {
        Receipt = v1.getReceipt();
        v3 = Receipt;
        v4 = new com.amazon.device.iap.internal.b.f.c(this, Receipt != null);
        if ( Receipt != null
          && (ProductType.ENTITLED == Receipt.getProductType() || ProductType.SUBSCRIPTION == v3.getProductType()) )
        {
          v4.b(new com.amazon.device.iap.internal.b.f.b(this, this.c().toString()));
        }
        this.a(v1, v4);
      }
    }

    public final void b()
    {
      com.amazon.device.iap.model.PurchaseResponse v1;
      v1 = (com.amazon.device.iap.model.PurchaseResponse)this.d().a();
      if ( v1 == null )
        v1 = new com.amazon.device.iap.internal.model.PurchaseResponseBuilder().setRequestId(this.c()).setRequestStatus(com.amazon.device.iap.model.PurchaseResponse$RequestStatus.FAILED).build();
      this.a(v1, new com.amazon.device.iap.internal.b.f.c(this, false));
    }

}
