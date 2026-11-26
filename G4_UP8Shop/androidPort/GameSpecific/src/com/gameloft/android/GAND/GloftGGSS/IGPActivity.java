// Decompiled from classes.dex (SourceFile: IGPActivity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Encrypter;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import java.util.Locale;
public class IGPActivity extends android.app.Activity {
    // Fields
    public static boolean a;
    public static boolean b;
    public static int c;
    public static boolean d;
    static int e;
    static int f;
    public static java.lang.String g;
    public static java.lang.String h;
    public static java.lang.String i;
    public static java.lang.String j;
    public static java.lang.String k;
    public static int[] l;
    public static java.lang.String[] m;
    public static android.widget.RelativeLayout n;
    public static android.webkit.WebView o;
    private android.view.Display p;

    // Methods
    static
    {
      String[] v0;
      a = false;
      b = false;
      c = 0;
      d = false;
      e = 480;
      f = 800;
      g = "http://ingameads.gameloft.com/redir/android/index.php?from=GAME_CODE&lg=LANGUAGE&udid=UDIDPHONE&d=DEVICE_ANDROID&f" +
          "=FIRMWARE_ANDROID&ver=GAME_VERSION&country=COUNTRY_DETECTED&height=DEVICE_HEIGHT";
      h = "";
      i = "http://signal-back.com";
      j = "http://ingameads.gameloft.com/redir/android/index.php?page=gameinformation";
      k = "http://ingameads.gameloft.com/redir/?from=";
      l = new int[]
          {
            2131165439, 2131165440, 2131165441, 2131165442, 2131165443, 2131165444, 2131165445, 2131165446, 2131165447
          };
      v0 = new String[9];
      v0[0] = "EN";
      v0[1] = "FR";
      v0[2] = "DE";
      v0[3] = "IT";
      v0[4] = "SP";
      v0[5] = "JP";
      v0[6] = "KR";
      v0[7] = "CN";
      v0[8] = "BR";
      m = v0;
    }

    public IGPActivity()
    {
      super();
      SUtils.setContext(this);
    }

