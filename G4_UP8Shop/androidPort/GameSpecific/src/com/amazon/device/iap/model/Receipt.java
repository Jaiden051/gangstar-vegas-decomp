// Decompiled from classes.dex (SourceFile: Receipt.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

public final class Receipt {
    // Fields
    private static java.lang.String CANCEL_DATE;
    public static final java.util.Date DATE_CANCELED;
    private static java.lang.String PRODUCT_TYPE;
    private static java.lang.String PURCHASE_DATE;
    private static java.lang.String RECEIPT_ID;
    private static java.lang.String SKU;
    private final java.util.Date cancelDate;
    private final com.amazon.device.iap.model.ProductType productType;
    private final java.util.Date purchaseDate;
    private final java.lang.String receiptId;
    private final java.lang.String sku;

    // Methods
    static
    {
      DATE_CANCELED = new java.util.Date(0);
    }

    public Receipt(com.amazon.device.iap.internal.model.ReceiptBuilder p0)
    {
      super();
      com.amazon.device.iap.internal.util.d.a(p0.getSku(), "sku");
      com.amazon.device.iap.internal.util.d.a(p0.getProductType(), "productType");
      if ( ProductType.SUBSCRIPTION == p0.getProductType() )
        com.amazon.device.iap.internal.util.d.a(p0.getPurchaseDate(), "purchaseDate");
      this.receiptId = p0.getReceiptId();
      this.sku = p0.getSku();
      this.productType = p0.getProductType();
      this.purchaseDate = p0.getPurchaseDate();
      this.cancelDate = p0.getCancelDate();
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.amazon.device.iap.model.Receipt v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 != null )
        {
          if ( this.getClass() == p0.getClass() )
          {
            v4 = (com.amazon.device.iap.model.Receipt)p0;
            if ( this.cancelDate != null )
            {
              if ( !this.cancelDate.equals(v4.cancelDate) )
                return false;
            }
            else if ( v4.cancelDate != null )
            {
              return false;
            }
            if ( this.productType == v4.productType )
            {
              if ( this.purchaseDate != null )
              {
                if ( !this.purchaseDate.equals(v4.purchaseDate) )
                  return false;
              }
              else if ( v4.purchaseDate != null )
              {
                return false;
              }
              if ( this.receiptId != null )
              {
                if ( !this.receiptId.equals(v4.receiptId) )
                  return false;
              }
              else if ( v4.receiptId != null )
              {
                return false;
              }
              if ( this.sku != null )
              {
                if ( !this.sku.equals(v4.sku) )
                  return false;
              }
              else if ( v4.sku != null )
              {
                return false;
              }
            }
            else
            {
              return false;
            }
          }
          else
          {
            return false;
          }
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public final java.util.Date getCancelDate()
    {
      return this.cancelDate;
    }

    public final com.amazon.device.iap.model.ProductType getProductType()
    {
      return this.productType;
    }

    public final java.util.Date getPurchaseDate()
    {
      return this.purchaseDate;
    }

    public final String getReceiptId()
    {
      return this.receiptId;
    }

    public final String getSku()
    {
      return this.sku;
    }

    public final int hashCode()
    {
      int v1;
      int v2;
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      v1 = 0;
      if ( this.cancelDate != null )
        v2 = this.cancelDate.hashCode();
      else
        v2 = 0;
      v3 = 31 * (v2 + 31);
      if ( this.productType != null )
        v4 = this.productType.hashCode();
      else
        v4 = 0;
      v5 = 31 * (v4 + v3);
      if ( this.purchaseDate != null )
        v6 = this.purchaseDate.hashCode();
      else
        v6 = 0;
      v7 = 31 * (v6 + v5);
      if ( this.receiptId != null )
        v8 = this.receiptId.hashCode();
      else
        v8 = 0;
      v9 = 31 * (v8 + v7);
      if ( this.sku != null )
        v1 = this.sku.hashCode();
      return v9 + v1;
    }

    public final boolean isCanceled()
    {
      return this.cancelDate != null
          && (DATE_CANCELED.equals(this.cancelDate) || this.cancelDate.getTime() < System.currentTimeMillis());
    }

    public final org.json.JSONObject toJSON()
    {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("receiptId", this.receiptId);
        v1.put("sku", this.sku);
        v1.put("itemType", this.productType);
        v1.put("purchaseDate", this.purchaseDate);
        v1.put("endDate", this.cancelDate);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
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

}
