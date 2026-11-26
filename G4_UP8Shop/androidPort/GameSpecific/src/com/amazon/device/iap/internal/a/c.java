// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.a;

import android.util.Log;
import com.amazon.device.iap.model.ProductType;
import com.amazon.device.iap.model.RequestId;
import java.util.Currency;
import org.json.JSONObject;
public final class c implements com.amazon.device.iap.internal.iap_c {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.a.c.class.getSimpleName();
    }

    public c()
    {
      super();
    }

    private com.amazon.device.iap.model.Product a(String p0, org.json.JSONObject p1)
 throws org.json.JSONException {
      com.amazon.device.iap.model.ProductType v3;
      org.json.JSONObject JSONObject;
      v3 = ProductType.valueOf(p1.optString("itemType"));
      JSONObject = p1.getJSONObject("priceJson");
      return new com.amazon.device.iap.internal.model.ProductBuilder().setSku(p0).setProductType(v3).setDescription(p1.optString("description")).setPrice(new com.amazon.device.iap.internal.model.PriceBuilder().setCurrency(Currency.getInstance(JSONObject.optString("currency"))).setValue(new java.math.BigDecimal(JSONObject.optString("value"))).build()).setSmallIconUrl(p1.optString("smallIconUrl")).setTitle(p1.optString("title")).build();
    }

    private com.amazon.device.iap.model.Receipt a(org.json.JSONObject p0)
 throws java.text.ParseException {
      String v2;
      String v3;
      com.amazon.device.iap.model.ProductType v4;
      java.util.Date v5;
      String v6; // RETVAL
      String v7;
      java.util.Date v8;
      v2 = p0.optString("receiptId");
      v3 = p0.optString("sku");
      v4 = ProductType.valueOf(p0.optString("itemType"));
      v5 = com.amazon.device.iap.internal.a.b.a.parse(p0.optString("purchaseDate"));
      v6 = p0.optString("cancelDate");
      v7 = v6;
      if ( v6 != null && v6.length() != 0 )
        v8 = com.amazon.device.iap.internal.a.b.a.parse(v7);
      else
        v8 = null;
      return new com.amazon.device.iap.internal.model.ReceiptBuilder().setReceiptId(v2).setSku(v3).setProductType(v4).setPurchaseDate(v5).setCancelDate(v8).build();
    }

    /* synthetic */ static String a()
    {
      return a;
    }

    private void a(android.content.Intent p0)
 throws org.json.JSONException {
      com.amazon.device.iap.model.PurchaseUpdatesResponse v2;
      String v3;
      v2 = this.b(p0);
      if ( v2.getRequestStatus() == com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus.SUCCESSFUL )
      {
        v3 = new org.json.JSONObject(p0.getStringExtra("purchaseUpdatesOutput")).optString("offset");
        Log.i(a, "Offset for PurchaseUpdatesResponse:" + v3);
        com.amazon.device.iap.internal.util.b.a(v2.getUserData().getUserId(), v3);
      }
      this.a(v2);
    }

    private void a(String p0)
    {
      android.content.Context v2;
      android.os.Bundle v3;
      org.json.JSONObject v4;
      android.content.Intent v5;
      try
      {
        v2 = com.amazon.device.iap.internal.d.d().b();
        v3 = new android.os.Bundle();
        v4 = new org.json.JSONObject();
        v4.put("requestId", p0);
        v4.put("packageName", v2.getPackageName());
        v4.put("sdkVersion", "2.0.0");
        v3.putString("userInput", v4.toString());
        v5 = new android.content.Intent("com.amazon.testclient.iap.appUserId");
        v5.addFlags(0x10000000);
        v5.putExtras(v3);
        v2.startService(v5);
      }
      catch ( org.json.JSONException e )
      {
        com.amazon.device.iap.internal.util.e.b(a, "Error in sendGetUserDataRequest.");
      }
    }

    private void a(String p0, String p1)
    {
      android.content.Context v3;
      boolean v4;
      String v5;
      android.os.Bundle v6;
      org.json.JSONObject v7;
      android.content.Intent v8;
      try
      {
        v3 = com.amazon.device.iap.internal.d.d().b();
        v4 = "1".equals(p0.substring(40, 41));
        v5 = com.amazon.device.iap.internal.util.b.a(p1);
        Log.i(
          a,
          "send PurchaseUpdates with user id:"
        + p1
        + ";reset flag:"
        + v4
        + ", local cursor:"
        + v5
        + ", parsed from old requestId:"
        + p0);
        v6 = new android.os.Bundle();
        v7 = new org.json.JSONObject();
        v7.put("requestId", new com.amazon.device.iap.model.RequestId().toString());
        if ( v4 )
          v5 = null;
        v7.put("offset", v5);
        v7.put("sdkVersion", "2.0.0");
        v7.put("packageName", v3.getPackageName());
        v6.putString("purchaseUpdatesInput", v7.toString());
        v8 = new android.content.Intent("com.amazon.testclient.iap.purchaseUpdates");
        v8.addFlags(0x10000000);
        v8.putExtras(v6);
        v3.startService(v8);
      }
      catch ( org.json.JSONException e )
      {
        com.amazon.device.iap.internal.util.e.b(a, "Error in sendPurchaseUpdatesRequest.");
      }
    }

    private com.amazon.device.iap.model.PurchaseUpdatesResponse b(android.content.Intent p0)
    {
      int v2 = 0;
      int v3 = 0;
      com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus v4 = null;
      org.json.JSONObject v5 = null;
      String v6 = null;
      com.amazon.device.iap.model.RequestId v7 = null; // RETVAL
      com.amazon.device.iap.model.RequestId v8 = null;
      com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus v9 = null;
      String v10 = null;
      boolean v11 = false; // RETVAL
      boolean v12 = false;
      com.amazon.device.iap.internal.model.UserDataBuilder v13 = null;
      com.amazon.device.iap.model.UserData v14 = null; // RETVAL
      com.amazon.device.iap.model.UserData v15 = null;
      java.util.List v16 = null;
      org.json.JSONArray v17 = null;
      org.json.JSONObject v18 = null; // RETVAL
      Throwable v20 = null;
      Throwable v21 = null;
      com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus v23 = null;
      boolean v24 = false;
      com.amazon.device.iap.model.UserData v25 = null;
      com.amazon.device.iap.model.RequestId v26 = null;
      Throwable v31 = null;
      Exception _cv_1 = null;
      Exception _cv_2 = null;
      Exception _cv_3 = null;
      Exception _cv_4 = null;
      Exception _cv_5 = null;
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
              v2 = 0;
              v3 = 0;
              v4 = com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus.FAILED;
              _ehCatchPc = 21;
              v5 = new org.json.JSONObject(p0.getStringExtra("purchaseUpdatesOutput"));
              v6 = v5.optString("requestId");
              v7 = RequestId.fromString(v6);
              v8 = v7;
              _ehCatchPc = 18;
              v9 = com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus.valueOf(v5.optString("status"));
              v10 = "isMore";
              v11 = v5.optBoolean("isMore");
              v12 = v11;
              _ehCatchPc = 15;
              v13 = new com.amazon.device.iap.internal.model.UserDataBuilder().setUserId(v5.optString("userId")).setMarketplace(v5.optString("marketplace"));
              v14 = v13.build();
              v15 = v14;
              _ehCatchPc = 12;
              if ( !(v9 != com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus.SUCCESSFUL) ) { _pc = 2; continue _sm; }
              v16 = null;
              _pc = 1;
              continue _sm;
            case 1:
              v23 = v9;
              v24 = v12;
              v25 = v15;
              v26 = v8;
              return new com.amazon.device.iap.internal.model.PurchaseUpdatesResponseBuilder().setRequestId(v26).setRequestStatus(v23).setUserData(v25).setReceipts(v16).setHasMore(v24).build();
            case 2:
              v16 = new java.util.ArrayList();
              _ehCatchPc = 3;
              v17 = v5.optJSONArray("receipts");
              if ( v17 != null )
              { _pc = 7; continue _sm; }
              _pc = 1;
              continue _sm;
            case 3:
              _ehCatchPc = 12;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 5; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              v20 = _cv_1;
              v23 = v9;
              v24 = v12;
              v25 = v15;
              v26 = v8;
              v21 = v20;
              _pc = 4;
              continue _sm;
            case 4:
              Log.e(a, "Error parsing purchase updates output", v21);
              return new com.amazon.device.iap.internal.model.PurchaseUpdatesResponseBuilder().setRequestId(v26).setRequestStatus(v23).setUserData(v25).setReceipts(v16).setHasMore(v24).build();
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              ++v2;
              _pc = 7;
              continue _sm;
            case 7:
              if ( v2 >= v17.length() )
              { _pc = 1; continue _sm; }
              v18 = v17.optJSONObject(v2);
              _ehCatchPc = 8;
              v16.add(this.a(v18));
              _pc = 6;
              continue _sm;
            case 8:
              _ehCatchPc = 12;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              Log.e(a, "Failed to parse receipt from json:" + v18);
              _pc = 6;
              continue _sm;
            case 9:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 12:
              _ehCatchPc = 15;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 13; continue _sm; }
              _cv_2 = (Exception)_ehCaught;
              v31 = _cv_2;
              v16 = null;
              v23 = v9;
              v24 = v12;
              v25 = v14;
              v26 = v8;
              v21 = v31;
              _pc = 4;
              continue _sm;
            case 13:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 15:
              _ehCatchPc = 18;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 16; continue _sm; }
              _cv_3 = (Exception)_ehCaught;
              v26 = v8;
              v21 = _cv_3;
              v16 = null;
              v25 = null;
              v23 = v9;
              v24 = v11;
              _pc = 4;
              continue _sm;
            case 16:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 18:
              _ehCatchPc = 21;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 19; continue _sm; }
              _cv_4 = (Exception)_ehCaught;
              v25 = null;
              v26 = v7;
              v21 = _cv_4;
              v16 = null;
              v23 = v4;
              v24 = false;
              _pc = 4;
              continue _sm;
            case 19:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 21:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 22; continue _sm; }
              _cv_5 = (Exception)_ehCaught;
              v21 = _cv_5;
              v25 = null;
              v26 = null;
              v16 = null;
              v23 = v4;
              v24 = false;
              _pc = 4;
              continue _sm;
            case 22:
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

    private void c(android.content.Intent p0)
    {
      this.a(this.d(p0));
    }

    private com.amazon.device.iap.model.ProductDataResponse d(android.content.Intent p0)
    {
      java.util.Map v2 = null;
      com.amazon.device.iap.model.ProductDataResponse$RequestStatus v3 = null;
      org.json.JSONObject v4 = null;
      String v5 = null;
      com.amazon.device.iap.model.RequestId v6 = null; // RETVAL
      com.amazon.device.iap.model.RequestId v7 = null;
      com.amazon.device.iap.model.ProductDataResponse$RequestStatus v8 = null; // RETVAL
      com.amazon.device.iap.model.ProductDataResponse$RequestStatus v9 = null;
      com.amazon.device.iap.model.ProductDataResponse$RequestStatus v10 = null;
      java.util.Set v11 = null;
      java.util.Map v12 = null;
      org.json.JSONArray v13 = null;
      int i = 0;
      org.json.JSONObject v15 = null; // RETVAL
      org.json.JSONObject v16 = null;
      java.util.Iterator v17 = null;
      String v18 = null;
      Throwable v20 = null;
      Throwable v21 = null;
      java.util.Set v23 = null;
      com.amazon.device.iap.model.ProductDataResponse$RequestStatus v24 = null;
      com.amazon.device.iap.model.RequestId v25 = null;
      com.amazon.device.iap.model.ProductDataResponse$RequestStatus v28 = null;
      Throwable v30 = null;
      Exception _cv_1 = null;
      Exception _cv_2 = null;
      Exception _cv_3 = null;
      Exception _cv_4 = null;
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
              v2 = null;
              v3 = com.amazon.device.iap.model.ProductDataResponse$RequestStatus.FAILED;
              _ehCatchPc = 13;
              v4 = new org.json.JSONObject(p0.getStringExtra("itemDataOutput"));
              v5 = v4.optString("requestId");
              v6 = RequestId.fromString(v5);
              v7 = v6;
              _ehCatchPc = 10;
              v8 = com.amazon.device.iap.model.ProductDataResponse$RequestStatus.valueOf(v4.optString("status"));
              v9 = v8;
              v10 = com.amazon.device.iap.model.ProductDataResponse$RequestStatus.FAILED;
              if ( !(v8 == v10) ) { _pc = 2; continue _sm; }
              v23 = null;
              _pc = 1;
              continue _sm;
            case 1:
              v11 = v23;
              v24 = v9;
              v25 = v7;
              return new com.amazon.device.iap.internal.model.ProductDataResponseBuilder().setRequestId(v25).setRequestStatus(v24).setProductData(v2).setUnavailableSkus(v11).build();
            case 2:
              v11 = new java.util.LinkedHashSet();
              _ehCatchPc = 7;
              v12 = new java.util.HashMap();
              _ehCatchPc = 3;
              v13 = v4.optJSONArray("unavailableSkus");
              if ( v13 != null )
              {
              for ( i = 0; i < v13.length(); ++i )
              v11.add(v13.getString(i));
              }
              v15 = v4.optJSONObject("items");
              v16 = v15;
              if ( v15 != null )
              {
              v17 = v15.keys();
              while ( v17.hasNext() )
              {
              v18 = (String)v17.next();
              v12.put(v18, this.a(v18, v16.optJSONObject(v18)));
              }
              }
              v2 = v12;
              v23 = v11;
              _pc = 1;
              continue _sm;
            case 3:
              _ehCatchPc = 7;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 5; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              v20 = _cv_1;
              v2 = v12;
              v24 = v8;
              v25 = v7;
              v21 = v20;
              _pc = 4;
              continue _sm;
            case 4:
              Log.e(a, "Error parsing item data output", v21);
              return new com.amazon.device.iap.internal.model.ProductDataResponseBuilder().setRequestId(v25).setRequestStatus(v24).setProductData(v2).setUnavailableSkus(v11).build();
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              _ehCatchPc = 10;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 8; continue _sm; }
              _cv_2 = (Exception)_ehCaught;
              v30 = _cv_2;
              v24 = v8;
              v25 = v7;
              v21 = v30;
              _pc = 4;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 10:
              _ehCatchPc = 13;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 11; continue _sm; }
              _cv_3 = (Exception)_ehCaught;
              v11 = null;
              v28 = v3;
              v25 = v6;
              v21 = _cv_3;
              v24 = v28;
              _pc = 4;
              continue _sm;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 13:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 14; continue _sm; }
              _cv_4 = (Exception)_ehCaught;
              v21 = _cv_4;
              v11 = null;
              v24 = v3;
              v25 = null;
              _pc = 4;
              continue _sm;
            case 14:
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

    private void e(android.content.Intent p0)
    {
      com.amazon.device.iap.model.UserDataResponse v2;
      v2 = this.f(p0);
      if ( v2.getRequestId() != null && v2.getRequestId().toString().startsWith("GET_USER_ID_FOR_PURCHASE_UPDATES_PREFIX") )
      {
        if ( v2.getUserData() != null && !com.amazon.device.iap.internal.util.d.a(v2.getUserData().getUserId()) )
        {
          Log.i(a, "sendGetPurchaseUpdates with user id" + v2.getUserData().getUserId());
          this.a(v2.getRequestId().toString(), v2.getUserData().getUserId());
        }
        else
        {
          Log.e(a, "No Userid found in userDataResponse" + v2);
          this.a(new com.amazon.device.iap.internal.model.PurchaseUpdatesResponseBuilder().setRequestId(v2.getRequestId()).setRequestStatus(com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus.FAILED).setUserData(v2.getUserData()).setReceipts(new java.util.ArrayList()).setHasMore(false).build());
        }
      }
      else
      {
        this.a(v2);
      }
    }

    private com.amazon.device.iap.model.UserDataResponse f(android.content.Intent p0)
    {
      com.amazon.device.iap.model.UserData v2 = null;
      com.amazon.device.iap.model.UserDataResponse$RequestStatus v3 = null;
      org.json.JSONObject v4 = null;
      String v5 = null;
      com.amazon.device.iap.model.RequestId v6 = null;
      com.amazon.device.iap.model.UserDataResponse$RequestStatus v7 = null; // RETVAL
      com.amazon.device.iap.model.UserDataResponse$RequestStatus v8 = null;
      com.amazon.device.iap.model.UserDataResponse$RequestStatus v9 = null;
      com.amazon.device.iap.model.UserData v10 = null;
      com.amazon.device.iap.model.UserDataResponse$RequestStatus v11 = null;
      com.amazon.device.iap.model.UserDataResponse$RequestStatus v14 = null;
      com.amazon.device.iap.model.UserDataResponse$RequestStatus v15 = null;
      Throwable v17 = null;
      Throwable v18 = null;
      Exception _cv_1 = null;
      Exception _cv_2 = null;
      Exception _cv_3 = null;
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
              v2 = null;
              v3 = com.amazon.device.iap.model.UserDataResponse$RequestStatus.FAILED;
              _ehCatchPc = 8;
              v4 = new org.json.JSONObject(p0.getStringExtra("userOutput"));
              v5 = v4.optString("requestId");
              v6 = RequestId.fromString(v5);
              _ehCatchPc = 5;
              v7 = com.amazon.device.iap.model.UserDataResponse$RequestStatus.valueOf(v4.optString("status"));
              v8 = v7;
              _ehCatchPc = 1;
              if ( v7 == com.amazon.device.iap.model.UserDataResponse$RequestStatus.SUCCESSFUL )
              v2 = new com.amazon.device.iap.internal.model.UserDataBuilder().setUserId(v4.optString("userId")).setMarketplace(v4.optString("marketplace")).build();
              v9 = v8;
              v10 = v2;
              v11 = v9;
              return new com.amazon.device.iap.internal.model.UserDataResponseBuilder().setRequestId(v6).setRequestStatus(v11).setUserData(v10).build();
            case 1:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              v18 = _cv_1;
              _pc = 2;
              continue _sm;
            case 2:
              Log.e(a, "Error parsing userid output", v18);
              v15 = v8;
              v10 = null;
              v11 = v15;
              return new com.amazon.device.iap.internal.model.UserDataResponseBuilder().setRequestId(v6).setRequestStatus(v11).setUserData(v10).build();
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _ehCatchPc = 8;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 6; continue _sm; }
              _cv_2 = (Exception)_ehCaught;
              v17 = _cv_2;
              v8 = v3;
              v18 = v17;
              _pc = 2;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              _cv_3 = (Exception)_ehCaught;
              v6 = null;
              v14 = v3;
              v18 = _cv_3;
              v8 = v14;
              _pc = 2;
              continue _sm;
            case 9:
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

    private void g(android.content.Intent p0)
    {
      this.a(this.h(p0));
    }

    private com.amazon.device.iap.model.PurchaseResponse h(android.content.Intent p0)
    {
      com.amazon.device.iap.model.Receipt v2 = null;
      com.amazon.device.iap.model.PurchaseResponse$RequestStatus v3 = null;
      org.json.JSONObject v4 = null;
      String v5 = null;
      com.amazon.device.iap.model.RequestId v6 = null;
      com.amazon.device.iap.internal.model.UserDataBuilder v7 = null;
      com.amazon.device.iap.model.UserData v8 = null;
      com.amazon.device.iap.model.PurchaseResponse$RequestStatus v9 = null;
      org.json.JSONObject v10 = null; // RETVAL
      Throwable v13 = null;
      com.amazon.device.iap.model.PurchaseResponse$RequestStatus v15 = null;
      Throwable v17 = null;
      Throwable v18 = null;
      Exception _cv_1 = null;
      Exception _cv_2 = null;
      Exception _cv_3 = null;
      Exception _cv_4 = null;
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
              v2 = null;
              v3 = com.amazon.device.iap.model.PurchaseResponse$RequestStatus.FAILED;
              _ehCatchPc = 11;
              v4 = new org.json.JSONObject(p0.getStringExtra("purchaseOutput"));
              v5 = v4.optString("requestId");
              v6 = RequestId.fromString(v5);
              _ehCatchPc = 8;
              v7 = new com.amazon.device.iap.internal.model.UserDataBuilder().setUserId(v4.optString("userId")).setMarketplace(v4.optString("marketplace"));
              v8 = v7.build();
              _ehCatchPc = 5;
              v9 = com.amazon.device.iap.model.PurchaseResponse$RequestStatus.safeValueOf(v4.optString("purchaseStatus"));
              _ehCatchPc = 1;
              v10 = v4.optJSONObject("receipt");
              if ( v10 != null )
              v2 = this.a(v10);
              return new com.amazon.device.iap.internal.model.PurchaseResponseBuilder().setRequestId(v6).setRequestStatus(v9).setUserData(v8).setReceipt(v2).build();
            case 1:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              v18 = _cv_1;
              _pc = 2;
              continue _sm;
            case 2:
              Log.e(a, "Error parsing purchase output", v18);
              return new com.amazon.device.iap.internal.model.PurchaseResponseBuilder().setRequestId(v6).setRequestStatus(v9).setUserData(v8).setReceipt(v2).build();
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _ehCatchPc = 8;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 6; continue _sm; }
              _cv_2 = (Exception)_ehCaught;
              v17 = _cv_2;
              v9 = v3;
              v18 = v17;
              _pc = 2;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              _ehCatchPc = 11;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              _cv_3 = (Exception)_ehCaught;
              v8 = null;
              v15 = v3;
              v18 = _cv_3;
              v9 = v15;
              _pc = 2;
              continue _sm;
            case 9:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 11:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 12; continue _sm; }
              _cv_4 = (Exception)_ehCaught;
              v8 = null;
              v6 = null;
              v13 = _cv_4;
              v9 = v3;
              v18 = v13;
              _pc = 2;
              continue _sm;
            case 12:
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

    public final void a(android.content.Context p0, android.content.Intent p1)
    {
      String String;
      com.amazon.device.iap.internal.util.e.a(a, "handleResponse");
      try
      {
        String = p1.getExtras().getString("responseType");
        if ( String.equalsIgnoreCase("com.amazon.testclient.iap.purchase") )
        {
          this.g(p1);
        }
        else if ( String.equalsIgnoreCase("com.amazon.testclient.iap.appUserId") )
        {
          this.e(p1);
        }
        else if ( String.equalsIgnoreCase("com.amazon.testclient.iap.itemData") )
        {
          this.c(p1);
        }
        else if ( String.equalsIgnoreCase("com.amazon.testclient.iap.purchaseUpdates") )
        {
          this.a(p1);
        }
      }
      catch ( Exception v4 )
      {
        Log.e(a, "Error handling response.", v4);
      }
    }

    public final void a(com.amazon.device.iap.model.RequestId p0)
    {
      com.amazon.device.iap.internal.util.e.a(a, "sendGetUserDataRequest");
      this.a(p0.toString());
    }

    public final void a(com.amazon.device.iap.model.RequestId p0, String p1)
    {
      android.content.Context v3;
      android.os.Bundle v4;
      org.json.JSONObject v5;
      android.content.Intent v6;
      com.amazon.device.iap.internal.util.e.a(a, "sendPurchaseRequest");
      try
      {
        v3 = com.amazon.device.iap.internal.d.d().b();
        v4 = new android.os.Bundle();
        v5 = new org.json.JSONObject();
        v5.put("sku", p1);
        v5.put("requestId", p0.toString());
        v5.put("packageName", v3.getPackageName());
        v5.put("sdkVersion", "2.0.0");
        v4.putString("purchaseInput", v5.toString());
        v6 = new android.content.Intent("com.amazon.testclient.iap.purchase");
        v6.addFlags(0x10000000);
        v6.putExtras(v4);
        v3.startService(v6);
      }
      catch ( org.json.JSONException e )
      {
        com.amazon.device.iap.internal.util.e.b(a, "Error in sendPurchaseRequest.");
      }
    }

    public final void a(
            com.amazon.device.iap.model.RequestId p0,
            String p1,
            com.amazon.device.iap.model.FulfillmentResult p2)
    {
      android.content.Context v4;
      android.os.Bundle v5;
      org.json.JSONObject v6;
      android.content.Intent v7;
      com.amazon.device.iap.internal.util.e.a(a, "sendNotifyPurchaseFulfilled");
      try
      {
        v4 = com.amazon.device.iap.internal.d.d().b();
        v5 = new android.os.Bundle();
        v6 = new org.json.JSONObject();
        v6.put("requestId", p0.toString());
        v6.put("packageName", v4.getPackageName());
        v6.put("receiptId", p1);
        v6.put("fulfillmentResult", p2);
        v6.put("sdkVersion", "2.0.0");
        v5.putString("purchaseFulfilledInput", v6.toString());
        v7 = new android.content.Intent("com.amazon.testclient.iap.purchaseFulfilled");
        v7.addFlags(0x10000000);
        v7.putExtras(v5);
        v4.startService(v7);
      }
      catch ( org.json.JSONException e )
      {
        com.amazon.device.iap.internal.util.e.b(a, "Error in sendNotifyPurchaseFulfilled.");
      }
    }

    public final void a(com.amazon.device.iap.model.RequestId p0, java.util.Set<String> p1)
    {
      android.content.Context v3;
      android.os.Bundle v4;
      org.json.JSONObject v5;
      android.content.Intent v6;
      com.amazon.device.iap.internal.util.e.a(a, "sendItemDataRequest");
      try
      {
        v3 = com.amazon.device.iap.internal.d.d().b();
        v4 = new android.os.Bundle();
        v5 = new org.json.JSONObject();
        v5.put("requestId", p0.toString());
        v5.put("packageName", v3.getPackageName());
        v5.put("skus", new org.json.JSONArray(p1));
        v5.put("sdkVersion", "2.0.0");
        v4.putString("itemDataInput", v5.toString());
        v6 = new android.content.Intent("com.amazon.testclient.iap.itemData");
        v6.addFlags(0x10000000);
        v6.putExtras(v4);
        v3.startService(v6);
      }
      catch ( org.json.JSONException e )
      {
        com.amazon.device.iap.internal.util.e.b(a, "Error in sendItemDataRequest.");
      }
    }

    public final void a(com.amazon.device.iap.model.RequestId p0, boolean p1)
    {
      String v3;
      v3 = "GET_USER_ID_FOR_PURCHASE_UPDATES_PREFIX:"
         + com.gameloft.android.DecompRT.b2i(p1)
         + ":"
         + new com.amazon.device.iap.model.RequestId().toString();
      com.amazon.device.iap.internal.util.e.a(a, "sendPurchaseUpdatesRequest/sendGetUserData first:" + v3);
      this.a(v3);
    }

    protected final void a(Object p0)
    {
      android.content.Context v2;
      com.amazon.device.iap.PurchasingListener v3; // RETVAL
    
      com.amazon.device.iap.internal.util.d.a(p0, "response");
      v2 = com.amazon.device.iap.internal.d.d().b();
      v3 = com.amazon.device.iap.internal.d.d().a();
      if ( v2 != null && v3 != null )
        new android.os.Handler(v2.getMainLooper()).post((Runnable)new com.amazon.device.iap.internal.a.c$1(this, p0, v3));
      else
        com.amazon.device.iap.internal.util.e.a(a, "PurchasingListener is not set. Dropping response: " + p0);
    }

}
