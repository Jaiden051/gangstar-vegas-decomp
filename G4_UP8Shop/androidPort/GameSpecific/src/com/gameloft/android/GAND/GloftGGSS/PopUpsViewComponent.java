// Decompiled from classes.dex (SourceFile: PopUpsViewComponent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.webkit.WebSettings;
public class PopUpsViewComponent {
    // Fields
    android.widget.RelativeLayout.LayoutParams a;
    private com.gameloft.android.GAND.GloftGGSS.cu b;
    private com.gameloft.android.GAND.GloftGGSS.PopUpsManager c;
    private android.webkit.WebView d;
    private com.gameloft.android.GAND.GloftGGSS.ct e;
    private boolean f;
    private boolean g;
    private boolean h;
    private boolean i;
    private boolean j;
    private boolean k;
    private android.widget.RelativeLayout l;

    // Methods
    public PopUpsViewComponent(com.gameloft.android.GAND.GloftGGSS.PopUpsManager p0)
    {
      super();
      this.f = false;
      this.g = false;
      this.h = false;
      this.i = false;
      this.j = false;
      this.k = false;
      this.c = p0;
    }

    public static void OnPause()
    {
      ;
    }

    public static void OnResume()
    {
      ;
    }

    private void a(android.webkit.WebView p0)
    {
      p0.setLayerType(1, null);
      p0.getSettings().setJavaScriptEnabled(true);
      p0.getSettings().setAppCacheEnabled(false);
      p0.getSettings().setSupportZoom(false);
      p0.getSettings().setDefaultTextEncodingName("utf-8");
      p0.getSettings().setLightTouchEnabled(true);
      p0.getSettings().setLoadsImagesAutomatically(true);
      p0.setWebViewClient(this.e);
      p0.setWebChromeClient(new com.gameloft.android.GAND.GloftGGSS.cs(this));
      p0.getSettings().setDefaultZoom(WebSettings.ZoomDensity.FAR);
      p0.setHorizontalScrollBarEnabled(false);
      p0.setVerticalScrollBarEnabled(false);
      p0.setBackgroundColor(0);
      p0.setVisibility(8);
    }

    private void a(com.gameloft.android.GAND.GloftGGSS.ct p0)
    {
      p0.a = true;
      this.i = false;
      this.k = false;
      this.j = true;
      PopUpsBridgeClass.OnErrorMessage(PopUpsManager$PopUpsError.a.a());
      if ( this.g )
        this.c();
    }

    private void a(com.gameloft.android.GAND.GloftGGSS.ct p0, android.webkit.WebView p1)
    {
      int v3;
      if ( !p0.b )
      {
        p1.getVisibility();
        if ( this.f )
        {
          this.g = true;
          v3 = 0;
        }
        else
        {
          v3 = 8;
          this.g = false;
        }
        this.i = true;
        p1.setVisibility(v3);
        this.k = true;
        this.j = true;
      }
    }

    private boolean a(com.gameloft.android.GAND.GloftGGSS.ct p0, String p1)
    {
      PopUpsBridgeClass.OnAssetTracking(p1);
      if ( !p1.startsWith("goto:") )
      {
        if ( p1.startsWith("exit:") )
        {
          p0.b = true;
        }
        else
        {
          if ( p1.startsWith("xpromo:") )
          {
            this.c();
            this.c.a(p1.replace("xpromo:", ""));
            return true;
          }
          if ( p1.startsWith("http:") )
          {
            this.c.a(p1);
            return true;
          }
        }
      }
      this.c();
      return true;
    }

    /* synthetic */ static boolean access$100(
            com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent p0)
    {
      return p0.i;
    }

    /* synthetic */ static android.webkit.WebView access$200(
            com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent p0)
    {
      return p0.d;
    }

    /* synthetic */ static boolean access$302(
            com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent p0,
            boolean p1)
    {
      p0.g = p1;
      return p1;
    }

    /* synthetic */ static boolean access$400(
            com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent p0,
            com.gameloft.android.GAND.GloftGGSS.ct p1,
            android.webkit.WebView p2,
            String p3)
    {
      PopUpsBridgeClass.OnAssetTracking(p3);
      if ( !p3.startsWith("goto:") )
      {
        if ( p3.startsWith("exit:") )
        {
          p1.b = true;
        }
        else
        {
          if ( p3.startsWith("xpromo:") )
          {
            p0.c();
            p0.c.a(p3.replace("xpromo:", ""));
            return true;
          }
          if ( p3.startsWith("http:") )
          {
            p0.c.a(p3);
            return true;
          }
        }
      }
      p0.c();
      return true;
    }

    /* synthetic */ static void access$500(
            com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent p0,
            com.gameloft.android.GAND.GloftGGSS.ct p1,
            android.webkit.WebView p2,
            int p3,
            String p4,
            String p5)
    {
      p1.a = true;
      p0.i = false;
      p0.k = false;
      p0.j = true;
      PopUpsBridgeClass.OnErrorMessage(PopUpsManager$PopUpsError.a.a());
      if ( p0.g )
        p0.c();
    }

    /* synthetic */ static void access$600(
            com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent p0,
            com.gameloft.android.GAND.GloftGGSS.ct p1,
            android.webkit.WebView p2,
            String p3)
    {
      int v4;
      if ( !p1.b )
      {
        p2.getVisibility();
        if ( p0.f )
        {
          p0.g = true;
          v4 = 0;
        }
        else
        {
          v4 = 8;
          p0.g = false;
        }
        p0.i = true;
        p2.setVisibility(v4);
        p0.k = true;
        p0.j = true;
      }
    }

