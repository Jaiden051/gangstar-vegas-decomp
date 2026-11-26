// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Log;
final class b implements com.amazon.device.associates.bg {
    // Fields
    private static final java.lang.String a;
    private com.amazon.device.associates.ay b;

    // Methods
    static
    {
      a = com.amazon.device.associates.b.class.getSimpleName();
    }

    b()
    {
      super();
    }

    /* synthetic */ static com.amazon.device.associates.ay a(com.amazon.device.associates.b p0)
    {
      return p0.b;
    }

    private void a(android.content.Intent p0, org.json.JSONObject p1)
 throws org.json.JSONException {
      boolean v3;
      boolean v4;
      java.util.Set v5;
      com.amazon.device.associates.RequestId v6;
      com.amazon.device.associates.UserData v7;
      com.amazon.device.associates.ServiceStatusResponse v8;
      v3 = true;
      v4 = false;
      v5 = new java.util.HashSet();
      v5.add(PurchaseExperience.DIRECT_WITH_DETAIL);
      v5.add(PurchaseExperience.DIRECT_WITH_PREVIEW);
      v6 = RequestId.a(p1.getString("requestId"));
      if ( p1.getString("requestStatus").equals("SUCCESSFUL") )
      {
        v7 = aw.a(p1);
        if ( ((java.util.Set)aw.a(p1.getJSONArray("availableProductTypes"), new java.util.HashSet())).contains("PHYSICAL") )
        {
          v5.add(PurchaseExperience.IN_APP);
          v4 = true;
        }
        else
        {
          v3 = false;
        }
        v8 = new com.amazon.device.associates.ServiceStatusResponse(v6, v7, v5, v4, v3);
      }
      else
      {
        v8 = new com.amazon.device.associates.ServiceStatusResponse(v6, null, v5, false, false);
      }
      this.b.a(ay$a.a, v8);
    }

    private void b(android.content.Intent p0, org.json.JSONObject p1)
 throws org.json.JSONException {
      com.amazon.device.associates.RequestId v3;
      com.amazon.device.associates.ReceiptsResponse$Status v4; // RETVAL
      com.amazon.device.associates.ReceiptsResponse v5;
      v3 = RequestId.a(p1.getString("requestId"));
      v4 = ReceiptsResponse$Status.valueOf(p1.getString("requestStatus"));
      if ( v4 == ReceiptsResponse$Status.SUCCESSFUL )
        v5 = new com.amazon.device.associates.ReceiptsResponse(v3, v4, (java.util.List)aw.b(
                                                                                         p1.getJSONArray("receipts"),
                                                                                         new java.util.ArrayList()), Offset.fromString(p1.getString("offset")), p1.optBoolean("hasMore"));
      else
        v5 = new com.amazon.device.associates.ReceiptsResponse(v3, v4);
      this.b.a(ay$a.b, v5);
    }

    private void c(android.content.Intent p0, org.json.JSONObject p1)
 throws org.json.JSONException {
      com.amazon.device.associates.RequestId v3;
      com.amazon.device.associates.SearchResponse$Status v4; // RETVAL
      com.amazon.device.associates.SearchResponse v5;
      v3 = RequestId.a(p1.getString("requestId"));
      v4 = SearchResponse$Status.valueOf(p1.getString("requestStatus"));
      if ( v4 == SearchResponse$Status.SUCCESSFUL )
        v5 = new com.amazon.device.associates.SearchResponse(v3, v4, (java.util.List)aw.c(
                                                                                       p1.getJSONArray("products"),
                                                                                       new java.util.ArrayList()), p1.getInt("page"), p1.getInt("totalPages"));
      else
        v5 = new com.amazon.device.associates.SearchResponse(v3, v4);
      this.b.a(ay$a.c, v5);
    }

