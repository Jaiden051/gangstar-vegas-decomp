// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.d;

import com.amazon.device.iap.model.ProductType;
import com.amazon.device.iap.model.Receipt;
public final class d extends com.amazon.device.iap.internal.b.d.b {
    // Fields
    private static final java.lang.String b;

    // Methods
    static
    {
      b = com.amazon.device.iap.internal.b.d.d.class.getSimpleName();
    }

    public d(com.amazon.device.iap.internal.b.b_e p0, boolean p1)
    {
      super(p0, "1.0", p1);
    }

    protected final boolean a(com.amazon.venezia.command.SuccessResult p0)
 throws org.json.JSONException {
      int v2;
      java.util.Map Data;
      String v4;
      String v5;
      String v6;
      java.util.List v7;
      org.json.JSONArray v8;
      int i;
      org.json.JSONArray v13;
      String v14;
      boolean v15;
      com.amazon.device.iap.internal.b.b_e v16;
      com.amazon.device.iap.model.PurchaseUpdatesResponse v17;
      v2 = 0;
      Data = p0.getData();
      com.amazon.device.iap.internal.util.e.a(b, "data: " + Data);
      v4 = (String)Data.get("userId");
      v5 = (String)Data.get("requestId");
      v6 = (String)Data.get("marketplace");
      v7 = new java.util.ArrayList();
      v8 = new org.json.JSONArray((String)Data.get("receipts"));
      for ( i = 0; i < v8.length(); ++i )
      {
        try
        {
          v7.add(com.amazon.device.iap.internal.util.a.a(v8.getJSONObject(i), v4, v5));
          continue;
        }
        catch ( com.amazon.device.iap.internal.b.b_a v10 )
        {
          com.amazon.device.iap.internal.util.e.b(b, "fail to parse receipt, requestId:" + v10.a());
          continue;
        }
        catch ( com.amazon.device.iap.internal.b.b_d v11 )
        {
          com.amazon.device.iap.internal.util.e.b(b, "fail to verify receipt, requestId:" + v11.a());
          continue;
        }
        catch ( Throwable v12 )
        {
          com.amazon.device.iap.internal.util.e.b(b, "fail to verify receipt, requestId:" + v12.getMessage());
        }
      }
      v13 = new org.json.JSONArray((String)Data.get("revocations"));
      while ( v2 < v13.length() )
      {
        try
        {
          v7.add(new com.amazon.device.iap.internal.model.ReceiptBuilder().setSku(v13.getString(v2)).setProductType(ProductType.ENTITLED).setPurchaseDate(null).setCancelDate(Receipt.DATE_CANCELED).build());
        }
        catch ( org.json.JSONException e )
        {
          com.amazon.device.iap.internal.util.e.b(b, "fail to parse JSON[" + v2 + "] in \"" + v13 + "\"");
        }
        ++v2;
      }
      v14 = (String)Data.get("cursor");
      v15 = "true".equalsIgnoreCase((String)Data.get("hasMore"));
      v16 = this.b();
      v17 = new com.amazon.device.iap.internal.model.PurchaseUpdatesResponseBuilder().setRequestId(v16.c()).setRequestStatus(com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus.SUCCESSFUL).setUserData(new com.amazon.device.iap.internal.model.UserDataBuilder().setUserId(v4).setMarketplace(v6).build()).setReceipts(v7).setHasMore(v15).build();
      v17.getReceipts().addAll(com.amazon.device.iap.internal.c.a.a().b(v17.getUserData().getUserId()));
      v16.d().a(v17);
      com.amazon.device.iap.internal.util.b.a(v4, v14);
      return true;
    }

}
