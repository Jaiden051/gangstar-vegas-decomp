// Decompiled from classes.dex (SourceFile: StatusCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

import android.app.PendingIntent;
public class StatusCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public StatusCreator()
    {
      super();
    }

    static void a(com.google.android.gms.common.api.Status p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.g());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.common.api.Status _typed_createFromParcel(android.os.Parcel p0)
    {
      android.app.PendingIntent v1;
      int v2;
      int v3;
      int v4;
      String v5;
      int v6;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = 0;
      v5 = null;
      while ( p0.dataPosition() < v2 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v6);
            break;
          case 3:
            v1 = (android.app.PendingIntent)com.google.android.gms.common.internal.safeparcel.a.a(p0, v6, PendingIntent.CREATOR);
            break;
          case 1000:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.common.api.Status(v4, v3, v5, v1);
    }

    private static com.google.android.gms.common.api.Status[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.common.api.Status[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.common.api.Status[p0];
    }

}
