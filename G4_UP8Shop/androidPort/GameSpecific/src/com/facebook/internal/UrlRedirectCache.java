// Decompiled from classes.dex (SourceFile: UrlRedirectCache.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.LoggingBehavior;
class UrlRedirectCache {
    // Fields
    private static final java.lang.String REDIRECT_CONTENT_TAG;
    static final java.lang.String TAG;
    private static volatile com.facebook.internal.FileLruCache urlRedirectCache;

    // Methods
    static
    {
      TAG = com.facebook.internal.UrlRedirectCache.class.getSimpleName();
      REDIRECT_CONTENT_TAG = TAG + "_Redirect";
    }

    UrlRedirectCache()
    {
      super();
    }

    static void cacheUriRedirect(android.content.Context p0, java.net.URI p1, java.net.URI p2)
    {
      java.io.Closeable v3 = null;
      java.io.OutputStream v4 = null; // RETVAL
      Object v6 = null;
      Object v8 = null;
      java.io.Closeable v9 = null;
      Object v10 = null;
      Throwable _cv_1 = null;
      Throwable _cv_2 = null;
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
              if ( p1 == null || p2 == null )
              return;
              v3 = null;
              _ehCatchPc = 6;
              v4 = getCache(p0).openPutStream(p1.toString(), REDIRECT_CONTENT_TAG);
              v3 = v4;
              _ehCatchPc = 1;
              v4.write(p2.toString().getBytes());
              Utility.closeQuietly(v3);
              _ehCatchPc = 6;
              _pc = 5;
              continue _sm;
            case 1:
              _ehCatchPc = 6;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 3; continue _sm; }
              _pc = 2;
              continue _sm;
            case 2:
              Utility.closeQuietly(v3);
              _pc = 5;
              continue _sm;
            case 3:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 4; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v8 = _cv_1;
              v9 = v4;
              v10 = (java.io.InputStreamReader)v8;
              _pc = 8;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _ehCatchPc = -1;
              _pc = 10;
              continue _sm;
            case 6:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 7; continue _sm; }
              _pc = 2;
              continue _sm;
            case 7:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 9; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v6 = _cv_2;
              v9 = null;
              v10 = v6;
              _pc = 8;
              continue _sm;
            case 8:
              Utility.closeQuietly(v9);
              throw com.gameloft.android.DecompRT.sneakyThrow(v10);
            case 9:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 10:
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

    static void clearCache(android.content.Context p0)
    {
      getCache(p0).clearCache();
    }

    static synchronized com.facebook.internal.FileLruCache getCache(android.content.Context p0)
    {
      com.facebook.internal.FileLruCache v1;
      v1 = urlRedirectCache;
      if ( v1 == null )
        urlRedirectCache = new com.facebook.internal.FileLruCache(p0.getApplicationContext(), TAG, new com.facebook.internal.FileLruCache$Limits());
      return urlRedirectCache;
    }

    static java.net.URI getRedirectedUri(android.content.Context p0, java.net.URI p1)
    {
      java.net.URI v2 = null;
      int v3 = 0;
      String v5 = null;
      com.facebook.internal.FileLruCache Cache = null;
      String v7 = null;
      java.io.Closeable v8 = null;
      java.io.InputStream v9 = null; // RETVAL
      java.io.InputStreamReader v10 = null;
      char[] v11 = null;
      StringBuilder i = null;
      int v13 = 0; // RETVAL
      Object v15 = null;
      Object v16 = null;
      Throwable _cv_1 = null;
      Throwable _cv_2 = null;
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
              v2 = null;
              v3 = 0;
              if ( p1 == null )
              return v2;
              v5 = p1.toString();
              _ehCatchPc = 15;
              Cache = getCache(p0);
              v7 = v5;
              v8 = null;
              _pc = 1;
              continue _sm;
            case 1:
              _ehEx = null;
              _ehCatchPc = 8;
              v9 = Cache.get(v7, REDIRECT_CONTENT_TAG);
              if ( v9 == null )
              {
              Utility.closeQuietly(v8);
              if ( v3 != 0 )
              return new java.net.URI(v7);
              return v2;
              }
              v10 = new java.io.InputStreamReader(v9);
              _ehCatchPc = 2;
              v11 = new char[128];
              for ( i = new StringBuilder(); ; i.append(v11, 0, v13) )
              {
              v13 = v10.read(v11, 0, v11.length);
              if ( v13 <= 0 )
              break;
              }
              Utility.closeQuietly(v10);
              v7 = i.toString();
              v8 = v10;
              v3 = 1;
              _pc = 1;
              continue _sm;
            case 2:
              _ehCatchPc = 15;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.URISyntaxException) ) { _pc = 3; continue _sm; }
              _pc = 9;
              continue _sm;
            case 3:
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 4; continue _sm; }
              _pc = 11;
              continue _sm;
            case 4:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v16 = _cv_1;
              _pc = 18;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              _ehCatchPc = 15;
              if ( !((_ehEx != null && (_ehEx instanceof java.net.URISyntaxException))) ) { _pc = 10; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v10 = (java.io.InputStreamReader)v8;
              _pc = 9;
              continue _sm;
            case 9:
              Utility.closeQuietly(v10);
              return v2;
            case 10:
              if ( !((_ehEx != null && (_ehEx instanceof java.io.IOException))) ) { _pc = 12; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v10 = (java.io.InputStreamReader)v8;
              _pc = 11;
              continue _sm;
            case 11:
              Utility.closeQuietly(v10);
              return v2;
            case 12:
              if ( !((_ehEx != null)) ) { _pc = 13; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v16 = _ehCaught;
              v10 = (java.io.InputStreamReader)v8;
              _pc = 18;
              continue _sm;
            case 13:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 14;
              continue _sm;
            case 14:
              _ehCatchPc = 15;
              return v2;
            case 15:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.URISyntaxException) ) { _pc = 16; continue _sm; }
              v10 = null;
              _pc = 9;
              continue _sm;
            case 16:
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 17; continue _sm; }
              v10 = null;
              _pc = 11;
              continue _sm;
            case 17:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 19; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v15 = _cv_2;
              v10 = null;
              v16 = v15;
              _pc = 18;
              continue _sm;
            case 18:
              Utility.closeQuietly(v10);
              throw com.gameloft.android.DecompRT.sneakyThrow(v16);
            case 19:
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

}