    private void d(android.content.Intent p0, org.json.JSONObject p1)
 throws org.json.JSONException {
      com.amazon.device.associates.RequestId v3;
      com.amazon.device.associates.SearchByIdResponse$Status v4; // RETVAL
      com.amazon.device.associates.SearchByIdResponse v5;
      v3 = RequestId.a(p1.getString("requestId"));
      v4 = SearchByIdResponse$Status.valueOf(p1.getString("requestStatus"));
      if ( v4 == SearchByIdResponse$Status.SUCCESSFUL )
        v5 = new com.amazon.device.associates.SearchByIdResponse(v3, v4, (java.util.List)aw.c(
                                                                                           p1.getJSONArray("products"),
                                                                                           new java.util.ArrayList()), (java.util.Set)aw.a(p1.getJSONArray("unavailableProductIds"), new java.util.HashSet()));
      else
        v5 = new com.amazon.device.associates.SearchByIdResponse(v3, v4);
      this.b.a(ay$a.d, v5);
    }

    private void e(android.content.Intent p0, org.json.JSONObject p1)
 throws org.json.JSONException {
      com.amazon.device.associates.RequestId v3;
      com.amazon.device.associates.PurchaseResponse$Status v4; // RETVAL
    
      v3 = RequestId.a(p1.getString("requestId"));
      v4 = PurchaseResponse$Status.valueOf(p1.getString("requestStatus"));
      if ( v4 == PurchaseResponse$Status.SUCCESSFUL )
        bc.a().post((Runnable)new com.amazon.device.associates.b$1(this, (android.content.Intent)p0.getExtras().get("intent")));
      else
        this.b.a(ay$a.e, new com.amazon.device.associates.PurchaseResponse(v3, v4));
    }

    private void f(android.content.Intent p0, org.json.JSONObject p1)
 throws org.json.JSONException {
      com.amazon.device.associates.RequestId v3;
      com.amazon.device.associates.PurchaseResponse$Status v4; // RETVAL
      com.amazon.device.associates.PurchaseResponse$Status v5;
      java.util.Collection v6;
      com.amazon.device.associates.PurchaseResponse v7;
      v3 = RequestId.a(p1.getString("requestId"));
      v4 = PurchaseResponse$Status.valueOf(p1.getString("requestStatus"));
      v5 = v4;
      if ( v4 == PurchaseResponse$Status.SUCCESSFUL )
      {
        v6 = new java.util.ArrayList();
        if ( p1.has("receipts") && !p1.isNull("receipts") )
          aw.b(p1.getJSONArray("receipts"), v6);
        v7 = new com.amazon.device.associates.PurchaseResponse(v3, v5, (java.util.List)v6);
      }
      else
      {
        v7 = new com.amazon.device.associates.PurchaseResponse(v3, v4);
      }
      this.b.a(ay$a.e, v7);
    }

    public final void a(android.content.Context p0, android.content.Intent p1, com.amazon.device.associates.ay p2)
    {
      org.json.JSONObject v4;
      String String;
      x.b(a, "handleResponse");
      this.b = p2;
      try
      {
        v4 = new org.json.JSONObject(p1.getExtras().getString("message"));
        x.b(a, "message: " + v4.toString(4));
        if ( v4.has("errorMessage") )
          Log.e(a, v4.optString("errorMessage"));
        String = v4.getString("command");
        if ( String.equalsIgnoreCase("com.amazon.device.iap.physical.get_userData") )
        {
          this.a(p1, v4);
        }
        else if ( String.equalsIgnoreCase("com.amazon.device.iap.physical.physical_get_receipts") )
        {
          this.b(p1, v4);
        }
        else if ( String.equalsIgnoreCase("com.amazon.device.iap.physical.physical_search") )
        {
          this.c(p1, v4);
        }
        else if ( String.equalsIgnoreCase("com.amazon.device.iap.physical.physical_searchById") )
        {
          this.d(p1, v4);
        }
        else if ( String.equalsIgnoreCase("com.amazon.device.iap.physical.physical_purchase") )
        {
          this.e(p1, v4);
        }
        else if ( String.equalsIgnoreCase("com.amazon.device.iap.physical.physical_get_purchaseResult") )
        {
          this.f(p1, v4);
        }
        else if ( String.equalsIgnoreCase("com.amazon.device.iap.physical.physical_purchase_done") )
        {
          p2.a(ay$a.f, RequestId.a(v4.getString("requestId")), null);
        }
        else if ( !String.equalsIgnoreCase("com.amazon.device.iap.physical.physical_notify_receiptReceived") )
        {
          x.a(a, "response with unknown command: " + String);
        }
      }
      catch ( Exception v6 )
      {
        x.a(a, "error in handleResponse: " + v6);
      }
    }

}
