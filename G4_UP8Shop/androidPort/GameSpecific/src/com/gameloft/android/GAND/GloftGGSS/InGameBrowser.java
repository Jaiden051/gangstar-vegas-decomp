// Decompiled from classes.dex (SourceFile: InGameBrowser.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.graphics.Color;
import android.net.Uri;
import android.os.Build;
import android.os.SystemClock;
import android.view.InputDevice;
import android.view.MotionEvent;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Encrypter;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.gameloft.android.hdidfv.HDIDFV;
import java.util.Locale;
import org.apache.http.util.EncodingUtils;
public class InGameBrowser extends android.app.Activity implements android.view.View.OnTouchListener {
    // Fields
    public static int a;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    public static boolean f;
    private static java.lang.String m;
    private static java.lang.String n;
    private static java.lang.String o;
    private static java.lang.String p;
    private static java.lang.String q;
    private static java.lang.String r;
    private static java.lang.String s;
    private static int t;
    private static int u;
    private static com.gameloft.android.GAND.GloftGGSS.ch v;
    private static java.lang.String[] w;
    private java.lang.String A;
    private android.widget.AbsoluteLayout B;
    private android.widget.ImageView C;
    private android.view.InputDevice D;
    private float E;
    private float F;
    private float G;
    private float H;
    private float I;
    private float J;
    private int K;
    private int L;
    private boolean M;
    private android.app.ProgressDialog N;
    private android.webkit.WebView g;
    private android.widget.RelativeLayout h;
    private android.widget.ImageButton i;
    private android.widget.ImageButton j;
    private android.widget.ImageButton k;
    private android.widget.ImageButton l;
    private int[] x;
    private int[] y;
    private int[] z;

    // Methods
    static
    {
      String[] v0;
      m = "https://ingameads.gameloft.com/redir/ingamebrowser.php";
      n = "from=FROM&op=OPERATOR&country=COUNTRY&lg=LANG&udid=UDID&androidid=ANDROID_ID&hdidfv=HDIDFV&game_ver=VERSION&d=DEVI" +
          "CE&f=FIRMWARE&anonymous=ANONYMOUS_ACCOUNT&fbid=FACEBOOK_ID&gliveusername=GLIVE_USERNAME&googleid=GOOGLEID&os=android";
      o = "https://ingameads.gameloft.com/redir/?";
      p = "from=FROM&op=OPERATOR&ctg=FORUM&game_ver=VERSION&lg=LANG&country=COUNTRY&d=DEVICE&f=FIRMWARE&udid=UDID&hdidfv=HDID" +
          "FV&androidid=ANDROID_ID";
      q = "https://ingameads.gameloft.com/redir/ingamenews.php?action=checkNews&last-id=LAST_ID";
      r = "https://ingameads.gameloft.com/redir/ingamenews.php?action=saveNews&last-id=LAST_ID";
      s = "https://ingameads.gameloft.com/redir/ingamenews.php?action=displayNews";
      a = 0;
      b = "";
      c = "";
      d = "";
      e = "";
      t = -1;
      u = -1;
      v = null;
      v0 = new String[16];
      v0[0] = "EN";
      v0[1] = "FR";
      v0[2] = "DE";
      v0[3] = "IT";
      v0[4] = "SP";
      v0[5] = "JP";
      v0[6] = "KR";
      v0[7] = "CN";
      v0[8] = "BR";
      v0[9] = "RU";
      v0[10] = "TR";
      v0[11] = "AR";
      v0[12] = "TH";
      v0[13] = "ID";
      v0[14] = "VI";
      v0[15] = "ZT";
      w = v0;
      f = false;
    }

