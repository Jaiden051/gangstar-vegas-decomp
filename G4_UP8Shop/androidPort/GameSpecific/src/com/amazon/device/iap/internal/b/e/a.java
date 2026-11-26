// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.e;

public final class a extends com.amazon.device.iap.internal.b.b_e {
    // Methods
    public a(com.amazon.device.iap.model.RequestId p0)
    {
      super(p0);
      com.amazon.device.iap.internal.b.e.c v2;
      v2 = new com.amazon.device.iap.internal.b.e.c(this);
      v2.b(new com.amazon.device.iap.internal.b.e.d(this));
      this.a(v2);
    
    }

    public final void a()
    {
      this.a((com.amazon.device.iap.model.UserDataResponse)this.d().a());
    }

    public final void b()
    {
      com.amazon.device.iap.model.UserDataResponse v1;
      v1 = (com.amazon.device.iap.model.UserDataResponse)this.d().a();
      if ( v1 == null )
        v1 = new com.amazon.device.iap.internal.model.UserDataResponseBuilder().setRequestId(this.c()).setRequestStatus(com.amazon.device.iap.model.UserDataResponse$RequestStatus.FAILED).build();
      this.a(v1);
    }

}
