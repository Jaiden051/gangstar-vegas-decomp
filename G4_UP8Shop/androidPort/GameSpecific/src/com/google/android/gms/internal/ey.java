// Decompiled from classes.dex (SourceFile: ey.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.net.Uri;
import android.os.Build;
import android.provider.Settings;
import android.view.View;
public class ey extends android.webkit.WebView implements android.webkit.DownloadListener {
    // Fields
    private final com.google.android.gms.internal.ez a;
    private final com.google.android.gms.internal.ey$a b;
    private final java.lang.Object c;
    private final com.google.android.gms.internal.l d;
    private final com.google.android.gms.internal.ew e;
    private com.google.android.gms.internal.cg f;
    private com.google.android.gms.internal.am g;
    private boolean h;
    private boolean i;
    private boolean j;
    private final android.view.WindowManager k;

    // Methods
    private ey(
            com.google.android.gms.internal.ey$a p0,
            com.google.android.gms.internal.am p1,
            boolean p2,
            boolean p3,
            com.google.android.gms.internal.l p4,
            com.google.android.gms.internal.ew p5)
    {
      super(p0);
      android.webkit.WebSettings Settings;
      this.c = new Object();
      this.b = p0;
      this.g = p1;
      this.h = p2;
      this.d = p4;
      this.e = p5;
      this.k = (android.view.WindowManager)this.getContext().getSystemService("window");
      this.setBackgroundColor(0);
      Settings = this.getSettings();
      Settings.setJavaScriptEnabled(true);
      Settings.setSavePassword(false);
      Settings.setSupportMultipleWindows(true);
      Settings.setJavaScriptCanOpenWindowsAutomatically(true);
      ep.a(p0, p5.b, Settings);
      if ( Build.VERSION.SDK_INT < 17 )
      {
        if ( Build.VERSION.SDK_INT >= 11 )
          er.a(this.getContext(), Settings);
      }
      else
      {
        es.a(this.getContext(), Settings);
      }
      this.setDownloadListener(this);
      if ( Build.VERSION.SDK_INT < 11 )
        this.a = new com.google.android.gms.internal.ez(this, p3);
      else
        this.a = new com.google.android.gms.internal.fb(this, p3);
      this.setWebViewClient(this.a);
      if ( Build.VERSION.SDK_INT < 14 )
      {
        if ( Build.VERSION.SDK_INT >= 11 )
          this.setWebChromeClient(new com.google.android.gms.internal.fa(this));
      }
      else
      {
        this.setWebChromeClient(new com.google.android.gms.internal.fc(this));
      }
      this.k();
    
    }

    public static com.google.android.gms.internal.ey a(
            android.content.Context p0,
            com.google.android.gms.internal.am p1,
            boolean p2,
            boolean p3,
            com.google.android.gms.internal.l p4,
            com.google.android.gms.internal.ew p5)
    {
      return new com.google.android.gms.internal.ey(new com.google.android.gms.internal.ey$a(p0), p1, p2, p3, p4, p5);
    }

