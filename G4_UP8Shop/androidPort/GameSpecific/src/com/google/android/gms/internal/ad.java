// Decompiled from classes.dex (SourceFile: ad.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.concurrent.TimeUnit;
public final class ad implements android.view.ViewTreeObserver.OnGlobalLayoutListener, android.view.ViewTreeObserver.OnScrollChangedListener {
    // Fields
    private static final long m;
    private final java.lang.Object a;
    private final java.lang.ref.WeakReference b;
    private java.lang.ref.WeakReference c;
    private final java.lang.ref.WeakReference d;
    private final com.google.android.gms.internal.ab e;
    private final android.content.Context f;
    private final com.google.android.gms.internal.af g;
    private boolean h;
    private final android.view.WindowManager i;
    private final android.os.PowerManager j;
    private final android.app.KeyguardManager k;
    private com.google.android.gms.internal.ae l;
    private boolean n;
    private boolean o;
    private long p;
    private boolean q;
    private android.content.BroadcastReceiver r;
    private java.util.HashSet s;

    // Methods
    static
    {
      m = TimeUnit.MILLISECONDS.toNanos(100);
    }

    public ad(com.google.android.gms.internal.am p0, com.google.android.gms.internal.eg p1)
    {
      this(p0, p1, p1.b.h(), p1.b, (com.google.android.gms.internal.af)new com.google.android.gms.internal.ag(p1.b.getContext(), p1.b.h()));
    }

    private ad(
            com.google.android.gms.internal.am p0,
            com.google.android.gms.internal.eg p1,
            com.google.android.gms.internal.ew p2,
            android.view.View p3,
            com.google.android.gms.internal.af p4)
    {
      super();
      com.google.android.gms.internal.af g;
      this.a = new Object();
      this.n = false;
      this.o = false;
      this.p = 0x8000000000000000L;
      this.s = new java.util.HashSet();
      this.b = new java.lang.ref.WeakReference(p1);
      this.d = new java.lang.ref.WeakReference(p3);
      this.c = new java.lang.ref.WeakReference(null);
      this.q = true;
      this.e = new com.google.android.gms.internal.ab(Integer.toString(p1.hashCode()), p2, p0.b, p1.j);
      this.g = p4;
      this.i = (android.view.WindowManager)p3.getContext().getSystemService("window");
      this.j = (android.os.PowerManager)p3.getContext().getApplicationContext().getSystemService("power");
      this.k = (android.app.KeyguardManager)p3.getContext().getSystemService("keyguard");
      this.f = p3.getContext().getApplicationContext();
      p4.a("http://googleads.g.doubleclick.net/mads/static/sdk/native/sdk-core-v40.html");
      this.g.a((com.google.android.gms.internal.af$a)new com.google.android.gms.internal.ad$1(this));
      g = this.g;
      g.a("/updateActiveView", (com.google.android.gms.internal.bd)new com.google.android.gms.internal.ad$3(this));
      g.a("/activeViewPingSent", (com.google.android.gms.internal.bd)new com.google.android.gms.internal.ad$4(this));
      g.a("/visibilityChanged", (com.google.android.gms.internal.bd)new com.google.android.gms.internal.ad$5(this));
      g.a("/viewabilityChanged", bc.a);
      ev.B("Tracking ad unit: " + this.e.d());
    
    }

    private static int a(int p0, android.util.DisplayMetrics p1)
    {
      return (int)((float)p0 / p1.density);
    }

