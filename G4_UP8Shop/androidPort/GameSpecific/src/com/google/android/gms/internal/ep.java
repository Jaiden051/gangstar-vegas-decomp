// Decompiled from classes.dex (SourceFile: ep.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.net.Uri;
import android.net.UrlQuerySanitizer;
import android.os.Build;
import java.math.BigInteger;
import java.nio.CharBuffer;
import java.security.MessageDigest;
import java.util.Arrays;
import java.util.UUID;
public final class ep {
    // Fields
    private static final java.lang.Object a;
    private static boolean b;
    private static java.lang.String c;
    private static boolean d;

    // Methods
    static
    {
      a = new Object();
      b = true;
      d = false;
    }

    public static String a(Readable p0)
 throws java.io.IOException {
      StringBuilder v1;
      java.nio.CharBuffer i;
      int v3;
      v1 = new StringBuilder();
      for ( i = CharBuffer.allocate(2048); ; v1.append(i, 0, v3) )
      {
        v3 = p0.read(i);
        if ( v3 == -1 )
          break;
        i.flip();
      }
      return v1.toString();
    }

    private static org.json.JSONArray a(java.util.Collection<?> p0)
 throws org.json.JSONException {
      org.json.JSONArray v1;
      java.util.Iterator i;
      v1 = new org.json.JSONArray();
      for ( i = p0.iterator(); i.hasNext(); a(v1, i.next()) )
        ;
      return v1;
    }

    static org.json.JSONArray a(Object[] p0)
 throws org.json.JSONException {
      org.json.JSONArray v1;
      int v2;
      int i;
      v1 = new org.json.JSONArray();
      v2 = p0.length;
      for ( i = 0; i < v2; ++i )
        a(v1, p0[i]);
      return v1;
    }

    public static void a(android.content.Context p0, String p1, android.webkit.WebSettings p2)
    {
      p2.setUserAgentString(c(p0, p1));
    }

    public static void a(android.content.Context p0, String p1, java.util.List<String> p2)
    {
      java.util.Iterator i;
      for ( i = p2.iterator(); i.hasNext(); new com.google.android.gms.internal.et(p0, p1, (String)i.next()).e() )
        ;
    }

    public static void a(android.content.Context p0, String p1, boolean p2, java.net.HttpURLConnection p3)
    {
      p3.setConnectTimeout(60000);
      p3.setInstanceFollowRedirects(p2);
      p3.setReadTimeout(60000);
      p3.setRequestProperty("User-Agent", c(p0, p1));
      p3.setUseCaches(false);
    }

    public static void a(android.webkit.WebView p0)
    {
      if ( Build.VERSION.SDK_INT >= 11 )
        er.a(p0);
    }

    private static void a(org.json.JSONArray p0, Object p1)
 throws org.json.JSONException {
      if ( p1 instanceof android.os.Bundle )
      {
        p0.put(b((android.os.Bundle)p1));
      }
      else if ( p1 instanceof java.util.Map )
      {
        p0.put(o((java.util.Map)p1));
      }
      else if ( p1 instanceof java.util.Collection )
      {
        p0.put(a((java.util.Collection)p1));
      }
      else if ( p1 instanceof Object[] )
      {
        p0.put(a((Object[])p1));
      }
      else
      {
        p0.put(p1);
      }
    }

    private static void a(org.json.JSONObject p0, String p1, Object p2)
 throws org.json.JSONException {
      if ( p2 instanceof android.os.Bundle )
      {
        p0.put(p1, b((android.os.Bundle)p2));
      }
      else if ( p2 instanceof java.util.Map )
      {
        p0.put(p1, o((java.util.Map)p2));
      }
      else if ( p2 instanceof java.util.Collection )
      {
        if ( p1 == null )
          p1 = "null";
        p0.put(p1, a((java.util.Collection)p2));
      }
      else if ( p2 instanceof Object[] )
      {
        p0.put(p1, a(Arrays.asList((Object[])p2)));
      }
      else
      {
        p0.put(p1, p2);
      }
    }

    public static boolean a(android.content.pm.PackageManager p0, String p1, String p2)
    {
      return p0.checkPermission(p2, p1) == 0;
    }

