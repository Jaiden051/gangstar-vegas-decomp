// Decompiled from classes.dex (SourceFile: bc$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.net.Uri;
final class bc$3 implements com.google.android.gms.internal.bd {
    // Methods
    bc$3()
    {
      super();
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
    {
      String v3 = null;
      android.net.Uri v4 = null;
      com.google.android.gms.internal.l v5 = null; // RETVAL
      com.google.android.gms.internal.l v6 = null;
      android.net.Uri v7 = null;
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
              v3 = (String)p1.get("u");
              if ( v3 == null )
              {
              ev.D("URL missing from click GMSG.");
              return;
              }
              v4 = Uri.parse(v3);
              _ehCatchPc = 2;
              v5 = p0.g();
              v6 = v5;
              if ( v5 == null || !v5.a(v4) )
              { _pc = 4; continue _sm; }
              v7 = v6.a(v4, p0.getContext());
              _pc = 1;
              continue _sm;
            case 1:
              new com.google.android.gms.internal.et(p0.getContext(), p0.h().b, v7.toString()).e();
              return;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof com.google.android.gms.internal.m) ) { _pc = 3; continue _sm; }
              ev.D("Unable to append parameter to URL: " + v3);
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              v7 = v4;
              _pc = 1;
              continue _sm;
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
