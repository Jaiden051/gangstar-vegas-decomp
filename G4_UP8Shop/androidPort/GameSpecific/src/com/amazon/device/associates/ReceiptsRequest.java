// Decompiled from classes.dex (SourceFile: ReceiptsRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class ReceiptsRequest extends com.amazon.device.associates.ShoppingServiceRequest {
    // Fields
    private final com.amazon.device.associates.Offset a;

    // Methods
    public ReceiptsRequest(com.amazon.device.associates.Offset p0)
    {
      super();
      this.a = p0;
    }

    org.json.JSONObject a()
    {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("offset", this.a);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public com.amazon.device.associates.Offset getOffset()
    {
      return this.a;
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