    private void a(String p0)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p0));
      if ( this.getPackageManager().queryIntentActivities(v2, 0x10000).size() == 0 )
        v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(
                                                                        "http://www.youtube.com/watch?v="
                                                                      + p0.replace("vnd.youtube:", "")));
      this.startActivity(v2);
    }

    /* synthetic */ static void access$100(com.gameloft.android.GAND.GloftGGSS.IGPActivity p0, String p1)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p1));
      if ( p0.getPackageManager().queryIntentActivities(v2, 0x10000).size() == 0 )
        v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(
                                                                        "http://www.youtube.com/watch?v="
                                                                      + p1.replace("vnd.youtube:", "")));
      p0.startActivity(v2);
    }

    public static native void nativeInit();

    private static void startIGP(int p0, String p1)
    {
      String DeviceId;
      String Country;
      String v4;
      String v5;
      String v6; // RETVAL
      String v7; // RETVAL
      String v8; // RETVAL
      String v9; // RETVAL
      String v10; // RETVAL
      String v11; // RETVAL
      String v12;
      String v13; // RETVAL
    
      d = true;
      c = p0;
      DeviceId = Device.getDeviceId();
      if ( DeviceId == null )
        DeviceId = "GLOFT_EMU_001";
      Country = Locale.getDefault().getCountry();
      v4 = Build.MANUFACTURER + "_" + Build.MODEL;
      v5 = Encrypter.crypt(DeviceId);
      v6 = g.replace("LANGUAGE", m[c]);
      h = v6;
      v7 = v6.replace("GAME_CODE", p1);
      h = v7;
      v8 = v7.replace("COUNTRY_DETECTED", Country);
      h = v8;
      v9 = v8.replace("UDIDPHONE", v5);
      h = v9;
      v10 = v9.replace("DEVICE_ANDROID", v4);
      h = v10;
      v11 = v10.replace("FIRMWARE_ANDROID", Build.VERSION.RELEASE);
      h = v11;
      v12 = v11.replace("GAME_VERSION", "1.8.2");
      h = v12;
      v13 = v12.replace("DEVICE_HEIGHT", "" + f);
      h = v13;
      h = v13.replaceAll(" ", "");
      h = h + "&enc=1";
      o.loadUrl(h);
      n.addView(o, new android.widget.RelativeLayout.LayoutParams(e, f));
      o.requestFocus();
    }

    public final void a()
    {
      try
      {
        a = false;
        this.startActivity(new android.content.Intent(this, com.gameloft.android.GAND.GloftGGSS.Game.class));
        this.finish();
        n.removeView(o);
      }
      catch ( Exception e )
      {
      }
    }

    public void onCreate(android.os.Bundle p0)
    {
      android.webkit.WebView v2;
      android.content.Intent Intent;
      int Int;
      String DeviceId;
      String Country;
      String v7;
      String v8;
      String v9; // RETVAL
      String v10; // RETVAL
      String v11; // RETVAL
      String v12; // RETVAL
      String v13; // RETVAL
      String v14; // RETVAL
      String v15;
      String v16; // RETVAL
    
      super.onCreate(p0);
      if ( Game.az != null )
      {
        this.getWindow().addFlags(1024);
        this.getWindow().clearFlags(2048);
        this.p = ((android.view.WindowManager)this.getSystemService("window")).getDefaultDisplay();
        f = this.p.getHeight();
        e = this.p.getWidth();
        n = new android.widget.RelativeLayout(this);
        v2 = new android.webkit.WebView(this);
        o = v2;
        v2.getSettings().setJavaScriptEnabled(true);
        o.getSettings().setAppCacheEnabled(false);
        o.getSettings().setSupportZoom(false);
        o.getSettings().setDefaultTextEncodingName("utf-8");
        o.getSettings().setLightTouchEnabled(true);
        o.getSettings().setLoadsImagesAutomatically(true);
        o.setWebViewClient(new com.gameloft.android.GAND.GloftGGSS.ay(this, 0));
        o.setVerticalScrollBarEnabled(false);
        this.setContentView(n);
        Intent = this.getIntent();
        if ( Intent.getExtras() != null )
          Int = Intent.getExtras().getInt("language");
        else
          Int = c;
        if ( Int < 0 || Int > m.length )
          Int = 0;
        d = true;
        c = Int;
        DeviceId = Device.getDeviceId();
        if ( DeviceId == null )
          DeviceId = "GLOFT_EMU_001";
        Country = Locale.getDefault().getCountry();
        v7 = Build.MANUFACTURER + "_" + Build.MODEL;
        v8 = Encrypter.crypt(DeviceId);
        v9 = g.replace("LANGUAGE", m[c]);
        h = v9;
        v10 = v9.replace("GAME_CODE", "GGSS");
        h = v10;
        v11 = v10.replace("COUNTRY_DETECTED", Country);
        h = v11;
        v12 = v11.replace("UDIDPHONE", v8);
        h = v12;
        v13 = v12.replace("DEVICE_ANDROID", v7);
        h = v13;
        v14 = v13.replace("FIRMWARE_ANDROID", Build.VERSION.RELEASE);
        h = v14;
        v15 = v14.replace("GAME_VERSION", "1.8.2");
        h = v15;
        v16 = v15.replace("DEVICE_HEIGHT", "" + f);
        h = v16;
        h = v16.replaceAll(" ", "");
        h = h + "&enc=1";
        o.loadUrl(h);
        n.addView(o, new android.widget.RelativeLayout.LayoutParams(e, f));
        o.requestFocus();
        a = true;
      }
      else
      {
        this.a();
      }
    }

    protected void onDestroy()
    {
      super.onDestroy();
    }

    public boolean onKeyDown(int p0, android.view.KeyEvent p1)
    {
      if ( p0 != 82 )
        return false;
      p1.startTracking();
      return true;
    }

    public boolean onKeyLongPress(int p0, android.view.KeyEvent p1)
    {
      return p0 != 82;
    }

    public boolean onKeyUp(int p0, android.view.KeyEvent p1)
    {
      if ( p0 != 4 )
        return true;
      if ( b )
        o.goBack();
      else
        this.a();
      return false;
    }

    protected void onPause()
    {
      super.onPause();
    }

    protected void onResume()
    {
      super.onResume();
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
      d = p0;
    }

}
