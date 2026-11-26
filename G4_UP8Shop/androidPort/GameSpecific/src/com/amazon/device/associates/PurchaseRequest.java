// Decompiled from classes.dex (SourceFile: PurchaseRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class PurchaseRequest extends com.amazon.device.associates.ShoppingServiceRequest {
    // Fields
    private final java.lang.String a;
    private boolean b;
    private android.view.View c;
    private com.amazon.device.associates.PurchaseExperience d;

    // Methods
    public PurchaseRequest(String p0, android.view.View p1)
    {
      super();
      an.a(p0, "productId");
      an.a(p1, "originView");
      this.a = p0;
      this.c = p1;
      this.b = false;
    }

    public PurchaseRequest(String p0, android.view.View p1, boolean p2)
    {
      super();
      an.a(p0, "productId");
      an.a(p1, "originView");
      this.a = p0;
      this.c = p1;
      this.b = p2;
    }

    org.json.JSONObject a()
    {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("productId", this.a);
        v1.put("receiveReceipt", this.b);
        v1.put("purchaseExperience", this.d);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public android.view.View getOriginView()
    {
      return this.c;
    }

    public String getProductId()
    {
      return this.a;
    }

    public com.amazon.device.associates.PurchaseExperience getPurchaseExperience()
    {
      return this.d;
    }

    public boolean getReceiveReceipt()
    {
      return this.b;
    }

    public void setPurchaseExperience(com.amazon.device.associates.PurchaseExperience p0)
    {
      this.d = p0;
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
