// Decompiled from classes.dex (SourceFile: SearchResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import java.util.Collections;
public class SearchResponse extends com.amazon.device.associates.ShoppingServiceResponse {
    // Fields
    private final com.amazon.device.associates.SearchResponse$Status a;
    private final java.util.List b;
    private final int c;
    private final int d;

    // Methods
    SearchResponse(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.SearchResponse$Status p1)
    {
      this(p0, p1, new java.util.ArrayList(), 0, 0);
    }

    SearchResponse(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.SearchResponse$Status p1,
            java.util.List<com.amazon.device.associates.Product> p2,
            int p3,
            int p4)
    {
      super(p0);
      an.a(p1, "status");
      an.a(p2, "products");
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
    }

    protected boolean a()
    {
      return this.a == SearchResponse$Status.NOT_SUPPORTED;
    }

    org.json.JSONObject b()
    {
      org.json.JSONObject v1;
      Object v2;
      org.json.JSONArray v3;
      java.util.Iterator i;
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
        v1.put("page", this.c);
        v1.put("totalPages", this.d);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public int getPage()
    {
      return this.c;
    }

    public java.util.List<com.amazon.device.associates.Product> getProducts()
    {
      return Collections.unmodifiableList(this.b);
    }

    public com.amazon.device.associates.SearchResponse$Status getStatus()
    {
      return this.a;
    }

    public int getTotalPages()
    {
      return this.d;
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
