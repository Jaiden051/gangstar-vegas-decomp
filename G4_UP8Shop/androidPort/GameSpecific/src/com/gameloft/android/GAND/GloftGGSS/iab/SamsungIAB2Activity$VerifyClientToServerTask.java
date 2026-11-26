// Decompiled from classes.dex (SourceFile: SamsungIAB2Activity$VerifyClientToServerTask.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
final class SamsungIAB2Activity$VerifyClientToServerTask extends android.os.AsyncTask {
    // Fields
    com.gameloft.android.GAND.GloftGGSS.iab.q a;
    com.gameloft.android.GAND.GloftGGSS.iab.an b;
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity c;

    // Methods
    public SamsungIAB2Activity$VerifyClientToServerTask(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0,
            com.gameloft.android.GAND.GloftGGSS.iab.q p1)
    {
      super();
      this.c = p0;
      this.a = null;
      this.b = null;
      this.a = p1;
    
    }

    private Boolean a()
    {
      StringBuffer v1;
      int v2;
      String v3; // RETVAL
      String v4;
      try
      {
        v1 = new StringBuffer();
        v1.append(this.a.a());
        v1.append("&purchaseID=" + this.a.e());
        v2 = 0;
        do
        {
          v3 = getHttpGetData$782597e1(v1.toString());
          v4 = v3;
          ++v2;
        }
        while ( v2 < 3 && TextUtils.isEmpty(v3) );
        if ( v4 != null && !TextUtils.isEmpty(v4) )
        {
          this.b = new com.gameloft.android.GAND.GloftGGSS.iab.an(v4);
          if ( this.b != null && "true".equals(this.b.b()) && this.a.d().equals(this.b.a()) )
            return Boolean.valueOf(true);
          else
            return Boolean.valueOf(false);
        }
        else
        {
          return Boolean.valueOf(false);
        }
      }
      catch ( Exception e )
      {
        return Boolean.valueOf(false);
      }
    }

    private void a(Boolean p0)
    {
      if ( p0.booleanValue() )
        this.c.a(0, true);
      else
        this.c.a(2, true);
    }

    private static String getHttpGetData$782597e1(String p0)
    {
      java.io.ByteArrayOutputStream v1 = null;
      java.net.URLConnection v2 = null; // RETVAL
      java.net.HttpURLConnection v3 = null;
      java.io.InputStream InputStream = null;
      java.io.BufferedInputStream v5 = null;
      java.io.ByteArrayOutputStream v6 = null;
      byte[] i = null;
      int v8 = 0; // RETVAL
      String v9 = null;
      java.io.ByteArrayOutputStream v11 = null;
      Object v13 = null;
      Object v14 = null;
      Throwable _cv_1 = null;
      Throwable _cv_2 = null;
      Throwable _cv_3 = null;
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
              _ehCatchPc = 10;
              v2 = new java.net.URL(p0).openConnection();
              v2.setConnectTimeout(10000);
              v2.setReadTimeout(10000);
              v3 = (java.net.HttpURLConnection)v2;
              v3.setRequestMethod("GET");
              v3.connect();
              if ( v3.getResponseCode() != 200 )
              {
              v5 = null;
              v9 = null;
              { _pc = 1; continue _sm; }
              }
              InputStream = v3.getInputStream();
              v5 = new java.io.BufferedInputStream(InputStream, 4096);
              _ehCatchPc = 6;
              v6 = new java.io.ByteArrayOutputStream(4096);
              _ehCatchPc = 2;
              for ( i = new byte[4096]; ; v6.write(i, 0, v8) )
              {
              v8 = v5.read(i, 0, 4096);
              if ( v8 == -1 )
              break;
              }
              v6.flush();
              v11 = v6;
              v9 = v6.toString();
              v1 = v11;
              _pc = 1;
              continue _sm;
            case 1:
              if ( v5 != null )
              {
              try
              {
              v5.close();
              }
              catch ( Exception e )
              {
              }
              }
              if ( v1 != null )
              {
              try
              {
              v1.close();
              }
              catch ( java.io.IOException e )
              {
              }
              }
              return v9;
            case 2:
              _ehCatchPc = 6;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _pc = 11;
              continue _sm;
            case 3:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 4; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v13 = _cv_1;
              v1 = v6;
              v14 = v13;
              _pc = 13;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              _ehCatchPc = 10;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 7; continue _sm; }
              v6 = null;
              _pc = 11;
              continue _sm;
            case 7:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 8; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v14 = _cv_2;
              _pc = 13;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 10:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 12; continue _sm; }
              v6 = null;
              v5 = null;
              _pc = 11;
              continue _sm;
            case 11:
              if ( v5 != null )
              {
              try
              {
              v5.close();
              }
              catch ( Exception e2 )
              {
              }
              }
              if ( v6 != null )
              {
              try
              {
              v6.close();
              return null;
              }
              catch ( java.io.IOException e2 )
              {
              }
              }
              return null;
            case 12:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 14; continue _sm; }
              _cv_3 = (Throwable)_ehCaught;
              v14 = _cv_3;
              v5 = null;
              _pc = 13;
              continue _sm;
            case 13:
              if ( v5 != null )
              {
              try
              {
              v5.close();
              }
              catch ( Exception e )
              {
              }
              }
              if ( v1 != null )
              {
              try
              {
              v1.close();
              }
              catch ( java.io.IOException e )
              {
              }
              }
              throw com.gameloft.android.DecompRT.sneakyThrow(v14);
            case 14:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
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

    /* synthetic */ protected final Object doInBackground(Object[] p0)
    {
      return this.a();
    }

    protected final void onCancelled()
    {
      this.c.a(1, true);
      super.onCancelled();
    }

    /* synthetic */ protected final void onPostExecute(Object p0)
    {
      if ( ((Boolean)p0).booleanValue() )
        this.c.a(0, true);
      else
        this.c.a(2, true);
    }

    protected final void onPreExecute()
    {
      super.onPreExecute();
      if ( this.a == null || TextUtils.isEmpty(this.a.a()) || TextUtils.isEmpty(this.a.e()) || TextUtils.isEmpty(this.a.d()) )
        this.cancel(true);
    }

}
