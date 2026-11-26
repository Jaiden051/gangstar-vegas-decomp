// Decompiled from classes.dex (SourceFile: ProductDataResponseBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.model;

public class ProductDataResponseBuilder {
    // Fields
    private java.util.Map productData;
    private com.amazon.device.iap.model.RequestId requestId;
    private com.amazon.device.iap.model.ProductDataResponse$RequestStatus requestStatus;
    private java.util.Set unavailableSkus;

    // Methods
    public ProductDataResponseBuilder()
    {
      super();
    }

    public com.amazon.device.iap.model.ProductDataResponse build()
    {
      return new com.amazon.device.iap.model.ProductDataResponse(this);
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

    public com.amazon.device.iap.internal.model.ProductDataResponseBuilder setProductData(
            java.util.Map<String, com.amazon.device.iap.model.Product> p0)
    {
      this.productData = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.ProductDataResponseBuilder setRequestId(
            com.amazon.device.iap.model.RequestId p0)
    {
      this.requestId = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.ProductDataResponseBuilder setRequestStatus(
            com.amazon.device.iap.model.ProductDataResponse$RequestStatus p0)
    {
      this.requestStatus = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.ProductDataResponseBuilder setUnavailableSkus(
            java.util.Set<String> p0)
    {
      this.unavailableSkus = p0;
      return this;
    }

}
