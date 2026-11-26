// Decompiled from classes.dex (SourceFile: ap.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.TextUtils;
import com.google.android.gms.R$styleable;
import com.google.android.gms.ads.AdSize;
public final class ap {
    // Fields
    private final com.google.android.gms.ads.AdSize[] a;
    private final java.lang.String b;

    // Methods
    public ap(android.content.Context p0, android.util.AttributeSet p1)
    {
      super();
      android.content.res.TypedArray v3;
      String String;
      String v5;
      boolean v6;
      boolean v7;
      v3 = p0.getResources().obtainAttributes(p1, R$styleable.a);
      String = v3.getString(0);
      v5 = v3.getString(1);
      v6 = !TextUtils.isEmpty(String);
      v7 = !TextUtils.isEmpty(v5);
      if ( !v6 || v7 )
      {
        if ( v6 || !v7 )
        {
          if ( v6 )
            throw new IllegalArgumentException("Either XML attribute \"adSize\" or XML attribute \"supportedAdSizes\" should " +
                                               "be specified, but not both.");
          throw new IllegalArgumentException("Required XML attribute \"adSize\" was missing.");
        }
        this.a = f(v5);
      }
      else
      {
        this.a = f(String);
      }
      this.b = v3.getString(2);
      if ( TextUtils.isEmpty(this.b) )
        throw new IllegalArgumentException("Required XML attribute \"adUnitId\" was missing.");
    
    }

    private static com.google.android.gms.ads.AdSize[] f(String p0)
    {
      String[] v1;
      com.google.android.gms.ads.AdSize[] v2;
      int i;
      String v4;
      String[] v5;
      String v6; // RETVAL
      int v7;
      int v8;
      v1 = p0.split("\\s*,\\s*");
      v2 = new com.google.android.gms.ads.AdSize[v1.length];
      for ( i = 0; i < v1.length; ++i )
      {
        v4 = v1[i].trim();
        if ( v4.matches("^(\\d+|FULL_WIDTH)\\s*[xX]\\s*(\\d+|AUTO_HEIGHT)$") )
        {
          v5 = v4.split("[xX]");
          v5[0] = v5[0].trim();
          v6 = v5[1].trim();
          v5[1] = v6;
          try
          {
            if ( "FULL_WIDTH".equals(v5[0]) )
              v7 = -1;
            else
              v7 = Integer.parseInt(v5[0]);
            if ( "AUTO_HEIGHT".equals(v5[1]) )
              v8 = -2;
            else
              v8 = Integer.parseInt(v5[1]);
            v2[i] = new com.google.android.gms.ads.AdSize(v7, v8);
            continue;
          }
          catch ( NumberFormatException e )
          {
            throw new IllegalArgumentException("Could not parse XML attribute \"adSize\": " + v4);
          }
        }
        if ( "BANNER".equals(v4) )
        {
          v2[i] = com.google.android.gms.ads.AdSize.c;
        }
        else if ( "LARGE_BANNER".equals(v4) )
        {
          v2[i] = com.google.android.gms.ads.AdSize.e;
        }
        else if ( "FULL_BANNER".equals(v4) )
        {
          v2[i] = com.google.android.gms.ads.AdSize.d;
        }
        else if ( "LEADERBOARD".equals(v4) )
        {
          v2[i] = com.google.android.gms.ads.AdSize.f;
        }
        else if ( "MEDIUM_RECTANGLE".equals(v4) )
        {
          v2[i] = com.google.android.gms.ads.AdSize.g;
        }
        else if ( "SMART_BANNER".equals(v4) )
        {
          v2[i] = com.google.android.gms.ads.AdSize.i;
        }
        else
        {
          if ( !"WIDE_SKYSCRAPER".equals(v4) )
            throw new IllegalArgumentException("Could not parse XML attribute \"adSize\": " + v4);
          v2[i] = com.google.android.gms.ads.AdSize.h;
        }
      }
      if ( v2.length == 0 )
        throw new IllegalArgumentException("Could not parse XML attribute \"adSize\": " + p0);
      return (com.google.android.gms.ads.AdSize[])v2;
    }

    public final String a()
    {
      return this.b;
    }

    public final com.google.android.gms.ads.AdSize[] a(boolean p0)
    {
      if ( !p0 && this.a.length != 1 )
        throw new IllegalArgumentException("The adSizes XML attribute is only allowed on PublisherAdViews.");
      return this.a;
    }

}
