// Decompiled from classes.dex (SourceFile: ServiceStatusResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class ServiceStatusResponse extends com.amazon.device.associates.ShoppingServiceResponse {
    // Fields
    private final com.amazon.device.associates.UserData a;
    private final boolean b;
    private final boolean c;
    private java.util.Set d;

    // Methods
    ServiceStatusResponse(
            com.amazon.device.associates.RequestId p0,
            com.amazon.device.associates.UserData p1,
            java.util.Set<com.amazon.device.associates.PurchaseExperience> p2,
            boolean p3,
            boolean p4)
    {
      super(p0);
      this.a = p1;
      this.b = p3;
      this.c = p4;
      this.d = p2;
    }

    protected boolean a()
    {
      return false;
    }

    org.json.JSONObject b()
    {
      org.json.JSONObject v1;
      org.json.JSONObject v2;
      org.json.JSONArray v3;
      java.util.Iterator i;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("requestId", this.getRequestId());
        if ( this.a != null )
          v2 = this.a.a();
        else
          v2 = null;
        v1.put("userData", v2);
        v1.put("canSearch", this.b);
        v1.put("canGetReceipts", this.c);
        v3 = new org.json.JSONArray();
        for ( i = this.d.iterator(); i.hasNext(); v3.put(((com.amazon.device.associates.PurchaseExperience)i.next()).toString()) )
          ;
        v1.put("supportedPurchaseExperiences", v3);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public boolean canGetReceipts()
    {
      return this.c;
    }

    public boolean canSearch()
    {
      return this.b;
    }

    public java.util.Set<com.amazon.device.associates.PurchaseExperience> getSupportedPurchaseExperiences()
    {
      return this.d;
    }

    public com.amazon.device.associates.UserData getUserData()
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
