// Decompiled from classes.dex (SourceFile: be.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class be extends com.amazon.device.associates.ac {
    // Fields
    private static final java.lang.String b;
    private static java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;

    // Methods
    static
    {
      b = com.amazon.device.associates.be.class.getName();
      c = "e/ir";
    }

    be()
    {
      super();
      this.e = "1";
    }

    protected void a()
    {
      this.a = new com.amazon.device.associates.aq("" + ("http://ir-na.amazon-adsystem.com/" + c));
      this.a.a("t", this.d);
      this.a.a("o", this.e);
      this.a.a("l", this.g);
      this.a.a("a", this.f);
    }

    public void a(String p0, String p1, String p2)
    {
      this.d = p0;
      this.f = p2;
      this.g = p1;
    }

    protected synchronized void b()
    {
      Object[] v2;
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
          p.c(b, "Call to ImpressionRecorderCall URL failed. Ex=", v2);
        }
        catch ( Exception e )
        {
          p.c(b, "Call to get ImpressionRecorderCall URL failed. Ex=");
        }
      }
      finally
      {
      }
    }

    protected String c()
    {
      return "ImpressionRecorderCall";
    }

}
