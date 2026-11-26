// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.a;

abstract class c extends com.amazon.device.iap.internal.b.i {
    // Methods
    c(com.amazon.device.iap.internal.b.b_e p0, String p1)
    {
      super(p0, "purchase_response", p1);
    }

    protected void a(String p0, String p1, String p2, com.amazon.device.iap.model.PurchaseResponse$RequestStatus p3)
    {
      com.amazon.device.iap.internal.b.b_e v5;
      v5 = this.b();
      v5.d().a(new com.amazon.device.iap.internal.model.PurchaseResponseBuilder().setRequestId(v5.c()).setRequestStatus(p3).setUserData(new com.amazon.device.iap.internal.model.UserDataBuilder().setUserId(p0).setMarketplace(p1).build()).setReceipt(null).build());
    }

}
