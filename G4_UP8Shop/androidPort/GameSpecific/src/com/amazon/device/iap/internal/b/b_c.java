// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b;

import com.amazon.device.iap.model.RequestId;
public final class b_c implements com.amazon.device.iap.internal.iap_c {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.b.b_c.class.getSimpleName();
    }

    public b_c()
    {
      super();
    }

    public final void a(android.content.Context p0, android.content.Intent p1)
    {
      String StringExtra; // RETVAL
      Object v4;
      com.amazon.device.iap.internal.util.e.a(a, "handleResponse");
      StringExtra = p1.getStringExtra("response_type");
      v4 = StringExtra;
      if ( StringExtra != null )
      {
        com.amazon.device.iap.internal.util.e.a(a, "Found response type: " + StringExtra);
        if ( "purchase_response".equals(v4) )
          new com.amazon.device.iap.internal.b.a.d(RequestId.fromString(p1.getStringExtra("requestId"))).e();
      }
      else
      {
        com.amazon.device.iap.internal.util.e.a(a, "Invalid response type: null");
      }
    }

    public final void a(com.amazon.device.iap.model.RequestId p0)
    {
      com.amazon.device.iap.internal.util.e.a(a, "sendGetUserData");
      new com.amazon.device.iap.internal.b.e.a(p0).e();
    }

    public final void a(com.amazon.device.iap.model.RequestId p0, String p1)
    {
      com.amazon.device.iap.internal.util.e.a(a, "sendPurchaseRequest");
      new com.amazon.device.iap.internal.b.b.d(p0, p1).e();
    }

    public final void a(
            com.amazon.device.iap.model.RequestId p0,
            String p1,
            com.amazon.device.iap.model.FulfillmentResult p2)
    {
      com.amazon.device.iap.internal.util.e.a(a, "sendNotifyFulfillment");
      new com.amazon.device.iap.internal.b.g.b(p0, p1, p2).e();
    }

    public final void a(com.amazon.device.iap.model.RequestId p0, java.util.Set<String> p1)
    {
      com.amazon.device.iap.internal.util.e.a(a, "sendGetProductDataRequest");
      new com.amazon.device.iap.internal.b.c.d(p0, p1).e();
    }

    public final void a(com.amazon.device.iap.model.RequestId p0, boolean p1)
    {
      com.amazon.device.iap.internal.util.e.a(a, "sendGetPurchaseUpdates");
      new com.amazon.device.iap.internal.b.d.a(p0, p1).e();
    }

}
