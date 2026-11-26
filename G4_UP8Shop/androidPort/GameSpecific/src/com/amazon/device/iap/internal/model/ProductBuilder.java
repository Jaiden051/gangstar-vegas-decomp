// Decompiled from classes.dex (SourceFile: ProductBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.model;

public class ProductBuilder {
    // Fields
    private java.lang.String description;
    private com.amazon.device.iap.model.Price price;
    private com.amazon.device.iap.model.ProductType productType;
    private java.lang.String sku;
    private java.lang.String smallIconUrl;
    private java.lang.String title;

    // Methods
    public ProductBuilder()
    {
      super();
    }

    public com.amazon.device.iap.model.Product build()
    {
      return new com.amazon.device.iap.model.Product(this);
    }

    public String getDescription()
    {
      return this.description;
    }

    public com.amazon.device.iap.model.Price getPrice()
    {
      return this.price;
    }

    public com.amazon.device.iap.model.ProductType getProductType()
    {
      return this.productType;
    }

    public String getSku()
    {
      return this.sku;
    }

    public String getSmallIconUrl()
    {
      return this.smallIconUrl;
    }

    public String getTitle()
    {
      return this.title;
    }

    public com.amazon.device.iap.internal.model.ProductBuilder setDescription(String p0)
    {
      this.description = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.ProductBuilder setPrice(
            com.amazon.device.iap.model.Price p0)
    {
      this.price = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.ProductBuilder setProductType(
            com.amazon.device.iap.model.ProductType p0)
    {
      this.productType = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.ProductBuilder setSku(String p0)
    {
      this.sku = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.ProductBuilder setSmallIconUrl(String p0)
    {
      this.smallIconUrl = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.ProductBuilder setTitle(String p0)
    {
      this.title = p0;
      return this;
    }

}
