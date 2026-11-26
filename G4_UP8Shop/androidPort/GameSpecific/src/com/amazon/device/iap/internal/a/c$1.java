// Decompiled from classes.dex (SourceFile: c$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.a;

class c$1 implements java.lang.Runnable {
    // Fields
    final java.lang.Object a;
    final com.amazon.device.iap.PurchasingListener b;
    final com.amazon.device.iap.internal.a.c c;

    // Methods
    c$1(com.amazon.device.iap.internal.a.c p0, Object p1, com.amazon.device.iap.PurchasingListener p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public void run()
    {
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
          com.amazon.device.iap.internal.util.e.b(c.a(), "Unknown response type:" + this.a.getClass().getName());
        }
      }
      catch ( Exception v1 )
      {
        com.amazon.device.iap.internal.util.e.b(c.a(), "Error in sendResponse: " + v1);
      }
    }

}
