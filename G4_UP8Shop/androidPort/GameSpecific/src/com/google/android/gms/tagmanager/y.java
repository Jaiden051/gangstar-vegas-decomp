// Decompiled from classes.dex (SourceFile: y.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.net.URLEncoder;
class y implements com.google.android.gms.tagmanager.aq {
    // Fields
    private static com.google.android.gms.tagmanager.y a;
    private static final java.lang.Object b;
    private java.lang.String c;
    private java.lang.String d;
    private com.google.android.gms.tagmanager.cf e;
    private com.google.android.gms.tagmanager.ar f;

    // Methods
    static
    {
      b = new Object();
    }

    private y(android.content.Context p0)
    {
      this(as.M(p0), (com.google.android.gms.tagmanager.cf)new com.google.android.gms.tagmanager.cv());
    }

    private y(com.google.android.gms.tagmanager.ar p0, com.google.android.gms.tagmanager.cf p1)
    {
      super();
      this.f = p0;
      this.e = p1;
    }

    public static com.google.android.gms.tagmanager.aq K(android.content.Context p0)
    {
      Object v1;
      v1 = b;
      synchronized ( v1 )
      {
        if ( a == null )
          a = new com.google.android.gms.tagmanager.y(p0);
        return (com.google.android.gms.tagmanager.aq)a;
      }
    }

    public final boolean a(String p0)
    {
      boolean v2 = false;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = false;
            if ( !this.e.a() )
            {
            bh.D("Too many urls sent too quickly with the TagManagerSender, rate limiting invoked.");
            return v2;
            }
            if ( !(this.c == null || this.d == null) ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            this.f.a(p0);
            return true;
          case 2:
            try
            {
            p0 = this.c + "?" + this.d + "=" + URLEncoder.encode(p0, "UTF-8");
            bh.C("Sending wrapped url hit: " + p0);
            { _pc = 1; continue _sm; }
            }
            catch ( java.io.UnsupportedEncodingException v4 )
            {
            bh.c("Error wrapping URL for testing.", v4);
            }
            
            return v2;
        }
      }
}

}
