// Decompiled from classes.dex (SourceFile: ap.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import com.google.android.gms.drive.query.Filters;
final class ap implements com.amazon.device.associates.ar {
    // Fields
    private static final java.lang.String a;
    private com.amazon.device.associates.ay b;
    private final java.util.Set c;
    private boolean d;
    private boolean e;

    // Methods
    static
    {
      a = com.amazon.device.associates.ap.class.getSimpleName();
    }

    ap()
    {
      super();
      this.c = new java.util.HashSet();
      this.d = false;
      this.e = false;
      this.c.add(PurchaseExperience.DIRECT_WITH_DETAIL);
      this.c.add(PurchaseExperience.DIRECT_WITH_PREVIEW);
    }

    private void a(com.amazon.device.associates.RequestId p0, String p1, org.json.JSONObject p2) throws org.json.JSONException
    {
      android.content.Intent v4;
      android.content.Context v5;
      android.os.Bundle v6;
      v4 = new android.content.Intent(p1);
      v5 = this.b.b();
      v6 = new android.os.Bundle();
      p2.put("sdkVersion", this.b.a());
      p2.put("packageName", v5.getPackageName());
      p2.put("requestId", p0.toString());
      v6.putString("message", p2.toString());
      x.b(a, "action: " + p1 + ", message: " + p2.toString(4));
      v4.addFlags(0x10000000);
      v4.putExtras(v6);
      v5.startService(v4);
    }

    private boolean a()
    {
      java.util.Iterator v1;
      v1 = this.b.b().getPackageManager().getInstalledPackages(0).iterator();
      while ( v1.hasNext() )
      {
        if ( ((android.content.pm.PackageInfo)v1.next()).packageName.equals("com.amazon.sdktestclient") )
        {
          return true;
        }
      }
      return false;
    }

    public final void a(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.PurchaseRequest p1,
            com.amazon.device.associates.ay p2)
    {
      org.json.JSONObject v4;
      x.b(a, "sendPurchaseRequest");
      this.b = p2;
      if ( this.a() && (p1.getPurchaseExperience() == null || p1.getPurchaseExperience() == PurchaseExperience.IN_APP) )
      {
        try
        {
          v4 = new org.json.JSONObject();
          v4.put("productType", "PHYSICAL");
          v4.put("productIds", new org.json.JSONArray("[\"" + p1.getProductId() + "\"]"));
          v4.put("receiveReceipt", p1.getReceiveReceipt());
          this.a(p0, "com.amazon.device.iap.physical.physical_purchase", v4);
        }
        catch ( org.json.JSONException e )
        {
          x.a(a, "Error in sendPurchaseRequest.");
        }
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
      org.json.JSONObject v4;
      x.b(a, "sendGetReceiptsRequest");
      this.b = p2;
      if ( this.a() )
      {
        try
        {
          v4 = new org.json.JSONObject();
          v4.put("offset", p1.getOffset());
          this.a(p0, "com.amazon.device.iap.physical.physical_get_receipts", v4);
        }
        catch ( org.json.JSONException e )
        {
          x.a(a, "Error in sendGetReceiptsRequest.");
        }
      }
      else
      {
        p2.a(ay$a.b, new com.amazon.device.associates.ReceiptsResponse(p0, ReceiptsResponse$Status.NOT_SUPPORTED));
      }
    }

    public final void a(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.SearchByIdRequest p1,
            com.amazon.device.associates.ay p2)
    {
      org.json.JSONObject v4;
      x.b(a, "sendSearchByIdRequest");
      this.b = p2;
      if ( this.a() )
      {
        try
        {
          v4 = new org.json.JSONObject();
          v4.put("productType", "PHYSICAL");
          v4.put("productIds", new org.json.JSONArray(p1.getProductIds()));
          this.a(p0, "com.amazon.device.iap.physical.physical_searchById", v4);
        }
        catch ( org.json.JSONException e )
        {
          x.a(a, "Error in sendSearchByIdRequest.");
        }
      }
      else
      {
        p2.a(ay$a.d, new com.amazon.device.associates.SearchByIdResponse(p0, SearchByIdResponse$Status.NOT_SUPPORTED));
      }
    }

    public final void a(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.SearchRequest p1,
            com.amazon.device.associates.ay p2)
    {
      org.json.JSONObject v4;
      java.util.Map Filters;
      org.json.JSONObject v6;
      java.util.Iterator v7;
      com.amazon.device.associates.FilterType v8;
      x.b(a, "sendSearchRequest");
      this.b = p2;
      if ( this.a() )
      {
        try
        {
          v4 = new org.json.JSONObject();
          v4.put("category", p1.getCategory().toString());
          v4.put("searchTerm", p1.getSearchTerm());
          Filters = p1.getFilters();
          v6 = new org.json.JSONObject();
          v7 = Filters.keySet().iterator();
          while ( v7.hasNext() )
          {
            v8 = (com.amazon.device.associates.FilterType)v7.next();
            v6.put(v8.toString(), Filters.get(v8));
          }
          v4.put("filters", v6);
          v4.put("sortType", p1.getSortType().toString());
          v4.put("page", p1.getPage());
          this.a(p0, "com.amazon.device.iap.physical.physical_search", v4);
        }
        catch ( org.json.JSONException e )
        {
          x.a(a, "Error in sendSearchRequest.");
        }
      }
      else
      {
        p2.a(ay$a.c, new com.amazon.device.associates.SearchResponse(p0, SearchResponse$Status.NOT_SUPPORTED));
      }
    }

    public final void a(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ay p1)
    {
      x.b(a, "sendGetServiceStatusRequest");
      this.b = p1;
      if ( this.a() )
      {
        try
        {
          this.a(p0, "com.amazon.device.iap.physical.get_userData", new org.json.JSONObject());
        }
        catch ( org.json.JSONException e )
        {
          x.a(a, "Error in sendGetServiceStatusRequest.");
        }
      }
      else
      {
        p1.a(ay$a.a, new com.amazon.device.associates.ServiceStatusResponse(p0, null, this.c, this.d, this.e));
      }
    }

    public final void b(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ay p1)
    {
      x.b(a, "sendPurchaseResponseRequest");
      this.b = p1;
      try
      {
        this.a(p0, "com.amazon.device.iap.physical.physical_get_purchaseResult", new org.json.JSONObject());
      }
      catch ( org.json.JSONException e )
      {
        x.a(a, "Error in sendPurchaseResponseRequest.");
      }
    }

    public final void c(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ay p1)
    {
      x.b(a, "sendReceiptReceivedRequest");
      this.b = p1;
      try
      {
        this.a(p0, "com.amazon.device.iap.physical.physical_notify_receiptReceived", new org.json.JSONObject());
      }
      catch ( org.json.JSONException e )
      {
        x.a(a, "Error in sendReceiptReceivedRequest.");
      }
    }

}