    private org.json.JSONObject a(android.view.View p0)
 throws org.json.JSONException {
      boolean v2;
      int[] v3;
      org.json.JSONObject v4;
      android.util.DisplayMetrics DisplayMetrics;
      android.graphics.Rect v6;
      android.graphics.Rect v7;
      android.graphics.Rect v8;
      boolean GlobalVisibleRect;
      android.graphics.Rect v10;
      org.json.JSONObject v11;
      v2 = true;
      v3 = new int[2];
      p0.getLocationOnScreen(v3);
      p0.getLocationInWindow(new int[2]);
      v4 = this.l();
      DisplayMetrics = p0.getContext().getResources().getDisplayMetrics();
      v6 = new android.graphics.Rect();
      v6.left = v3[0];
      v6.top = v3[1];
      v6.right = v6.left + p0.getWidth();
      v6.bottom = v6.top + p0.getHeight();
      v7 = new android.graphics.Rect();
      v7.right = this.i.getDefaultDisplay().getWidth();
      v7.bottom = this.i.getDefaultDisplay().getHeight();
      v8 = new android.graphics.Rect();
      GlobalVisibleRect = p0.getGlobalVisibleRect(v8, null);
      v10 = new android.graphics.Rect();
      p0.getLocalVisibleRect(v10);
      v11 = v4.put("viewBox", new org.json.JSONObject().put("top", a(v7.top, DisplayMetrics)).put("bottom", a(v7.bottom, DisplayMetrics)).put("left", a(v7.left, DisplayMetrics)).put("right", a(v7.right, DisplayMetrics))).put("adBox", new org.json.JSONObject().put("top", a(v6.top, DisplayMetrics)).put("bottom", a(v6.bottom, DisplayMetrics)).put("left", a(v6.left, DisplayMetrics)).put("right", a(v6.right, DisplayMetrics))).put("globalVisibleBox", new org.json.JSONObject().put("top", a(v8.top, DisplayMetrics)).put("bottom", a(v8.bottom, DisplayMetrics)).put("left", a(v8.left, DisplayMetrics)).put("right", a(v8.right, DisplayMetrics))).put("localVisibleBox", new org.json.JSONObject().put("top", a(v10.top, DisplayMetrics)).put("bottom", a(v10.bottom, DisplayMetrics)).put("left", a(v10.left, DisplayMetrics)).put("right", a(v10.right, DisplayMetrics))).put("screenDensity", DisplayMetrics.density);
      if ( p0.getVisibility() != 0
        || !GlobalVisibleRect
        || !p0.isShown()
        || !this.j.isScreenOn()
        || this.k.inKeyguardRestrictedInputMode() )
      {
        v2 = false;
      }
      v11.put("isVisible", v2).put("isStopped", this.o).put("isPaused", this.n);
      return v4;
    }

    private static void a(com.google.android.gms.internal.af p0)
    {
      p0.a("http://googleads.g.doubleclick.net/mads/static/sdk/native/sdk-core-v40.html");
    }

    private void a(org.json.JSONObject p0)
 throws org.json.JSONException {
      org.json.JSONArray v2;
      org.json.JSONObject v3;
      v2 = new org.json.JSONArray();
      v3 = new org.json.JSONObject();
      v2.put(p0);
      v3.put("units", v2);
      this.g.a("AFMA_updateActiveView", v3);
    }

    private boolean a(android.view.View p0, boolean p1)
    {
      return p0.getVisibility() == 0 && p1 && p0.isShown() && this.j.isScreenOn() && !this.k.inKeyguardRestrictedInputMode();
    }

    /* synthetic */ static com.google.android.gms.internal.af b(com.google.android.gms.internal.ad p0)
    {
      return p0.g;
    }

    private void b(com.google.android.gms.internal.af p0)
    {
      p0.a("/updateActiveView", (com.google.android.gms.internal.bd)new com.google.android.gms.internal.ad$3(this));
      p0.a("/activeViewPingSent", (com.google.android.gms.internal.bd)new com.google.android.gms.internal.ad$4(this));
      p0.a("/visibilityChanged", (com.google.android.gms.internal.bd)new com.google.android.gms.internal.ad$5(this));
      p0.a("/viewabilityChanged", bc.a);
    }

