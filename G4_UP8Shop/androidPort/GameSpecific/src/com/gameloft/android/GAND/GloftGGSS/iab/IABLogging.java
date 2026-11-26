// Decompiled from classes.dex (SourceFile: IABLogging.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
public class IABLogging {
    // Fields
    private static com.gameloft.android.GAND.GloftGGSS.iab.IABLogging a;
    private int b;
    private java.util.Hashtable c;

    // Methods
    public IABLogging()
    {
      super();
      this.b = 100000;
      this.c = new java.util.Hashtable();
    }

    private static void LogInfo(int p0, int p1, String p2)
    {
      try
      {
        new org.json.JSONObject();
        if ( !TextUtils.isEmpty(p2) )
          InAppBilling.c(9, p0, p1, p2);
      }
      catch ( Exception e )
      {
      }
    }

    private void a(String p0)
    {
      if ( !TextUtils.isEmpty(p0) && this.c.containsKey(p0) )
        ((com.gameloft.android.GAND.GloftGGSS.iab.h)this.c.get(p0)).a();
    }

    private void a(String p0, String p1)
    {
      if ( !TextUtils.isEmpty(p1) && this.c.containsKey(p1) )
        ((com.gameloft.android.GAND.GloftGGSS.iab.h)this.c.get(p1)).c(p0);
    }

    private void a(String p0, String p1, String p2)
    {
      if ( !TextUtils.isEmpty(p2) )
        this.c.put(p2, new com.gameloft.android.GAND.GloftGGSS.iab.h(this, ++this.b, p2, p0, p1));
    }

    private double b(String p0)
    {
      double v2;
      com.gameloft.android.GAND.GloftGGSS.iab.h v4;
      v2 = 0.0;
      if ( !TextUtils.isEmpty(p0) && this.c.containsKey(p0) )
      {
        v4 = (com.gameloft.android.GAND.GloftGGSS.iab.h)this.c.get(p0);
        v4.a();
        return v4.f;
      }
      return v2;
    }

    private void b(String p0, String p1)
    {
      com.gameloft.android.GAND.GloftGGSS.iab.h v3;
      if ( !TextUtils.isEmpty(p1) && this.c.containsKey(p1) )
      {
        v3 = (com.gameloft.android.GAND.GloftGGSS.iab.h)this.c.get(p1);
        v3.a(v3.g, p0);
      }
    }

    private void b(String p0, String p1, String p2)
    {
      if ( !TextUtils.isEmpty(p2) && this.c.containsKey(p2) )
        ((com.gameloft.android.GAND.GloftGGSS.iab.h)this.c.get(p2)).a(p0, p1);
    }

    private long c(String p0)
    {
      long v2;
      v2 = -1;
      if ( !TextUtils.isEmpty(p0) && this.c.containsKey(p0) )
        return ((com.gameloft.android.GAND.GloftGGSS.iab.h)this.c.get(p0)).c();
      return v2;
    }

    private void c(String p0, String p1)
    {
      com.gameloft.android.GAND.GloftGGSS.iab.h v3;
      if ( !TextUtils.isEmpty(p1) && this.c.containsKey(p1) )
      {
        v3 = (com.gameloft.android.GAND.GloftGGSS.iab.h)this.c.get(p1);
        v3.a(v3.h, p0);
      }
    }

    private void c(String p0, String p1, String p2)
    {
      if ( !TextUtils.isEmpty(p2) && this.c.containsKey(p2) )
        ((com.gameloft.android.GAND.GloftGGSS.iab.h)this.c.get(p2)).b(p0, p1);
    }

    private void d(String p0)
    {
      if ( !TextUtils.isEmpty(p0) && this.c.containsKey(p0) )
        this.c.remove(p0);
    }

    private void d(String p0, String p1, String p2)
    {
      if ( !TextUtils.isEmpty(p2) && this.c.containsKey(p2) )
        ((com.gameloft.android.GAND.GloftGGSS.iab.h)this.c.get(p2)).c(p0, p1);
    }

    private String e(String p0)
    {
      com.gameloft.android.GAND.GloftGGSS.iab.h v4;
      if ( TextUtils.isEmpty(p0) )
        return "";
      if ( !this.c.containsKey(p0) )
        return "";
      v4 = (com.gameloft.android.GAND.GloftGGSS.iab.h)this.c.get(p0);
      v4.d();
      return v4.e();
    }

    private String f(String p0)
    {
      if ( TextUtils.isEmpty(p0) )
        return "";
      if ( this.c.containsKey(p0) )
        return ((com.gameloft.android.GAND.GloftGGSS.iab.h)this.c.get(p0)).f();
      return "";
    }

    public static com.gameloft.android.GAND.GloftGGSS.iab.IABLogging getInstance()
    {
      if ( a == null )
        a = new com.gameloft.android.GAND.GloftGGSS.iab.IABLogging();
      return a;
    }

}
