// Decompiled from classes.dex (SourceFile: Price.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import java.util.Currency;
public class Price implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final java.util.Currency a;
    final java.math.BigDecimal b;
    final java.math.BigDecimal c;
    final java.lang.String d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.amazon.device.associates.ak();
    }

    private Price(android.os.Parcel p0)
    {
      super();
      this.a = Currency.getInstance(p0.readString());
      this.b = new java.math.BigDecimal(p0.readString());
      this.c = new java.math.BigDecimal(p0.readString());
      this.d = p0.readString();
    }

    /* synthetic */ Price(android.os.Parcel p0, com.amazon.device.associates.ak p1)
    {
      this(p0);
    }

    Price(java.util.Currency p0, java.math.BigDecimal p1, java.math.BigDecimal p2, String p3)
    {
      super();
      an.a(p0, "currency");
      an.a(p1, "minValue");
      an.a(p2, "maxValue");
      an.a(p3, "formattedString");
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
    }

    org.json.JSONObject a()
    {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("currency", this.a.toString());
        v1.put("minValue", this.b.doubleValue());
        v1.put("maxValue", this.c.doubleValue());
        v1.put("formattedPrice", this.d);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public int describeContents()
    {
      return this.hashCode();
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.amazon.device.associates.Price v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( !(p0 instanceof com.amazon.device.associates.Price) )
          return false;
        v4 = (com.amazon.device.associates.Price)p0;
        if ( !this.a.equals(v4.a) || !this.b.equals(v4.b) || !this.c.equals(v4.c) || !this.d.equals(v4.d) )
          return false;
      }
      return v2;
    }

    public java.util.Currency getCurrency()
    {
      return this.a;
    }

    public String getFormattedString()
    {
      return this.d;
    }

    public java.math.BigDecimal getMaxValue()
    {
      return this.c;
    }

    public java.math.BigDecimal getMinValue()
    {
      return this.b;
    }

    public boolean isRange()
    {
      return this.b != this.c;
    }

    public String toString()
    {
      return this.getFormattedString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      String[] v3;
      v3 = new String[4];
      v3[0] = this.a.toString();
      v3[1] = this.b.toString();
      v3[2] = this.c.toString();
      v3[3] = this.d;
      p0.writeStringArray(v3);
    }

}
