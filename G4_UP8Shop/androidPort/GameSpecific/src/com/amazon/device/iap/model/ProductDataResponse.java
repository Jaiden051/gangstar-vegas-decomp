// Decompiled from classes.dex (SourceFile: ProductDataResponse.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

public class ProductDataResponse {
    // Fields
    private static java.lang.String PRODUCT_DATA;
    private static java.lang.String REQUEST_ID;
    private static java.lang.String REQUEST_STATUS;
    private static java.lang.String TO_STRING_FORMAT;
    private static java.lang.String UNAVAILABLE_SKUS;
    private final java.util.Map productData;
    private final com.amazon.device.iap.model.RequestId requestId;
    private final com.amazon.device.iap.model.ProductDataResponse$RequestStatus requestStatus;
    private final java.util.Set unavailableSkus;

    // Methods
    public ProductDataResponse(com.amazon.device.iap.internal.model.ProductDataResponseBuilder p0)
    {
      super();
      com.amazon.device.iap.internal.util.d.a(p0.getRequestId(), "requestId");
      com.amazon.device.iap.internal.util.d.a(p0.getRequestStatus(), "requestStatus");
      if ( p0.getUnavailableSkus() == null )
        p0.setUnavailableSkus(new java.util.HashSet());
      if ( ProductDataResponse$RequestStatus.SUCCESSFUL == p0.getRequestStatus() )
        com.amazon.device.iap.internal.util.d.a(p0.getProductData(), "productData");
      this.requestId = p0.getRequestId();
      this.requestStatus = p0.getRequestStatus();
      this.unavailableSkus = p0.getUnavailableSkus();
      this.productData = p0.getProductData();
    }

    public java.util.Map<String, com.amazon.device.iap.model.Product> getProductData()
    {
      return this.productData;
    }

    public com.amazon.device.iap.model.RequestId getRequestId()
    {
      return this.requestId;
    }

    public com.amazon.device.iap.model.ProductDataResponse$RequestStatus getRequestStatus()
    {
      return this.requestStatus;
    }

    public java.util.Set<String> getUnavailableSkus()
    {
      return this.unavailableSkus;
    }

    public org.json.JSONObject toJSON()
 throws org.json.JSONException {
      org.json.JSONObject v1;
      org.json.JSONObject v2;
      java.util.Iterator v3;
      String v4;
      v1 = new org.json.JSONObject();
      v1.put("requestId", this.requestId);
      v1.put("UNAVAILABLE_SKUS", this.unavailableSkus);
      v1.put("requestStatus", this.requestStatus);
      v2 = new org.json.JSONObject();
      if ( this.productData != null )
      {
        v3 = this.productData.keySet().iterator();
        while ( v3.hasNext() )
        {
          v4 = (String)v3.next();
          v2.put(v4, ((com.amazon.device.iap.model.Product)this.productData.get(v4)).toJSON());
        }
      }
      v1.put("productData", v2);
      return v1;
    }

    public String toString()
    {
      Object[] v1;
      String v2;
      String v3;
      String v4;
      v1 = new Object[5];
      v1[0] = super.toString();
      v1[1] = this.requestId;
      if ( this.requestStatus != null )
        v2 = this.requestStatus.toString();
      else
        v2 = "null";
      v1[2] = v2;
      if ( this.unavailableSkus != null )
        v3 = this.unavailableSkus.toString();
      else
        v3 = "null";
      v1[3] = v3;
      if ( this.productData != null )
        v4 = this.productData.toString();
      else
        v4 = "null";
      v1[4] = v4;
      return String.format("(%s, requestId: \"%s\", unavailableSkus: %s, requestStatus: \"%s\", productData: %s)", v1);
    }

}
