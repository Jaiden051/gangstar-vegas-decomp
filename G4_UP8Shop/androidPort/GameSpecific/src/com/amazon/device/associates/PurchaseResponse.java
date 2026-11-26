// Decompiled from classes.dex (SourceFile: PurchaseResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import java.util.Collections;
public class PurchaseResponse extends com.amazon.device.associates.ShoppingServiceResponse {
    // Fields
    private final com.amazon.device.associates.PurchaseResponse$Status a;
    private final java.util.List b;

    // Methods
    PurchaseResponse(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.PurchaseResponse$Status p1)
    {
      this(p0, p1, new java.util.ArrayList());
    }

    PurchaseResponse(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.PurchaseResponse$Status p1,
            java.util.List<com.amazon.device.associates.Receipt> p2)
    {
      super(p0);
      an.a(p1, "status");
      this.a = p1;
      this.b = p2;
    }

    protected boolean a()
    {
      return this.a == PurchaseResponse$Status.NOT_SUPPORTED;
    }

    org.json.JSONObject b()
    {
      org.json.JSONObject v1;
      org.json.JSONArray v2;
      java.util.Iterator i;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("requestId", this.getRequestId());
        v1.put("status", this.a.toString());
        v2 = new org.json.JSONArray();
        for ( i = this.b.iterator(); i.hasNext(); v2.put(((com.amazon.device.associates.Receipt)i.next()).a()) )
          ;
        v1.put("receipts", v2);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public java.util.List<com.amazon.device.associates.Receipt> getReceipts()
    {
      return Collections.unmodifiableList(this.b);
    }

    public com.amazon.device.associates.PurchaseResponse$Status getStatus()
    {
      return this.a;
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
