// Decompiled from classes.dex (SourceFile: v.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
final class v {
    // Fields
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;

    // Methods
    public v(String p0, String p1, String p2)
    {
      super();
      this.a = null;
      this.b = null;
      this.c = null;
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    private String d()
    {
      return this.c;
    }

    public final String a()
    {
      return this.a;
    }

    public final String b()
    {
      return this.b;
    }

    public final String c()
    {
      String v1;
      org.json.JSONObject v2;
      v1 = null;
      v2 = new org.json.JSONObject();
      if ( !TextUtils.isEmpty(this.b) && !TextUtils.isEmpty(this.c) )
      {
        try
        {
          v2.put(InAppBilling.a(0, 209), this.b);
          v2.put(InAppBilling.a(0, 210), this.c);
          return v2.toString();
        }
        catch ( org.json.JSONException e )
        {
        }
      }
      return v1;
    }

}
