// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Xml;
public class h extends com.amazon.device.associates.al {
    // Methods
    public h()
    {
      super("PO-h.db", 604800000);
    }

    private com.amazon.device.associates.bt a(String p0) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      com.amazon.device.associates.bt v2 = null;
      org.xmlpull.v1.XmlPullParser v3;
      String Text = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v2 = null;
            v3 = Xml.newPullParser();
            v3.setFeature("http://xmlpull.org/v1/doc/features.html#process-namespaces", false);
            v3.setInput(new java.io.StringReader(p0));
            v3.nextTag();
            v3.require(2, null, "PopoverTemplatesOutput");
            while ( v3.next() != 1 )
            {
            if ( v3.getEventType() == 2 && v3.getName().equals("templateURL") )
            {
            v3.next();
            Text = v3.getText();
            { _pc = 1; continue _sm; }
            }
            }
            Text = null;
            _pc = 1;
            continue _sm;
          }
          case 1: {
            if ( Text != null )
            return new com.amazon.device.associates.bt(Text);
            return v2;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    protected com.amazon.device.associates.bt a()
    {
      StringBuilder v1 = null;
      java.io.BufferedReader v2 = null;
      String Line = null; // RETVAL
      Object[] v5 = null;
      Object[] v8 = null;
      Object[] v10 = null;
      Object v11 = null;
      Object[] v13 = null;
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
              v1 = new StringBuilder();
              v2 = new java.io.BufferedReader(new java.io.InputStreamReader(this.getClass().getResourceAsStream("popover.data")));
              _pc = 1;
              continue _sm;
            case 1:
              _ehEx = null;
              _ehCatchPc = 3;
              try
              {
              Line = v2.readLine();
              if ( Line == null )
              {
              try
              {
              v2.close();
              }
              catch ( java.io.IOException v7 )
              {
              v7.printStackTrace();
              v8 = new Object[1];
              v8[0] = v7;
              p.c("Error", "Error while closing HTML file.", v8);
              }
              return new com.amazon.device.associates.bt(v1.toString());
              }
              v1.append(Line).append("\n");
              }
              catch ( Exception v4 )
              {
              v4.printStackTrace();
              v5 = new Object[1];
              v5[0] = v4;
              p.c("Error", "Error while reading HTML file.", v5);
              { _pc = 6; continue _sm; }
              }
              
              _pc = 1;
              continue _sm;
            case 3:
              _ehCatchPc = -1;
              if ( !((_ehEx != null)) ) { _pc = 4; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v11 = _ehCaught;
              try
              {
              v2.close();
              }
              catch ( java.io.IOException v12 )
              {
              v12.printStackTrace();
              v13 = new Object[1];
              v13[0] = v12;
              p.c("Error", "Error while closing HTML file.", v13);
              }
              
              throw (Throwable)v11;
            case 4:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 5;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              _pc = 6;
              continue _sm;
            case 6:
              try
              {
              v2.close();
              return new com.amazon.device.associates.bt(v1.toString());
              }
              catch ( java.io.IOException v9 )
              {
              v9.printStackTrace();
              v10 = new Object[1];
              v10[0] = v9;
              p.c("Error", "Error while closing HTML file.", v10);
              }
              
              return new com.amazon.device.associates.bt(v1.toString());
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

    protected com.amazon.device.associates.bt a(com.amazon.device.associates.al<com.amazon.device.associates.bt>[] p0)
    {
      com.amazon.device.associates.al v2;
      com.amazon.device.associates.aq v3;
      Object[] v6;
      v2 = p0[0];
      try
      {
        v3 = new com.amazon.device.associates.aq("http://assoc-msdk-us.amazon-adsystem.com/getPopoverTemplates");
        v3.a("MarketplaceID", "ATVPDKIKX0DER");
        v3.a(s.a);
        if ( v3.b() == 200 )
        {
          v2.a = this.a(v3.a());
          v2.b(true);
          v2.a(true);
        }
        return (com.amazon.device.associates.bt)v2.a;
      }
      catch ( Exception v5 )
      {
        v6 = new Object[1];
        v6[0] = v5;
        p.c("PopoverHTMLTemplate", "Service call threw exception.", v6);
      }
      return (com.amazon.device.associates.bt)v2.a;
    }

    /* synthetic */ protected com.amazon.device.associates.bj b()
    {
      return this.a();
    }



    /* synthetic */ protected Object doInBackground(Object[] p0)
    {
      return this.a((com.amazon.device.associates.al[])p0);
    }

}
