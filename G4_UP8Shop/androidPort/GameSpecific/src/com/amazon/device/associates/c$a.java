// Decompiled from classes.dex (SourceFile: c$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.graphics.drawable.Drawable;
import android.os.Build;
class c$a extends android.widget.RelativeLayout implements android.view.View.OnTouchListener {
    // Fields
    private final android.content.Context a;
    private final java.lang.String b;
    private final boolean c;
    private android.widget.RelativeLayout d;
    private android.webkit.WebView e;
    private android.widget.ImageView f;
    private android.widget.ProgressBar g;
    private android.widget.TextView h;
    private int i;
    private int j;
    private int k;
    private int l;
    private int m;
    private boolean n;
    private boolean o;
    private android.view.ViewGroup p;

    // Methods
    public c$a(android.content.Context p0, String p1, boolean p2)
    {
      super(p0);
      this.n = false;
      this.o = false;
      this.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(-1, -1));
      this.setGravity(17);
      this.setBackgroundColor(-1775487687);
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    private android.view.ViewGroup a(android.view.ViewGroup p0)
    {
      Object Parent;
      while ( p0.getParent() != null
           && !p0.getParent().getClass().getName().equals("com.android.internal.policy.impl.PhoneWindow$DecorView") )
        p0 = (android.view.ViewGroup)p0.getParent();
      if ( p0.getParent() != null
        && p0.getParent().getClass().getName().equals("com.android.internal.policy.impl.PhoneWindow$DecorView") )
      {
        Parent = p0.getParent();
      }
      else
      {
        Parent = p0;
      }
      com.amazon.device.associates.p.a(com.amazon.device.associates.c.a(), "Viewgroup identified as shadowPane's parent: " + Parent);
      return (android.view.ViewGroup)Parent;
    }

    /* synthetic */ static android.view.ViewGroup a(com.amazon.device.associates.c$a p0)
    {
      return p0.p;
    }

    /* synthetic */ static String a(com.amazon.device.associates.c$a p0, String p1)
    {
      return p0.b(p1);
    }

    private void a(int p0, int p1)
    {
      android.graphics.drawable.Drawable Drawable;
      int IntrinsicWidth;
      int IntrinsicHeight; // RETVAL
      int v6;
      int v7;
      android.view.ViewGroup.LayoutParams v8;
      this.f = new android.widget.ImageView(this.getContext());
      Drawable = this.getResources().getDrawable(bo.a("x", "drawable"));
      IntrinsicWidth = Drawable.getIntrinsicWidth();
      IntrinsicHeight = Drawable.getIntrinsicHeight();
      v6 = p0 - IntrinsicWidth / 2;
      v7 = p1 - IntrinsicHeight / 2;
      this.f.setImageDrawable(Drawable);
      this.f.setVisibility(8);
      v8 = new android.widget.RelativeLayout.LayoutParams(IntrinsicWidth, IntrinsicHeight);
      v8.height = v6;
      v8.width = v7;
      com.amazon.device.associates.p.a(com.amazon.device.associates.c.a(), "Positioning the x image at : " + v6 + " " + v7);
      this.addView(this.f, v8);
    }

    private void a(android.graphics.Rect p0)
    {
      this.i = Math.round((float)this.l * 0.125f);
      this.j = Math.round((float)this.l * 0.085f);
      this.k = Math.round((float)this.m * 0.07f);
      com.amazon.device.associates.p.a(com.amazon.device.associates.c.a(), "Paddings left top right bottom :" + this.k + " " + this.i + " " + this.k + " " + this.j);
    }

    /* synthetic */ static boolean a(com.amazon.device.associates.c$a p0, boolean p1)
    {
      p0.n = p1;
      return p1;
    }

    private boolean a(String p0)
    {
      if ( p0.matches("^((http|https)://)(www[.])?(amazon[.])(com|ca|cn|de|es|fr|it|in|co[.]jp|co[.]uk)(/gp/aw/d)?(/)?(([A-Za-z0-9])*)[?]?")
        || p0.matches("^((http|https)://)(www[.])?(amazon[.])(com)(/gp/dmusic/device/mp3/store/)(album|track)(/)?(([A-Za-z0-9])*)?.*")
        || com.amazon.device.associates.c.b().booleanValue()
        && p0.matches("^((http|https)://)(www[.])?(amazon[.])(com)(/gp/dmusic/device/mp3/store)([/])?(\\Q?ie=UTF8&*Version*=1" +
                      "&*entries*=0#\\E)(album|track)(/)?(([A-Za-z0-9])*)?.*") )
      {
        com.amazon.device.associates.p.a(com.amazon.device.associates.c.a(), "Whitelisted url");
        return true;
      }
      else
      {
        com.amazon.device.associates.p.a(com.amazon.device.associates.c.a(), "Not whitelisted url");
        return false;
      }
    }

    private android.graphics.Rect b(android.view.View p0)
    {
      int[] v2;
      v2 = new int[2];
      p0.getLocationOnScreen(v2);
      return new android.graphics.Rect(v2[0], v2[1], v2[0] + p0.getWidth(), v2[1] + p0.getHeight());
    }

