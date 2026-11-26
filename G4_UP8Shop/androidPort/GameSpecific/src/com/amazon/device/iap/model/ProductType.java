// Decompiled from classes.dex (SourceFile: ProductType.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

public final class ProductType extends com.gameloft.android.DecompRT.EnumBase<ProductType> {
    // Fields
    private static final com.amazon.device.iap.model.ProductType[] $VALUES;
    public static final com.amazon.device.iap.model.ProductType CONSUMABLE;
    public static final com.amazon.device.iap.model.ProductType ENTITLED;
    public static final com.amazon.device.iap.model.ProductType SUBSCRIPTION;

    // Methods
    static
    {
      com.amazon.device.iap.model.ProductType[] v0;
      CONSUMABLE = new com.amazon.device.iap.model.ProductType("CONSUMABLE", 0);
      ENTITLED = new com.amazon.device.iap.model.ProductType("ENTITLED", 1);
      SUBSCRIPTION = new com.amazon.device.iap.model.ProductType("SUBSCRIPTION", 2);
      v0 = new com.amazon.device.iap.model.ProductType[3];
      v0[0] = CONSUMABLE;
      v0[1] = ENTITLED;
      v0[2] = SUBSCRIPTION;
      $VALUES = (com.amazon.device.iap.model.ProductType[])v0;
    }

    private ProductType(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.amazon.device.iap.model.ProductType valueOf(String p0)
    {
      return (com.amazon.device.iap.model.ProductType)com.gameloft.android.DecompRT.EnumBase.valueOf(com.amazon.device.iap.model.ProductType.class, p0);
    }

    public static com.amazon.device.iap.model.ProductType[] values()
    {
      return (com.amazon.device.iap.model.ProductType[])$VALUES.clone();
    }

}
