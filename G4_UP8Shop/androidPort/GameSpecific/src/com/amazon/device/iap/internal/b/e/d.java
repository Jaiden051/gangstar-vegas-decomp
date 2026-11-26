// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.e;

public final class d extends com.amazon.device.iap.internal.b.e.b {
    // Fields
    private static final java.lang.String b;

    // Methods
    static
    {
      b = com.amazon.device.iap.internal.b.e.d.class.getSimpleName();
    }

    public d(com.amazon.device.iap.internal.b.b_e p0)
    {
      super(p0, "1.0");
    }

    protected final boolean a(com.amazon.venezia.command.SuccessResult p0)
    {
      java.util.Map Data;
      String v3;
      com.amazon.device.iap.internal.b.b_e v4;
      com.amazon.device.iap.model.UserData v7;
      com.amazon.device.iap.model.UserDataResponse v8;
      com.amazon.device.iap.internal.util.e.a(b, "onSuccessInternal: result = " + p0);
      Data = p0.getData();
      com.amazon.device.iap.internal.util.e.a(b, "data: " + Data);
      v3 = (String)Data.get("userId");
      v4 = this.b();
      if ( com.amazon.device.iap.internal.util.d.a(v3) )
      {
        v4.d().a(new com.amazon.device.iap.internal.model.UserDataResponseBuilder().setRequestId(v4.c()).setRequestStatus(com.amazon.device.iap.model.UserDataResponse$RequestStatus.FAILED).build());
        return false;
      }
      else
      {
        v7 = new com.amazon.device.iap.internal.model.UserDataBuilder().setUserId(v3).setMarketplace(com.amazon.device.iap.internal.b.e.b.a).build();
        v8 = new com.amazon.device.iap.internal.model.UserDataResponseBuilder().setRequestId(v4.c()).setRequestStatus(com.amazon.device.iap.model.UserDataResponse$RequestStatus.SUCCESSFUL).setUserData(v7).build();
        v4.d().a("userId", v7.getUserId());
        v4.d().a(v8);
        return true;
      }
    }

}
