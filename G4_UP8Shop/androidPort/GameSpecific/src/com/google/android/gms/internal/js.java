// Decompiled from classes.dex (SourceFile: js.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class js implements android.os.Parcelable.Creator {
    // Methods
    public js()
    {
      super();
    }

    static void a(com.google.android.gms.internal.jr p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.a(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.internal.jr bx(android.os.Parcel p0)
    {
      int v1;
      int v2;
      com.google.android.gms.internal.jn v3;
      long v4;
      int v5;
      int v6;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      v4 = jr.a;
      v5 = 102;
      while ( p0.dataPosition() < v1 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 2:
            v3 = (com.google.android.gms.internal.jn)com.google.android.gms.common.internal.safeparcel.a.a(p0, v6, (android.os.Parcelable.Creator)jn.CREATOR);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v6);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 1000:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.internal.jr(v2, v3, v4, v5);
    }

    private static com.google.android.gms.internal.jr[] cS(int p0)
    {
      return new com.google.android.gms.internal.jr[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return bx(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.jr[p0];
    }

}
