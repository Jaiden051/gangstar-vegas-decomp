// Decompiled from classes.dex (SourceFile: cc.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.ads.AdSize;
public final class cc {
    // Methods
    public static int a(com.google.ads.AdRequest$ErrorCode p0)
    {
      int v1;
      switch ( cc$1.b[p0.ordinal()] )
      {
        case 2:
          v1 = 1;
          break;
        case 3:
          v1 = 2;
          break;
        case 4:
          v1 = 3;
          break;
        default:
          v1 = 0;
          break;
      }
      return v1;
    }

    public static com.google.ads.AdSize b(com.google.android.gms.internal.am p0)
    {
      int v1;
      com.google.ads.AdSize[] v2;
      v1 = 0;
      v2 = new com.google.ads.AdSize[6];
      v2[0] = com.google.ads.AdSize.f;
      v2[1] = com.google.ads.AdSize.g;
      v2[2] = com.google.ads.AdSize.h;
      v2[3] = com.google.ads.AdSize.i;
      v2[4] = com.google.ads.AdSize.j;
      v2[5] = com.google.ads.AdSize.k;
      while ( v1 < v2.length )
      {
        if ( v2[v1].a() == p0.f && v2[v1].b() == p0.c )
          return v2[v1];
        ++v1;
      }
      return new com.google.ads.AdSize(com.google.android.gms.ads.a.a(p0.f, p0.c, p0.b));
    }

    public static com.google.ads.mediation.MediationAdRequest e(com.google.android.gms.internal.aj p0)
    {
      java.util.Set v1;
      if ( p0.e != null )
        v1 = new java.util.HashSet(p0.e);
      else
        v1 = null;
      return new com.google.ads.mediation.MediationAdRequest(new java.util.Date(p0.b), h(p0.d), v1, p0.f, p0.k);
    }

    public static com.google.ads.AdRequest$Gender h(int p0)
    {
      com.google.ads.AdRequest$Gender v1;
      switch ( p0 )
      {
        case 1:
          v1 = com.google.ads.AdRequest$Gender.b;
          break;
        case 2:
          v1 = com.google.ads.AdRequest$Gender.c;
          break;
        default:
          v1 = com.google.ads.AdRequest$Gender.a;
          break;
      }
      return v1;
    }

}