    public static boolean a(ClassLoader p0, Class<?> p1, String p2)
    {
      boolean v3;
      v3 = false;
      try
      {
        return p1.isAssignableFrom(Class.forName(p2, false, p0));
      }
      catch ( Throwable e )
      {
      }
      return v3;
    }

    public static java.util.Map<String, String> b(android.net.Uri p0)
    {
      java.util.HashMap v3;
      android.net.UrlQuerySanitizer v4;
      java.util.Iterator v5;
      android.net.UrlQuerySanitizer.ParameterValuePair v6;
      if ( p0 == null )
        return null;
      v3 = new java.util.HashMap();
      v4 = new android.net.UrlQuerySanitizer();
      v4.setAllowUnregisteredParamaters(true);
      v4.setUnregisteredParameterValueSanitizer(UrlQuerySanitizer.getAllButNulLegal());
      v4.parseUrl(p0.toString());
      v5 = v4.getParameterList().iterator();
      while ( v5.hasNext() )
      {
        v6 = (android.net.UrlQuerySanitizer.ParameterValuePair)v5.next();
        v3.put(v6.mParameter, v6.mValue);
      }
      return v3;
    }

    private static org.json.JSONObject b(android.os.Bundle p0)
 throws org.json.JSONException {
      org.json.JSONObject v1;
      java.util.Iterator v2;
      String v3;
      v1 = new org.json.JSONObject();
      v2 = p0.keySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        a(v1, v3, p0.get(v3));
      }
      return v1;
    }

    public static void b(android.webkit.WebView p0)
    {
      if ( Build.VERSION.SDK_INT >= 11 )
        er.b(p0);
    }

    public static boolean bL()
    {
      return b;
    }

    public static int bM()
    {
      if ( Build.VERSION.SDK_INT < 9 )
        return 0;
      else
        return 6;
    }

    public static int bN()
    {
      if ( Build.VERSION.SDK_INT < 9 )
        return 1;
      else
        return 7;
    }

    public static String bO()
    {
      java.util.UUID v0;
      byte[] v1;
      byte[] v2;
      String v3;
      int i;
      java.security.MessageDigest Instance; // RETVAL
      byte[] v6;
      v0 = UUID.randomUUID();
      v1 = BigInteger.valueOf(v0.getLeastSignificantBits()).toByteArray();
      v2 = BigInteger.valueOf(v0.getMostSignificantBits()).toByteArray();
      v3 = new java.math.BigInteger(1, v1).toString();
      for ( i = 0; i < 2; ++i )
      {
        try
        {
          Instance = MessageDigest.getInstance("MD5");
          Instance.update(v1);
          Instance.update(v2);
          v6 = new byte[8];
          System.arraycopy(Instance.digest(), 0, v6, 0, 8);
          v3 = new java.math.BigInteger(1, v6).toString();
          continue;
        }
        catch ( java.security.NoSuchAlgorithmException e )
        {
        }
      }
      return v3;
    }

    /* synthetic */ static Object bP()
    {
      return a;
    }

    private static String c(android.content.Context p0, String p1)
    {
      Object v2;
      String v3;
      v2 = a;
      synchronized ( v2 )
      {
        if ( c != null )
          return c;
        if ( Build.VERSION.SDK_INT < 17 )
        {
          if ( eu.bR() )
          {
            c = l(p0);
          }
          else
          {
            eu.a.post((Runnable)new com.google.android.gms.internal.ep$1(p0));
            while ( c == null )
            {
              try
              {
                a.wait();
              }
              catch ( InterruptedException e )
              {
                return c;
              }
            }
          }
        }
        else
        {
          c = es.getDefaultUserAgent(p0);
        }
        v3 = c + " (Mobile; " + p1 + ")";
        c = v3;
        return v3;
      }
    }

    public static boolean j(android.content.Context p0)
    {
      boolean v1;
      android.content.Intent v2;
      android.content.pm.ResolveInfo v3; // RETVAL
      android.content.pm.ResolveInfo v4;
      Object[] v6;
      boolean v7;
      Object[] v8;
      Object[] v9;
      Object[] v10;
      Object[] v11;
      Object[] v12;
      Object[] v13;
      v1 = false;
      v2 = new android.content.Intent();
      v2.setClassName(p0, "com.google.android.gms.ads.AdActivity");
      v3 = p0.getPackageManager().resolveActivity(v2, 0x10000);
      v4 = v3;
      if ( v3 != null && v3.activityInfo != null )
      {
        if ( ((v3.activityInfo).configChanges & 0x10) != 0 )
        {
          v7 = true;
        }
        else
        {
          v6 = new Object[1];
          v6[0] = "keyboard";
          ev.D(
            String.format(
              "com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".",
              v6));
          v7 = false;
        }
        if ( ((v4.activityInfo).configChanges & 0x20) == 0 )
        {
          v8 = new Object[1];
          v8[0] = "keyboardHidden";
          ev.D(
            String.format(
              "com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".",
              v8));
          v7 = false;
        }
        if ( ((v4.activityInfo).configChanges & 0x80) == 0 )
        {
          v9 = new Object[1];
          v9[0] = "orientation";
          ev.D(
            String.format(
              "com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".",
              v9));
          v7 = false;
        }
        if ( ((v4.activityInfo).configChanges & 0x100) == 0 )
        {
          v10 = new Object[1];
          v10[0] = "screenLayout";
          ev.D(
            String.format(
              "com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".",
              v10));
          v7 = false;
        }
        if ( ((v4.activityInfo).configChanges & 0x200) == 0 )
        {
          v11 = new Object[1];
          v11[0] = "uiMode";
          ev.D(
            String.format(
              "com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".",
              v11));
          v7 = false;
        }
        if ( ((v4.activityInfo).configChanges & 0x400) == 0 )
        {
          v12 = new Object[1];
          v12[0] = "screenSize";
          ev.D(
            String.format(
              "com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".",
              v12));
          v7 = false;
        }
        if ( ((v4.activityInfo).configChanges & 0x800) != 0 )
        {
          return v7;
        }
        else
        {
          v13 = new Object[1];
          v13[0] = "smallestScreenSize";
          ev.D(
            String.format(
              "com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".",
              v13));
        }
      }
      else
      {
        ev.D("Could not find com.google.android.gms.ads.AdActivity, please make sure it is declared in AndroidManifest.xml.");
      }
      return v1;
    }

    public static void k(android.content.Context p0)
    {
      android.content.IntentFilter v1;
      if ( !d )
      {
        v1 = new android.content.IntentFilter();
        v1.addAction("android.intent.action.USER_PRESENT");
        v1.addAction("android.intent.action.SCREEN_OFF");
        com.gameloft.android.GAND.GloftGGSS.CompatUtil.registerReceiverCompat(p0.getApplicationContext(), new com.google.android.gms.internal.ep$a(0), v1);
        d = true;
      }
    }

    private static String l(android.content.Context p0)
    {
      return new android.webkit.WebView(p0).getSettings().getUserAgentString();
    }

    public static int m(android.content.Context p0)
    {
      int v1;
      android.view.Window Window;
      android.graphics.Rect v3;
      int v4;
      v1 = 0;
      if ( p0 instanceof android.app.Activity )
      {
        Window = ((android.app.Activity)p0).getWindow();
        v3 = new android.graphics.Rect();
        Window.getDecorView().getWindowVisibleDisplayFrame(v3);
        v4 = v3.top;
        v1 = Window.findViewById(16908290).getTop() - v4;
      }
      else
      {
        v4 = 0;
      }
      return v1 + v4;
    }

    /* synthetic */ static String n(android.content.Context p0)
    {
      return l(p0);
    }

    public static org.json.JSONObject o(java.util.Map<String, ?> p0)
 throws org.json.JSONException {
      org.json.JSONObject v1;
      java.util.Iterator v2;
      String v3;
      try
      {
        v1 = new org.json.JSONObject();
        v2 = p0.keySet().iterator();
        while ( v2.hasNext() )
        {
          v3 = (String)v2.next();
          a(v1, v3, p0.get(v3));
        }
        return v1;
      }
      catch ( ClassCastException v4 )
      {
        throw new org.json.JSONException("Could not convert map to JSON: " + v4.getMessage());
      }
    }

    /* synthetic */ static boolean p(boolean p0)
    {
      b = p0;
      return p0;
    }

    public static String v(String p0)
    {
      return Uri.parse(p0).buildUpon().query(null).build().toString();
    }

    /* synthetic */ static String w(String p0)
    {
      c = p0;
      return p0;
    }

}
