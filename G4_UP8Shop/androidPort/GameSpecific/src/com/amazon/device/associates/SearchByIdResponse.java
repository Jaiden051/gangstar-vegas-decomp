// Decompiled from classes.dex (SourceFile: SearchByIdResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import java.util.Collections;
public class SearchByIdResponse extends com.amazon.device.associates.ShoppingServiceResponse {
    // Fields
    private final com.amazon.device.associates.SearchByIdResponse$Status a;
    private final java.util.List b;
    private final java.util.Set c;

    // Methods
    SearchByIdResponse(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.SearchByIdResponse$Status p1)
    {
      this(p0, p1, new java.util.ArrayList(), new java.util.HashSet());
    }

    SearchByIdResponse(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.SearchByIdResponse$Status p1,
            java.util.List<com.amazon.device.associates.Product> p2,
            java.util.Set<String> p3)
    {
      super(p0);
      an.a(p1, "status");
      this.a = p1;
      this.b = p2;
      this.c = p3;
    }

    protected boolean a()
    {
      return this.a == SearchByIdResponse$Status.NOT_SUPPORTED;
    }

    org.json.JSONObject b()
    {
      org.json.JSONObject v1;
      Object v2;
      org.json.JSONArray v3;
      java.util.Iterator i;
      org.json.JSONArray v6;
      java.util.Iterator j;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("requestId", this.getRequestId());
        v1.put("status", this.a);
        v2 = null;
        if ( this.b != null )
        {
          v3 = new org.json.JSONArray();
          for ( i = this.b.iterator(); i.hasNext(); v3.put(((com.amazon.device.associates.Product)i.next()).a()) )
            ;
          v2 = v3;
        }
        v1.put("products", v2);
        v6 = new org.json.JSONArray();
        for ( j = this.c.iterator(); j.hasNext(); v6.put((String)j.next()) )
          ;
        v1.put("unavailableProductIds", v6);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public java.util.List<com.amazon.device.associates.Product> getProducts()
    {
      return Collections.unmodifiableList(this.b);
    }

    public com.amazon.device.associates.SearchByIdResponse$Status getStatus()
    {
      return this.a;
    }

    public java.util.Set<String> getUnavailableProductIds()
    {
      return Collections.unmodifiableSet(this.c);
    }

    public String toString()
    {
      String v1;
      v1 = null;
      try
      {
        return this.b().toString(4);
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

}
