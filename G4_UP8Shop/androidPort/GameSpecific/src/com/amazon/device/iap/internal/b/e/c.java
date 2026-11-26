// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.e;

public final class c extends com.amazon.device.iap.internal.b.e.b {
    // Fields
    private static final java.lang.String b;

    // Methods
    static
    {
      b = com.amazon.device.iap.internal.b.e.c.class.getSimpleName();
    }

    public c(com.amazon.device.iap.internal.b.b_e p0)
    {
      super(p0, "2.0");
    }

    protected final boolean a(com.amazon.venezia.command.SuccessResult p0)
    {
      java.util.Map Data;
      String v3;
      String v4;
      com.amazon.device.iap.internal.b.b_e v5;
      com.amazon.device.iap.model.UserData v8;
      com.amazon.device.iap.model.UserDataResponse v9;
      com.amazon.device.iap.internal.util.e.a(b, "onResult: result = " + p0);
      Data = p0.getData();
      com.amazon.device.iap.internal.util.e.a(b, "data: " + Data);
      v3 = (String)Data.get("userId");
      v4 = (String)Data.get("marketplace");
      v5 = this.b();
      if ( com.amazon.device.iap.internal.util.d.a(v3) || com.amazon.device.iap.internal.util.d.a(v4) )
      {
        v5.d().a(new com.amazon.device.iap.internal.model.UserDataResponseBuilder().setRequestId(v5.c()).setRequestStatus(com.amazon.device.iap.model.UserDataResponse$RequestStatus.FAILED).build());
        return false;
      }
      else
      {
        v8 = new com.amazon.device.iap.internal.model.UserDataBuilder().setUserId(v3).setMarketplace(v4).build();
        v9 = new com.amazon.device.iap.internal.model.UserDataResponseBuilder().setRequestId(v5.c()).setRequestStatus(com.amazon.device.iap.model.UserDataResponse$RequestStatus.SUCCESSFUL).setUserData(v8).build();
        v5.d().a("userId", v8.getUserId());
        v5.d().a(v9);
        return true;
      }
    }

}
