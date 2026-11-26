// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.a;

import com.amazon.device.iap.model.ProductType;
public final class b extends com.amazon.device.iap.internal.b.a.c {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.b.a.b.class.getSimpleName();
    }

    public b(com.amazon.device.iap.internal.b.b_e p0)
    {
      super(p0, "1.0");
    }

    private void a(String p0, String p1, String p2)
    {
      org.json.JSONObject v4;
      if ( p0 != null && p1 != null && p2 != null )
      {
        try
        {
          v4 = new org.json.JSONObject(p2);
          if ( com.amazon.device.iap.model.PurchaseResponse$RequestStatus.safeValueOf(v4.getString("orderStatus")) == com.amazon.device.iap.model.PurchaseResponse$RequestStatus.SUCCESSFUL )
            com.amazon.device.iap.internal.c.a.a().a(p0, p1, com.amazon.device.iap.internal.util.a.a(v4, p1, p0).getReceiptId(), p2);
        }
        catch ( Throwable v5 )
        {
          com.amazon.device.iap.internal.util.e.b(a, "Error in savePendingReceipt: " + v5);
        }
      }
    }

    protected final boolean a(com.amazon.venezia.command.SuccessResult p0)
 throws org.json.JSONException {
      java.util.Map Data = null;
      String v3 = null;
      String v4 = null;
      String v5 = null;
      String v6 = null;
      org.json.JSONObject v9 = null;
      com.amazon.device.iap.model.PurchaseResponse$RequestStatus v10 = null;
      com.amazon.device.iap.model.Receipt v11 = null;
      com.amazon.device.iap.model.Receipt v12 = null;
      com.amazon.device.iap.internal.b.b_e v13 = null;
      int _pc = 0;
      _sm:
      while ( true )
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
            if ( v3 == null || !com.amazon.device.iap.internal.c.b.a().a(v3) )
            {
            this.b().d().b();
            return true;
            }
            if ( com.amazon.device.iap.internal.util.d.a(v6) )
            {
            this.a(v4, v5, v3, com.amazon.device.iap.model.PurchaseResponse$RequestStatus.FAILED);
            return false;
            }
            v9 = new org.json.JSONObject(v6);
            v10 = com.amazon.device.iap.model.PurchaseResponse$RequestStatus.safeValueOf(v9.getString("orderStatus"));
            if ( !(v10 != com.amazon.device.iap.model.PurchaseResponse$RequestStatus.SUCCESSFUL) ) { _pc = 2; continue _sm; }
            v12 = null;
            _pc = 1;
            continue _sm;
          case 1:
            v13 = this.b();
            v13.d().a(new com.amazon.device.iap.internal.model.PurchaseResponseBuilder().setRequestId(v13.c()).setRequestStatus(v10).setUserData(new com.amazon.device.iap.internal.model.UserDataBuilder().setUserId(v4).setMarketplace(v5).build()).setReceipt(v12).build());
            return true;
          case 2:
            try
            {
            v11 = com.amazon.device.iap.internal.util.a.a(v9, v4, v3);
            if ( ProductType.CONSUMABLE == v11.getProductType() )
            this.a(v3, v4, v6);
            v12 = v11;
            { _pc = 1; continue _sm; }
            }
            catch ( Throwable e )
            {
            this.a(v4, v5, v3, com.amazon.device.iap.model.PurchaseResponse$RequestStatus.FAILED);
            return false;
            }
            

        }
      }
}

}
