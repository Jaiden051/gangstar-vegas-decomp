// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.d;

public final class c extends com.amazon.device.iap.internal.b.d.b {
    // Fields
    private static final java.lang.String b;

    // Methods
    static
    {
      b = com.amazon.device.iap.internal.b.d.c.class.getSimpleName();
    }

    public c(com.amazon.device.iap.internal.b.b_e p0, boolean p1)
    {
      super(p0, "2.0", p1);
    }

    private java.util.List<com.amazon.device.iap.model.Receipt> a(String p0, String p1, String p2)
 throws org.json.JSONException {
      java.util.List v4;
      org.json.JSONArray v5;
      int i;
      v4 = new java.util.ArrayList();
      v5 = new org.json.JSONArray(p1);
      for ( i = 0; i < v5.length(); ++i )
      {
        try
        {
          v4.add(com.amazon.device.iap.internal.util.a.a(v5.getJSONObject(i), p0, p2));
          continue;
        }
        catch ( com.amazon.device.iap.internal.b.b_a v7 )
        {
          com.amazon.device.iap.internal.util.e.b(b, "fail to parse receipt, requestId:" + v7.a());
          continue;
        }
        catch ( com.amazon.device.iap.internal.b.b_d v8 )
        {
          com.amazon.device.iap.internal.util.e.b(b, "fail to verify receipt, requestId:" + v8.a());
          continue;
        }
        catch ( Throwable v9 )
        {
          com.amazon.device.iap.internal.util.e.b(b, "fail to verify receipt, requestId:" + v9.getMessage());
        }
      }
      return v4;
    }

    protected final boolean a(com.amazon.venezia.command.SuccessResult p0)
 throws org.json.JSONException {
      java.util.Map Data;
      String v3;
      String v4;
      java.util.List v5;
      String v6;
      boolean v7;
      com.amazon.device.iap.internal.b.b_e v8;
      Data = p0.getData();
      com.amazon.device.iap.internal.util.e.a(b, "data: " + Data);
      v3 = (String)Data.get("userId");
      v4 = (String)Data.get("marketplace");
      v5 = this.a(v3, (String)Data.get("receipts"), (String)Data.get("requestId"));
      v6 = (String)Data.get("cursor");
      v7 = Boolean.valueOf((String)Data.get("hasMore")).booleanValue();
      v8 = this.b();
      v8.d().a(new com.amazon.device.iap.internal.model.PurchaseUpdatesResponseBuilder().setRequestId(v8.c()).setRequestStatus(com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus.SUCCESSFUL).setUserData(new com.amazon.device.iap.internal.model.UserDataBuilder().setUserId(v3).setMarketplace(v4).build()).setReceipts(v5).setHasMore(v7).build());
      com.amazon.device.iap.internal.util.b.a(v3, v6);
      return true;
    }

}
