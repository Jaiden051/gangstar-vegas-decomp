// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.data;

import android.database.CursorWindow;
public class f implements android.os.Parcelable.Creator {
    // Methods
    public f()
    {
      super();
    }

    static void a(com.google.android.gms.common.data.DataHolder p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.d(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 3, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.f(), false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.common.data.DataHolder[] ag(int p0)
    {
      return new com.google.android.gms.common.data.DataHolder[p0];
    }

    public static com.google.android.gms.common.data.DataHolder x(android.os.Parcel p0)
    {
      int v1;
      android.os.Bundle v2;
      int v3;
      android.database.CursorWindow[] v4;
      String[] v5;
      int v6;
      int v7;
      com.google.android.gms.common.data.DataHolder v8;
      v1 = 0;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = null;
      v5 = null;
      v6 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0, v7);
            break;
          case 2:
            v4 = (android.database.CursorWindow[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v7, CursorWindow.CREATOR);
            break;
          case 3:
            v1 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 4:
            v2 = com.google.android.gms.common.internal.safeparcel.a.q(p0, v7);
            break;
          case 1000:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      v8 = new com.google.android.gms.common.data.DataHolder(v6, v5, v4, v1, v2);
      v8.a();
      return v8;
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return x(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.common.data.DataHolder[p0];
    }

}
