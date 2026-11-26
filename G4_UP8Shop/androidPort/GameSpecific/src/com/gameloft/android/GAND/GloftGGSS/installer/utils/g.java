// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

public final class g extends org.xml.sax.helpers.DefaultHandler {
    // Fields
    boolean a;
    boolean b;
    java.lang.String c;
    public com.gameloft.android.GAND.GloftGGSS.installer.utils.q d;
    public com.gameloft.android.GAND.GloftGGSS.installer.utils.p e;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.l f;
    private boolean g;
    private boolean h;

    // Methods
    public g()
    {
      super();
      this.a = false;
      this.b = false;
      this.c = null;
      this.d = null;
      this.e = null;
      this.f = null;
      this.g = false;
      this.h = false;
    }

    public final com.gameloft.android.GAND.GloftGGSS.installer.utils.l a()
    {
      return this.f;
    }

    public final void characters(char[] p0, int p1, int p2)
    {
      String v4;
      if ( this.a )
      {
        v4 = new String(p0, p1, p2);
        if ( v4.equals("\n") )
          v4 = "";
        this.c = this.c + v4;
      }
    }

    public final void endElement(String p0, String p1, String p2)
    {
      this.a = false;
      this.c = this.c.trim();
      if ( this.h )
      {
        if ( p1.equals("carrier") )
        {
          this.f.b().add(this.e);
        }
        else if ( p1.equals("wifi_only") )
        {
          this.e.a(Integer.parseInt(this.c) == 1);
        }
        else if ( p1.equals("carriers") )
        {
          this.h = false;
        }
      }
      else if ( this.g )
      {
        if ( p1.equals("device") )
        {
          this.f.a().add(this.d);
        }
        else if ( p1.equals("pvrt_textures") )
        {
          this.d.a(Integer.parseInt(this.c) == 1);
        }
        else if ( p1.equals("atc_textures") )
        {
          this.d.b(Integer.parseInt(this.c) == 1);
        }
        else if ( p1.equals("etc_textures") )
        {
          this.d.c(Integer.parseInt(this.c) == 1);
        }
        else if ( p1.equals("dxt_textures") )
        {
          this.d.d(Integer.parseInt(this.c) == 1);
        }
        else if ( p1.equals("devices") )
        {
          this.g = false;
        }
      }
      this.c = "";
    }

    public final void startElement(String p0, String p1, String p2, org.xml.sax.Attributes p3)
    {
      if ( this.a )
        this.c = "";
      this.a = true;
      if ( p1.equals("settings") )
      {
        this.f = new com.gameloft.android.GAND.GloftGGSS.installer.utils.l();
      }
      else if ( p1.equals("carriers") )
      {
        this.h = true;
        if ( this.f.b() == null )
          this.f.b(new java.util.ArrayList());
      }
      else if ( p1.equals("devices") )
      {
        this.g = true;
        if ( this.f.a() == null )
          this.f.a(new java.util.ArrayList());
      }
      else if ( this.h )
      {
        if ( p1.equals("carrier") )
        {
          this.e = new com.gameloft.android.GAND.GloftGGSS.installer.utils.p();
          this.e.a(p3.getValue("name"));
        }
      }
      else if ( this.g )
      {
        if ( p1.equals("device") )
        {
          this.d = new com.gameloft.android.GAND.GloftGGSS.installer.utils.q();
        }
        else if ( p1.equals("manufacturer") )
        {
          this.d.a(p3.getValue("name"));
        }
        if ( p1.equals("model") )
          this.d.b(p3.getValue("name"));
      }
    }

}
