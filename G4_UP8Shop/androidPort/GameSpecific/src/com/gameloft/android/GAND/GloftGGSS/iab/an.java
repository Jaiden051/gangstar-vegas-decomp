// Decompiled from classes.dex (SourceFile: an.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class an {
    // Fields
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;

    // Methods
    public an(String p0)
    {
      super();
      org.json.JSONObject v2;
      try
      {
        v2 = new org.json.JSONObject(p0);
        this.a = v2.getString("itemId");
        this.b = v2.getString("itemName");
        this.c = v2.getString("itemDesc");
        this.d = v2.getString("purchaseDate");
        this.e = v2.getString("paymentId");
        this.f = v2.getString("paymentAmount");
        this.g = v2.getString("status");
      }
      catch ( org.json.JSONException e )
      {
      }
    
    }

    public final String a()
    {
      return this.e;
    }

    public final String b()
    {
      return this.g;
    }

}
