// Decompiled from classes.dex (SourceFile: cp.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import com.google.android.gms.internal.c$f;
import com.google.android.gms.internal.lf$a;
import com.google.android.gms.internal.mf;
import java.util.concurrent.Executors;
class cp implements com.google.android.gms.tagmanager.o$f {
    // Fields
    private final android.content.Context a;
    private final java.lang.String b;
    private final java.util.concurrent.ExecutorService c;
    private com.google.android.gms.tagmanager.bg d;

    // Methods
    cp(android.content.Context p0, String p1)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = Executors.newSingleThreadExecutor();
    }

    private static com.google.android.gms.tagmanager.cq$c a(java.io.ByteArrayOutputStream p0)
    {
      com.google.android.gms.tagmanager.cq$c v1;
      v1 = null;
      try
      {
        return ba.bY(p0.toString("UTF-8"));
      }
      catch ( java.io.UnsupportedEncodingException e )
      {
        bh.z("Tried to convert binary resource to string for JSON parsing; not UTF-8 format");
        return v1;
      }
      catch ( org.json.JSONException e )
      {
        bh.D("Resource is a UTF-8 encoded string but doesn't contain a JSON container");
      }
      return v1;
    }

    private java.io.File c()
    {
      return new java.io.File(this.a.getDir("google_tagmanager", 0), "resource_" + this.b);
    }

    private static com.google.android.gms.tagmanager.cq$c k(byte[] p0)
    {
      com.google.android.gms.tagmanager.cq$c v1;
      v1 = null;
      try
      {
        return cq.b(c$f.a(p0));
      }
      catch ( com.google.android.gms.internal.me e )
      {
        bh.D("Resource doesn't contain a binary container");
        return v1;
      }
      catch ( com.google.android.gms.tagmanager.cq$g e )
      {
        bh.D("Resource doesn't contain a binary container");
      }
      return v1;
    }

    public final com.google.android.gms.tagmanager.cq$c a(int p0)
    {
      String v2;
      java.io.ByteArrayOutputStream v3;
      com.google.android.gms.tagmanager.cq$c v4;
      v2 = "Atttempting to load container from resource ID " + p0;
      bh.C(v2);
      try
      {
        v3 = new java.io.ByteArrayOutputStream();
        cq.b(this.a.getResources().openRawResource(p0), v3);
        v4 = a(v3);
        if ( v4 == null )
          return k(v3.toByteArray());
        return v4;
      }
      catch ( java.io.IOException e )
      {
        bh.D("Error reading default container resource with ID " + p0);
        return null;
      }
      catch ( android.content.res.Resources.NotFoundException e )
      {
        bh.D("No default container resource found.");
        return null;
      }
    }

    public final void a()
    {
      this.c.execute((Runnable)new com.google.android.gms.tagmanager.cp$1(this));
    }

    public final void a(com.google.android.gms.internal.lf$a p0)
    {
      this.c.execute((Runnable)new com.google.android.gms.tagmanager.cp$2(this, p0));
    }

    public final void a(com.google.android.gms.tagmanager.bg<com.google.android.gms.internal.lf$a> p0)
    {
      this.d = p0;
    }

    final void b()
    {
      java.io.FileInputStream v1 = null;
      java.io.ByteArrayOutputStream v2 = null;
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
              if ( this.d == null )
              throw new IllegalStateException("callback must be set before execute");
              this.d.a();
              bh.C("Start loading resource from disk ...");
              if ( (cd.lY().a() == cd$a.b || cd.lY().a() == cd$a.c) && this.b.equals(cd.lY().c()) )
              {
              this.d.b();
              return;
              }
              _ehCatchPc = 5;
              v1 = new java.io.FileInputStream(this.c());
              _ehCatchPc = 2;
              try
              {
              v2 = new java.io.ByteArrayOutputStream();
              cq.b(v1, v2);
              this.d.a(lf$a.l(v2.toByteArray()));
              try
              {
              v1.close();
              }
              catch ( java.io.IOException e )
              {
              bh.D("error closing stream for reading resource from disk");
              }
              }
              catch ( java.io.IOException e )
              {
              bh.D("error reading resource from disk");
              this.d.b();
              { _pc = 4; continue _sm; }
              }
              
              _pc = 1;
              continue _sm;
            case 1:
              bh.C("Load resource from disk finished.");
              return;
            case 2:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              try
              {
              v1.close();
              }
              catch ( java.io.IOException e )
              {
              bh.D("error closing stream for reading resource from disk");
              }
              
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              try
              {
              v1.close();
              }
              catch ( java.io.IOException e )
              {
              bh.D("error closing stream for reading resource from disk");
              }
              
              _pc = 1;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.FileNotFoundException) ) { _pc = 6; continue _sm; }
              bh.z("resource not on disk");
              this.d.b();
              _pc = 7;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              return;
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

    final boolean b(com.google.android.gms.internal.lf$a p0)
    {
      boolean v2;
      java.io.File v3; // RETVAL
      java.io.FileOutputStream v4;
      v2 = false;
      v3 = this.c();
      try
      {
        v4 = new java.io.FileOutputStream(v3);
        try
        {
          try
          {
            v4.write(mf.d(p0));
            try
            {
              v4.close();
              return true;
            }
            catch ( java.io.IOException e )
            {
              bh.D("error closing stream for writing resource to disk");
            }
            return true;
          }
          catch ( java.io.IOException e )
          {
            bh.D("Error writing resource to disk. Removing resource from disk.");
            v3.delete();
          }
        }
        catch ( Throwable v6 )
        {
          try
          {
            v4.close();
          }
          catch ( java.io.IOException e )
          {
            bh.D("error closing stream for writing resource to disk");
          }
          throw v6;
        }
        try
        {
          v4.close();
        }
        catch ( java.io.IOException e )
        {
          bh.D("error closing stream for writing resource to disk");
        }
        return v2;
      }
      catch ( java.io.FileNotFoundException e )
      {
        bh.A("Error opening resource file for writing");
      }
      return v2;
    }

    public final synchronized void d()
    {
      this.c.shutdown();
    }

}
