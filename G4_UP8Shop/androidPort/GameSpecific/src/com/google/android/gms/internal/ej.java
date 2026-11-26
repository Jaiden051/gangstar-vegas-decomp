// Decompiled from classes.dex (SourceFile: ej.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ej {
    // Fields
    private final java.lang.Object a;
    private final java.lang.String b;
    private int c;
    private long d;
    private long e;
    private int f;
    private int g;

    // Methods
    public ej(String p0)
    {
      super();
      this.a = new Object();
      this.c = 0;
      this.d = -1;
      this.e = -1;
      this.f = 0;
      this.g = -1;
      this.b = p0;
    }

    public static boolean i(android.content.Context p0)
    {
      boolean v1;
      int Identifier;
      android.content.ComponentName v4;
      v1 = false;
      Identifier = p0.getResources().getIdentifier("Theme.Translucent", "style", "android");
      if ( Identifier != 0 )
      {
        v4 = new android.content.ComponentName(p0.getPackageName(), "com.google.android.gms.ads.AdActivity");
        try
        {
          if ( Identifier == (p0.getPackageManager().getActivityInfo(v4, 0)).theme )
            v1 = true;
          else
            ev.B(
              "Please set theme of AdActivity to @android:style/Theme.Translucent to enable transparent background interstitial ad.");
        }
        catch ( android.content.pm.PackageManager.NameNotFoundException e )
        {
          ev.D("Fail to fetch AdActivity theme");
          ev.B(
            "Please set theme of AdActivity to @android:style/Theme.Translucent to enable transparent background interstitial ad.");
        }
      }
      else
      {
        ev.B(
          "Please set theme of AdActivity to @android:style/Theme.Translucent to enable transparent background interstitial ad.");
      }
      return v1;
    }

    public final long a()
    {
      return this.e;
    }

    public final android.os.Bundle a(android.content.Context p0, String p1)
    {
      Object a;
      android.os.Bundle v4;
      a = this.a;
      synchronized ( a )
      {
        v4 = new android.os.Bundle();
        v4.putString("session_id", this.b);
        v4.putLong("basets", this.e);
        v4.putLong("currts", this.d);
        v4.putString("seq_num", p1);
        v4.putInt("preqs", this.g);
        v4.putInt("pclick", this.c);
        v4.putInt("pimp", this.f);
        v4.putBoolean("support_transparent_background", i(p0));
        return v4;
      }
    }

    public final void a(com.google.android.gms.internal.aj p0, long p1)
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        if ( this.e == -1 )
        {
          this.e = p1;
          this.d = this.e;
        }
        else
        {
          this.d = p1;
        }
        if ( p0.c == null || p0.c.getInt("gw", 2) != 1 )
          ++this.g;
        return;
      }
    }

    public final void b()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        ++this.c;
      }
    }

    public final void c()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        ++this.f;
      }
    }

}
