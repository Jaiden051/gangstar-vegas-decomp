// Decompiled from classes.dex (SourceFile: af.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.content.Intent;
final class af implements com.amazon.device.associates.ar {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.associates.af.class.getSimpleName();
    }

    af()
    {
      super();
    }

    private void a(com.amazon.device.associates.RequestId p0, String p1, com.amazon.device.associates.ay p2)
    {
      android.content.Intent v4;
      v4 = new android.content.Intent(p1);
      v4.putExtra("requestId", p0.toString());
      p.c(a, "Intent action sending for DAS response receiver:" + v4.getAction());
      new com.amazon.device.associates.e().a(v4, p2);
    }

    public final void a(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.PurchaseRequest p1,
            com.amazon.device.associates.ay p2)
    {
      com.amazon.device.associates.ab v4;
      com.amazon.device.associates.OpenProductPageRequest v5;
      p.c(a, "sendPurchaseRequest for request:" + p1.toString());
      if ( (p1.getPurchaseExperience() == null
         || p1.getPurchaseExperience() == PurchaseExperience.DIRECT_WITH_DETAIL
         || p1.getPurchaseExperience() == PurchaseExperience.DIRECT_WITH_PREVIEW)
        && !p1.getReceiveReceipt() )
      {
        v4 = ab.a(bo.a(), bo.b(), null);
        v5 = new com.amazon.device.associates.OpenProductPageRequest(p1.getProductId());
        if ( PurchaseExperience.DIRECT_WITH_PREVIEW.equals(p1.getPurchaseExperience()) )
        {
          p.c(a, "Calling showProductPreview for productID:" + v5.getProductId());
          v4.a(p1.getOriginView(), v5);
        }
        else
        {
          p.c(a, "Calling showProductDetail for productID:" + v5.getProductId());
          v4.b(p1.getOriginView(), v5);
        }
        this.a(p0, "com.amazon.device.iap.physical.physical_purchase", p2);
      }
      else
      {
        p2.a(ay$a.e, new com.amazon.device.associates.PurchaseResponse(p0, PurchaseResponse$Status.NOT_SUPPORTED));
      }
    }

    public final void a(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.ReceiptsRequest p1,
            com.amazon.device.associates.ay p2)
    {
      p2.a(ay$a.b, new com.amazon.device.associates.ReceiptsResponse(p0, ReceiptsResponse$Status.NOT_SUPPORTED));
    }

    public final void a(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.SearchByIdRequest p1,
            com.amazon.device.associates.ay p2)
    {
      p2.a(ay$a.d, new com.amazon.device.associates.SearchByIdResponse(p0, SearchByIdResponse$Status.NOT_SUPPORTED));
    }

    public final void a(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.SearchRequest p1,
            com.amazon.device.associates.ay p2)
    {
      p2.a(ay$a.c, new com.amazon.device.associates.SearchResponse(p0, SearchResponse$Status.NOT_SUPPORTED));
    }

    public final void a(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ay p1)
    {
      p.c(a, "sendGetServiceStatusRequest for requestId:" + p0);
      this.a(p0, "com.amazon.device.iap.physical.get_serviceStatus", p1);
    }

    public final void b(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ay p1)
    {
      ;
    }

    public final void c(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ay p1)
    {
      ;
    }

}
