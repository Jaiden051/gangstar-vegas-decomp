// Decompiled from classes.dex (SourceFile: ac.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.util.Base64;
class ac extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;
    private static final java.lang.String c;
    private static final java.lang.String d;
    private static final java.lang.String e;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.E.toString();
      b = com.google.android.gms.internal.b.n.toString();
      c = com.google.android.gms.internal.b.bn.toString();
      d = com.google.android.gms.internal.b.aM.toString();
      e = com.google.android.gms.internal.b.bv.toString();
    }

    public ac()
    {
      super(a, new String[] { b });
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      com.google.android.gms.internal.d$a v2 = null;
      String v5 = null;
      com.google.android.gms.internal.d$a v6 = null;
      String v7 = null;
      com.google.android.gms.internal.d$a v8 = null;
      String v9 = null;
      com.google.android.gms.internal.d$a v10 = null;
      int v11 = 0;
      byte[] Bytes = null;
      String v13 = null;
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
              v2 = (com.google.android.gms.internal.d$a)p0.get(b);
              if ( v2 == null || v2 == dh.mY() )
              return dh.mY();
              v5 = dh.j(v2);
              v6 = (com.google.android.gms.internal.d$a)p0.get(d);
              if ( v6 != null )
              v7 = dh.j(v6);
              else
              v7 = "text";
              v8 = (com.google.android.gms.internal.d$a)p0.get(e);
              if ( v8 != null )
              v9 = dh.j(v8);
              else
              v9 = "base16";
              v10 = (com.google.android.gms.internal.d$a)p0.get(c);
              if ( v10 != null && dh.n(v10).booleanValue() )
              v11 = 3;
              else
              v11 = 2;
              _ehCatchPc = 2;
              if ( !"text".equals(v7) )
              {
              if ( "base16".equals(v7) )
              {
              Bytes = j.bE(v5);
              }
              else if ( "base64".equals(v7) )
              {
              Bytes = Base64.decode(v5, v11);
              }
              else
              {
              if ( !"base64url".equals(v7) )
              {
              bh.A("Encode: unknown input format: " + v7);
              return dh.mY();
              }
              Bytes = Base64.decode(v5, v11 | 8);
              }
              { _pc = 4; continue _sm; }
              }
              Bytes = v5.getBytes();
              _pc = 1;
              continue _sm;
            case 1:
              if ( "base16".equals(v9) )
              {
              v13 = j.d(Bytes);
              }
              else if ( "base64".equals(v9) )
              {
              v13 = Base64.encodeToString(Bytes, v11);
              }
              else
              {
              if ( !"base64url".equals(v9) )
              {
              bh.A("Encode: unknown output format: " + v9);
              return dh.mY();
              }
              v13 = Base64.encodeToString(Bytes, v11 | 8);
              }
              return dh.r(v13);
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof IllegalArgumentException) ) { _pc = 3; continue _sm; }
              bh.A("Encode: invalid input:");
              return dh.mY();
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
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

    public final boolean a()
    {
      return true;
    }

}
