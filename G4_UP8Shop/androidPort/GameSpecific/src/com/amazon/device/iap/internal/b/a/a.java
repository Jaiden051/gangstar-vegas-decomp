// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.a;

public final class a extends com.amazon.device.iap.internal.b.a.c {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.b.a.a.class.getSimpleName();
    }

    public a(com.amazon.device.iap.internal.b.b_e p0)
    {
      super(p0, "2.0");
    }

    protected final boolean a(com.amazon.venezia.command.SuccessResult p0)
    {
      java.util.Map Data = null;
      String v3 = null;
      String v4 = null;
      String v5 = null;
      String v6 = null;
      org.json.JSONObject v9 = null;
      com.amazon.device.iap.model.PurchaseResponse$RequestStatus v10 = null;
      com.amazon.device.iap.model.Receipt v11 = null;
      com.amazon.device.iap.internal.b.b_e v12 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              Data = p0.getData();
              com.amazon.device.iap.internal.util.e.a(a, "data: " + Data);
              v3 = (String)this.getCommandData().get("requestId");
              v4 = (String)Data.get("userId");
              v5 = (String)Data.get("marketplace");
              v6 = (String)Data.get("receipt");
              if ( com.amazon.device.iap.internal.util.d.a(v6) )
              {
              this.a(v4, v5, v3, com.amazon.device.iap.model.PurchaseResponse$RequestStatus.FAILED);
              return false;
              }
              v9 = new org.json.JSONObject(v6);
              v10 = com.amazon.device.iap.model.PurchaseResponse$RequestStatus.safeValueOf(v9.getString("orderStatus"));
              if ( v10 != com.amazon.device.iap.model.PurchaseResponse$RequestStatus.SUCCESSFUL )
              {
              v11 = null;
              { _pc = 1; continue _sm; }
              }
              _ehCatchPc = 2;
              v11 = com.amazon.device.iap.internal.util.a.a(v9, v4, v3);
              _pc = 1;
              continue _sm;
            case 1:
              v12 = this.b();
              v12.d().a(new com.amazon.device.iap.internal.model.PurchaseResponseBuilder().setRequestId(v12.c()).setRequestStatus(v10).setUserData(new com.amazon.device.iap.internal.model.UserDataBuilder().setUserId(v4).setMarketplace(v5).build()).setReceipt(v11).build());
              return true;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              this.a(v4, v5, v3, com.amazon.device.iap.model.PurchaseResponse$RequestStatus.FAILED);
              return false;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

}
