// Decompiled from classes.dex (SourceFile: AdSize.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads;

import com.google.android.gms.internal.am;
import com.google.android.gms.internal.eu;
public final class AdSize {
    // Fields
    public static int a;
    public static int b;
    public static final com.google.android.gms.ads.AdSize c;
    public static final com.google.android.gms.ads.AdSize d;
    public static final com.google.android.gms.ads.AdSize e;
    public static final com.google.android.gms.ads.AdSize f;
    public static final com.google.android.gms.ads.AdSize g;
    public static final com.google.android.gms.ads.AdSize h;
    public static final com.google.android.gms.ads.AdSize i;
    private final int j;
    private final int k;
    private final java.lang.String l;

    // Methods
    static
    {
      c = new com.google.android.gms.ads.AdSize(320, 50, "320x50_mb");
      d = new com.google.android.gms.ads.AdSize(468, 60, "468x60_as");
      e = new com.google.android.gms.ads.AdSize(320, 100, "320x100_as");
      f = new com.google.android.gms.ads.AdSize(728, 90, "728x90_as");
      g = new com.google.android.gms.ads.AdSize(300, 250, "300x250_as");
      h = new com.google.android.gms.ads.AdSize(160, 600, "160x600_as");
      i = new com.google.android.gms.ads.AdSize(-1, -2, "smart_banner");
    }

    public AdSize(int p0, int p1)
    {
      this(p0, p1, (p0 == -1 ? "FULL" : String.valueOf(p0)) + "x" + (p1 == -2 ? "AUTO" : String.valueOf(p1)) + "_as");
    }

    AdSize(int p0, int p1, String p2)
    {
      super();
      if ( p0 < -1 )
        throw new IllegalArgumentException("Invalid width for AdSize: " + p0);
      if ( p1 < 0 && p1 != -2 )
        throw new IllegalArgumentException("Invalid height for AdSize: " + p1);
      this.j = p0;
      this.k = p1;
      this.l = p2;
    }

    public final int a()
    {
      return this.k;
    }

    public final int a(android.content.Context p0)
    {
      if ( this.k == -2 )
        return am.b(p0.getResources().getDisplayMetrics());
      else
        return eu.a(p0, this.k);
    }

    public final int b()
    {
      return this.j;
    }

    public final int b(android.content.Context p0)
    {
      if ( this.j == -1 )
        return am.a(p0.getResources().getDisplayMetrics());
      else
        return eu.a(p0, this.j);
    }

    public final boolean c()
    {
      return this.k == -2;
    }

    public final boolean d()
    {
      return this.j == -1;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.ads.AdSize v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.ads.AdSize )
        {
          v4 = (com.google.android.gms.ads.AdSize)p0;
          if ( this.j != v4.j || this.k != v4.k || !this.l.equals(v4.l) )
            return false;
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      return this.l.hashCode();
    }

    public final String toString()
    {
      return this.l;
    }

}
