// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import com.google.android.gms.internal.it;
import java.util.UUID;
class h implements com.google.android.gms.analytics.m {
    // Fields
    private static com.google.android.gms.analytics.h a;
    private static final java.lang.Object b;
    private final android.content.Context c;
    private java.lang.String d;
    private boolean e;
    private final java.lang.Object f;

    // Methods
    static
    {
      b = new Object();
    }

    private h(android.content.Context p0)
    {
      super();
      this.e = false;
      this.f = new Object();
      this.c = p0;
      new com.google.android.gms.analytics.h$1(this, "client_id_fetcher").start();
    }

    public static boolean J(String p0)
    {
      return "&cid".equals(p0);
    }

    /* synthetic */ static Object a(com.google.android.gms.analytics.h p0)
    {
      return p0.f;
    }

    /* synthetic */ static String a(com.google.android.gms.analytics.h p0, String p1)
    {
      p0.d = p1;
      return p1;
    }

    /* synthetic */ static boolean a(com.google.android.gms.analytics.h p0, boolean p1)
    {
      p0.e = p1;
      return p1;
    }

    private boolean b(String p0)
    {
      boolean v2;
      java.io.FileOutputStream v3;
      v2 = false;
      try
      {
        aa.C("Storing clientId.");
        v3 = this.c.openFileOutput("gaClientId", 0);
        v3.write(p0.getBytes());
        v3.close();
        return true;
      }
      catch ( java.io.FileNotFoundException e )
      {
        aa.A("Error creating clientId file.");
        return v2;
      }
      catch ( java.io.IOException e )
      {
        aa.A("Error writing to clientId file.");
      }
      return v2;
    }

    private String c()
    {
      Object f = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( !(this.e) ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            aa.C("Loaded clientId");
            return this.d;
          case 2:
            f = this.f;
            synchronized ( f )
            {
            if ( !this.e )
            {
            aa.C("Waiting for clientId to load");
            do
            {
            try
            {
            this.f.wait();
            continue;
            }
            catch ( InterruptedException v3 )
            {
            aa.A("Exception while waiting for clientId: " + v3);
            }
            }
            while ( !this.e );
            }
            { _pc = 1; continue _sm; }
            }
        }
      }
}

    public static com.google.android.gms.analytics.h cq()
    {
      Object v0;
      v0 = b;
      synchronized ( v0 )
      {
        return a;
      }
    }

    private String d()
    {
      String v1; // RETVAL
      String v2;
      v1 = UUID.randomUUID().toString().toLowerCase();
      v2 = v1;
      try
      {
        if ( !this.b(v1) )
          return "0";
        return v2;
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    private void e()
    {
      new com.google.android.gms.analytics.h$1(this, "client_id_fetcher").start();
    }

    public static void r(android.content.Context p0)
    {
      Object v1;
      v1 = b;
      synchronized ( v1 )
      {
        if ( a == null )
          a = new com.google.android.gms.analytics.h(p0);
      }
    }

    final String a()
    {
      Object f;
      f = this.f;
      synchronized ( f )
      {
        this.d = this.d();
        return this.d;
      }
    }

    public final String a(String p0)
    {
      if ( "&cid".equals(p0) )
        return this.c();
      else
        return null;
    }

    final String b()
    {
      String v1 = null;
      java.io.FileInputStream v2 = null;
      byte[] v3 = null;
      int v4 = 0;
      String v6 = null;
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
              v1 = null;
              _ehCatchPc = 6;
              v2 = this.c.openFileInput("gaClientId");
              v3 = new byte[128];
              v4 = v2.read(v3, 0, 128);
              if ( v2.available() > 0 )
              {
              aa.A("clientId file seems corrupted, deleting it.");
              v2.close();
              this.c.deleteFile("gaClientId");
              { _pc = 9; continue _sm; }
              }
              if ( !(v4 > 0) ) { _pc = 5; continue _sm; }
              v6 = new String(v3, 0, v4);
              _ehCatchPc = 1;
              v2.close();
              aa.C("Loaded client id from disk.");
              v1 = v6;
              _pc = 9;
              continue _sm;
            case 1:
              _ehCatchPc = 6;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.FileNotFoundException) ) { _pc = 2; continue _sm; }
              v1 = v6;
              _pc = 9;
              continue _sm;
            case 2:
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 4; continue _sm; }
              v1 = v6;
              _pc = 3;
              continue _sm;
            case 3:
              aa.A("Error reading clientId file, deleting it.");
              this.c.deleteFile("gaClientId");
              _pc = 9;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              aa.A("clientId file seems empty, deleting it.");
              v2.close();
              this.c.deleteFile("gaClientId");
              _ehCatchPc = -1;
              _pc = 9;
              continue _sm;
            case 6:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.FileNotFoundException) ) { _pc = 7; continue _sm; }
              _pc = 9;
              continue _sm;
            case 7:
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 8; continue _sm; }
              _pc = 3;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 9:
              if ( v1 == null )
              return this.d();
              return v1;
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

}
