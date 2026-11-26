// Decompiled from classes.dex (SourceFile: o.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.format.DateFormat;
final class o extends com.gameloft.android.GAND.GloftGGSS.iab.p {
    // Fields
    private java.lang.String a;
    private java.lang.String b;

    // Methods
    public o(String p0)
    {
      super();
      org.json.JSONObject v2;
      try
      {
        v2 = new org.json.JSONObject(p0);
        this.a(v2.getString("mItemId"));
        this.b(v2.getString("mItemName"));
        this.e(v2.getString("mItemDesc"));
        this.a(Double.valueOf(Double.parseDouble(v2.getString("mItemPrice"))));
        this.d(v2.getString("mCurrencyUnit"));
        this.f(v2.getString("mItemImageUrl"));
        this.g(v2.getString("mItemDownloadUrl"));
        this.b = DateFormat.format("yyyy.MM.dd hh:mm:ss", Long.parseLong(v2.getString("mPurchaseDate"))).toString();
        this.a = v2.getString("mPaymentId");
        this.h(v2.getString("mReserved1"));
        this.i(v2.getString("mReserved2"));
        this.j(v2.getString("mType"));
        this.c(v2.getString("mItemPriceString"));
      }
      catch ( org.json.JSONException e )
      {
      }
    
    }

    private String d()
    {
      return this.b;
    }

    public final String a()
    {
      return this.a;
    }

}
