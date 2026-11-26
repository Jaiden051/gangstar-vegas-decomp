// Decompiled from classes.dex (SourceFile: ReceiptBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.model;

public class ReceiptBuilder {
    // Fields
    private java.util.Date cancelDate;
    private com.amazon.device.iap.model.ProductType productType;
    private java.util.Date purchaseDate;
    private java.lang.String receiptId;
    private java.lang.String sku;

    // Methods
    public ReceiptBuilder()
    {
      super();
    }

    public com.amazon.device.iap.model.Receipt build()
    {
      return new com.amazon.device.iap.model.Receipt(this);
    }

    public java.util.Date getCancelDate()
    {
      return this.cancelDate;
    }

    public com.amazon.device.iap.model.ProductType getProductType()
    {
      return this.productType;
    }

    public java.util.Date getPurchaseDate()
    {
      return this.purchaseDate;
    }

    public String getReceiptId()
    {
      return this.receiptId;
    }

    public String getSku()
    {
      return this.sku;
    }

    public com.amazon.device.iap.internal.model.ReceiptBuilder setCancelDate(java.util.Date p0)
    {
      this.cancelDate = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.ReceiptBuilder setProductType(
            com.amazon.device.iap.model.ProductType p0)
    {
      this.productType = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.ReceiptBuilder setPurchaseDate(java.util.Date p0)
    {
      this.purchaseDate = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.ReceiptBuilder setReceiptId(String p0)
    {
      this.receiptId = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.ReceiptBuilder setSku(String p0)
    {
      this.sku = p0;
      return this;
    }

}
