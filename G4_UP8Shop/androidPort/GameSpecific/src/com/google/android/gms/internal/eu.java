// Decompiled from classes.dex (SourceFile: eu.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Build;
import android.os.Looper;
import android.provider.Settings;
import android.util.TypedValue;
import java.security.MessageDigest;
import java.util.Locale;
public final class eu {
    // Fields
    public static final android.os.Handler a;

    // Methods
    static
    {
      a = new android.os.Handler(Looper.getMainLooper());
    }

    public static int a(android.content.Context p0, int p1)
    {
      return a(p0.getResources().getDisplayMetrics(), p1);
    }

    public static int a(android.util.DisplayMetrics p0, int p1)
    {
      return (int)TypedValue.applyDimension(1, (float)p1, p0);
    }

    public static void a(android.view.ViewGroup p0, com.google.android.gms.internal.am p1, String p2)
    {
      a(p0, p1, p2, -16777216, -1);
    }

    private static void a(android.view.ViewGroup p0, com.google.android.gms.internal.am p1, String p2, int p3, int p4)
    {
      android.content.Context Context; // RETVAL
      android.widget.TextView v6;
      android.widget.FrameLayout v7;
      int v8; // RETVAL
    
      if ( p0.getChildCount() == 0 )
      {
        Context = p0.getContext();
        v6 = new android.widget.TextView(Context);
        v6.setGravity(17);
        v6.setText(p2);
        v6.setTextColor(p3);
        v6.setBackgroundColor(p4);
        v7 = new android.widget.FrameLayout(Context);
        v7.setBackgroundColor(p3);
        v8 = a(Context, 3);
        v7.addView(v6, new android.widget.FrameLayout.LayoutParams(p1.g - v8, p1.d - v8, 17));
        p0.addView(v7, p1.g, p1.d);
      }
    }

    public static void a(android.view.ViewGroup p0, com.google.android.gms.internal.am p1, String p2, String p3)
    {
      ev.D(p3);
      a(p0, p1, p2, -65536, -16777216);
    }

    public static boolean bQ()
    {
      return Build.DEVICE.startsWith("generic");
    }

    public static boolean bR()
    {
      return Looper.myLooper() == Looper.getMainLooper();
    }

    public static String o(android.content.Context p0)
    {
      String String;
      String = Settings.Secure.getString(p0.getContentResolver(), "android_id");
      if ( String == null || bQ() )
        String = "emulator";
      return y(String);
    }

    public static String y(String p0)
    {
      int v1;
      java.security.MessageDigest Instance;
      Object[] v3;
      v1 = 0;
      while ( v1 < 2 )
      {
        try
        {
          Instance = MessageDigest.getInstance("MD5");
          Instance.update(p0.getBytes());
          v3 = new Object[1];
          v3[0] = new java.math.BigInteger(1, Instance.digest());
          return String.format(Locale.US, "%032X", v3);
        }
        catch ( java.security.NoSuchAlgorithmException e )
        {
          ++v1;
        }
      }
      return null;
    }

}
