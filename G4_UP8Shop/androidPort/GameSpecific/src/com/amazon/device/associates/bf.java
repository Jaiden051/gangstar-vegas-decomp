// Decompiled from classes.dex (SourceFile: bf.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Log;
final class bf extends com.amazon.device.associates.ao {
    // Fields
    private static final java.lang.String b;

    // Methods
    static
    {
      b = com.amazon.device.associates.bf.class.getSimpleName();
    }

    bf(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.SearchByIdRequest p1,
            com.amazon.device.associates.ay p2)
    {
      super("physical_searchById", "1.0", p0, p2);
      this.a("productIds", p1.getProductIds());
      this.a(false);
    }

    protected final void a()
    {
      this.a.a(ay$a.d, new com.amazon.device.associates.SearchByIdResponse(this.b(), SearchByIdResponse$Status.NOT_SUPPORTED));
    }

    protected final void onSuccess(com.amazon.venezia.command.SuccessResult p0)
    {
      com.amazon.device.associates.RequestId v2;
      com.amazon.device.associates.SearchByIdResponse v3;
      java.util.Map Data;
      com.amazon.device.associates.SearchByIdResponse$Status v5;
      java.util.List v6;
      com.amazon.device.associates.SearchByIdResponse v7 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            x.b(b, "onSuccess");
            v2 = this.b();
            v3 = new com.amazon.device.associates.SearchByIdResponse(v2, SearchByIdResponse$Status.FAILED);
            try
            {
            Data = p0.getData();
            x.b(b, "data: " + Data);
            if ( Data.containsKey("errorMessage") )
            Log.e(b, (String)Data.get("errorMessage"));
            v5 = SearchByIdResponse$Status.valueOf((String)Data.get("requestStatus"));
            if ( v5 == SearchByIdResponse$Status.SUCCESSFUL )
            {
            Data.get("userId");
            v6 = new java.util.ArrayList();
            try
            {
            aw.c(new org.json.JSONArray((String)Data.get("products")), v6);
            }
            catch ( org.json.JSONException v8 )
            {
            x.a(b, "Error parsing JSON for products: " + v8.getMessage());
            }
            v7 = new com.amazon.device.associates.SearchByIdResponse(this.b(), v5, v6, (java.util.Set)Data.get("unavailableProductIds"));
            { _pc = 1; continue _sm; }
            }
            v7 = new com.amazon.device.associates.SearchByIdResponse(this.b(), v5);
            }
            catch ( Exception v9 )
            {
            x.a(b, "error in onSuccess: " + v9.getMessage());
            v7 = v3;
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            this.a.a(ay$a.d, v7);
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

}
