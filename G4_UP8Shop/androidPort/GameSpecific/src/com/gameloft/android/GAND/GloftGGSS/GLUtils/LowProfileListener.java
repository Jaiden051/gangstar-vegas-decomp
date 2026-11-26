// Decompiled from classes.dex (SourceFile: LowProfileListener.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

import android.os.Build;
import android.view.ViewConfiguration;
public class LowProfileListener {
    // Fields
    private static android.view.View.OnSystemUiVisibilityChangeListener a;
    private static java.lang.String b;

    // Methods
    static
    {
      a = null;
      b = "";
    }

    public LowProfileListener()
    {
      super();
    }

    public static void ActivateImmersiveMode(android.app.Activity p0)
    {
      if ( Build.VERSION.SDK_INT >= 14 && !ViewConfiguration.get(p0.getApplicationContext()).hasPermanentMenuKey() )
      {
        if ( Build.VERSION.SDK_INT >= 19 )
        {
          MakeImmersive(p0);
          new android.os.Handler().postDelayed((Runnable)new com.gameloft.android.GAND.GloftGGSS.GLUtils.g(p0), 3000);
        }
        else
        {
          p0.getWindow().getDecorView().setSystemUiVisibility(0);
          p0.getWindow().getDecorView().setSystemUiVisibility(1);
          RegisterSystemUIListener(p0);
        }
      }
    }

    private static void MakeImmersive(android.app.Activity p0)
    {
      p0.getWindow().getDecorView().setSystemUiVisibility(5894);
    }

    private static void RegisterSystemUIListener(android.app.Activity p0)
    {
      if ( a == null || !b.equals(p0.getClass().getSimpleName()) )
      {
        b = p0.getClass().getSimpleName();
        a = (android.view.View.OnSystemUiVisibilityChangeListener)new com.gameloft.android.GAND.GloftGGSS.GLUtils.h(p0);
      }
      p0.getWindow().getDecorView().setOnSystemUiVisibilityChangeListener(a);
    }

    /* synthetic */ static void access$000(android.app.Activity p0)
    {
      MakeImmersive(p0);
    }

    public static void onKeyDown(android.app.Activity p0, int p1)
    {
      if ( Build.VERSION.SDK_INT >= 14
        && !ViewConfiguration.get(p0.getApplicationContext()).hasPermanentMenuKey()
        && (p1 == 25 || p1 == 24) )
      {
        ActivateImmersiveMode(p0);
      }
    }

}
