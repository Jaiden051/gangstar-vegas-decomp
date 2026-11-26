// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.d;

public final class a extends com.amazon.device.iap.internal.b.b_e {
    // Methods
    public a(com.amazon.device.iap.model.RequestId p0, boolean p1)
    {
      super(p0);
      com.amazon.device.iap.internal.b.e.c v3;
      com.amazon.device.iap.internal.b.e.d v4;
      v3 = new com.amazon.device.iap.internal.b.e.c(this);
      v3.a(new com.amazon.device.iap.internal.b.d.c(this, p1));
      v4 = new com.amazon.device.iap.internal.b.e.d(this);
      v4.a(new com.amazon.device.iap.internal.b.d.d(this, p1));
      v3.b(v4);
      this.a(v3);
    
    }

    public final void a()
    {
      com.amazon.device.iap.internal.b.g.a v1;
      com.amazon.device.iap.model.PurchaseUpdatesResponse v2;
      java.util.Set v3;
      java.util.Iterator v4;
      com.amazon.device.iap.model.Receipt v5;
      v1 = null;
      v2 = (com.amazon.device.iap.model.PurchaseUpdatesResponse)this.d().a();
      if ( v2.getReceipts() != null && v2.getReceipts().size() > 0 )
      {
        v3 = new java.util.HashSet();
        v4 = v2.getReceipts().iterator();
        while ( v4.hasNext() )
        {
          v5 = (com.amazon.device.iap.model.Receipt)v4.next();
          if ( !com.amazon.device.iap.internal.util.d.a(v5.getReceiptId()) )
            v3.add(v5.getReceiptId());
        }
        v1 = new com.amazon.device.iap.internal.b.g.a(this, v3, com.amazon.device.iap.internal.model.a.a.toString());
      }
      this.a(v2, v1);
    }

    public final void b()
    {
      Object v1; // RETVAL
      com.amazon.device.iap.model.PurchaseUpdatesResponse v2;
      v1 = this.d().a();
      if ( v1 != null && v1 instanceof com.amazon.device.iap.model.PurchaseUpdatesResponse )
        v2 = (com.amazon.device.iap.model.PurchaseUpdatesResponse)v1;
      else
        v2 = new com.amazon.device.iap.internal.model.PurchaseUpdatesResponseBuilder().setRequestId(this.c()).setRequestStatus(com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus.FAILED).build();
      this.a(v2);
    }

}
