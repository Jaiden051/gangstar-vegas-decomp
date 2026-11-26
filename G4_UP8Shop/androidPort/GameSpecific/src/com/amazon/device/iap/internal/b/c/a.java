// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.c;

import com.amazon.device.iap.internal.util.MetricsHelper;
import com.amazon.device.iap.model.ProductType;
import java.util.Currency;
public final class a extends com.amazon.device.iap.internal.b.c.c {
    // Fields
    private static final java.lang.String b;

    // Methods
    static
    {
      b = com.amazon.device.iap.internal.b.c.a.class.getSimpleName();
    }

    public a(com.amazon.device.iap.internal.b.b_e p0, java.util.Set<String> p1)
    {
      super(p0, "2.0", p1);
    }

    private com.amazon.device.iap.model.Product a(String p0, java.util.Map p1)
    {
      Object v3; // RETVAL
      String v4;
      org.json.JSONObject v5;
      com.amazon.device.iap.model.ProductType v6;
      String String;
      org.json.JSONObject v8; // RETVAL
      com.amazon.device.iap.model.Price v9;
      v3 = p1.get(p0);
      v4 = (String)v3;
      try
      {
        v5 = new org.json.JSONObject(v4);
        v6 = ProductType.valueOf(v5.getString("itemType").toUpperCase());
        String = v5.getString("description");
        v8 = v5.optJSONObject("priceJson");
        v9 = null;
        if ( v8 != null )
          v9 = new com.amazon.device.iap.internal.model.PriceBuilder().setCurrency(Currency.getInstance(v8.getString("currency"))).setValue(new java.math.BigDecimal(v8.getString("value"))).build();
        return new com.amazon.device.iap.internal.model.ProductBuilder().setSku(p0).setProductType(v6).setDescription(String).setPrice(v9).setSmallIconUrl(v5.getString("iconUrl")).setTitle(v5.getString("title")).build();
      }
      catch ( org.json.JSONException e )
      {
        throw new IllegalArgumentException("error in parsing json string" + v4);
      }
    }

    protected final boolean a(com.amazon.venezia.command.SuccessResult p0)
    {
      java.util.Map Data;
      java.util.Set v3;
      java.util.Map v4;
      java.util.Iterator v5;
      String v6;
      com.amazon.device.iap.internal.b.b_e v8;
      Data = p0.getData();
      com.amazon.device.iap.internal.util.e.a(b, "data: " + Data);
      v3 = new java.util.LinkedHashSet();
      v4 = new java.util.HashMap();
      v5 = this.a.iterator();
      while ( v5.hasNext() )
      {
        v6 = (String)v5.next();
        if ( Data.containsKey(v6) )
        {
          try
          {
            v4.put(v6, this.a(v6, Data));
          }
          catch ( IllegalArgumentException v7 )
          {
            v3.add(v6);
            MetricsHelper.submitJsonParsingExceptionMetrics(this.c(), (String)Data.get(v6), b + ".onResult()");
            com.amazon.device.iap.internal.util.e.b(b, "Error parsing JSON for SKU " + v6 + ": " + v7.getMessage());
          }
        }
        else
        {
          v3.add(v6);
        }
      }
      v8 = this.b();
      v8.d().a(new com.amazon.device.iap.internal.model.ProductDataResponseBuilder().setRequestId(v8.c()).setRequestStatus(com.amazon.device.iap.model.ProductDataResponse$RequestStatus.SUCCESSFUL).setUnavailableSkus(v3).setProductData(v4).build());
      return true;
    }

}