    public InGameBrowser()
    {
      super();
      this.g = null;
      this.h = null;
      this.l = null;
      this.x = new int[]
               {
                 2131165391, 2131165392, 2131165393, 2131165394, 2131165395, 2131165396, 2131165397, 2131165398, 2131165399,
                 2131165400, 2131165401, 2131165402, 2131165403, 2131165404, 2131165405, 2131165406
               };
      this.y = new int[]
               {
                 2131165407, 2131165408, 2131165409, 2131165410, 2131165411, 2131165412, 2131165413, 2131165414, 2131165415,
                 2131165416, 2131165417, 2131165418, 2131165419, 2131165420, 2131165421, 2131165422
               };
      this.z = new int[]
               {
                 2131165423, 2131165424, 2131165425, 2131165426, 2131165427, 2131165428, 2131165429, 2131165430, 2131165431,
                 2131165432, 2131165433, 2131165434, 2131165435, 2131165436, 2131165437, 2131165438
               };
      this.A = "NONE";
      this.B = null;
      this.C = null;
      this.D = null;
      this.E = 0.0f;
      this.F = 0.0f;
      this.G = 0.0f;
      this.H = 0.0f;
      this.I = 0.0f;
      this.J = 0.0f;
      this.K = 0;
      this.L = 0;
      this.M = false;
      this.N = null;
    }

    private void a()
    {
      long v1;
      long v2;
      float v3;
      float v4;
      try
      {
        v1 = SystemClock.uptimeMillis();
        v2 = SystemClock.uptimeMillis() + 100;
        v3 = (float)(this.C.getWidth() / 2) + this.C.getX();
        v4 = (float)(this.C.getHeight() / 2) + this.C.getY();
        this.h.dispatchTouchEvent(MotionEvent.obtain(v1, v2, 0, v3, v4, 0));
        this.h.dispatchTouchEvent(MotionEvent.obtain(v1, v2, 1, v3, v4, 0));
      }
      catch ( Exception e )
      {
      }
    }

    private void a(int p0)
    {
      switch ( p0 )
      {
        case 2131427360:
          this.finish();
          break;
        case 2131427362:
          this.g.goBack();
          break;
        case 2131427363:
          this.g.goForward();
          break;
        case 2131427364:
          this.g.reload();
          break;
        default:
          return;
      }
    }

