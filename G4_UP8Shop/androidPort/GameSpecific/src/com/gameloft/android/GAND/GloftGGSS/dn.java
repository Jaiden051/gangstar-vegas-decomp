// Decompiled from classes.dex (SourceFile: dn.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.os.Build;
import android.os.Environment;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
final class dn implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final int b;

    // Methods
    dn(String p0, int p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void run()
    {
      String v1;
      android.content.Intent v2;
      if ( SplashScreenActivity.access$100() )
      {
        while ( SplashScreenActivity.access$100() )
        {
          try
          {
            Thread.sleep(50);
          }
          catch ( Exception e )
          {
          }
        }
      }
      if ( SplashScreenActivity.isWSReady(this.a, this.b) == 0 )
      {
        SplashScreenActivity.downloadWS(this.a, this.b);
        do
        {
          try
          {
            Thread.sleep(100);
            continue;
          }
          catch ( Exception e )
          {
          }
        }
        while ( SplashScreenActivity.access$100() );
      }
      if ( Environment.getExternalStorageState().equals("mounted") )
      {
        v1 = Build.VERSION.SDK_INT < 8
           ? Environment.getDownloadCacheDirectory()
           + "/WelcomeScreens/GGSS"
           + "/"
           + this.a
           + "/"
           + SplashScreenActivity.l[this.b]
           : SUtils.getContext().getExternalFilesDir(null)
           + "/WelcomeScreens/"
           + this.a
           + "/"
           + SplashScreenActivity.l[this.b];
        if ( new java.io.File(v1 + "/welcome.html").exists() )
        {
          v2 = new android.content.Intent(SUtils.getContext(), com.gameloft.android.GAND.GloftGGSS.SplashScreenActivity.class);
          v2.putExtra("language", SplashScreenActivity.a);
          v2.putExtra("filePath", v1 + "/welcome.html");
          v2.putExtra("wasCached", true);
          SUtils.getContext().startActivity(v2);
        }
      }
      SplashScreenActivity.access$302(false);
    }

}
