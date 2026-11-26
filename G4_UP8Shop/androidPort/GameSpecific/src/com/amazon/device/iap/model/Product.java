// Decompiled from classes.dex (SourceFile: Product.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

public final class Product implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private static java.lang.String DESCRIPTION;
    private static java.lang.String PRICE;
    private static java.lang.String PRODUCT_TYPE;
    public static java.lang.String SKU;
    private static java.lang.String SMALL_ICON_URL;
    private static java.lang.String TITLE;
    private final java.lang.String description;
    private final com.amazon.device.iap.model.Price price;
    private final com.amazon.device.iap.model.ProductType productType;
    private final java.lang.String sku;
    private final java.lang.String smallIconUrl;
    private final java.lang.String title;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.amazon.device.iap.model.Product$1();
    }

    private Product(android.os.Parcel p0)
    {
      super();
      this.sku = p0.readString();
      this.productType = ProductType.valueOf(p0.readString());
      this.description = p0.readString();
      this.price = (com.amazon.device.iap.model.Price)p0.readParcelable(com.amazon.device.iap.model.Price.class.getClassLoader());
      this.smallIconUrl = p0.readString();
      this.title = p0.readString();
    }

    /* synthetic */ Product(android.os.Parcel p0, com.amazon.device.iap.model.Product$1 p1)
    {
      this(p0);
    }

    public Product(com.amazon.device.iap.internal.model.ProductBuilder p0)
    {
      super();
      com.amazon.device.iap.internal.util.d.a(p0.getSku(), "sku");
      com.amazon.device.iap.internal.util.d.a(p0.getProductType(), "productType");
      com.amazon.device.iap.internal.util.d.a(p0.getDescription(), "description");
      com.amazon.device.iap.internal.util.d.a(p0.getTitle(), "title");
      com.amazon.device.iap.internal.util.d.a(p0.getSmallIconUrl(), "smallIconUrl");
      if ( ProductType.SUBSCRIPTION != p0.getProductType() )
        com.amazon.device.iap.internal.util.d.a(p0.getPrice(), "price");
      this.sku = p0.getSku();
      this.productType = p0.getProductType();
      this.description = p0.getDescription();
      this.price = p0.getPrice();
      this.smallIconUrl = p0.getSmallIconUrl();
      this.title = p0.getTitle();
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String getDescription()
    {
      return this.description;
    }

    public final com.amazon.device.iap.model.Price getPrice()
    {
      return this.price;
    }

    public final com.amazon.device.iap.model.ProductType getProductType()
    {
      return this.productType;
    }

    public final String getSku()
    {
      return this.sku;
    }

    public final String getSmallIconUrl()
    {
      return this.smallIconUrl;
    }

    public final String getTitle()
    {
      return this.title;
    }

    public final org.json.JSONObject toJSON()
 throws org.json.JSONException {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      v1.put("sku", this.sku);
      v1.put("productType", this.productType);
      v1.put("description", this.description);
      v1.put("price", this.price);
      v1.put("smallIconUrl", this.smallIconUrl);
      v1.put("title", this.title);
      return v1;
    }

    public final String toString()
    {
      String v1;
      v1 = null;
      try
      {
        return this.toJSON().toString(4);
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      p0.writeString(this.sku);
      p0.writeString(this.productType.toString());
      p0.writeString(this.description);
      p0.writeParcelable((android.os.Parcelable)this.price, p1);
      p0.writeString(this.smallIconUrl);
      p0.writeString(this.title);
    }

}
