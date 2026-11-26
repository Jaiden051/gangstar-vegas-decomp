// Decompiled from classes.dex (SourceFile: as.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Xml;
public class as extends com.amazon.device.associates.bk {
    // Fields
    private static final java.lang.String b;
    private com.amazon.device.associates.bx a;

    // Methods
    static
    {
      b = null;
    }

    public as()
    {
      super();
      this.a = new com.amazon.device.associates.bx();
    }

    private void b(org.xmlpull.v1.XmlPullParser p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      p0.require(2, b, "sortParamterMap");
      while ( p0.next() != 3 )
      {
        if ( p0.getEventType() == 2 )
        {
          if ( p0.getName().equals("entry") )
            this.d(p0);
          else
            this.a(p0);
        }
      }
    }

    private void c(org.xmlpull.v1.XmlPullParser p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      p0.require(2, b, "searchAliasMap");
      while ( p0.next() != 3 )
      {
        if ( p0.getEventType() == 2 )
        {
          if ( p0.getName().equals("entry") )
            this.e(p0);
          else
            this.a(p0);
        }
      }
    }

    private void d(org.xmlpull.v1.XmlPullParser p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      String v2;
      String v3;
      String Name;
      v2 = null;
      p0.require(2, b, "entry");
      v3 = null;
      while ( p0.next() != 3 )
      {
        if ( p0.getEventType() == 2 )
        {
          Name = p0.getName();
          if ( Name.equals("key") )
          {
            v3 = this.a(p0, Name);
          }
          else if ( Name.equals("value") )
          {
            v2 = this.a(p0, Name);
          }
          else
          {
            this.a(p0);
          }
        }
      }
      this.a.a(v3, v2);
    }

    private void e(org.xmlpull.v1.XmlPullParser p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      String v2;
      String v3;
      String Name;
      v2 = null;
      p0.require(2, b, "entry");
      v3 = null;
      while ( p0.next() != 3 )
      {
        if ( p0.getEventType() == 2 )
        {
          Name = p0.getName();
          if ( Name.equals("key") )
          {
            v3 = this.a(p0, Name);
          }
          else if ( Name.equals("value") )
          {
            v2 = this.a(p0, Name);
          }
          else
          {
            this.a(p0);
          }
        }
      }
      this.a.b(v3, v2);
    }

    private void f(org.xmlpull.v1.XmlPullParser p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      String Name;
      p0.require(2, b, "GetCategorySearchDetailsOutput");
      while ( p0.next() != 3 )
      {
        if ( p0.getEventType() == 2 )
        {
          Name = p0.getName();
          if ( Name.equals("sortParamterMap") )
          {
            this.b(p0);
          }
          else if ( Name.equals("searchAliasMap") )
          {
            this.c(p0);
          }
          else
          {
            this.a(p0);
          }
        }
      }
    }

    /* bridge */ public long a(String p0)
    {
      return super.a(p0);
    }

    public com.amazon.device.associates.bx a(java.io.InputStream p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      org.xmlpull.v1.XmlPullParser v2;
      com.amazon.device.associates.bx a;
      try
      {
        v2 = Xml.newPullParser();
        v2.setFeature("http://xmlpull.org/v1/doc/features.html#process-namespaces", false);
        v2.setInput(p0, null);
        v2.nextTag();
        this.f(v2);
        a = this.a;
      }
      finally
      {
        p0.close();
      }
      return a;
    }

    /* bridge */ public String a(String p0, String p1)
    {
      return super.a(p0, p1);
    }

    /* bridge */ public String b(String p0)
    {
      return super.b(p0);
    }

    /* bridge */ public int c(String p0)
 throws java.io.IOException, org.xmlpull.v1.XmlPullParserException {
      return super.c(p0);
    }

}