    private void a(String p0)
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        if ( this.n() )
          ev.D("The webview is destroyed. Ignoring action.");
        else
          this.loadUrl(p0);
        return;
      }
    }

    private void b(String p0, org.json.JSONObject p1)
    {
      String v3;
      StringBuilder v4;
      if ( p1 == null )
        p1 = new org.json.JSONObject();
      v3 = p1.toString();
      v4 = new StringBuilder();
      v4.append("javascript:AFMA_ReceiveMessage('");
      v4.append(p0);
      v4.append("'");
      v4.append(",");
      v4.append(v3);
      v4.append(");");
      ev.C("Dispatching AFMA event: " + v4);
      this.a(v4.toString());
    }

    private void k()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        if ( this.h || this.g.e )
        {
          if ( Build.VERSION.SDK_INT >= 14 )
          {
            ev.z("Enabling hardware acceleration on an overlay.");
            this.m();
          }
          else
          {
            ev.z("Disabling hardware acceleration on an overlay.");
            this.l();
          }
        }
        else if ( Build.VERSION.SDK_INT >= 18 )
        {
          ev.z("Enabling hardware acceleration on an AdView.");
          this.m();
        }
        else
        {
          ev.z("Disabling hardware acceleration on an AdView.");
          this.l();
        }
        return;
      }
    }

    private void l()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        if ( !this.i && Build.VERSION.SDK_INT >= 11 )
          er.d(this);
        this.i = true;
      }
    }

    private void m()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        if ( this.i && Build.VERSION.SDK_INT >= 11 )
          er.e(this);
        this.i = false;
      }
    }

    private boolean n()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        return this.j;
      }
    }

    public final void a()
    {
      android.util.DisplayMetrics v1;
      android.view.Display DefaultDisplay;
      float v3;
      int v4;
      int v5;
      if ( this.a.a() )
      {
        v1 = new android.util.DisplayMetrics();
        DefaultDisplay = this.k.getDefaultDisplay();
        DefaultDisplay.getMetrics(v1);
        v3 = 160.0f / (float)v1.densityDpi;
        v4 = (int)((float)v1.widthPixels * v3);
        v5 = (int)((float)(v1.heightPixels - ep.m(this.getContext())) * v3);
        try
        {
          this.b("onScreenInfoChanged", new org.json.JSONObject().put("width", v4).put("height", v5).put("density", v1.density).put("rotation", DefaultDisplay.getRotation()));
        }
        catch ( org.json.JSONException v6 )
        {
          ev.b("Error occured while obtaining screen information.", v6);
        }
      }
    }

    public final void a(android.content.Context p0)
    {
      this.b.setBaseContext(p0);
    }

    public final void a(android.content.Context p0, com.google.android.gms.internal.am p1)
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        this.b.setBaseContext(p0);
        this.f = null;
        this.g = p1;
        this.h = false;
        ep.b(this);
        this.loadUrl("about:blank");
        this.a.b();
      }
    }

    public final void a(com.google.android.gms.internal.am p0)
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        this.g = p0;
        this.requestLayout();
      }
    }

    public final void a(com.google.android.gms.internal.cg p0)
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        this.f = p0;
      }
    }

    public final void a(String p0, java.util.Map<String, ?> p1)
    {
      try
      {
        this.b(p0, ep.o(p1));
      }
      catch ( org.json.JSONException e )
      {
        ev.D("Could not convert parameters to JSON.");
      }
    }

    public final void a(String p0, org.json.JSONObject p1)
    {
      String v3;
      StringBuilder v4;
      if ( p1 == null )
        p1 = new org.json.JSONObject();
      v3 = p1.toString();
      v4 = new StringBuilder();
      v4.append("javascript:" + p0 + "(");
      v4.append(v3);
      v4.append(");");
      this.a(v4.toString());
    }

    public final void a(boolean p0)
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        this.h = p0;
        this.k();
      }
    }

    public final void b()
    {
      java.util.HashMap v1;
      v1 = new java.util.HashMap(1);
      v1.put("version", this.e.b);
      this.a("onhide", v1);
    }

    public final void c()
    {
      java.util.HashMap v1;
      v1 = new java.util.HashMap(1);
      v1.put("version", this.e.b);
      this.a("onshow", v1);
    }

    public final com.google.android.gms.internal.cg d()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        return this.f;
      }
    }

    public void destroy()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        super.destroy();
        this.j = true;
      }
    }

    public final com.google.android.gms.internal.am e()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        return this.g;
      }
    }

    public final com.google.android.gms.internal.ez f()
    {
      return this.a;
    }

    public final com.google.android.gms.internal.l g()
    {
      return this.d;
    }

    public final com.google.android.gms.internal.ew h()
    {
      return this.e;
    }

    public final boolean i()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        return this.h;
      }
    }

    public final android.content.Context j()
    {
      return this.b.a();
    }

    public void onDownloadStart(String p0, String p1, String p2, String p3, long p4)
    {
      android.content.Intent v6;
      try
      {
        v6 = new android.content.Intent("android.intent.action.VIEW");
        v6.setDataAndType(Uri.parse(p0), p3);
        this.getContext().startActivity(v6);
      }
      catch ( android.content.ActivityNotFoundException e )
      {
        ev.z("Couldn't find an Activity to view url/mimetype: " + p0 + " / " + p3);
      }
    }

    protected void onMeasure(int p0, int p1)
    {
      int v3;
      Object c;
      int Mode;
      int Size;
      int v7;
      int v8; // RETVAL
      int v9;
      int v10;
      float density;
      v3 = 0x7FFFFFFF;
      c = this.c;
      synchronized ( c )
      {
        if ( this.isInEditMode() || this.h )
        {
          super.onMeasure(p0, p1);
        }
        else
        {
          Mode = View.MeasureSpec.getMode(p0);
          Size = View.MeasureSpec.getSize(p0);
          v7 = View.MeasureSpec.getMode(p1);
          v8 = View.MeasureSpec.getSize(p1);
          v9 = v8;
          if ( Mode == 0x80000000 || Mode == 0x40000000 )
            v10 = Size;
          else
            v10 = 0x7FFFFFFF;
          if ( v7 == 0x80000000 || v7 == 0x40000000 )
            v3 = v8;
          if ( this.g.g <= v10 && this.g.d <= v3 )
          {
            if ( this.getVisibility() != 8 )
              this.setVisibility(0);
            this.setMeasuredDimension(this.g.g, this.g.d);
          }
          else
          {
            density = this.b.getResources().getDisplayMetrics().density;
            ev.D(
              "Not enough space to show ad. Needs "
            + (int)((float)this.g.g / density)
            + "x"
            + (int)((float)this.g.d / density)
            + " dp, but only has "
            + (int)((float)Size / density)
            + "x"
            + (int)((float)v9 / density)
            + " dp.");
            if ( this.getVisibility() != 8 )
              this.setVisibility(4);
            this.setMeasuredDimension(0, 0);
          }
        }
        return;
      }
    }

    public boolean onTouchEvent(android.view.MotionEvent p0)
    {
      try {
      if ( this.d != null )
        this.d.a(p0);
      return super.onTouchEvent(p0);
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
