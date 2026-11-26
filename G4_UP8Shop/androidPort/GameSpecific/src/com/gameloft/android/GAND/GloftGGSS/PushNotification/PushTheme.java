// Decompiled from classes.dex (SourceFile: PushTheme.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

import android.content.res.Resources;
public class PushTheme {
    // Fields
    public static java.lang.Integer a;
    public static float b;
    public static int c;
    public static int d;
    public static java.lang.String e;

    // Methods
    static
    {
      a = Integer.valueOf(17170443);
      b = 11.0f;
      c = 0;
      d = 0;
    }

    public PushTheme()
    {
      super();
    }

    static void extractColors(android.content.Context p0)
    {
      android.app.Notification v1;
      android.widget.LinearLayout v2;
      try
      {
        v1 = new android.app.Notification();
        com.gameloft.android.DecompRT.setLatestEventInfo(v1, p0, "SOME_SAMPLE_TEXT", "Utest", null);
        v2 = new android.widget.LinearLayout(p0);
        if ( !recurseGroup(
                p0,
                (android.view.ViewGroup)v1.contentView.apply(p0, v2)) )
          a = Integer.valueOf(17170443);
        v2.removeAllViews();
      }
      catch ( Exception e )
      {
        a = Integer.valueOf(17170443);
      }
    }

    public static int getIcon()
    {
      return c;
    }

    public static int getLayout()
    {
      return d;
    }

    public static Integer getTextColor()
    {
      return a;
    }

    public static float getTextSize()
    {
      return b;
    }

    public static void init(android.content.Context p0)
    {
      if ( c == 0 )
        extractColors(p0);
      initCustoms(p0);
    }

    static void initCustoms(android.content.Context p0)
    {
      android.content.res.Resources Resources;
      Resources = p0.getResources();
      if ( SimplifiedAndroidUtils.g )
      {
        if ( SimplifiedAndroidUtils.j != null )
          c = Resources.getIdentifier(SimplifiedAndroidUtils.j, "drawable", p0.getPackageName());
        if ( c == 0 )
          c = Resources.getIdentifier("pn_custom_icon", "drawable", p0.getPackageName());
      }
      else
      {
        c = Resources.getIdentifier("pn_icon", "drawable", p0.getPackageName());
      }
      d = Resources.getIdentifier("custom_notification_layout", "layout", p0.getPackageName());
      if ( c == 0 )
        c = 2130837629;
    }

    static boolean recurseGroup(android.content.Context p0, android.view.ViewGroup p1)
    {
      int ChildCount;
      int i;
      android.widget.TextView v4;
      android.util.DisplayMetrics v5;
      float v6;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            _pc = 1;
            continue _sm;
          }
          case 1: {
            ChildCount = p1.getChildCount();
            for ( i = 0; i < ChildCount; ++i )
            {
            if ( p1.getChildAt(i) instanceof android.widget.TextView )
            {
            v4 = (android.widget.TextView)p1.getChildAt(i);
            if ( "SOME_SAMPLE_TEXT".equals(v4.getText().toString()) )
            {
            a = Integer.valueOf(v4.getTextColors().getDefaultColor());
            b = v4.getTextSize();
            v5 = new android.util.DisplayMetrics();
            ((android.view.WindowManager)p0.getSystemService("window")).getDefaultDisplay().getMetrics(v5);
            v6 = b / v5.scaledDensity;
            b = v6;
            b = v6 - 2.0f;
            return true;
            }
            }
            else if ( p1.getChildAt(i) instanceof android.view.ViewGroup )
            {
            p1 = (android.view.ViewGroup)p1.getChildAt(i);
            { _pc = 1; continue _sm; }
            }
            }
            return false;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

}
