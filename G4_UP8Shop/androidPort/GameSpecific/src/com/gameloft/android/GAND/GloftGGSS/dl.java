// Decompiled from classes.dex (SourceFile: dl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.os.Build;
import android.os.Environment;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
final class dl implements java.lang.Runnable {
    // Fields
    final int a;

    // Methods
    dl(int p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      boolean v1;
      android.content.Intent v2;
      String v3;
      com.gameloft.android.GAND.GloftGGSS.HTMLResourceDownloader v4;
      v1 = Environment.getExternalStorageState().equals("mounted");
      v2 = new android.content.Intent(SUtils.getContext(), com.gameloft.android.GAND.GloftGGSS.SplashScreenActivity.class);
      v2.putExtra("language", this.a);
      if ( v1 )
      {
        if ( Build.VERSION.SDK_INT < 8 )
          v3 = Environment.getDownloadCacheDirectory() + "/welcome";
        else
          v3 = SUtils.getContext().getExternalFilesDir(null) + "/welcome";
        v4 = new com.gameloft.android.GAND.GloftGGSS.HTMLResourceDownloader(SplashScreenActivity.i, v3, "welcome.html");
        v4.a();
        if ( !v4.b() )
        {
          v2.putExtra("filePath", v3 + "/welcome.html");
          v2.putExtra("wasCached", true);
          SUtils.getContext().startActivity(v2);
        }
      }
      else
      {
        SUtils.getContext().startActivity(v2);
      }
    }

}
