// Decompiled from classes.dex (SourceFile: dp$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.graphics.Bitmap;
import android.view.View;
public final class dp$a extends android.os.AsyncTask {
    // Fields
    final com.google.android.gms.internal.dp a;
    private final android.webkit.WebView b;
    private android.graphics.Bitmap c;

    // Methods
    public dp$a(com.google.android.gms.internal.dp p0, android.webkit.WebView p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    private synchronized Boolean a()
    {
      int Width = 0;
      int Height = 0; // RETVAL
      int v3 = 0;
      int v6 = 0;
      int v7 = 0;
      int v8 = 0;
      Object v9 = null;
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
              Width = this.c.getWidth();
              Height = this.c.getHeight();
              v3 = Height;
              if ( Width == 0 || Height == 0 )
              return Boolean.valueOf(false);
              v6 = 0;
              v7 = 0;
              _ehEx = null;
              _ehCatchPc = 3;
              _pc = 1;
              continue _sm;
            case 1:
              if ( v6 < Width )
              {
              v8 = 0;
              { _pc = 6; continue _sm; }
              }
              return Boolean.valueOf((double)v7 / ((double)(Width * v3) / 100.0) > 0.1);
            case 2:
              _ehCatchPc = -1;
              _pc = 5;
              continue _sm;
            case 3:
              _ehCatchPc = -1;
              if ( !((_ehEx != null)) ) { _pc = 4; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v9 = _ehCaught;
              throw com.gameloft.android.DecompRT.sneakyThrow(v9);
            case 4:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 5;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              _pc = 6;
              continue _sm;
            case 6:
              if ( !(v8 >= v3) ) { _pc = 7; continue _sm; }
              _pc = 8;
              continue _sm;
            case 7:
              if ( this.c.getPixel(v6, v8) != 0 )
              ++v7;
              v8 += 10;
              _pc = 2;
              continue _sm;
            case 8:
              v6 += 10;
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

    private void a(Boolean p0)
 throws com.google.android.gms.internal.Decomp_do$a {
      dp.c(this.a);
      if ( p0.booleanValue() || this.a.c() || dp.d(this.a) <= 0 )
      {
        this.a.c = p0.booleanValue();
        dp.e(this.a).a(this.a.a);
      }
      else if ( dp.d(this.a) > 0 )
      {
        if ( ev.p(2) )
          ev.z("Ad not detected, scheduling another run.");
        dp.g(this.a).postDelayed((Runnable)this.a, dp.f(this.a));
      }
    }

    /* synthetic */ protected final Object doInBackground(Object[] p0)
    {
      return this.a();
    }

    /* synthetic */ protected final void onPostExecute(Object p0)
    {
      try {
      Boolean v2;
      v2 = (Boolean)p0;
      dp.c(this.a);
      if ( v2.booleanValue() || this.a.c() || dp.d(this.a) <= 0 )
      {
        this.a.c = v2.booleanValue();
        dp.e(this.a).a(this.a.a);
      }
      else if ( dp.d(this.a) > 0 )
      {
        if ( ev.p(2) )
          ev.z("Ad not detected, scheduling another run.");
        dp.g(this.a).postDelayed((Runnable)this.a, dp.f(this.a));
      }
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

    protected final synchronized void onPreExecute()
    {
      this.c = Bitmap.createBitmap(dp.a(this.a), dp.b(this.a), Bitmap.Config.ARGB_8888);
      this.b.setVisibility(0);
      this.b.measure(View.MeasureSpec.makeMeasureSpec(dp.a(this.a), 0), View.MeasureSpec.makeMeasureSpec(dp.b(this.a), 0));
      this.b.layout(0, 0, dp.a(this.a), dp.b(this.a));
      this.b.draw(new android.graphics.Canvas(this.c));
      this.b.invalidate();
    }

}
