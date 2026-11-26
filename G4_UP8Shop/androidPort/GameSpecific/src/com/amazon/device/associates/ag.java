// Decompiled from classes.dex (SourceFile: ag.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import com.amazon.android.Kiwi;
final class ag implements com.amazon.device.associates.ar {
    // Fields
    private static final java.lang.String a;
    private static com.amazon.device.associates.ay b;

    // Methods
    static
    {
      a = com.amazon.device.associates.ag.class.getSimpleName();
    }

    ag()
    {
      super();
    }

    public final void a(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.PurchaseRequest p1,
            com.amazon.device.associates.ay p2)
    {
      android.content.Context v4;
      com.amazon.device.associates.r v5;
      x.b(a, "sendPurchaseRequest");
      b = p2;
      if ( p1.getPurchaseExperience() == null || p1.getPurchaseExperience() == PurchaseExperience.IN_APP )
      {
        v4 = p2.b();
        v5 = new com.amazon.device.associates.r(p0, p1, p2);
        x.b(a, "data: " + v5.getCommandData());
        Kiwi.addCommandToCommandTaskPipeline(v5, v4);
      }
      else
      {
        b.a(ay$a.e, new com.amazon.device.associates.PurchaseResponse(p0, PurchaseResponse$Status.NOT_SUPPORTED));
      }
    }

    public final void a(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.ReceiptsRequest p1,
            com.amazon.device.associates.ay p2)
    {
      android.content.Context v4;
      com.amazon.device.associates.u v5;
      x.b(a, "sendGetReceiptsRequest");
      b = p2;
      v4 = p2.b();
      v5 = new com.amazon.device.associates.u(p0, p1, p2);
      x.b(a, "data: " + v5.getCommandData());
      Kiwi.addCommandToCommandTaskPipeline(v5, v4);
    }

    public final void a(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.SearchByIdRequest p1,
            com.amazon.device.associates.ay p2)
    {
      android.content.Context v4;
      com.amazon.device.associates.bf v5;
      x.b(a, "sendSearchByIdRequest");
      b = p2;
      v4 = p2.b();
      v5 = new com.amazon.device.associates.bf(p0, p1, p2);
      x.b(a, "data: " + v5.getCommandData());
      Kiwi.addCommandToCommandTaskPipeline(v5, v4);
    }

    public final void a(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.SearchRequest p1,
            com.amazon.device.associates.ay p2)
    {
      android.content.Context v4;
      com.amazon.device.associates.l v5;
      x.b(a, "sendSearchRequest");
      b = p2;
      v4 = p2.b();
      v5 = new com.amazon.device.associates.l(p0, p1, p2);
      x.b(a, "data: " + v5.getCommandData());
      Kiwi.addCommandToCommandTaskPipeline(v5, v4);
    }

    public final void a(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ay p1)
    {
      android.content.Context v3;
      com.amazon.device.associates.d v4;
      x.b(a, "sendGetUserDataRequest");
      b = p1;
      v3 = p1.b();
      v4 = new com.amazon.device.associates.d(p0, p1);
      x.b(a, "data: " + v4.getCommandData());
      Kiwi.addCommandToCommandTaskPipeline(v4, v3);
    }

    public final void b(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ay p1)
    {
      android.content.Context v3;
      com.amazon.device.associates.bs v4;
      x.b(a, "sendGetPurchaseResultRequest");
      b = p1;
      v3 = p1.b();
      v4 = new com.amazon.device.associates.bs(p0, p1);
      x.b(a, "data: " + v4.getCommandData());
      Kiwi.addCommandToCommandTaskPipeline(v4, v3);
    }

    public final void c(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ay p1)
    {
      android.content.Context v3;
      com.amazon.device.associates.aa v4;
      x.b(a, "sendNotifyReceiptReceivedRequest");
      b = p1;
      v3 = p1.b();
      v4 = new com.amazon.device.associates.aa(p0, p1);
      x.b(a, "data: " + v4.getCommandData());
      Kiwi.addCommandToCommandTaskPipeline(v4, v3);
    }

}
