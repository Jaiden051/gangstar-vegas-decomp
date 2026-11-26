// Decompiled from classes.dex (SourceFile: bn.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import com.facebook.Response;
class bn extends com.amazon.device.associates.ac {
    // Fields
    private static java.lang.String b;

    // Methods
    static
    {
      b = "getCategorySearchDetails";
    }

    bn()
    {
      super();
    }

    protected void a()
    {
      this.a = new com.amazon.device.associates.aq("" + ("http://assoc-msdk-us.amazon-adsystem.com/" + b));
      this.a.a("MarketplaceID", "ATVPDKIKX0DER");
    }

    protected synchronized void b()
    {
      Object[] v2;
      Object[] v5;
      try
      {
        try
        {
          this.a.a(s.a);
        }
        catch ( java.io.UnsupportedEncodingException v1 )
        {
          v2 = new Object[1];
          v2[0] = v1;
          p.a("getCategorySearchDetails", "Call to get ad URL failed. Ex=", v2);
        }
        catch ( Exception v4 )
        {
          v5 = new Object[1];
          v5[0] = v4;
          p.a("getCategorySearchDetails", "Call to get ad URL failed. Ex=", v5);
        }
      }
      finally
      {
      }
    }

    protected String c()
    {
      return "getCategorySearchDetails";
    }

    public com.amazon.device.associates.bx d()
 throws java.io.IOException, org.xmlpull.v1.XmlPullParserException {
      com.amazon.device.associates.bx v1;
      String v2; // RETVAL
      String v3;
      com.amazon.device.associates.as v5;
      int v6;
      v1 = null;
      v2 = this.a.a();
      v3 = v2;
      if ( v2 != null )
      {
        v5 = new com.amazon.device.associates.as();
        v6 = v5.c(v2);
        if ( v6 != -1 )
        {
          p.a("getCategorySearchDetails", "DirectionShopping Response:" + v5.b(v3));
          try
          {
            v1 = v5.a(new java.io.ByteArrayInputStream(v3.getBytes("UTF-8")));
            v1.b(System.currentTimeMillis());
          }
          catch ( Exception v7 )
          {
            p.a("getCategorySearchDetails", "Parsing reponse failed. Ex=" + v7);
          }
          v1.c(v5.a(v3));
          v1.a(bo.b());
          v1.a(v6);
          return v1;
        }
      }
      p.a("getCategorySearchDetails", "DirectionShopping Response:Could not complete service call");
      return v1;
    }

}
