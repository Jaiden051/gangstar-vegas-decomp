// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

import android.net.Uri;
import android.os.ParcelFileDescriptor;
public class a implements android.os.Parcelable.Creator {
    // Methods
    public a()
    {
      super();
    }

    static void a(com.google.android.gms.wearable.Asset p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.a(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.b, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.c, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.wearable.Asset cs(android.os.Parcel p0)
    {
      android.net.Uri v1;
      int v2;
      int v3;
      android.os.ParcelFileDescriptor v4;
      String v5;
      byte[] v6;
      int v7;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      while ( p0.dataPosition() < v2 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 2:
            v6 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v7);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v7);
            break;
          case 4:
            v4 = (android.os.ParcelFileDescriptor)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, ParcelFileDescriptor.CREATOR);
            break;
          case 5:
            v1 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, Uri.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.wearable.Asset(v3, v6, v5, v4, v1);
    }

    private static com.google.android.gms.wearable.Asset[] ea(int p0)
    {
      return new com.google.android.gms.wearable.Asset[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      android.net.Uri v2;
      int v3;
      int v4;
      android.os.ParcelFileDescriptor v5;
      String v6;
      byte[] v7;
      int v8;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = null;
      v6 = null;
      v7 = null;
      while ( p0.dataPosition() < v3 )
      {
        v8 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v8) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          case 2:
            v7 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v8);
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v8);
            break;
          case 4:
            v5 = (android.os.ParcelFileDescriptor)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, ParcelFileDescriptor.CREATOR);
            break;
          case 5:
            v2 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, Uri.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.wearable.Asset(v4, v7, v6, v5, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.wearable.Asset[p0];
    }

}
