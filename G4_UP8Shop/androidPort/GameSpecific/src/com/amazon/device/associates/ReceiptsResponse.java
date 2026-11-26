// Decompiled from classes.dex (SourceFile: ReceiptsResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import java.util.Collections;
public class ReceiptsResponse extends com.amazon.device.associates.ShoppingServiceResponse {
    // Fields
    private final com.amazon.device.associates.ReceiptsResponse$Status a;
    private final java.util.List b;
    private final com.amazon.device.associates.Offset c;
    private final boolean d;

    // Methods
    ReceiptsResponse(com.amazon.device.associates.RequestId p0, com.amazon.device.associates.ReceiptsResponse$Status p1)
    {
      this(p0, p1, new java.util.ArrayList(), null, false);
    }

    ReceiptsResponse(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.ReceiptsResponse$Status p1,
            java.util.List<com.amazon.device.associates.Receipt> p2,
            com.amazon.device.associates.Offset p3,
            boolean p4)
    {
      super(p0);
      an.a(p2, "receipts");
      an.a(p1, "status");
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
    }

    protected boolean a()
    {
      return this.a == ReceiptsResponse$Status.NOT_SUPPORTED;
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
        v2 = null;
        if ( this.b != null )
        {
          v3 = new org.json.JSONArray();
          for ( i = this.b.iterator(); i.hasNext(); v3.put(((com.amazon.device.associates.Receipt)i.next()).a()) )
            ;
          v2 = v3;
        }
        v1.put("receipts", v2);
        v1.put("nextOffset", this.c);
        v1.put("hasMore", this.d);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public com.amazon.device.associates.Offset getNextOffset()
    {
      return this.c;
    }

    public java.util.List<com.amazon.device.associates.Receipt> getReceipts()
    {
      return Collections.unmodifiableList(this.b);
    }

    public com.amazon.device.associates.ReceiptsResponse$Status getStatus()
    {
      return this.a;
    }

    public boolean hasMore()
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
