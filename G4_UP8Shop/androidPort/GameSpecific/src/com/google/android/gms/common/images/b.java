// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

import android.net.Uri;
public class b implements android.os.Parcelable.Creator {
    // Methods
    public b()
    {
      super();
    }

    static void a(com.google.android.gms.common.images.WebImage p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 3, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.common.images.WebImage[] ak(int p0)
    {
      return new com.google.android.gms.common.images.WebImage[p0];
    }

    private static com.google.android.gms.common.images.WebImage y(android.os.Parcel p0)
    {
      int v1;
      int v2;
      android.net.Uri v3;
      int v4;
      int v5;
      int v6;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      v4 = 0;
      v5 = 0;
      while ( p0.dataPosition() < v1 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v3 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v6, Uri.CREATOR);
            break;
          case 3:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.common.images.WebImage(v4, v3, v2, v5);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      android.net.Uri v4;
      int v5;
      int v6;
      int v7;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = 0;
      v6 = 0;
      while ( p0.dataPosition() < v2 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 2:
            v4 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, Uri.CREATOR);
            break;
          case 3:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.common.images.WebImage(v5, v4, v3, v6);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.common.images.WebImage[p0];
    }

}
