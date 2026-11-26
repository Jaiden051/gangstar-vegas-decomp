// Decompiled from classes.dex (SourceFile: PriceBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.model;

public class PriceBuilder {
    // Fields
    private java.util.Currency currency;
    private java.math.BigDecimal value;

    // Methods
    public PriceBuilder()
    {
      super();
    }

    public com.amazon.device.iap.model.Price build()
    {
      return new com.amazon.device.iap.model.Price(this);
    }

    public java.util.Currency getCurrency()
    {
      return this.currency;
    }

    public java.math.BigDecimal getValue()
    {
      return this.value;
    }

    public com.amazon.device.iap.internal.model.PriceBuilder setCurrency(java.util.Currency p0)
    {
      this.currency = p0;
      return this;
    }

    public com.amazon.device.iap.internal.model.PriceBuilder setValue(java.math.BigDecimal p0)
    {
      this.value = p0;
      return this;
    }

}
