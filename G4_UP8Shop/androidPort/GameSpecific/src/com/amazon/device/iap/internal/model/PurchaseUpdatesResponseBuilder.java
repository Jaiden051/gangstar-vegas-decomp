// Decompiled from classes.dex (SourceFile: PurchaseUpdatesResponseBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.model;

public class PurchaseUpdatesResponseBuilder {
    // Fields
    private boolean hasMore;
    private java.util.List receipts;
    private com.amazon.device.iap.model.RequestId requestId;
    private com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus requestStatus;
    private com.amazon.device.iap.model.UserData userData;

    // Methods
    public PurchaseUpdatesResponseBuilder()
    {
      super();
    }

    public com.amazon.device.iap.model.PurchaseUpdatesResponse build()
    {
      return new com.amazon.device.iap.model.PurchaseUpdatesResponse(this);
    }

    public java.util.List<com.amazon.device.iap.model.Receipt> getReceipts()
    {
      return this.receipts;
    }

    public com.amazon.device.iap.model.RequestId getRequestId()
    {
      return this.requestId;
    }

    public com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus getRequestStatus()
    {
      return this.requestStatus;
    }

    public com.amazon.device.iap.model.UserData getUserData()
    {
      return this.userData;
    }

    public boolean hasMore()
    {
      return this.hasMore;
    }

    public com.amazon.device.iap.internal.model.PurchaseUpdatesResponseBuilder setHasMore(
            boolean p0)
    {
      this.hasMore = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.PurchaseUpdatesResponseBuilder setReceipts(
            java.util.List<com.amazon.device.iap.model.Receipt> p0)
    {
      this.receipts = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.PurchaseUpdatesResponseBuilder setRequestId(
            com.amazon.device.iap.model.RequestId p0)
    {
      this.requestId = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.PurchaseUpdatesResponseBuilder setRequestStatus(
            com.amazon.device.iap.model.PurchaseUpdatesResponse$RequestStatus p0)
    {
      this.requestStatus = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.PurchaseUpdatesResponseBuilder setUserData(
            com.amazon.device.iap.model.UserData p0)
    {
      this.userData = p0;
      return this;
    }

}
