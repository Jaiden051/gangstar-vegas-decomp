// Decompiled from classes.dex (SourceFile: IGPFreemiumActivity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.content.Intent;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.location.Location;
import android.net.Uri;
import android.os.Build;
import android.webkit.WebSettings;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Encrypter;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.gameloft.android.hdidfv.HDIDFV;
import java.util.Locale;
public class IGPFreemiumActivity extends android.app.Activity {
    // Fields
    public static boolean a;
    public static boolean b;
    public static java.lang.String[] c;
    private android.widget.RelativeLayout A;
    private android.widget.ImageButton B;
    private android.app.ProgressDialog C;
    private int d;
    private boolean e;
    private boolean f;
    private android.widget.RelativeLayout g;
    private android.widget.VideoView h;
    private boolean i;
    private boolean j;
    private int k;
    private int l;
    private java.lang.String m;
    private java.lang.String n;
    private java.lang.String o;
    private java.lang.String p;
    private java.lang.String q;
    private java.lang.String r;
    private int[] s;
    private int[] t;
    private int[] u;
    private int[] v;
    private int[] w;
    private android.view.Display x;
    private android.widget.RelativeLayout y;
    private android.webkit.WebView z;

    // Methods
    static
    {
      String[] v0;
      a = false;
      b = false;
      v0 = new String[16];
      v0[0] = "EN";
      v0[1] = "FR";
      v0[2] = "DE";
      v0[3] = "IT";
      v0[4] = "SP";
      v0[5] = "JP";
      v0[6] = "KR";
      v0[7] = "ZH";
      v0[8] = "BR";
      v0[9] = "RU";
      v0[10] = "TR";
      v0[11] = "AR";
      v0[12] = "TH";
      v0[13] = "ID";
      v0[14] = "VI";
      v0[15] = "ZT";
      c = v0;
    }

    public IGPFreemiumActivity()
    {
      super();
      this.d = 0;
      this.e = false;
      this.f = false;
      this.g = null;
      this.h = null;
      this.i = false;
      this.j = false;
      this.k = 800;
      this.l = 480;
      this.m = "https://ingameads.gameloft.com/redir/freemium/hdfreemium.php?from=GAME_CODE&country=COUNTRY_DETECTED&lg=LANG&" +
               "udid=UDIDPHONE&hdidfv=HDIDFV&androidid=ANDROIDID&d=DEVICE&f=FIRMWARE&game_ver=VERSION&os=android&igp_rev=1006&conn=CONNSPEED";
      this.n = "";
      this.o = "https://signal-back.com";
      this.p = "https://ingameads.gameloft.com/redir/android/index.php?page=gameinformation";
      this.q = "https://ingameads.gameloft.com/redir/?from=";
      this.r = null;
      this.s = new int[]
               {
                 2131165439, 2131165440, 2131165441, 2131165442, 2131165443, 2131165444, 2131165445, 2131165446, 2131165447,
                 2131165448, 2131165449, 2131165450, 2131165451, 2131165452, 2131165453, 2131165454
               };
      this.t = new int[]
               {
                 2131165455, 2131165456, 2131165457, 2131165458, 2131165459, 2131165460, 2131165461, 2131165462, 2131165463,
                 2131165464, 2131165465, 2131165466, 2131165467, 2131165468, 2131165469, 2131165470
               };
      this.u = new int[]
               {
                 2131165471, 2131165472, 2131165473, 2131165474, 2131165475, 2131165476, 2131165477, 2131165478, 2131165479,
                 2131165480, 2131165481, 2131165482, 2131165483, 2131165484, 2131165485, 2131165486
               };
      this.v = new int[]
               {
                 2130837652, 2130837653, 2130837651, 2130837654, 2130837670, 2130837655, 2130837656, 2130837650, 2130837649,
                 2130837669, 2130837671, 2130837652, 2130837652, 2130837652, 2130837652, 2130837650
               };
      this.w = new int[]
               {
                 2130837661, 2130837662, 2130837660, 2130837663, 2130837667, 2130837664, 2130837665, 2130837659, 2130837658,
                 2130837666, 2130837668, 2130837661, 2130837661, 2130837661, 2130837661, 2130837659
               };
      this.C = null;
      SUtils.setContext(this);
    }

