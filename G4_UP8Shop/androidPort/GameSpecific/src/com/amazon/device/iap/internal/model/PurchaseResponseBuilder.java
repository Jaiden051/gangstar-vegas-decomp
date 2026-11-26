// Decompiled from classes.dex (SourceFile: PurchaseResponseBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.model;

public class PurchaseResponseBuilder {
    // Fields
    private com.amazon.device.iap.model.Receipt receipt;
    private com.amazon.device.iap.model.RequestId requestId;
    private com.amazon.device.iap.model.PurchaseResponse$RequestStatus requestStatus;
    private com.amazon.device.iap.model.UserData userData;

    // Methods
    public PurchaseResponseBuilder()
    {
      super();
    }

    public com.amazon.device.iap.model.PurchaseResponse build()
    {
      return new com.amazon.device.iap.model.PurchaseResponse(this);
    }

    public com.amazon.device.iap.model.Receipt getReceipt()
    {
      return this.receipt;
    }

    public com.amazon.device.iap.model.RequestId getRequestId()
    {
      return this.requestId;
    }

    public com.amazon.device.iap.model.PurchaseResponse$RequestStatus getRequestStatus()
    {
      return this.requestStatus;
    }

    public com.amazon.device.iap.model.UserData getUserData()
    {
      return this.userData;
    }

    public com.amazon.device.iap.internal.model.PurchaseResponseBuilder setReceipt(
            com.amazon.device.iap.model.Receipt p0)
    {
      this.receipt = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.PurchaseResponseBuilder setRequestId(
            com.amazon.device.iap.model.RequestId p0)
    {
      this.requestId = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.PurchaseResponseBuilder setRequestStatus(
            com.amazon.device.iap.model.PurchaseResponse$RequestStatus p0)
    {
      this.requestStatus = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.PurchaseResponseBuilder setUserData(
            com.amazon.device.iap.model.UserData p0)
    {
      this.userData = p0;
      return this;
    }

}
