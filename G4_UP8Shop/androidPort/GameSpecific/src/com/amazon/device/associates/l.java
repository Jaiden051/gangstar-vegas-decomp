// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Log;
final class l extends com.amazon.device.associates.ao {
    // Fields
    private static final java.lang.String b;

    // Methods
    static
    {
      b = com.amazon.device.associates.l.class.getSimpleName();
    }

    l(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.SearchRequest p1,
            com.amazon.device.associates.ay p2)
    {
      super("physical_search", "1.0", p0, p2);
      this.a("category", p1.getCategory());
      this.a("searchTerm", p1.getSearchTerm());
      this.a("sortType", p1.getSortType().toString());
      this.a("filters", a(p1.getFilters()));
      this.a("page", Integer.toString(p1.getPage()));
      this.a(false);
    }

    private static java.util.Map<String, String> a(java.util.Map<com.amazon.device.associates.FilterType, String> p0)
    {
      java.util.Map v3;
      java.util.Iterator v4;
      java.util.Map.Entry v5;
      com.amazon.device.associates.FilterType v6;
      if ( p0 == null )
        return null;
      v3 = new java.util.HashMap(p0.size());
      v4 = p0.entrySet().iterator();
      while ( v4.hasNext() )
      {
        v5 = (java.util.Map.Entry)v4.next();
        v6 = (com.amazon.device.associates.FilterType)v5.getKey();
        if ( v6 != null )
          v3.put(v6.toString(), v5.getValue());
      }
      return v3;
    }

    protected final void a()
    {
      this.a.a(ay$a.c, new com.amazon.device.associates.SearchResponse(this.b(), SearchResponse$Status.NOT_SUPPORTED));
    }

    protected final void onSuccess(com.amazon.venezia.command.SuccessResult p0)
    {
      com.amazon.device.associates.RequestId v2;
      com.amazon.device.associates.SearchResponse v3;
      java.util.Map Data;
      com.amazon.device.associates.SearchResponse$Status v5;
      java.util.List v6;
      com.amazon.device.associates.SearchResponse v7 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            x.b(b, "onSuccess");
            v2 = this.b();
            v3 = new com.amazon.device.associates.SearchResponse(v2, SearchResponse$Status.FAILED);
            try
            {
            Data = p0.getData();
            x.b(b, "data: " + Data);
            if ( Data.containsKey("errorMessage") )
            Log.e(b, (String)Data.get("errorMessage"));
            v5 = SearchResponse$Status.valueOf((String)Data.get("requestStatus"));
            if ( v5 == SearchResponse$Status.SUCCESSFUL )
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
            v7 = new com.amazon.device.associates.SearchResponse(this.b(), v5, v6, Integer.parseInt((String)Data.get("page")), Integer.parseInt((String)Data.get("totalPages")));
            { _pc = 1; continue _sm; }
            }
            v7 = new com.amazon.device.associates.SearchResponse(this.b(), v5);
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
            this.a.a(ay$a.c, v7);
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

}