    private static String GetRedirectUrl(String p0)
    {
      java.net.HttpURLConnection v1 = null;
      java.net.HttpURLConnection v2 = null;
      String HeaderField = null; // RETVAL
      String v4 = null;
      Object v7 = null;
      Object v8 = null;
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
              v1 = null;
              _ehCatchPc = 1;
              v2 = (java.net.HttpURLConnection)new java.net.URL(p0).openConnection();
              try
              {
              v2.setAllowUserInteraction(false);
              v2.setInstanceFollowRedirects(false);
              v2.setRequestMethod("GET");
              v2.connect();
              HeaderField = v2.getHeaderField("Location");
              if ( v2 != null )
              v2.disconnect();
              v4 = HeaderField;
              }
              catch ( java.net.MalformedURLException e )
              {
              { _pc = 2; continue _sm; }
              }
              catch ( Exception e )
              {
              { _pc = 5; continue _sm; }
              }
              catch ( Throwable v6 )
              {
              v7 = v6;
              v1 = v2;
              v8 = v7;
              { _pc = 7; continue _sm; }
              }
              
              _ehCatchPc = -1;
              _pc = 9;
              continue _sm;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.MalformedURLException) ) { _pc = 4; continue _sm; }
              v2 = null;
              _pc = 2;
              continue _sm;
            case 2:
              if ( v2 != null )
              {
              v2.disconnect();
              v4 = null;
              { _pc = 9; continue _sm; }
              }
              _pc = 3;
              continue _sm;
            case 3:
              v4 = null;
              _pc = 9;
              continue _sm;
            case 4:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 6; continue _sm; }
              v2 = null;
              _pc = 5;
              continue _sm;
            case 5:
              if ( v2 != null )
              {
              v2.disconnect();
              v4 = null;
              { _pc = 9; continue _sm; }
              }
              _pc = 3;
              continue _sm;
            case 6:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 8; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v8 = _cv_1;
              _pc = 7;
              continue _sm;
            case 7:
              if ( v1 != null )
              v1.disconnect();
              throw com.gameloft.android.DecompRT.sneakyThrow(v8);
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 9:
              System.gc();
              return v4;
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

    private void a(int p0, String p1)
    {
      String Country = null;
      String v4 = null;
      String n = null;
      android.net.NetworkInfo ActiveNetworkInfo = null; // RETVAL
      android.net.NetworkInfo v7 = null;
      int Type = 0;
      int Subtype = 0; // RETVAL
      int v10 = 0;
      CharSequence v11 = null;
      android.view.Display DefaultDisplay = null;
      String[] v13 = null;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            b = true;
            this.d = p0;
            Device.getDeviceId();
            Country = Locale.getDefault().getCountry();
            v4 = Build.MANUFACTURER + "_" + Build.MODEL;
            this.n = this.m.replace("LANG", c[this.d]);
            this.n = this.n.replace("GAME_CODE", p1);
            this.n = this.n.replace("COUNTRY_DETECTED", Country);
            this.n = this.n.replace("ANDROIDID", Device.getAndroidId());
            this.n = this.n.replace("UDIDPHONE", Device.getSerial());
            this.n = this.n.replace("HDIDFV", Device.getHDIDFV());
            this.n = this.n.replace("DEVICE", v4);
            this.n = this.n.replace("FIRMWARE", Build.VERSION.RELEASE);
            this.n = this.n.replace("VERSION", "1.8.2f");
            n = this.n;
            ActiveNetworkInfo = ((android.net.ConnectivityManager)this.getSystemService("connectivity")).getActiveNetworkInfo();
            v7 = ActiveNetworkInfo;
            if ( !(ActiveNetworkInfo != null && ActiveNetworkInfo.isConnected()) ) { _pc = 12; continue _sm; }
            Type = v7.getType();
            Subtype = v7.getSubtype();
            if ( Type == 1 )
            {
            v10 = 1;
            { _pc = 13; continue _sm; }
            }
            if ( !(Type != 0) ) { _pc = 1; continue _sm; }
            {
            v10 = 0;
            }
            _pc = 11;
            continue _sm;
          case 1:
            _sw_1 = (Subtype);
            if ( (_sw_1 == (0)) || (_sw_1 == (1)) || (_sw_1 == (2)) || (_sw_1 == (4)) || (_sw_1 == (7)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (3)) || (_sw_1 == (5)) || (_sw_1 == (6)) || (_sw_1 == (8)) || (_sw_1 == (9)) || (_sw_1 == (10)) ) { _pc = 3; continue _sm; }
            _pc = 4;
            continue _sm;
          case 2:
            v10 = 0;
            _pc = 11;
            continue _sm;
          case 3:
            v10 = 1;
            _pc = 11;
            continue _sm;
          case 4:
            if ( Build.VERSION.SDK_INT >= 8 && Subtype == 11 )
            { _pc = 9; continue _sm; }
            if ( !(Build.VERSION.SDK_INT >= 9 && Subtype == 12) ) { _pc = 5; continue _sm; }
            v10 = 1;
            _pc = 11;
            continue _sm;
          case 5:
            if ( Build.VERSION.SDK_INT < 11 )
            { _pc = 7; continue _sm; }
            if ( !(Subtype == 14) ) { _pc = 6; continue _sm; }
            {
            v10 = 1;
            }
            _pc = 10;
            continue _sm;
          case 6:
            if ( !(Subtype == 13) ) { _pc = 7; continue _sm; }
            {
            v10 = 1;
            }
            _pc = 10;
            continue _sm;
          case 7:
            if ( Build.VERSION.SDK_INT >= 13 && Subtype == 15 ) { _pc = 8; continue _sm; } else { _pc = 9; continue _sm; }
          case 8:
            v10 = 1;
            _pc = 10;
            continue _sm;
          case 9:
            v10 = 0;
            _pc = 10;
            continue _sm;
          case 10:
            _pc = 11;
            continue _sm;
          case 11:
            _pc = 13;
            continue _sm;
          case 12:
            {
            v10 = 0;
            }
            _pc = 13;
            continue _sm;
          case 13:
            if ( v10 != 0 )
            v11 = "fast";
            else
            v11 = "slow";
            this.n = n.replace("CONNSPEED", v11);
            this.n = this.n.replaceAll(" ", "");
            DefaultDisplay = ((android.view.WindowManager)this.getSystemService("window")).getDefaultDisplay();
            this.n = this.n + "&width=" + DefaultDisplay.getWidth();
            this.n = this.n + "&height=" + DefaultDisplay.getHeight();
            v13 = this.n.split("[?]");
            this.n = v13[0] + "?data=" + Encrypter.crypt(v13[1]) + "&enc=1";
            if ( Build.VERSION.SDK_INT == 11 || Build.VERSION.SDK_INT == 12 )
            {
            this.l -= 48;
            }
            else if ( v4.toLowerCase().contains("kindle") )
            {
            this.l -= 20;
            }
            this.y.addView(this.z, -1, -1);
            this.z.loadUrl(this.n);
            return;
        }
      }
}

    private void a(android.view.View p0)
    {
      int v2;
      v2 = 0;
      if ( p0 == null )
        return;
      if ( p0.getBackground() != null )
      {
        try
        {
          p0.getBackground().setCallback(null);
          p0.setBackgroundResource(0);
        }
        catch ( Exception e )
        {
        }
      }
      if ( p0 instanceof android.widget.ImageButton )
      {
        try
        {
          if ( ((android.widget.ImageButton)p0).getDrawable() != null )
          {
            ((android.widget.ImageButton)p0).getDrawable().setCallback(null);
            ((android.widget.ImageButton)p0).setImageResource(0);
          }
        }
        catch ( Exception e )
        {
        }
      }
      if ( p0 instanceof android.view.ViewGroup )
      {
        while ( v2 < ((android.view.ViewGroup)p0).getChildCount() )
          this.a(((android.view.ViewGroup)p0).getChildAt(v2++));
        try
        {
          ((android.view.ViewGroup)p0).removeAllViews();
        }
        catch ( Exception e )
        {
        }
      }
    }

    private void a(String p0)
    {
      this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.bd(this, p0));
    }

    /* synthetic */ static android.webkit.WebView access$100(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      return p0.z;
    }

    /* synthetic */ static boolean access$1002(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0,
            boolean p1)
    {
      p0.j = p1;
      return p1;
    }

    /* synthetic */ static android.webkit.WebView access$102(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0,
            android.webkit.WebView p1)
    {
      p0.z = p1;
      return p1;
    }

    /* synthetic */ static void access$1100(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      p0.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.be(p0, p0.getString(p0.s[p0.d])));
    }

    /* synthetic */ static void access$1200(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      p0.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.bf(p0));
    }

    /* synthetic */ static String access$1300(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      return p0.r;
    }

    /* synthetic */ static String access$1302(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0,
            String p1)
    {
      p0.r = p1;
      return p1;
    }

    /* synthetic */ static void access$1400(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0,
            String p1)
    {
      android.content.Intent v2;
      android.content.Intent v3;
      v2 = new android.content.Intent();
      v2.setAction("android.intent.action.VIEW");
      v2.setData(Uri.parse(p1));
      v2.setFlags(0x10000000);
      if ( p0.getPackageManager().queryIntentActivities(v2, 0x10000).size() != 0 )
      {
        p0.startActivity(v2);
      }
      else
      {
        try
        {
          v3 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(
                                                                          p1.replaceAll("market://details", "https://play.google.com/store/apps/details").replaceAll("market://search", "https://play.google.com/store/search")));
          v3.setFlags(0x10000000);
          p0.startActivity(v3);
        }
        catch ( Exception e )
        {
        }
      }
    }

    /* synthetic */ static void access$1500(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0,
            String p1)
    {
      android.content.Intent v2;
      android.content.Intent v3;
      v2 = new android.content.Intent();
      v2.setAction("android.intent.action.VIEW");
      v2.setData(Uri.parse(p1));
      v2.setFlags(0x10000000);
      if ( p0.getPackageManager().queryIntentActivities(v2, 0x10000).size() != 0 )
      {
        p0.startActivity(v2);
      }
      else if ( p1.contains("www.amazon.com") )
      {
        try
        {
          v3 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p1.replaceAll("amzn://", "http://")));
          v3.setFlags(0x10000000);
          p0.startActivity(v3);
        }
        catch ( Exception e )
        {
        }
      }
    }

    /* synthetic */ static void access$1600(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0,
            String p1)
    {
      android.content.Intent LaunchIntentForPackage; // RETVAL
      android.content.Intent v3;
      LaunchIntentForPackage = p0.getPackageManager().getLaunchIntentForPackage("com.skt.skaf.A000Z00040");
      v3 = LaunchIntentForPackage;
      if ( LaunchIntentForPackage != null )
      {
        LaunchIntentForPackage.addFlags(0x20000000);
        v3.setClassName("com.skt.skaf.A000Z00040", "com.skt.skaf.A000Z00040.A000Z00040");
        v3.setAction("COLLAB_ACTION");
        v3.putExtra("com.skt.skaf.COL.URI", ("PRODUCT_VIEW/" + p1 + "/0").getBytes());
        v3.putExtra("com.skt.skaf.COL.REQUESTER", "A000Z00040");
      }
      else
      {
        v3 = new android.content.Intent("android.intent.action.VIEW", Uri.parse("http://tsto.re/" + p1));
        v3.setFlags(0x10000000);
      }
      p0.startActivity(v3);
    }

    /* synthetic */ static void access$1700(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0,
            String p1)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent();
      v2.setAction("android.intent.action.VIEW");
      v2.setData(Uri.parse(p1));
      v2.setFlags(0x10000000);
      if ( p0.getPackageManager().queryIntentActivities(v2, 0x10000).size() != 0 )
        p0.startActivity(v2);
    }

    /* synthetic */ static int[] access$1800(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      return p0.t;
    }

    /* synthetic */ static int[] access$1900(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      return p0.u;
    }

    /* synthetic */ static android.widget.RelativeLayout access$200(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      return p0.y;
    }

    /* synthetic */ static android.app.ProgressDialog access$2000(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      return p0.C;
    }

    /* synthetic */ static android.app.ProgressDialog access$2002(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0,
            android.app.ProgressDialog p1)
    {
      p0.C = p1;
      return p1;
    }

    /* synthetic */ static boolean access$300(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      return p0.i;
    }

    /* synthetic */ static boolean access$302(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0,
            boolean p1)
    {
      p0.i = p1;
      return p1;
    }

    /* synthetic */ static android.widget.VideoView access$400(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      return p0.h;
    }

    /* synthetic */ static android.widget.VideoView access$402(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0,
            android.widget.VideoView p1)
    {
      p0.h = p1;
      return p1;
    }

    /* synthetic */ static String access$500(String p0)
    {
      return getHttpResponse(p0);
    }

    /* synthetic */ static android.graphics.Bitmap access$600(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0,
            String p1)
    {
      return fetchImage(p1);
    }

    /* synthetic */ static android.widget.RelativeLayout access$700(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      return p0.g;
    }

    /* synthetic */ static android.widget.RelativeLayout access$702(
            com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0,
            android.widget.RelativeLayout p1)
    {
      p0.g = p1;
      return p1;
    }

    /* synthetic */ static int[] access$800(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      return p0.s;
    }

    /* synthetic */ static int access$900(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      return p0.d;
    }

    private void b()
    {
      this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.be(this, this.getString(this.s[this.d])));
    }

    private void b(String p0)
    {
      this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.be(this, p0));
    }

    private void c()
    {
      this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.bf(this));
    }

    private void c(String p0)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent();
      v2.setAction("android.intent.action.VIEW");
      v2.setData(Uri.parse(p0));
      v2.setFlags(0x10000000);
      if ( this.getPackageManager().queryIntentActivities(v2, 0x10000).size() != 0 )
        this.startActivity(v2);
    }

    private static boolean checkConnectionOther(int p0)
    {
      boolean v1;
      v1 = false;
      if ( Build.VERSION.SDK_INT < 8 || p0 != 11 )
      {
        if ( Build.VERSION.SDK_INT >= 9 && p0 == 12 )
        {
          return true;
        }
        else
        {
          if ( Build.VERSION.SDK_INT >= 11 )
          {
            if ( p0 == 14 )
              return true;
            if ( p0 == 13 )
              return true;
          }
          if ( Build.VERSION.SDK_INT >= 13 && p0 == 15 )
            return true;
        }
      }
      return v1;
    }

    private void d(String p0)
    {
      android.content.Intent v2;
      android.content.Intent v3;
      v2 = new android.content.Intent();
      v2.setAction("android.intent.action.VIEW");
      v2.setData(Uri.parse(p0));
      v2.setFlags(0x10000000);
      if ( this.getPackageManager().queryIntentActivities(v2, 0x10000).size() != 0 )
      {
        this.startActivity(v2);
      }
      else if ( p0.contains("www.amazon.com") )
      {
        try
        {
          v3 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p0.replaceAll("amzn://", "http://")));
          v3.setFlags(0x10000000);
          this.startActivity(v3);
        }
        catch ( Exception e )
        {
        }
      }
    }

    private boolean d()
    {
      android.net.NetworkInfo ActiveNetworkInfo = null; // RETVAL
      android.net.NetworkInfo v2 = null;
      int Type = 0;
      int Subtype = 0; // RETVAL
      boolean v5 = false;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            ActiveNetworkInfo = ((android.net.ConnectivityManager)this.getSystemService("connectivity")).getActiveNetworkInfo();
            v2 = ActiveNetworkInfo;
            if ( ActiveNetworkInfo == null || !ActiveNetworkInfo.isConnected() )
            return false;
            Type = v2.getType();
            Subtype = v2.getSubtype();
            if ( Type == 1 )
            return true;
            if ( Type != 0 )
            return false;
            _sw_1 = (Subtype);
            if ( (_sw_1 == (0)) || (_sw_1 == (1)) || (_sw_1 == (2)) || (_sw_1 == (4)) || (_sw_1 == (7)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (3)) || (_sw_1 == (5)) || (_sw_1 == (6)) || (_sw_1 == (8)) || (_sw_1 == (9)) || (_sw_1 == (10)) ) { _pc = 2; continue _sm; }
            _pc = 3;
            continue _sm;
          case 1:
            return false;
          case 2:
            return true;
          case 3:
            if ( Build.VERSION.SDK_INT >= 8 && Subtype == 11 )
            return false;
            if ( Build.VERSION.SDK_INT >= 9 && Subtype == 12 )
            return true;
            if ( Build.VERSION.SDK_INT < 11 )
            { _pc = 5; continue _sm; }
            if ( !(Subtype == 14) ) { _pc = 4; continue _sm; }
            {
            v5 = true;
            }
            _pc = 6;
            continue _sm;
          case 4:
            if ( !(Subtype == 13) ) { _pc = 5; continue _sm; }
            {
            v5 = true;
            }
            _pc = 6;
            continue _sm;
          case 5:
            if ( Build.VERSION.SDK_INT < 13 || Subtype != 15 )
            return false;
            v5 = true;
            _pc = 6;
            continue _sm;
          case 6:
            _pc = 7;
            continue _sm;
          case 7:
            return v5;
        }
      }
}

    private void e(String p0)
    {
      android.content.Intent v2;
      android.content.Intent v3;
      v2 = new android.content.Intent();
      v2.setAction("android.intent.action.VIEW");
      v2.setData(Uri.parse(p0));
      v2.setFlags(0x10000000);
      if ( this.getPackageManager().queryIntentActivities(v2, 0x10000).size() != 0 )
      {
        this.startActivity(v2);
      }
      else
      {
        try
        {
          v3 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(
                                                                          p0.replaceAll("market://details", "https://play.google.com/store/apps/details").replaceAll("market://search", "https://play.google.com/store/search")));
          v3.setFlags(0x10000000);
          this.startActivity(v3);
        }
        catch ( Exception e )
        {
        }
      }
    }

    private void f(String p0)
    {
      android.content.Intent LaunchIntentForPackage; // RETVAL
      android.content.Intent v3;
      LaunchIntentForPackage = this.getPackageManager().getLaunchIntentForPackage("com.skt.skaf.A000Z00040");
      v3 = LaunchIntentForPackage;
      if ( LaunchIntentForPackage != null )
      {
        LaunchIntentForPackage.addFlags(0x20000000);
        v3.setClassName("com.skt.skaf.A000Z00040", "com.skt.skaf.A000Z00040.A000Z00040");
        v3.setAction("COLLAB_ACTION");
        v3.putExtra("com.skt.skaf.COL.URI", ("PRODUCT_VIEW/" + p0 + "/0").getBytes());
        v3.putExtra("com.skt.skaf.COL.REQUESTER", "A000Z00040");
      }
      else
      {
        v3 = new android.content.Intent("android.intent.action.VIEW", Uri.parse("http://tsto.re/" + p0));
        v3.setFlags(0x10000000);
      }
      this.startActivity(v3);
    }

    private static android.graphics.Bitmap fetchImage(String p0)
    {
      java.net.HttpURLConnection v1;
      try
      {
        v1 = (java.net.HttpURLConnection)new java.net.URL(p0).openConnection();
        v1.setDoInput(true);
        v1.connect();
        return BitmapFactory.decodeStream(v1.getInputStream());
      }
      catch ( java.net.MalformedURLException e )
      {
        return null;
      }
      catch ( java.io.IOException e )
      {
        return null;
      }
    }

    private static String getHttpResponse(String p0)
    {
      String v1 = null;
      String[] v2 = null;
      java.io.BufferedReader v3 = null;
      StringBuffer i = null;
      String Line = null; // RETVAL
      Object v8 = null;
      Object v9 = null;
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
              v1 = null;
              _ehCatchPc = 1;
              v2 = p0.split("[?]");
              com.gameloft.android.DecompRT.discard(v2[0] + "?data=" + Encrypter.crypt(v2[1]) + "&enc=1");
              v3 = new java.io.BufferedReader(new java.io.InputStreamReader(new org.apache.http.impl.client.DefaultHttpClient().execute(new org.apache.http.client.methods.HttpGet(p0)).getEntity().getContent()));
              try
              {
              for ( i = new StringBuffer(""); ; i.append(Line) )
              {
              Line = v3.readLine();
              if ( Line == null )
              break;
              }
              v3.close();
              v1 = i.toString();
              try
              {
              v3.close();
              }
              catch ( Exception e )
              {
              }
              return v1;
              }
              catch ( Exception e )
              {
              { _pc = 2; continue _sm; }
              }
              catch ( Throwable v10 )
              {
              v9 = v10;
              { _pc = 4; continue _sm; }
              }
              



            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              v3 = null;
              _pc = 2;
              continue _sm;
            case 2:
              if ( v3 != null )
              {
              try
              {
              v3.close();
              return v1;
              }
              catch ( Exception e2 )
              {
              }
              }
              return v1;
            case 3:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v8 = _cv_1;
              v3 = null;
              v9 = v8;
              _pc = 4;
              continue _sm;
            case 4:
              if ( v3 != null )
              {
              try
              {
              v3.close();
              }
              catch ( Exception e )
              {
              }
              }
              throw com.gameloft.android.DecompRT.sneakyThrow(v9);
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              throw new IllegalStateException("Unreachable");
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

    public static String getInstalledGames()
    {
      try
      {
        return SUtils.getContext().getSharedPreferences("IGP_Prefs", 0).getString("INSTALLED_GAMES", "");
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    public static String getRewardsAvailable()
    {
      try
      {
        return SUtils.getContext().getSharedPreferences("IGP_Prefs", 0).getString("REWARDS_AVAILABLE", "");
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    public static String getRewardsUser()
    {
      try
      {
        return SUtils.getContext().getSharedPreferences("IGP_Prefs", 0).getString("REWARDS_USER", "");
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    public static void retrieveItems(int p0, String p1, com.gameloft.android.GAND.GloftGGSS.bs p2)
    {
      new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.bc(p1, p0, p2)).start();
    }

    public final void a()
    {
      try
      {
        a = false;
        if ( this.i && this.h != null )
        {
          try
          {
            this.i = false;
            this.setContentView(this.y);
            this.h.stopPlayback();
            this.h = null;
          }
          catch ( Exception e )
          {
          }
        }
        if ( this.z != null )
          this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.az(this));
        this.finish();
      }
      catch ( Exception e )
      {
      }
    }

    public void onCreate(android.os.Bundle p0)
    {
      android.content.Intent Intent = null;
      String String = null;
      int Int = 0; // RETVAL
      int d = 0;
      String Country = null;
      String v7 = null;
      String n = null;
      android.net.NetworkInfo ActiveNetworkInfo = null; // RETVAL
      android.net.NetworkInfo v10 = null;
      int Type = 0;
      int Subtype = 0; // RETVAL
      int v13 = 0;
      CharSequence v14 = null;
      android.view.Display DefaultDisplay = null;
      String[] v16 = null;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            super.onCreate(p0);
            if ( Game.az == null )
            {
            this.a();
            return;
            }
            this.x = ((android.view.WindowManager)this.getSystemService("window")).getDefaultDisplay();
            Intent = this.getIntent();
            String = "GGSS";
            if ( Intent.getExtras() != null )
            {
            Int = Intent.getExtras().getInt("language");
            d = Int;
            if ( Int < 0 || Int >= c.length )
            d = 0;
            this.e = Intent.getExtras().getBoolean("isPortrait");
            String = Intent.getExtras().getString("gamecode");
            if ( String == null )
            String = "GGSS";
            if ( this.e )
            this.setRequestedOrientation(1);
            else
            this.setRequestedOrientation(0);
            this.l = this.x.getHeight();
            this.k = this.x.getWidth();
            }
            else
            {
            d = this.d;
            this.e = false;
            this.setRequestedOrientation(0);
            this.l = this.x.getHeight();
            this.k = this.x.getWidth();
            }
            this.y = new android.widget.RelativeLayout(this);
            this.z = new com.gameloft.android.GAND.GloftGGSS.bt(this, this);
            this.z.getSettings().setJavaScriptEnabled(true);
            this.z.getSettings().setAppCacheEnabled(false);
            this.z.getSettings().setSupportZoom(false);
            this.z.getSettings().setBuiltInZoomControls(false);
            this.z.getSettings().setDefaultTextEncodingName("utf-8");
            this.z.getSettings().setLightTouchEnabled(true);
            this.z.getSettings().setLoadsImagesAutomatically(true);
            this.z.setWebChromeClient(new com.gameloft.android.GAND.GloftGGSS.bn(this));
            this.z.setWebViewClient(new com.gameloft.android.GAND.GloftGGSS.bo(this));
            this.z.getSettings().setPluginState(WebSettings.PluginState.ON);
            this.z.getSettings().setLoadWithOverviewMode(true);
            this.z.getSettings().setUseWideViewPort(false);
            this.z.setBackgroundColor(Color.argb(1, 255, 255, 255));
            this.z.setVerticalScrollbarOverlay(true);
            this.z.addJavascriptInterface(new com.gameloft.android.GAND.GloftGGSS.bg(this, this, this.y), "Android");
            if ( Build.VERSION.SDK_INT >= 19 )
            {
            this.z.getSettings().setUseWideViewPort(true);
            this.z.getSettings().setLoadWithOverviewMode(true);
            }
            if ( Build.VERSION.SDK_INT >= 21 )
            this.z.getSettings().setMixedContentMode(0);
            if ( Build.VERSION.SDK_INT >= 17 )
            this.z.getSettings().setMediaPlaybackRequiresUserGesture(false);
            this.z.addJavascriptInterface(new com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity$IGPInterface(this, 0), "JSInterface");
            this.setContentView(this.y);
            if ( Build.VERSION.SDK_INT >= 9 )
            {
            this.setRequestedOrientation(6);
            this.getRequestedOrientation();
            }
            if ( d < 0 || d > c.length )
            d = 0;
            b = true;
            this.d = d;
            Device.getDeviceId();
            Country = Locale.getDefault().getCountry();
            v7 = Build.MANUFACTURER + "_" + Build.MODEL;
            this.n = this.m.replace("LANG", c[this.d]);
            this.n = this.n.replace("GAME_CODE", String);
            this.n = this.n.replace("COUNTRY_DETECTED", Country);
            this.n = this.n.replace("ANDROIDID", Device.getAndroidId());
            this.n = this.n.replace("UDIDPHONE", Device.getSerial());
            this.n = this.n.replace("HDIDFV", Device.getHDIDFV());
            this.n = this.n.replace("DEVICE", v7);
            this.n = this.n.replace("FIRMWARE", Build.VERSION.RELEASE);
            this.n = this.n.replace("VERSION", "1.8.2f");
            n = this.n;
            ActiveNetworkInfo = ((android.net.ConnectivityManager)this.getSystemService("connectivity")).getActiveNetworkInfo();
            v10 = ActiveNetworkInfo;
            if ( ActiveNetworkInfo == null || !ActiveNetworkInfo.isConnected() )
            {
            v13 = 0;
            { _pc = 11; continue _sm; }
            }
            Type = v10.getType();
            Subtype = v10.getSubtype();
            if ( !(Type == 1) ) { _pc = 1; continue _sm; }
            {
            v13 = 1;
            }
            _pc = 11;
            continue _sm;
          case 1:
            if ( Type != 0 )
            {
            v13 = 0;
            { _pc = 11; continue _sm; }
            }
            _sw_1 = (Subtype);
            if ( (_sw_1 == (0)) || (_sw_1 == (1)) || (_sw_1 == (2)) || (_sw_1 == (4)) || (_sw_1 == (7)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (3)) || (_sw_1 == (5)) || (_sw_1 == (6)) || (_sw_1 == (8)) || (_sw_1 == (9)) || (_sw_1 == (10)) ) { _pc = 3; continue _sm; }
            _pc = 4;
            continue _sm;
          case 2:
            v13 = 0;
            _pc = 11;
            continue _sm;
          case 3:
            v13 = 1;
            _pc = 11;
            continue _sm;
          case 4:
            if ( Build.VERSION.SDK_INT >= 8 && Subtype == 11 )
            { _pc = 8; continue _sm; }
            if ( !(Build.VERSION.SDK_INT >= 9 && Subtype == 12) ) { _pc = 5; continue _sm; }
            v13 = 1;
            _pc = 11;
            continue _sm;
          case 5:
            if ( Build.VERSION.SDK_INT < 11 )
            { _pc = 7; continue _sm; }
            if ( !(Subtype == 14) ) { _pc = 6; continue _sm; }
            {
            v13 = 1;
            }
            _pc = 10;
            continue _sm;
          case 6:
            if ( !(Subtype == 13) ) { _pc = 7; continue _sm; }
            {
            v13 = 1;
            }
            _pc = 10;
            continue _sm;
          case 7:
            if ( !(Build.VERSION.SDK_INT < 13 || Subtype != 15) ) { _pc = 9; continue _sm; }
            _pc = 8;
            continue _sm;
          case 8:
            v13 = 0;
            _pc = 11;
            continue _sm;
          case 9:
            v13 = 1;
            _pc = 10;
            continue _sm;
          case 10:
            _pc = 11;
            continue _sm;
          case 11:
            if ( v13 != 0 )
            v14 = "fast";
            else
            v14 = "slow";
            this.n = n.replace("CONNSPEED", v14);
            this.n = this.n.replaceAll(" ", "");
            DefaultDisplay = ((android.view.WindowManager)this.getSystemService("window")).getDefaultDisplay();
            this.n = this.n + "&width=" + DefaultDisplay.getWidth();
            this.n = this.n + "&height=" + DefaultDisplay.getHeight();
            v16 = this.n.split("[?]");
            this.n = v16[0] + "?data=" + Encrypter.crypt(v16[1]) + "&enc=1";
            if ( Build.VERSION.SDK_INT == 11 || Build.VERSION.SDK_INT == 12 )
            {
            this.l -= 48;
            }
            else if ( v7.toLowerCase().contains("kindle") )
            {
            this.l -= 20;
            }
            this.y.addView(this.z, -1, -1);
            this.z.loadUrl(this.n);
            a = true;
            return;
        }
      }
}

    protected void onDestroy()
    {
      this.a(this.y);
      System.gc();
      super.onDestroy();
    }

    public boolean onKeyDown(int p0, android.view.KeyEvent p1)
    {
      boolean v3;
      v3 = false;
      if ( p0 == 82 )
      {
        p1.startTracking();
        return true;
      }
      return v3;
    }

    public boolean onKeyLongPress(int p0, android.view.KeyEvent p1)
    {
      boolean v3;
      v3 = false;
      if ( p0 != 27 )
        return p0 != 82;
      return v3;
    }

    public boolean onKeyUp(int p0, android.view.KeyEvent p1)
    {
      boolean v3;
      v3 = false;
      if ( p0 != 27 )
      {
        switch ( p0 )
        {
          case 4:
          case 97:
            if ( !this.i && this.j && this.z != null )
            {
              this.z.loadUrl("javascript:onBackPressed()");
              v3 = true;
            }
            else
            {
              this.a();
              v3 = true;
            }
            break;
          case 96:
            if ( this.z != null )
            {
              this.z.dispatchKeyEvent(new android.view.KeyEvent(0, 66));
              this.z.dispatchKeyEvent(new android.view.KeyEvent(1, 66));
            }
            v3 = true;
            break;
          case 99:
          case 100:
          case 102:
          case 103:
          case 108:
          case 109:
            v3 = true;
            break;
          default:
            v3 = super.onKeyUp(p0, p1);
            break;
        }
      }
      return v3;
    }

    public void onPause()
    {
      if ( this.i && this.h != null )
      {
        try
        {
          this.h.suspend();
        }
        catch ( Exception e )
        {
        }
      }
      if ( this.z != null )
      {
        this.z.loadUrl("javascript:onPause()");
        this.z.onPause();
        this.z.pauseTimers();
      }
      super.onPause();
    }

    public void onResume()
    {
      super.onResume();
      new com.gameloft.android.GAND.GloftGGSS.ba(this).start();
    }

    protected void onStart()
    {
      super.onStart();
    }

    protected void onStop()
    {
      super.onStop();
    }

    public void onWindowFocusChanged(boolean p0)
    {
      b = p0;
    }

}
