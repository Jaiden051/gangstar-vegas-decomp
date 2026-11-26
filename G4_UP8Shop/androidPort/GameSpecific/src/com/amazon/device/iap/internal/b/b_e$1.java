// Decompiled from classes.dex (SourceFile: e$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b;

class b_e$1 implements java.lang.Runnable {
    // Fields
    final java.lang.Object a;
    final com.amazon.device.iap.PurchasingListener b;
    final com.amazon.device.iap.internal.b.i c;
    final com.amazon.device.iap.internal.b.b_e d;

    // Methods
    b_e$1(
            com.amazon.device.iap.internal.b.b_e p0,
            Object p1,
            com.amazon.device.iap.PurchasingListener p2,
            com.amazon.device.iap.internal.b.i p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    
    }

    public void run()
    {
      this.d.d().a("notifyListenerResult", Boolean.FALSE);
      try
      {
        if ( this.a instanceof com.amazon.device.iap.model.ProductDataResponse )
        {
          this.b.onProductDataResponse((com.amazon.device.iap.model.ProductDataResponse)this.a);
        }
        else if ( this.a instanceof com.amazon.device.iap.model.UserDataResponse )
        {
          this.b.onUserDataResponse((com.amazon.device.iap.model.UserDataResponse)this.a);
        }
        else if ( this.a instanceof com.amazon.device.iap.model.PurchaseUpdatesResponse )
        {
          this.b.onPurchaseUpdatesResponse((com.amazon.device.iap.model.PurchaseUpdatesResponse)this.a);
        }
        else if ( this.a instanceof com.amazon.device.iap.model.PurchaseResponse )
        {
          this.b.onPurchaseResponse((com.amazon.device.iap.model.PurchaseResponse)this.a);
        }
        else
        {
          com.amazon.device.iap.internal.util.e.b(com.amazon.device.iap.internal.b.b_e.f(), "Unknown response type:" + this.a.getClass().getName());
        }
        this.d.d().a("notifyListenerResult", Boolean.TRUE);
      }
      catch ( Throwable v1 )
      {
        com.amazon.device.iap.internal.util.e.b(com.amazon.device.iap.internal.b.b_e.f(), "Error in sendResponse: " + v1);
      }
      if ( this.c != null )
      {
        this.c.a(true);
        this.c.a_();
      }
    }

}
