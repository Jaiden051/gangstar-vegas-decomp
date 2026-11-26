// Decompiled from classes.dex (SourceFile: aw.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import java.util.Currency;
import org.json.JSONObject;
class aw {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.associates.aw.class.getSimpleName();
    }

    private aw()
    {
      super();
    }

    static com.amazon.device.associates.UserData a(org.json.JSONObject p0)
 throws org.json.JSONException {
      return new com.amazon.device.associates.UserData(p0.getString("userId"), p0.getString("marketplace"));
    }

    static <C extends java.util.Collection<String>> C a(org.json.JSONArray p0, C p1)
    {
      int i;
      for ( i = 0; i < p0.length(); ++i )
      {
        try
        {
          p1.add(p0.getString(i));
          continue;
        }
        catch ( org.json.JSONException v3 )
        {
          x.b(a, "error in parseStrings: " + v3);
        }
      }
      return p1;
    }

    static com.amazon.device.associates.Receipt b(org.json.JSONObject p0)
 throws org.json.JSONException {
      String String;
      String v2;
      String v3;
      String = p0.getString("receiptId");
      v2 = p0.getString("productId");
      v3 = null;
      if ( p0.has("parentProductId") )
        v3 = p0.getString("parentProductId");
      return new com.amazon.device.associates.Receipt(String, v2, v3, p0.getInt("quantity"), p0.getString("purchaseToken"), new java.util.Date(p0.getLong("purchaseDate")), p0.getBoolean("isCanceled"));
    }

    static <C extends java.util.Collection<com.amazon.device.associates.Receipt>> C b(org.json.JSONArray p0, C p1)
    {
      int i;
      for ( i = 0; i < p0.length(); ++i )
      {
        try
        {
          p1.add(b(p0.getJSONObject(i)));
          continue;
        }
        catch ( Exception v3 )
        {
          x.b(a, "error in parseReceipts: " + v3);
        }
      }
      return p1;
    }

    static com.amazon.device.associates.Image c(org.json.JSONObject p0)
    {
      if ( p0 != null )
      {
        try
        {
          return new com.amazon.device.associates.Image(p0.getString("url"), p0.getInt("width"), p0.getInt("height"));
        }
        catch ( Exception v3 )
        {
          x.b(a, "error in parseImage. returning null: " + v3);
        }
      }
      return null;
    }

    static <C extends java.util.Collection<com.amazon.device.associates.Product>> C c(org.json.JSONArray p0, C p1)
    {
      int i;
      org.json.JSONObject JSONObject;
      for ( i = 0; i < p0.length(); ++i )
      {
        try
        {
          JSONObject = p0.getJSONObject(i);
          p1.add(new com.amazon.device.associates.Product(JSONObject.getString("productId"), JSONObject.optString("title"), JSONObject.optString("description"), c(JSONObject.optJSONObject("image")), d(JSONObject.optJSONObject("price")), JSONObject.optString("brand"), JSONObject.optDouble("rating", 0.0)));
          continue;
        }
        catch ( Exception v4 )
        {
          x.b(a, "error in parseProducts: " + v4);
        }
      }
      return p1;
    }

    static com.amazon.device.associates.Price d(org.json.JSONObject p0)
    {
      if ( p0 != null )
      {
        try
        {
          return new com.amazon.device.associates.Price(Currency.getInstance(p0.getString("currency")), new java.math.BigDecimal(p0.getDouble("minValue")), new java.math.BigDecimal(p0.getDouble("maxValue")), p0.getString("formattedPrice"));
        }
        catch ( Exception v3 )
        {
          x.b(a, "error in parsePrice. returning null: " + v3);
        }
      }
      return null;
    }

}
