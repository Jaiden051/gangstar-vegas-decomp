// Decompiled from classes.dex (SourceFile: q.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.format.DateFormat;
final class q extends com.gameloft.android.GAND.GloftGGSS.iab.p {
    // Fields
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;

    // Methods
    public q(String p0)
    {
      super();
      org.json.JSONObject v2;
      try
      {
        v2 = new org.json.JSONObject(p0);
        this.a = v2.getString("mPaymentId");
        this.c = v2.getString("mPurchaseId");
        this.a(v2.getString("mItemId"));
        this.b(v2.getString("mItemName"));
        this.a(Double.valueOf(Double.parseDouble(v2.getString("mItemPrice"))));
        this.c(v2.getString("mItemPriceString"));
        this.d(v2.getString("mCurrencyUnit"));
        this.e(v2.getString("mItemDesc"));
        this.f(v2.getString("mItemImageUrl"));
        this.g(v2.getString("mItemDownloadUrl"));
        this.h(v2.getString("mReserved1"));
        this.i(v2.getString("mReserved2"));
        this.d = v2.getString("mVerifyUrl");
        this.b = DateFormat.format("yyyy.MM.dd hh:mm:ss", Long.parseLong(v2.getString("mPurchaseDate"))).toString();
      }
      catch ( org.json.JSONException e )
      {
      }
    
    }

    private String f()
    {
      return this.b;
    }

    private void k(String p0)
    {
      this.d = p0;
    }

    private void l(String p0)
    {
      this.a = p0;
    }

    private void m(String p0)
    {
      this.b = p0;
    }

    private void n(String p0)
    {
      this.c = p0;
    }

    public final String a()
    {
      return this.d;
    }

    public final String d()
    {
      return this.a;
    }

    public final String e()
    {
      return this.c;
    }

}
