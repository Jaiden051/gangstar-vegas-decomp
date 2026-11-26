// Decompiled from classes.dex (SourceFile: br.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class br implements java.io.Serializable {
    // Fields
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private double e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private boolean i;

    // Methods
    public br(String p0, String p1, String p2, String p3, String p4, String p5, String p6, String p7)
    {
      super();
      this.a = "";
      this.b = "";
      this.c = "";
      this.d = "";
      this.e = 0.0;
      this.f = "";
      this.g = "";
      this.h = "";
      this.i = false;
      try
      {
        this.a = p0;
        this.b = p1;
        this.c = p2;
        this.d = this.a(p3);
        if ( p5 != null && !p5.trim().equals("") )
          this.f = "(" + p5.trim() + ")";
        this.g = p6;
        this.h = p7;
        if ( p4 != null && !p4.trim().equals("") )
          this.e = Double.parseDouble(p4);
      }
      catch ( NumberFormatException e )
      {
        p.b("PopoverDataLog", "Failed to load data.");
      }
    }

    private String a(String p0)
    {
      Object[] v4 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( !(p0 == null) ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            if ( p0 == null || p0.trim().equals("") )
            {
            this.i = true;
            return "";
            }
            return p0;
          case 2:
            try
            {
            if ( !p0.trim().equals("") && p0.length() > 2 )
            {
            if ( Double.parseDouble(p0.trim().substring(1).replace(",", "").replace(" ", "")) >= 0.0 )
            this.i = true;
            return p0;
            }
            { _pc = 1; continue _sm; }
            }
            catch ( Exception v3 )
            {
            v4 = new Object[1];
            v4[0] = v3;
            p.d("PopoverData", "Parsing of price failed, invalidating the data", v4);
            this.i = false;
            return "";
            }
            

        }
      }
}

    public final String a()
    {
      return this.b;
    }

    public final String b()
    {
      return this.c;
    }

    public final String c()
    {
      return this.d;
    }

    public final double d()
    {
      return this.e;
    }

    public final String e()
    {
      return this.f;
    }

    public final String f()
    {
      return this.g;
    }

    public final boolean g()
    {
      return this.i;
    }

    public final String h()
    {
      return this.h;
    }

    public final String toString()
    {
      return "PopoverData [asin="
           + this.a
           + ", iconPath="
           + this.b
           + ", title="
           + this.c
           + ", price="
           + this.d
           + ", rating="
           + this.e
           + ", reviewersCount="
           + this.f
           + ", detailPageURL="
           + this.g
           + ", category="
           + this.h
           + ", valid="
           + this.i
           + "]";
    }

}
