// Decompiled from classes.dex (SourceFile: dm.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.os.Build;
import android.os.Environment;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Encrypter;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.gameloft.android.hdidfv.HDIDFV;
import java.util.Locale;
final class dm implements java.lang.Runnable {
    // Fields
    final int a;
    final java.lang.String b;

    // Methods
    dm(int p0, String p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void run()
    {
      int a;
      String[] v2;
      int v3;
      int i;
      String v5;
      String Country;
      String v7;
      android.view.Display DefaultDisplay;
      StringBuilder v9;
      String v10;
      String v11; // RETVAL
      String[] v12;
      String v13;
      if ( SplashScreenActivity.access$100() )
      {
        while ( SplashScreenActivity.access$100() )
        {
          try
          {
            Thread.sleep(100);
          }
          catch ( Exception e )
          {
          }
        }
      }
      SplashScreenActivity.access$102(true);
      a = this.a;
      SplashScreenActivity.a = a;
      if ( a < 0 || SplashScreenActivity.a >= SplashScreenActivity.l.length )
        SplashScreenActivity.a = 0;
      v2 = this.b.replaceAll(" ", "").split(",");
      v3 = v2.length;
      for ( i = 0; i < v3; ++i )
      {
        v5 = v2[i];
        Device.getDeviceId();
        Country = Locale.getDefault().getCountry();
        v7 = Build.MANUFACTURER + "_" + Build.MODEL;
        DefaultDisplay = ((android.view.WindowManager)SUtils.getContext().getSystemService("window")).getDefaultDisplay();
        SplashScreenActivity.f = DefaultDisplay.getHeight();
        SplashScreenActivity.e = DefaultDisplay.getWidth();
        SplashScreenActivity.h = (int)(0.8 * (double)SplashScreenActivity.e);
        SplashScreenActivity.g = (int)(0.835 * (double)SplashScreenActivity.f);
        SplashScreenActivity.i = SplashScreenActivity.j.replace("VERSION", "1.8.2f").replace("LANG", SplashScreenActivity.l[SplashScreenActivity.a]).replace("COUNTRY", Country).replace("FROM", "GGSS").replace("DEVICE", v7).replace("FIRMWARE", Build.VERSION.RELEASE).replace("ANDROIDID", Device.getAndroidId()).replace("UDIDPHONE", Device.getSerial()).replace("HDIDFV", Device.getHDIDFV()).replaceAll(" ", "");
        SplashScreenActivity.i = SplashScreenActivity.i + "&width=" + SplashScreenActivity.h;
        SplashScreenActivity.i = SplashScreenActivity.i + "&height=" + SplashScreenActivity.g;
        SplashScreenActivity.i = SplashScreenActivity.i + "&id=" + v5;
        SplashScreenActivity.i = SplashScreenActivity.i + "&dl=1";
        SplashScreenActivity.i = SplashScreenActivity.i + "&ingamebrowser=1";
        v9 = new StringBuilder().append(SplashScreenActivity.i);
        if ( SplashScreenActivity.access$200() )
          v10 = "&is_pau=1";
        else
          v10 = "&is_pau=0";
        v11 = v9.append(v10).toString();
        SplashScreenActivity.i = v11;
        v12 = v11.split("[?]");
        SplashScreenActivity.i = v12[0] + "?data=" + Encrypter.crypt(v12[1]) + "&enc=1";
        if ( Environment.getExternalStorageState().equals("mounted") )
        {
          if ( Build.VERSION.SDK_INT < 8 )
            v13 = Environment.getDownloadCacheDirectory()
                + "/WelcomeScreens/GGSS"
                + "/"
                + v5
                + "/"
                + SplashScreenActivity.l[SplashScreenActivity.a];
          else
            v13 = SUtils.getContext().getExternalFilesDir(null)
                + "/WelcomeScreens/"
                + v5
                + "/"
                + SplashScreenActivity.l[SplashScreenActivity.a];
          try
          {
            SplashScreenActivity.downloadFile(SplashScreenActivity.i, v13, "welcome.html");
            continue;
          }
          catch ( Exception e )
          {
          }
        }
      }
      SplashScreenActivity.access$102(false);
    }

}
