// Decompiled from classes.dex (SourceFile: Price.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.model;

import java.util.Currency;
public final class Price implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private static java.lang.String CURRENCY;
    private static java.lang.String VALUE;
    private final java.util.Currency currency;
    private final java.math.BigDecimal value;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.amazon.device.iap.model.Price$1();
    }

    private Price(android.os.Parcel p0)
    {
      super();
      this.currency = Currency.getInstance(p0.readString());
      this.value = new java.math.BigDecimal(p0.readString());
    }

    /* synthetic */ Price(android.os.Parcel p0, com.amazon.device.iap.model.Price$1 p1)
    {
      this(p0);
    }

    public Price(com.amazon.device.iap.internal.model.PriceBuilder p0)
    {
      super();
      com.amazon.device.iap.internal.util.d.a(p0.getCurrency(), "currency");
      com.amazon.device.iap.internal.util.d.a(p0.getValue(), "value");
      this.currency = p0.getCurrency();
      this.value = p0.getValue();
    }

    public final int describeContents()
    {
      return 0;
    }

    public final java.util.Currency getCurrency()
    {
      return this.currency;
    }

    public final java.math.BigDecimal getValue()
    {
      return this.value;
    }

    public final org.json.JSONObject toJSON()
 throws org.json.JSONException {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      v1.put("currency", this.currency);
      v1.put("value", this.value);
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
      p0.writeString(this.currency.getCurrencyCode());
      p0.writeString(this.value.toString());
    }

}
