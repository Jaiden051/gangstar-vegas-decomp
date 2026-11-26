// Decompiled from classes.dex (SourceFile: bs.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Log;
import org.json.JSONObject;
final class bs extends com.amazon.device.associates.ao {
    // Fields
    private static final java.lang.String b;

    // Methods
    static
    {
      b = com.amazon.device.associates.bs.class.getSimpleName();
    }

    bs(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ay p1)
    {
      super("physical_get_purchaseResult", "1.0", p0, p1);
      this.a(false);
    }

    protected final void a()
    {
      this.a.a(ay$a.e, new com.amazon.device.associates.PurchaseResponse(this.b(), PurchaseResponse$Status.NOT_SUPPORTED));
    }

    protected final void onSuccess(com.amazon.venezia.command.SuccessResult p0)
    {
      com.amazon.device.associates.RequestId v2 = null;
      com.amazon.device.associates.PurchaseResponse v3 = null;
      java.util.Map Data = null;
      com.amazon.device.associates.PurchaseResponse$Status v5 = null;
      String v6 = null;
      String v7 = null;
      java.util.List v8 = null;
      org.json.JSONArray v9 = null;
      int v10 = 0;
      org.json.JSONObject JSONObject = null; // RETVAL
      String v12 = null;
      com.amazon.device.associates.PurchaseResponse v14 = null;
      Exception _cv_1 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      org.json.JSONObject v12_obj = null;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              x.b(b, "onSuccess");
              v2 = this.b();
              v3 = new com.amazon.device.associates.PurchaseResponse(v2, PurchaseResponse$Status.FAILED);
              _ehCatchPc = 9;
              Data = p0.getData();
              x.b(b, "data: " + Data);
              if ( Data.containsKey("errorMessage") )
              Log.e(b, (String)Data.get("errorMessage"));
              v5 = PurchaseResponse$Status.valueOf((String)Data.get("requestStatus"));
              if ( !(v5 == PurchaseResponse$Status.SUCCESSFUL) ) { _pc = 7; continue _sm; }
              v6 = (String)Data.get("userId");
              v7 = (String)Data.get("deviceId");
              v8 = new java.util.ArrayList();
              if ( !(Data.containsKey("receipts") && Data.get("receipts") != null) ) { _pc = 6; continue _sm; }
              v9 = new org.json.JSONArray((String)Data.get("receipts"));
              v10 = 0;
              _pc = 1;
              continue _sm;
            case 1:
              if ( !(v10 < v9.length()) ) { _pc = 6; continue _sm; }
              JSONObject = v9.getJSONObject(v10);
              v12_obj = JSONObject;
              _ehCatchPc = 2;
              if ( this.a(v6, v7, JSONObject) )
              v8.add(aw.b(v12_obj));
              else
              x.a(b, "receipt verification failed: " + v12);
              _pc = 3;
              continue _sm;
            case 2:
              _ehCatchPc = 9;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 4; continue _sm; }
              v12 = "error in parsing a receipt: " + v12_obj;
              x.a(b, v12);
              _pc = 3;
              continue _sm;
            case 3:
              ++v10;
              _pc = 5;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _pc = 1;
              continue _sm;
            case 6:
              v14 = new com.amazon.device.associates.PurchaseResponse(this.b(), v5, v8);
              _pc = 8;
              continue _sm;
            case 7:
              {
              v14 = new com.amazon.device.associates.PurchaseResponse(this.b(), v5);
              }
              _pc = 8;
              continue _sm;
            case 8:
              _ehCatchPc = -1;
              _pc = 11;
              continue _sm;
            case 9:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 10; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              x.a(b, "error in onSuccess: " + _cv_1.getMessage());
              v14 = v3;
              _pc = 11;
              continue _sm;
            case 10:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 11:
              this.a.a(ay$a.e, v14);
              return;
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