    /* synthetic */ static boolean b(com.google.android.gms.internal.ad p0, boolean p1)
    {
      p0.h = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.internal.ab c(com.google.android.gms.internal.ad p0)
    {
      return p0.e;
    }

    protected static void c(com.google.android.gms.internal.af p0)
    {
      p0.b("/viewabilityChanged");
      p0.b("/visibilityChanged");
      p0.b("/activeViewPingSent");
      p0.b("/updateActiveView");
    }

    private void h()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        if ( this.r != null )
        {
          this.f.unregisterReceiver(this.r);
          this.r = null;
        }
      }
    }

    private void i()
    {
      if ( this.l != null )
        this.l.a(this);
    }

    private void j()
    {
      android.view.View v1;
      android.view.ViewTreeObserver v2;
      android.view.ViewTreeObserver ViewTreeObserver; // RETVAL
    
      v1 = (android.view.View)this.d.get();
      if ( v1 != null )
      {
        v2 = (android.view.ViewTreeObserver)this.c.get();
        ViewTreeObserver = v1.getViewTreeObserver();
        if ( ViewTreeObserver != v2 )
        {
          this.c = new java.lang.ref.WeakReference(ViewTreeObserver);
          ViewTreeObserver.addOnScrollChangedListener((android.view.ViewTreeObserver.OnScrollChangedListener)this);
          ViewTreeObserver.addOnGlobalLayoutListener((android.view.ViewTreeObserver.OnGlobalLayoutListener)this);
        }
      }
    }

    private void k()
    {
      android.view.ViewTreeObserver v1;
      v1 = (android.view.ViewTreeObserver)this.c.get();
      if ( v1 != null && v1.isAlive() )
      {
        v1.removeOnScrollChangedListener((android.view.ViewTreeObserver.OnScrollChangedListener)this);
        v1.removeGlobalOnLayoutListener((android.view.ViewTreeObserver.OnGlobalLayoutListener)this);
      }
    }

    private org.json.JSONObject l()
 throws org.json.JSONException {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      v1.put("afmaVersion", this.e.b()).put("activeViewJSON", this.e.c()).put("timestamp", TimeUnit.NANOSECONDS.toMillis(System.nanoTime())).put("adFormat", this.e.a()).put("hashCode", this.e.d());
      return v1;
    }

    private org.json.JSONObject m()
 throws org.json.JSONException {
      org.json.JSONObject v1;
      v1 = this.l();
      v1.put("doneReasonCode", "u");
      return v1;
    }

    protected final void a()
    {
      Object a;
      android.content.IntentFilter v2;
      a = this.a;
      synchronized ( a )
      {
        if ( this.r == null )
        {
          v2 = new android.content.IntentFilter();
          v2.addAction("android.intent.action.SCREEN_ON");
          v2.addAction("android.intent.action.SCREEN_OFF");
          this.r = new com.google.android.gms.internal.ad$2(this);
          com.gameloft.android.GAND.GloftGGSS.CompatUtil.registerReceiverCompat(this.f, this.r, v2);
        }
        return;
      }
    }

    public final void a(com.google.android.gms.internal.aa p0)
    {
      this.s.add(p0);
    }

    public final void a(com.google.android.gms.internal.ae p0)
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        this.l = p0;
      }
    }

    protected final void a(boolean p0)
    {
      java.util.Iterator i;
      for ( i = this.s.iterator(); i.hasNext(); ((com.google.android.gms.internal.aa)i.next()).a(p0) )
        ;
    }

    public final void b()
    {
      Object a = null;
      android.view.ViewTreeObserver v2 = null;
      Object v3 = null;
      org.json.JSONObject v4 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            a = this.a;
            com.gameloft.android.DecompRT.monitorEnter(a);
            if ( this.q )
            {
            v2 = (android.view.ViewTreeObserver)this.c.get();
            if ( v2 != null && v2.isAlive() )
            {
            v2.removeOnScrollChangedListener((android.view.ViewTreeObserver.OnScrollChangedListener)this);
            v2.removeGlobalOnLayoutListener((android.view.ViewTreeObserver.OnGlobalLayoutListener)this);
            }
            v3 = this.a;
            synchronized ( v3 )
            {
            if ( this.r != null )
            {
            this.f.unregisterReceiver(this.r);
            this.r = null;
            }
            try
            {
            v4 = this.l();
            v4.put("doneReasonCode", "u");
            this.a(v4);
            { _pc = 2; continue _sm; }
            }
            catch ( org.json.JSONException v7 )
            {
            ev.b("JSON Failure while processing active view data.", v7);
            }
            { _pc = 2; continue _sm; }
            }
            }
            _pc = 1;
            continue _sm;
          case 1:
            return;
          case 2:
            this.q = false;
            this.i();
            ev.B("Untracked ad unit: " + this.e.d());
            _pc = 1;
            continue _sm;
        }
      }
}

    protected final void b(boolean p0)
    {
      Object a = null;
      long v3 = 0L; // RETVAL
      com.google.android.gms.internal.eg v5 = null;
      android.view.View v6 = null;
      int[] v8 = null;
      org.json.JSONObject v9 = null;
      android.util.DisplayMetrics DisplayMetrics = null;
      android.graphics.Rect v11 = null;
      android.graphics.Rect v12 = null;
      android.graphics.Rect v13 = null;
      boolean GlobalVisibleRect = false;
      android.graphics.Rect v15 = null;
      org.json.JSONObject v16 = null;
      boolean v17 = false;
      android.view.View v18 = null;
      android.view.ViewTreeObserver v19 = null;
      android.view.ViewTreeObserver ViewTreeObserver = null; // RETVAL
      org.json.JSONException _cv_1 = null;
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
              a = this.a;
              com.gameloft.android.DecompRT.monitorEnter(a);
              if ( !this.h )
              return;
              if ( !this.q )
              return;
              v3 = System.nanoTime();
              if ( p0 && this.p + m > v3 )
              return;
              this.p = v3;
              v5 = (com.google.android.gms.internal.eg)this.b.get();
              v6 = (android.view.View)this.d.get();
              if ( v6 == null || v5 == null )
              {
              this.b();
              return;
              }
              _ehCatchPc = 3;
              v8 = new int[2];
              v6.getLocationOnScreen(v8);
              v6.getLocationInWindow(new int[2]);
              v9 = this.l();
              DisplayMetrics = v6.getContext().getResources().getDisplayMetrics();
              v11 = new android.graphics.Rect();
              v11.left = v8[0];
              v11.top = v8[1];
              v11.right = v11.left + v6.getWidth();
              v11.bottom = v11.top + v6.getHeight();
              v12 = new android.graphics.Rect();
              v12.right = this.i.getDefaultDisplay().getWidth();
              v12.bottom = this.i.getDefaultDisplay().getHeight();
              v13 = new android.graphics.Rect();
              GlobalVisibleRect = v6.getGlobalVisibleRect(v13, null);
              v15 = new android.graphics.Rect();
              v6.getLocalVisibleRect(v15);
              v16 = v9.put("viewBox", new org.json.JSONObject().put("top", ad.a(v12.top, DisplayMetrics)).put("bottom", ad.a(v12.bottom, DisplayMetrics)).put("left", ad.a(v12.left, DisplayMetrics)).put("right", ad.a(v12.right, DisplayMetrics))).put("adBox", new org.json.JSONObject().put("top", ad.a(v11.top, DisplayMetrics)).put("bottom", ad.a(v11.bottom, DisplayMetrics)).put("left", ad.a(v11.left, DisplayMetrics)).put("right", ad.a(v11.right, DisplayMetrics))).put("globalVisibleBox", new org.json.JSONObject().put("top", ad.a(v13.top, DisplayMetrics)).put("bottom", ad.a(v13.bottom, DisplayMetrics)).put("left", ad.a(v13.left, DisplayMetrics)).put("right", ad.a(v13.right, DisplayMetrics))).put("localVisibleBox", new org.json.JSONObject().put("top", ad.a(v15.top, DisplayMetrics)).put("bottom", ad.a(v15.bottom, DisplayMetrics)).put("left", ad.a(v15.left, DisplayMetrics)).put("right", ad.a(v15.right, DisplayMetrics))).put("screenDensity", DisplayMetrics.density);
              if ( !(v6.getVisibility() == 0
              && GlobalVisibleRect
              && v6.isShown()
              && this.j.isScreenOn()
              && !this.k.inKeyguardRestrictedInputMode()) ) { _pc = 2; continue _sm; }
              v17 = true;
              _pc = 1;
              continue _sm;
            case 1:
              v16.put("isVisible", v17).put("isStopped", this.o).put("isPaused", this.n);
              this.a(v9);
              _pc = 5;
              continue _sm;
            case 2:
              v17 = false;
              _pc = 6;
              continue _sm;
            case 3:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof org.json.JSONException) ) { _pc = 4; continue _sm; }
              _cv_1 = (org.json.JSONException)_ehCaught;
              ev.b("Active view update failed.", _cv_1);
              _pc = 5;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              v18 = (android.view.View)this.d.get();
              if ( v18 != null )
              {
              v19 = (android.view.ViewTreeObserver)this.c.get();
              ViewTreeObserver = v18.getViewTreeObserver();
              if ( ViewTreeObserver != v19 )
              {
              this.c = new java.lang.ref.WeakReference(ViewTreeObserver);
              ViewTreeObserver.addOnScrollChangedListener((android.view.ViewTreeObserver.OnScrollChangedListener)this);
              ViewTreeObserver.addOnGlobalLayoutListener((android.view.ViewTreeObserver.OnGlobalLayoutListener)this);
              }
              }
              this.i();
              return;
            case 6:
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

    protected final void c()
    {
      this.b(false);
    }

    public final boolean d()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        return this.q;
      }
    }

    public final void e()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        this.o = true;
        this.b(false);
        this.g.a();
      }
    }

    public final void f()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        this.n = true;
        this.b(false);
        this.g.a();
      }
    }

    public final void g()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        this.g.b();
        this.n = false;
        this.b(false);
      }
    }

    public final void onGlobalLayout()
    {
      this.b(false);
    }

    public final void onScrollChanged()
    {
      this.b(true);
    }

}
