// Decompiled from classes.dex (SourceFile: SearchByIdRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import java.util.Collections;
public class SearchByIdRequest extends com.amazon.device.associates.ShoppingServiceRequest {
    // Fields
    private final java.util.Set a;

    // Methods
    public SearchByIdRequest()
    {
      super();
      this.a = new java.util.HashSet();
    }

    public SearchByIdRequest(java.util.Set<String> p0)
    {
      super();
      an.a(p0, "productIds");
      this.a = new java.util.HashSet(p0);
    }

    org.json.JSONObject a()
    {
      org.json.JSONObject v1;
      org.json.JSONArray v2;
      java.util.Iterator i;
      v1 = new org.json.JSONObject();
      try
      {
        v2 = new org.json.JSONArray();
        for ( i = this.a.iterator(); i.hasNext(); v2.put((String)i.next()) )
          ;
        v1.put("productIds", v2);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public void addProductId(String p0)
    {
      an.a(p0, "productId");
      this.a.add(p0);
    }

    public java.util.Set<String> getProductIds()
    {
      return Collections.unmodifiableSet(this.a);
    }

    public void removeProductId(String p0)
    {
      an.a(p0, "productId");
      this.a.remove(p0);
    }

    public String toString()
    {
      String v1;
      v1 = null;
      try
      {
        return this.a().toString(4);
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

}