    /* synthetic */ static android.webkit.WebView b(com.amazon.device.associates.c$a p0)
    {
      return p0.e;
    }

    private String b(String p0)
    {
      String v2;
      String v3;
      v2 = "tag=" + bq.a(this.b, "tag") + "&linkCode=" + bq.a(this.b, "linkCode");
      if ( v2 == null )
        return p0;
      v3 = bq.e(p0);
      if ( v3.charAt(v3.length() - 1) == 63 || v3.charAt(v3.length() - 1) == 47 )
        v3 = v3.substring(0, v3.length() - 1);
      if ( v3.contains("?") )
        return v3.concat("&" + v2);
      else
        return v3.concat("?" + v2);
    }

    private void b()
    {
      this.d = new android.widget.RelativeLayout(this.a);
      this.d.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(-2, -2));
      this.d.setPadding(this.k, this.i, this.k, this.j);
      if ( this.e != null )
        this.d.addView(this.e);
    }

    private void b(android.graphics.Rect p0)
    {
      int v2;
      int v3;
      String v4;
      String v5;
      String v6;
      v2 = Math.round((float)this.l * 0.8f);
      v3 = Math.round((float)this.m * 0.85f);
      com.amazon.device.associates.p.a(com.amazon.device.associates.c.a(), "Dimensions of the webview created h :" + v2 + " w :" + v3);
      this.e = new android.webkit.WebView(this.a);
      this.e.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(v3, v2));
      this.e.getSettings().setJavaScriptEnabled(true);
      this.e.getSettings().setDomStorageEnabled(true);
      this.e.setVisibility(8);
      if ( com.amazon.device.associates.c.b().booleanValue() )
        this.e.getSettings().setUserAgentString("Mozilla/5.0 (Linux; Android 4.1.1; Nexus 7 Build/JRO03D) AppleWebKit/535.19 " +
                                                "(KHTML, like Gecko) Chrome/18.0.1025.166  Safari/535.19");
      this.e.setWebChromeClient(new com.amazon.device.associates.c$a$3(this));
      v4 = this.e();
      if ( com.amazon.device.associates.c.b().booleanValue() )
      {
        if ( this.c )
          v5 = v4.replace("$ADDITIONAL_MESSAGE", "$CHARACTERTo buy, the browser view mode $CHARACTERshould be MOBILE.");
        else
          v5 = v4.replace("$ADDITIONAL_MESSAGE", "");
        v6 = v5.replace("$CHARACTER", "<br />");
      }
      else
      {
        v6 = v4.replace("$ADDITIONAL_MESSAGE", "").replace("$CHARACTER", "");
      }
      this.e.setWebViewClient(new com.amazon.device.associates.c$a$4(this, v2, v3, v6));
      this.e.setOnTouchListener((android.view.View.OnTouchListener)new com.amazon.device.associates.c$a$1(this));
    }

    /* synthetic */ static boolean b(com.amazon.device.associates.c$a p0, String p1)
    {
      return p0.a(p1);
    }

    /* synthetic */ static boolean b(com.amazon.device.associates.c$a p0, boolean p1)
    {
      p0.o = p1;
      return p1;
    }

    /* synthetic */ static android.widget.ProgressBar c(com.amazon.device.associates.c$a p0)
    {
      return p0.g;
    }

    private void c()
    {
      this.g = new android.widget.ProgressBar(this.getContext(), null, 16842872);
      this.g.setVisibility(0);
      this.g.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(Math.round((float)this.m * 0.5f), 15));
    }

    /* synthetic */ static android.widget.TextView d(com.amazon.device.associates.c$a p0)
    {
      return p0.h;
    }

    private void d()
    {
      this.h = new android.widget.TextView(this.getContext());
      this.h.setWidth(Math.round((float)this.m * 0.5f));
      this.h.setText("Loading product detail from Amazon");
      this.h.setGravity(17);
      this.h.setTextSize(15.0f);
      this.h.setTextColor(-1);
      this.h.setPadding(0, 15, 0, 0);
      this.h.setVisibility(0);
    }

    private String e()
    {
      StringBuilder v1;
      v1 = new StringBuilder();
      v1.append("javascript:(function() {\n").append("   var messageBox = document.createElement('div');\n").append("   messageBox.style.position = 'fixed';\n").append("   messageBox.style.bottom = '30px';\n").append("   messageBox.style.left = '0';\n").append("   messageBox.style.width = '100%';\n").append("   messageBox.style.textAlign = 'center';\n").append("   messageBox.style.zIndex = '1000';\n").append("   var message = \"<span style='display:inline-block; border:1px solid #CCC; padding:5px 10px; border-radius:5px; background:#555; color:#FFF;'>\"\n").append("   +\"Clicking a link on this page takes you $CHARACTERto Amazon website in a browser.$ADDITIONAL_MESSAGE</span>\";\n").append("   messageBox.innerHTML = message;\n").append("   var bodyTag = document.getElementsByTagName('body')[0];\n").append("   bodyTag.appendChild(messageBox);\n").append("   var allforms = document.forms;\n").append("   for (var i = 0; i < allforms.length; i++) {\n").append("       var form = allforms[i];\n").append("       if (form.method && form.method.toUpperCase() == 'POST') {\n").append("           form.method = 'GET';\n").append("       }\n").append("   }\n").append("   var addToWishListButton = document.querySelector('button.a-button.a-button-supplemental');\n").append("   if(addToWishListButton)\n").append("       addToWishListButton.style.display = 'none';\n").append("   var addToCartButton = document.querySelector('button.a-button.a-button-primary > span > span.a-button-text');\n").append("   if(addToCartButton)\n").append("       addToCartButton.innerHTML = 'Buy on Amazon';\n").append("   var addToCartPreorderButton = document.querySelector('button.a-button.a-button-preorder > span > span.a-button-text');\n").append("   if(addToCartPreorderButton)\n").append("       addToCartPreorderButton.innerHTML = 'Preorder on Amazon';\n").append("   var addToCartForm = document.getElementById('addToCart');\n").append("   if(addToCartForm)\n").append("       addToCartForm.onsubmit = function(){\n").append("           window.location = window.location+\"/\";\n").append("           return false;\n").append("       }\n").append("   window.hideMessageBox = function() {\n").append("       messageBox.style.display = 'none';\n").append("   }\n").append("})();");
      return v1.toString();
    }

    /* synthetic */ static boolean e(com.amazon.device.associates.c$a p0)
    {
      return p0.o;
    }

    private String f()
    {
      StringBuilder v1;
      v1 = new StringBuilder();
      v1.append("<!DOCTYPE html><html lang=\"en\">").append("<head></head><body style=\"margin: auto; padding:auto;\">").append("   <div style='$DIMENSION; text-align:center; vertical-align:middle; display:table-cell;'>       <img src='file:///android_res/drawable/alogo.png' alt='amazon' style='' />").append("   </div>   <script type=\"text/javascript\">").append("       var messageBox = document.createElement('div');       messageBox.style.position = 'fixed';").append("       messageBox.style.bottom = '30px';       messageBox.style.left = '0';").append("       messageBox.style.width = '100%';       messageBox.style.textAlign = 'center';").append("       messageBox.style.zIndex = '1000';       ").append("       var message = \"<span style='display:inline-block; border:1px solid #CCC; padding:5px 10px; border-radius:5px; background:#555; color:#FFF;'>\"       +\"Clicking a link on this page takes you $CHARACTERto Amazon website in a browser.</span>\";").append("       messageBox.innerHTML = message;   ").append("       var bodyTag = document.getElementsByTagName('body')[0];       bodyTag.appendChild(messageBox);").append("              window.hideMessageBox = function() {").append("           messageBox.style.display = 'none';       }").append("   </script></body>").append("</html>");
      return v1.toString();
    }

    /* synthetic */ static String f(com.amazon.device.associates.c$a p0)
    {
      return p0.f();
    }

    /* synthetic */ static android.widget.ImageView g(com.amazon.device.associates.c$a p0)
    {
      return p0.f;
    }

    /* synthetic */ static android.widget.RelativeLayout h(com.amazon.device.associates.c$a p0)
    {
      return p0.d;
    }

    public void a()
    {
      android.view.animation.AlphaAnimation v1;
      if ( !this.n )
      {
        this.e.setVisibility(4);
        this.f.setVisibility(4);
        v1 = new android.view.animation.AlphaAnimation(1.0f, 0.0f);
        v1.setDuration(300);
        v1.setAnimationListener((android.view.animation.Animation.AnimationListener)new com.amazon.device.associates.c$a$2(this));
        this.n = true;
        this.startAnimation(v1);
      }
    }

    public void a(android.view.View p0)
    {
      android.view.ViewGroup v2;
      android.graphics.Rect v3; // RETVAL
      android.view.animation.AlphaAnimation v4;
      v2 = this.a((android.view.ViewGroup)p0.getParent());
      this.p = v2;
      v3 = this.b(v2);
      this.l = v3.bottom - v3.top;
      this.m = v3.right - v3.left;
      this.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(this.m, this.l));
      this.b(v3);
      this.a(v3);
      this.b();
      this.addView(this.d);
      this.c();
      this.addView(this.g);
      this.d();
      this.addView(this.h);
      v2.addView(this);
      this.a((int)((float)v3.width() * 0.93f), this.i);
      this.setOnTouchListener(this);
      v4 = new android.view.animation.AlphaAnimation(0.0f, 1.0f);
      v4.setDuration(300);
      v4.setAnimationListener((android.view.animation.Animation.AnimationListener)new com.amazon.device.associates.c$a$5(this));
      this.n = true;
      this.startAnimation(v4);
    }

    public boolean onTouch(android.view.View p0, android.view.MotionEvent p1)
    {
      if ( !this.n && p0 == this )
        this.a();
      return true;
    }

}
