// Decompiled from classes.dex (SourceFile: bk.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import com.facebook.Response;
import org.xmlpull.v1.XmlPullParserFactory;
class bk {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = null;
    }

    bk()
    {
      super();
    }

    private String b(org.xmlpull.v1.XmlPullParser p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      String Text;
      Text = "";
      if ( p0.next() == 4 )
      {
        Text = p0.getText();
        p0.nextTag();
      }
      return Text;
    }

    public long a(String p0)
    {
      String v2; // RETVAL
      String v3;
      Object[] v7;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            try
            {
            v2 = new com.amazon.device.associates.bk().a("cacheRefreshRate", p0);
            v3 = v2;
            if ( v2 == null )
            { _pc = 1; continue _sm; }
            p.c("XMLParser", "CacheRefreshRate returned by service:" + v2 + "secs");
            return 1000 * Long.parseLong(v3);
            }
            catch ( Exception v6 )
            {
            v7 = new Object[1];
            v7[0] = v6;
            p.a("XMLParser", "CacheRefreshRate parsing seems to be failed. Ex=", v7);
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            p.a("XMLParser", "CacheRefreshRate parsing seems to be failed. Hence returning -1");
            return -1;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    public String a(String p0, String p1)
    {
      String Text = null;
      java.io.ByteArrayInputStream v5 = null;
      org.xmlpull.v1.XmlPullParserFactory v6 = null; // RETVAL
      org.xmlpull.v1.XmlPullParser v7 = null;
      int i = 0;
      Object v10 = null;
      Object v11 = null;
      Throwable _cv_1 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              Text = null;
              if ( p0 == null || p1 == null || "".equals(p0) || "".equals(p1) )
              return Text;
              _ehCatchPc = 1;
              v5 = new java.io.ByteArrayInputStream(p1.getBytes("UTF-8"));
              try
              {
              v6 = XmlPullParserFactory.newInstance();
              v6.setNamespaceAware(true);
              v7 = v6.newPullParser();
              v7.setInput(v5, null);
              for ( i = v7.getEventType(); i != 1; i = v7.next() )
              {
              if ( i == 2 && p0.equals(v7.getName()) )
              {
              v7.next();
              Text = v7.getText();
              try
              {
              v5.close();
              }
              catch ( java.io.IOException e )
              {
              }
              return Text;
              }
              }
              try
              {
              v5.close();
              }
              catch ( java.io.IOException e )
              {
              }
              return Text;
              }
              catch ( Exception e )
              {
              { _pc = 2; continue _sm; }
              }
              catch ( Throwable v12 )
              {
              v11 = v12;
              { _pc = 4; continue _sm; }
              }
              



            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              v5 = null;
              _pc = 2;
              continue _sm;
            case 2:
              if ( v5 != null )
              {
              try
              {
              v5.close();
              }
              catch ( java.io.IOException e2 )
              {
              }
              }
              return Text;
            case 3:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v10 = _cv_1;
              v5 = null;
              v11 = v10;
              _pc = 4;
              continue _sm;
            case 4:
              if ( v5 != null )
              {
              try
              {
              v5.close();
              }
              catch ( java.io.IOException e )
              {
              }
              }
              throw (Throwable)v11;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              throw new IllegalStateException("Unreachable");
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    protected String a(org.xmlpull.v1.XmlPullParser p0, String p1) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      String result; // RETVAL
    
      p0.require(2, a, p1);
      result = this.b(p0);
      p0.require(3, a, p1);
      return result;
    }

    protected void a(org.xmlpull.v1.XmlPullParser p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      int v2;
      if ( p0.getEventType() != 2 )
        throw new IllegalStateException();
      v2 = 1;
      while ( v2 != 0 )
      {
        switch ( p0.next() )
        {
          case 2:
            ++v2;
            break;
          case 3:
            --v2;
            break;
          default:
            continue;
        }
      }
    }

    public String b(String p0)
    {
      try
      {
        return new com.amazon.device.associates.bk().a("message", p0);
      }
      catch ( Exception e )
      {
        return "Unknown Service Response";
      }
    }

    public int c(String p0)
 throws java.io.IOException, org.xmlpull.v1.XmlPullParserException {
      String v2; // RETVAL
      Object[] v6;
      try
      {
        v2 = new com.amazon.device.associates.bk().a("statusCode", p0);
        if ( v2 == null )
          return -1;
        return Integer.parseInt(v2);
      }
      catch ( Exception v5 )
      {
        v6 = new Object[1];
        v6[0] = v5;
        p.a("XMLParser", "StatusCode parsing seems to be failed. Ex=", v6);
      }
      return -1;
    }

}