    private void a(String p0)
    {
      this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.cb(this, p0));
    }

    /* synthetic */ static boolean access$002(
            com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0,
            boolean p1)
    {
      p0.M = p1;
      return p1;
    }

    /* synthetic */ static android.widget.ImageView access$100(
            com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      return p0.C;
    }

    /* synthetic */ static int access$1000(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      return p0.L;
    }

    /* synthetic */ static String access$1100()
    {
      return getLastNewsIndex();
    }

    /* synthetic */ static String access$1200()
    {
      return q;
    }

    /* synthetic */ static String access$1300()
    {
      return n;
    }

    /* synthetic */ static String access$1400(String p0)
    {
      return solveTemplate(p0);
    }

    /* synthetic */ static String access$1500(String p0, String p1)
    {
      return postData(p0, p1);
    }

    /* synthetic */ static void access$1600(org.json.JSONObject p0, boolean p1)
    {
      saveJsonData(p0, p1);
    }

    /* synthetic */ static String access$1700()
    {
      return r;
    }

    /* synthetic */ static void access$1800(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      p0.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.cc(p0));
    }

    /* synthetic */ static android.app.ProgressDialog access$1900(
            com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      return p0.N;
    }

    /* synthetic */ static android.app.ProgressDialog access$1902(
            com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0,
            android.app.ProgressDialog p1)
    {
      p0.N = p1;
      return p1;
    }

    /* synthetic */ static android.view.InputDevice access$200(
            com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      return p0.D;
    }

    /* synthetic */ static void access$2000(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      p0.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.cb(p0, p0.getString(p0.x[a])));
    }

    /* synthetic */ static android.view.InputDevice access$202(
            com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0,
            android.view.InputDevice p1)
    {
      p0.D = p1;
      return p1;
    }

    /* synthetic */ static void access$2100(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      p0.b();
    }

    /* synthetic */ static void access$2200(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0, String p1)
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
                                                                          p1.replaceAll("market://details?", "https://play.google.com/store/apps/details?").replaceAll("market://search?", "https://play.google.com/store/search?")));
          v3.setFlags(0x10000000);
          p0.startActivity(v3);
        }
        catch ( Exception e )
        {
        }
      }
    }

    /* synthetic */ static void access$2300(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0, String p1)
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

    /* synthetic */ static void access$2400(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0, String p1)
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

    /* synthetic */ static void access$2500(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0, String p1)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent();
      v2.setAction("android.intent.action.VIEW");
      v2.setData(Uri.parse(p1));
      v2.setFlags(0x10000000);
      if ( p0.getPackageManager().queryIntentActivities(v2, 0x10000).size() != 0 )
        p0.startActivity(v2);
    }

    /* synthetic */ static int[] access$2600(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      return p0.y;
    }

    /* synthetic */ static int[] access$2700(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      return p0.z;
    }

    /* synthetic */ static android.view.InputDevice access$300(
            com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0,
            int p1)
    {
      return findBySource(p1);
    }

    /* synthetic */ static android.widget.AbsoluteLayout access$400(
            com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      return p0.B;
    }

    /* synthetic */ static float access$500(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      return p0.G;
    }

    /* synthetic */ static float access$600(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      return p0.H;
    }

    /* synthetic */ static float access$700(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      return p0.I;
    }

    /* synthetic */ static float access$800(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      return p0.J;
    }

    /* synthetic */ static int access$900(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      return p0.K;
    }

    private void b()
    {
      f = false;
      this.finish();
    }

    private void b(String p0)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent();
      v2.setAction("android.intent.action.VIEW");
      v2.setData(Uri.parse(p0));
      v2.setFlags(0x10000000);
      if ( this.getPackageManager().queryIntentActivities(v2, 0x10000).size() != 0 )
        this.startActivity(v2);
    }

    private void c()
    {
      this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.cb(this, this.getString(this.x[a])));
    }

    private void c(String p0)
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

    private void d()
    {
      this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.cc(this));
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
      else
      {
        try
        {
          v3 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(
                                                                          p0.replaceAll("market://details?", "https://play.google.com/store/apps/details?").replaceAll("market://search?", "https://play.google.com/store/search?")));
          v3.setFlags(0x10000000);
          this.startActivity(v3);
        }
        catch ( Exception e )
        {
        }
      }
    }

    private void e(String p0)
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

    private static android.view.InputDevice findBySource(int p0)
    {
      int[] DeviceIds;
      int i;
      android.view.InputDevice Device;
      DeviceIds = InputDevice.getDeviceIds();
      for ( i = 0; ; ++i )
      {
        if ( i >= DeviceIds.length )
          return null;
        Device = InputDevice.getDevice(DeviceIds[i]);
        if ( (Device.getSources() & 0xFFFFFF00 & p0) != 0 && !Device.getName().contains("ats_input") )
          break;
      }
      if ( Build.VERSION.SDK_INT <= 15 || Device.getDescriptor().contains("ats_input") )
        return Device;
      else
        return Device;
    }

    private static String getLastNewsIndex()
    {
      try
      {
        return SUtils.getContext().getSharedPreferences("InGameBrowser_lastNewsIndex", 0).getString("LAST_NEWS_INDEX", "-1");
      }
      catch ( Exception e )
      {
        return "-1";
      }
    }

    public static int getUnreadNewsNumber()
    {
      return t;
    }

    public static native void nativeUnreadNewsChangedCallback(int p0);

    public static void openCustomLink(String p0)
    {
      android.content.Intent v1;
      try
      {
        v1 = new android.content.Intent(SUtils.getContext(), com.gameloft.android.GAND.GloftGGSS.InGameBrowser.class);
        v1.putExtra("extra_url", p0);
        SUtils.getContext().startActivity(v1);
      }
      catch ( Exception e )
      {
      }
    }

    private static String postData(String p0, String p1)
    {
      int v2;
      org.apache.http.client.HttpClient v3;
      org.apache.http.client.methods.HttpPost v4;
      java.util.List v5;
      String[] v6;
      int v7;
      String v8;
      int v9;
      java.io.BufferedReader v12;
      StringBuffer i;
      String Line; // RETVAL
    
      v2 = 0;
      v3 = new org.apache.http.impl.client.DefaultHttpClient();
      v4 = new org.apache.http.client.methods.HttpPost(p0);
      try
      {
        v5 = new java.util.ArrayList(2);
        v6 = p1.split("[&]");
        v7 = v6.length;
        while ( v2 < v7 )
        {
          v8 = v6[v2];
          v9 = v8.indexOf("=");
          if ( v9 == -1 || v9 == v8.length() - 1 )
          {
            if ( v9 == v8.length() - 1 )
              v5.add(new org.apache.http.message.BasicNameValuePair(v8.substring(0, v9), ""));
          }
          else
          {
            v5.add(new org.apache.http.message.BasicNameValuePair(v8.substring(0, v9), v8.substring(v9 + 1)));
          }
          ++v2;
        }
        v4.setEntity(new org.apache.http.client.entity.UrlEncodedFormEntity(v5));
        v12 = new java.io.BufferedReader(new java.io.InputStreamReader(v3.execute(v4).getEntity().getContent()));
        for ( i = new StringBuffer(""); ; i.append(Line + "\n") )
        {
          Line = v12.readLine();
          if ( Line == null )
            break;
        }
        v12.close();
        return i.toString();
      }
      catch ( Exception v10 )
      {
        v10.printStackTrace();
        return null;
      }
    }

    public static void refreshUnreadNewsNumber()
    {
      new com.gameloft.android.GAND.GloftGGSS.bz().start();
    }

    private static void refreshUnreadNewsNumberInternal()
    {
      new com.gameloft.android.GAND.GloftGGSS.ca().start();
    }

    private static void saveJsonData(org.json.JSONObject p0, boolean p1)
    {
      if ( p0.optBoolean("success", false) )
      {
        if ( p1 )
          saveLastNewsIndex(p0.optString("current-id", "-1"));
        t = p0.optInt("unread", -1);
        try
        {
          nativeUnreadNewsChangedCallback(t);
        }
        catch ( UnsatisfiedLinkError e )
        {
        }
      }
    }

    private static void saveLastNewsIndex(String p0)
    {
      android.content.SharedPreferences.Editor v1;
      try
      {
        v1 = SUtils.getContext().getSharedPreferences("InGameBrowser_lastNewsIndex", 0).edit();
        v1.putString("LAST_NEWS_INDEX", p0);
        v1.commit();
      }
      catch ( Exception e )
      {
      }
    }

    public static void setUnreadNewsChangedCallback(com.gameloft.android.GAND.GloftGGSS.ch p0)
    {
      v = p0;
    }

    public static void showCustomerCare()
    {
      try
      {
        SUtils.getContext().startActivity(new android.content.Intent(SUtils.getContext(), com.gameloft.android.GAND.GloftGGSS.InGameBrowser.class));
      }
      catch ( Exception e )
      {
      }
    }

    public static void showCustomerCareWithBANType(int p0)
    {
      android.content.Intent v1;
      try
      {
        v1 = new android.content.Intent(SUtils.getContext(), com.gameloft.android.GAND.GloftGGSS.InGameBrowser.class);
        v1.putExtra("ban_type", p0);
        SUtils.getContext().startActivity(v1);
      }
      catch ( Exception e )
      {
      }
    }

    public static void showForum()
    {
      android.content.Intent v0;
      try
      {
        v0 = new android.content.Intent(SUtils.getContext(), com.gameloft.android.GAND.GloftGGSS.InGameBrowser.class);
        v0.putExtra("extra_url", "forum");
        SUtils.getContext().startActivity(v0);
      }
      catch ( Exception e )
      {
      }
    }

    public static void showInGameBrowserWithUrl(String p0)
    {
      android.content.Intent v1;
      try
      {
        v1 = new android.content.Intent(SUtils.getContext(), com.gameloft.android.GAND.GloftGGSS.InGameBrowser.class);
        v1.putExtra("extra_url", p0);
        SUtils.getContext().startActivity(v1);
      }
      catch ( Exception e )
      {
      }
    }

    public static void showNews()
    {
      android.content.Intent v0;
      try
      {
        v0 = new android.content.Intent(SUtils.getContext(), com.gameloft.android.GAND.GloftGGSS.InGameBrowser.class);
        v0.putExtra("extra_url", "news");
        SUtils.getContext().startActivity(v0);
      }
      catch ( Exception e )
      {
      }
    }

    private static String solveTemplate(String p0)
    {
      if ( p0 == null )
        return "";
      if ( a < 0 || a >= w.length )
        a = 0;
      return p0.replaceAll("FROM", "GGSS").replaceAll("OPERATOR", "GAND").replaceAll("COUNTRY", Locale.getDefault().getCountry()).replaceAll("LANG", w[a]).replaceAll("UDID", Device.getSerial()).replaceAll("ANDROID_ID", Device.getAndroidId()).replaceAll("HDIDFV", Device.getHDIDFV()).replaceAll("VERSION", "1.8.2f").replaceAll("DEVICE", Build.MANUFACTURER + "_" + Build.MODEL).replaceAll("FIRMWARE", Build.VERSION.RELEASE).replaceAll("ANONYMOUS_ACCOUNT", b).replaceAll("FACEBOOK_ID", c).replaceAll("GLIVE_USERNAME", d).replaceAll("GOOGLEID", e).replaceAll(" ", "");
    }

    public void onBackPressed()
    {
      if ( this.g.canGoBack() )
        this.g.goBack();
      else
        this.b();
    }

    protected void onCreate(android.os.Bundle p0)
    {
      android.view.Display DefaultDisplay;
      android.widget.RelativeLayout v3;
      String StringExtra;
      String v5;
      android.view.View DecorView;
      int IntExtra;
      super.onCreate(p0);
      f = true;
      this.setContentView(0x7f030000);
      DefaultDisplay = ((android.view.WindowManager)this.getSystemService("window")).getDefaultDisplay();
      this.K = DefaultDisplay.getWidth();
      this.L = DefaultDisplay.getHeight();
      v3 = (android.widget.RelativeLayout)this.findViewById(2131427361);
      this.g = new com.gameloft.android.GAND.GloftGGSS.ci(this, this);
      this.g.getSettings().setJavaScriptEnabled(true);
      this.g.getSettings().setLoadWithOverviewMode(true);
      this.g.getSettings().setUseWideViewPort(false);
      this.g.getSettings().setBuiltInZoomControls(false);
      this.g.getSettings().setSupportZoom(true);
      this.g.setWebViewClient(new com.gameloft.android.GAND.GloftGGSS.cd(this));
      if ( Build.VERSION.SDK_INT >= 21 )
        this.g.getSettings().setMixedContentMode(0);
      v3.addView(this.g, -1, -1);
      this.i = (android.widget.ImageButton)this.findViewById(2131427362);
      this.j = (android.widget.ImageButton)this.findViewById(2131427363);
      this.k = (android.widget.ImageButton)this.findViewById(2131427364);
      this.l = (android.widget.ImageButton)this.findViewById(2131427360);
      this.i.setOnTouchListener(this);
      this.j.setOnTouchListener(this);
      this.k.setOnTouchListener(this);
      this.l.setOnTouchListener(this);
      StringExtra = this.getIntent().getStringExtra("extra_url");
      v5 = solveTemplate(n);
      if ( StringExtra != null )
      {
        if ( StringExtra.equals("forum") )
        {
          this.A = "FORUM";
          this.g.loadUrl(o + "data=" + Encrypter.crypt(solveTemplate(p)) + "&enc=1");
          this.g.postUrl(m + "?ctg=FORUM", EncodingUtils.getBytes(v5, "BASE64"));
        }
        else if ( StringExtra.equals("news") )
        {
          this.A = "NEWS";
          this.g.postUrl(s, EncodingUtils.getBytes(v5, "BASE64"));
        }
        else
        {
          this.g.postUrl(StringExtra, EncodingUtils.getBytes(v5, "BASE64"));
        }
      }
      else
      {
        this.A = "SUPPORT";
        IntExtra = this.getIntent().getIntExtra("ban_type", -1);
        if ( IntExtra < 0 )
          this.g.postUrl(m + "?ctg=SUPPORT", EncodingUtils.getBytes(v5, "BASE64"));
        else
          this.g.postUrl(m + "?ctg=BANNED", EncodingUtils.getBytes(v5 + "&extra_14=" + IntExtra, "BASE64"));
      }
      this.h = (android.widget.RelativeLayout)this.findViewById(2131427359);
      DecorView = this.getWindow().getDecorView();
      DecorView.getViewTreeObserver().addOnGlobalLayoutListener((android.view.ViewTreeObserver.OnGlobalLayoutListener)new com.gameloft.android.GAND.GloftGGSS.bu(this, DecorView));
      this.B = new android.widget.AbsoluteLayout(this);
      this.B.setBackgroundColor(0);
      this.h.addView(this.B, -1, -1);
      this.C = new android.widget.ImageView(this);
      this.C.setImageResource(2130837589);
      this.B.addView(this.C, new android.widget.AbsoluteLayout.LayoutParams(-2, -2, this.K / 2, this.L / 2));
      this.B.setVisibility(8);
      this.D = findBySource(16777232);
      if ( this.D != null )
        this.B.setVisibility(0);
      new com.gameloft.android.GAND.GloftGGSS.bv(this).start();
      new com.gameloft.android.GAND.GloftGGSS.bx(this).start();
    }

    public void onDestroy()
    {
      if ( this.A.equals("NEWS") )
        refreshUnreadNewsNumberInternal();
      if ( this.g != null )
      {
        try
        {
          if ( Build.VERSION.SDK_INT >= 11 )
            this.g.onPause();
          this.g.loadUrl("about:blank");
          this.g.destroyDrawingCache();
          this.g.destroy();
          this.g = null;
        }
        catch ( Exception e )
        {
        }
      }
      super.onDestroy();
    }

    public boolean onGenericMotionEvent(android.view.MotionEvent p0)
    {
      boolean v2;
      float AxisValue;
      float v4; // RETVAL
    
      v2 = true;
      if ( this.M )
        return super.onGenericMotionEvent(p0);
      this.G = p0.getAxisValue(0);
      this.H = p0.getAxisValue(1);
      this.I = p0.getAxisValue(11);
      this.J = p0.getAxisValue(14);
      this.E = p0.getAxisValue(15);
      this.F = p0.getAxisValue(16);
      AxisValue = p0.getAxisValue(23);
      v4 = p0.getAxisValue(22);
      if ( AxisValue >= 0.7 || v4 >= 0.7 )
        this.a();
      if ( this.E != 0.0f || this.F != 0.0f )
      {
        this.G = 0.0f;
        this.H = 0.0f;
        this.I = 0.0f;
        this.J = 0.0f;
      }
      if ( this.F != 0.0f && this.g != null )
      {
        if ( this.F == 1.0 )
          this.g.pageDown(false);
        else
          this.g.pageUp(false);
      }
      return v2;
    }

    public boolean onKeyDown(int p0, android.view.KeyEvent p1)
    {
      boolean v3 = false;
      float v5 = 0.0f;
      float v6 = 0.0f;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = true;
            if ( this.M )
            return super.onKeyDown(p0, p1);
            _sw_1 = (p0);
            if ( (_sw_1 == (19)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (20)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (21)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (22)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (96)) || (_sw_1 == (102)) || (_sw_1 == (103)) ) { _pc = 9; continue _sm; }
            _pc = 10;
            continue _sm;
          case 1:
            v5 = this.C.getY() - 10.0f;
            if ( v5 >= 0.0f )
            { _pc = 3; continue _sm; }
            this.g.dispatchKeyEvent(new android.view.KeyEvent(0, 92));
            this.g.dispatchKeyEvent(new android.view.KeyEvent(1, 92));
            return v3;
          case 2:
            v5 = this.C.getY() + 10.0f;
            if ( !(v5 > (float)(this.L - this.C.getHeight())) ) { _pc = 3; continue _sm; }
            {
            this.g.dispatchKeyEvent(new android.view.KeyEvent(0, 93));
            this.g.dispatchKeyEvent(new android.view.KeyEvent(1, 93));
            }
            _pc = 4;
            continue _sm;
          case 3:
            this.C.setY(v5);
            _pc = 4;
            continue _sm;
          case 4:
            return v3;
          case 5:
            v6 = this.C.getX() - 10.0f;
            if ( v6 >= 0.0f )
            { _pc = 7; continue _sm; }
            return v3;
          case 6:
            v6 = this.C.getX() + 10.0f;
            if ( v6 <= (float)(this.K - this.C.getWidth()) ) { _pc = 7; continue _sm; } else { _pc = 8; continue _sm; }
          case 7:
            this.C.setX(v6);
            _pc = 8;
            continue _sm;
          case 8:
            _pc = 11;
            continue _sm;
          case 9:
            this.a();
            _pc = 11;
            continue _sm;
          case 10:
            return super.onKeyDown(p0, p1);
          case 11:
            return v3;
        }
      }
}

    public boolean onKeyUp(int p0, android.view.KeyEvent p1)
    {
      boolean v3 = false;
      android.view.inputmethod.InputMethodManager v5 = null;
      android.view.inputmethod.InputMethodManager v6 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( !(this.M) ) { _pc = 5; continue _sm; }
            if ( !(p0 == 97) ) { _pc = 3; continue _sm; }
            v6 = (android.view.inputmethod.InputMethodManager)this.getSystemService("input_method");
            if ( !(this.g != null && v6.hideSoftInputFromWindow(this.g.getWindowToken(), 0)) ) { _pc = 1; continue _sm; }
            {
            return true;
            }
          case 1:
            this.onBackPressed();
            return true;
          case 3:
            {
            return super.onKeyUp(p0, p1);
            }
          case 5:
            {
            switch ( p0 )
            {
            case 4:
            case 97:
            v5 = (android.view.inputmethod.InputMethodManager)this.getSystemService("input_method");
            if ( this.g == null || !v5.hideSoftInputFromWindow(this.g.getWindowToken(), 0) )
            { _pc = 1; continue _sm; }
            v3 = true;
            break;
            case 96:
            case 99:
            case 100:
            case 102:
            case 103:
            case 108:
            case 109:
            if ( this.D == null || p1.getDevice() != this.D )
            return super.onKeyUp(p0, p1);
            v3 = true;
            break;
            default:
            return super.onKeyUp(p0, p1);
            }
            }
            _pc = 6;
            continue _sm;
          case 6:
            return v3;
        }
      }
}

    public void onPause()
    {
      if ( this.g != null && Build.VERSION.SDK_INT >= 11 )
        this.g.onPause();
      super.onPause();
    }

    public void onResume()
    {
      super.onResume();
      if ( this.g != null && Build.VERSION.SDK_INT >= 11 )
        this.g.onResume();
    }

    public boolean onTouch(android.view.View p0, android.view.MotionEvent p1)
    {
      boolean v3 = false;
      float v4 = 0.0f;
      float v5 = 0.0f;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = true;
            v4 = p1.getX();
            v5 = p1.getY();
            _sw_1 = (p1.getAction());
            if ( (_sw_1 == (0)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (1)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 3; continue _sm; }
            _pc = 7;
            continue _sm;
          case 1:
            _pc = 4;
            continue _sm;
          case 2:
            if ( v4 >= 0.0f && v4 <= (float)p0.getWidth() && v5 >= 0.0f && v5 <= (float)p0.getHeight() )
            {
            switch ( p0.getId() )
            {
            case 2131427360:
            this.finish();
            break;
            case 2131427362:
            this.g.goBack();
            break;
            case 2131427363:
            this.g.goForward();
            break;
            case 2131427364:
            this.g.reload();
            break;
            default:
            { _pc = 5; continue _sm; }
            }
            }
            _pc = 5;
            continue _sm;
          case 3:
            if ( v4 >= 0.0f && v4 <= (float)p0.getWidth() && v5 >= 0.0f && v5 <= (float)p0.getHeight() ) { _pc = 4; continue _sm; } else { _pc = 5; continue _sm; }
          case 4:
            ((android.widget.ImageButton)p0).setBackgroundColor(Color.parseColor("#a3a3a3"));
            _pc = 6;
            continue _sm;
          case 5:
            ((android.widget.ImageButton)p0).setBackgroundColor(0);
            _pc = 6;
            continue _sm;
          case 6:
            _pc = 8;
            continue _sm;
          case 7:
            v3 = false;
            _pc = 8;
            continue _sm;
          case 8:
            return v3;
        }
      }
}

}
