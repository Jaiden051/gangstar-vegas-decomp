// Decompiled from classes.dex (SourceFile: bd.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Xml;
public class bd extends com.amazon.device.associates.bk {
    // Fields
    private static final java.lang.String b;
    private com.amazon.device.associates.i a;

    // Methods
    static
    {
      b = null;
    }

    public bd()
    {
      super();
      this.a = new com.amazon.device.associates.i();
    }

    private void b(org.xmlpull.v1.XmlPullParser p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      p0.require(2, b, "templateList");
      while ( p0.next() != 3 )
      {
        if ( p0.getEventType() == 2 )
        {
          if ( p0.getName().equals("member") )
            this.c(p0);
          else
            this.a(p0);
        }
      }
    }

    private void c(org.xmlpull.v1.XmlPullParser p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      String v2;
      String v3;
      String Name;
      v2 = null;
      p0.require(2, b, "member");
      v3 = null;
      while ( p0.next() != 3 )
      {
        if ( p0.getEventType() == 2 )
        {
          Name = p0.getName();
          if ( Name.equals("templateURL") )
          {
            v3 = this.a(p0, Name);
          }
          else if ( Name.equals("templateName") )
          {
            v2 = this.a(p0, Name);
          }
          else
          {
            this.a(p0);
          }
        }
      }
      this.a.a(v2, v3);
    }

    private void d(org.xmlpull.v1.XmlPullParser p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      p0.require(2, b, "URLTemplatesOutput");
      while ( p0.next() != 3 )
      {
        if ( p0.getEventType() == 2 )
        {
          if ( p0.getName().equals("templateList") )
            this.b(p0);
          else
            this.a(p0);
        }
      }
    }

    /* bridge */ public long a(String p0)
    {
      return super.a(p0);
    }

    public com.amazon.device.associates.i a(java.io.InputStream p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      org.xmlpull.v1.XmlPullParser v2;
      com.amazon.device.associates.i a;
      try
      {
        v2 = Xml.newPullParser();
        v2.setFeature("http://xmlpull.org/v1/doc/features.html#process-namespaces", false);
        v2.setInput(p0, null);
        v2.nextTag();
        this.d(v2);
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
