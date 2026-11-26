// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

import javax.xml.parsers.SAXParserFactory;
public final class f {
    // Fields
    private javax.xml.parsers.SAXParserFactory a;
    private javax.xml.parsers.SAXParser b;
    private org.xml.sax.XMLReader c;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.g d;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.l e;

    // Methods
    public f()
    {
      super();
      this.e = null;
      try
      {
        this.a = SAXParserFactory.newInstance();
        this.b = this.a.newSAXParser();
        this.c = this.b.getXMLReader();
        this.d = new com.gameloft.android.GAND.GloftGGSS.installer.utils.g();
        this.c.setContentHandler(this.d);
      }
      catch ( Exception e )
      {
      }
    }

    private void a(org.xml.sax.InputSource p0)
    {
      try
      {
        this.c.parse(p0);
      }
      catch ( Exception e )
      {
      }
    }

    private boolean a(String p0)
    {
      int v2;
      java.util.ArrayList v3;
      boolean v4;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.p v5;
      v2 = 0;
      if ( p0 == null )
        p0 = "";
      v3 = this.e.b();
      v4 = !p0.equals("default") && this.a("default");
      while ( v2 < v3.size() )
      {
        v5 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.p)v3.get(v2);
        if ( v5.b().equalsIgnoreCase(p0) )
          return v5.a();
        ++v2;
      }
      return v4;
    }

    private boolean a(String p0, String p1)
    {
      java.util.ArrayList v3;
      boolean v4;
      int v5;
      boolean v6;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.q v7;
      boolean v9;
      if ( p0 == null )
        p0 = "";
      v3 = this.e.a();
      v4 = !p0.equals("default") && this.a("default", null);
      v5 = 0;
      v6 = v4;
      while ( v5 < v3.size() )
      {
        v7 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.q)v3.get(v5);
        if ( v7.e().equalsIgnoreCase(p0) && v7.f().equalsIgnoreCase("") )
          return v7.a();
        if ( !v7.e().equalsIgnoreCase(p0) || v7.f().length() != 0 )
          v9 = v6;
        else
          v9 = v7.a();
        ++v5;
        v6 = v9;
      }
      return v6;
    }

    private boolean b(String p0, String p1)
    {
      java.util.ArrayList v3;
      boolean v4;
      int v5;
      boolean v6;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.q v7;
      boolean v9;
      if ( p0 == null )
        p0 = "";
      v3 = this.e.a();
      v4 = !p0.equals("default") && this.b("default", null);
      v5 = 0;
      v6 = v4;
      while ( v5 < v3.size() )
      {
        v7 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.q)v3.get(v5);
        if ( v7.e().equalsIgnoreCase(p0) && v7.f().equalsIgnoreCase("") )
          return v7.b();
        if ( !v7.e().equalsIgnoreCase(p0) || v7.f().length() != 0 )
          v9 = v6;
        else
          v9 = v7.b();
        ++v5;
        v6 = v9;
      }
      return v6;
    }

    private boolean c(String p0, String p1)
    {
      java.util.ArrayList v3;
      boolean v4;
      int v5;
      boolean v6;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.q v7;
      boolean v9;
      if ( p0 == null )
        p0 = "";
      v3 = this.e.a();
      v4 = !p0.equals("default") && this.c("default", null);
      v5 = 0;
      v6 = v4;
      while ( v5 < v3.size() )
      {
        v7 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.q)v3.get(v5);
        if ( v7.e().equalsIgnoreCase(p0) && v7.f().equalsIgnoreCase("") )
          return v7.c();
        if ( !v7.e().equalsIgnoreCase(p0) || v7.f().length() != 0 )
          v9 = v6;
        else
          v9 = v7.c();
        ++v5;
        v6 = v9;
      }
      return v6;
    }

    private boolean d(String p0, String p1)
    {
      java.util.ArrayList v3;
      boolean v4;
      int v5;
      boolean v6;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.q v7;
      boolean v9;
      if ( p0 == null )
        p0 = "";
      v3 = this.e.a();
      v4 = !p0.equals("default") && this.d("default", null);
      v5 = 0;
      v6 = v4;
      while ( v5 < v3.size() )
      {
        v7 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.q)v3.get(v5);
        if ( v7.e().equalsIgnoreCase(p0) && v7.f().equalsIgnoreCase("") )
          return v7.d();
        if ( !v7.e().equalsIgnoreCase(p0) || v7.f().length() != 0 )
          v9 = v6;
        else
          v9 = v7.d();
        ++v5;
        v6 = v9;
      }
      return v6;
    }

    public final void a(android.content.Context p0)
    {
      org.xml.sax.InputSource v2;
      try
      {
        v2 = new org.xml.sax.InputSource(p0.getResources().openRawResource(1));
        try
        {
          this.c.parse(v2);
        }
        catch ( Exception e )
        {
        }
        this.e = this.d.a();
      }
      catch ( Exception e )
      {
      }
    }

}
