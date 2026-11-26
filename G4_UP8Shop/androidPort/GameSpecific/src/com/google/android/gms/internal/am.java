// Decompiled from classes.dex (SourceFile: am.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class am implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.an CREATOR;
    public final int a;
    public final java.lang.String b;
    public final int c;
    public final int d;
    public final boolean e;
    public final int f;
    public final int g;
    public final com.google.android.gms.internal.am[] h;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.an();
    }

    public am()
    {
      this(2, "interstitial_mb", 0, 0, true, 0, 0, null);
    }

    am(int p0, String p1, int p2, int p3, boolean p4, int p5, int p6, com.google.android.gms.internal.am[] p7)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p6;
      this.h = (com.google.android.gms.internal.am[])p7;
    }

    public am(android.content.Context p0, com.google.android.gms.ads.AdSize p1)
    {
      this(p0, new com.google.android.gms.ads.AdSize[] { p1 });
    }

    public am(android.content.Context p0, com.google.android.gms.ads.AdSize[] p1)
    {
      super();
      int v3;
      com.google.android.gms.ads.AdSize v4;
      boolean v5;
      boolean v6;
      android.util.DisplayMetrics DisplayMetrics; // RETVAL
      android.util.DisplayMetrics v8;
      int f;
      int c;
      v3 = 0;
      v4 = p1[0];
      this.a = 2;
      this.e = false;
      this.f = v4.b();
      this.c = v4.a();
      v5 = this.f == -1;
      v6 = this.c == -2;
      DisplayMetrics = p0.getResources().getDisplayMetrics();
      v8 = DisplayMetrics;
      if ( v5 )
      {
        this.g = a(DisplayMetrics);
        f = (int)((float)this.g / v8.density);
      }
      else
      {
        this.g = eu.a(DisplayMetrics, this.f);
        f = this.f;
      }
      if ( v6 )
        c = am.c(v8);
      else
        c = this.c;
      this.d = eu.a(v8, c);
      if ( v5 || v6 )
        this.b = f + "x" + c + "_as";
      else
        this.b = v4.toString();
      if ( p1.length <= 1 )
      {
        this.h = null;
      }
      else
      {
        this.h = new com.google.android.gms.internal.am[p1.length];
        while ( v3 < p1.length )
        {
          this.h[v3] = new com.google.android.gms.internal.am(p0, p1[v3]);
          ++v3;
        }
      }
    
    }

    public am(com.google.android.gms.internal.am p0, com.google.android.gms.internal.am[] p1)
    {
      this(2, p0.b, p0.c, p0.d, p0.e, p0.f, p0.g, p1);
    }

    public static int a(android.util.DisplayMetrics p0)
    {
      return p0.widthPixels;
    }

    public static int b(android.util.DisplayMetrics p0)
    {
      return (int)((float)c(p0) * p0.density);
    }

    private static int c(android.util.DisplayMetrics p0)
    {
      int v1;
      v1 = (int)((float)p0.heightPixels / p0.density);
      if ( v1 <= 400 )
        return 32;
      if ( v1 > 720 )
        return 90;
      return 50;
    }

    public final com.google.android.gms.ads.AdSize a()
    {
      return com.google.android.gms.ads.a.a(this.f, this.c, this.b);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      an.a(this, p0, p1);
    }

}