    /* synthetic */ static void access$700(
            com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent p0,
            com.gameloft.android.GAND.GloftGGSS.ct p1,
            android.webkit.WebView p2,
            String p3,
            android.graphics.Bitmap p4)
    {
      p1.a = false;
      p1.b = false;
      p0.h = true;
    }

    private void b(com.gameloft.android.GAND.GloftGGSS.ct p0)
    {
      p0.a = false;
      p0.b = false;
      this.h = true;
    }

    private void d()
    {
      if ( this.d != null )
      {
        this.d.setVisibility(8);
        this.c.e().removeView(this.l);
        this.l = null;
        this.d.destroy();
        this.d = null;
        Game.az.aA.requestFocus();
      }
      if ( this.e != null )
        this.e = null;
    }

    private android.widget.RelativeLayout.LayoutParams e()
    {
      android.widget.RelativeLayout.LayoutParams v1;
      v1 = new android.widget.RelativeLayout.LayoutParams(this.b.c, this.b.d);
      v1.addRule(9);
      v1.addRule(10);
      return v1;
    }

    private void f()
    {
      android.webkit.WebView d;
      android.widget.RelativeLayout.LayoutParams v2;
      this.l = new android.widget.RelativeLayout(this.c.f());
      this.l.setPaddingRelative(this.b.a, this.b.b, 0, 0);
      this.c.e().addView(this.l, new android.widget.RelativeLayout.LayoutParams(-1, -1));
      this.e = new com.gameloft.android.GAND.GloftGGSS.ct(this, 0);
      this.d = new android.webkit.WebView(this.c.f());
      d = this.d;
      d.setLayerType(1, null);
      d.getSettings().setJavaScriptEnabled(true);
      d.getSettings().setAppCacheEnabled(false);
      d.getSettings().setSupportZoom(false);
      d.getSettings().setDefaultTextEncodingName("utf-8");
      d.getSettings().setLightTouchEnabled(true);
      d.getSettings().setLoadsImagesAutomatically(true);
      d.setWebViewClient(this.e);
      d.setWebChromeClient(new com.gameloft.android.GAND.GloftGGSS.cs(this));
      d.getSettings().setDefaultZoom(WebSettings.ZoomDensity.FAR);
      d.setHorizontalScrollBarEnabled(false);
      d.setVerticalScrollBarEnabled(false);
      d.setBackgroundColor(0);
      d.setVisibility(8);
      v2 = new android.widget.RelativeLayout.LayoutParams(this.b.c, this.b.d);
      v2.addRule(9);
      v2.addRule(10);
      this.a = v2;
      this.l.addView(this.d, this.a);
    }

    private void g()
    {
      this.l = new android.widget.RelativeLayout(this.c.f());
      this.l.setPaddingRelative(this.b.a, this.b.b, 0, 0);
      this.c.e().addView(this.l, new android.widget.RelativeLayout.LayoutParams(-1, -1));
    }

    public final int a()
    {
      if ( this.d != null && this.f )
        return PopUpsManager$ViewState.d.a();
      if ( this.d != null && !this.g && this.i || this.h || !this.i )
        return PopUpsManager$ViewState.c.a();
      return PopUpsManager$ViewState.a.a();
    }

    public final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError a(
            boolean p0,
            String p1,
            String p2)
    {
      com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError v4;
      String v6;
      int Visibility;
      this.f = p0;
      v4 = PopUpsManager$PopUpsError.a;
      if ( p0 || this.d != null )
      {
        if ( p0 )
        {
          this.d();
          this.f();
          if ( new java.io.File(p1).exists() )
          {
            if ( this.d != null )
            {
              if ( this.c != null )
              {
                v6 = "file:///"
                   + p1
                   + "?OS=android&width="
                   + Integer.toString(this.b.c)
                   + "&height="
                   + Integer.toString(this.b.d);
                if ( p2 != null && !p2.isEmpty() )
                  v6 = v6 + "&" + p2;
                this.d.loadUrl(v6);
                v4 = PopUpsManager$PopUpsError.b;
              }
            }
            else
            {
              v4 = PopUpsManager$PopUpsError.h;
            }
          }
          else
          {
            PopUpsBridgeClass.OnErrorMessage(PopUpsManager$PopUpsError.c.a());
            p0 = false;
            v4 = PopUpsManager$PopUpsError.c;
          }
        }
        Visibility = this.d.getVisibility();
        if ( !p0 )
        {
          this.d();
          this.f();
        }
        this.c.f().runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.cr(this, p0, Visibility));
      }
      return v4;
    }

    public final void a(int p0, int p1, int p2, int p3)
    {
      this.b = new com.gameloft.android.GAND.GloftGGSS.cu(this, p0, p1, p2, p3);
    }

    public final void b()
    {
      if ( this.d != null )
      {
        this.d.setVisibility(8);
        this.c.e().removeView(this.l);
        this.l = null;
        this.l.removeView(this.d);
        this.d.destroy();
        this.d = null;
        Game.az.aA.requestFocus();
      }
      if ( this.e != null )
        this.e = null;
    }

    public final void c()
    {
      this.a(false, "", "");
      this.l.setClickable(false);
    }

}
