// Decompiled from classes.dex (SourceFile: kw.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class kw implements android.os.Parcelable.Creator {
    // Methods
    public kw()
    {
      super();
    }

    static void a(com.google.android.gms.internal.kt$b p0, android.os.Parcel p1, int p2)
    {
      int v3;
      java.util.Set v4;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      v4 = p0.d();
      if ( v4.contains(Integer.valueOf(1)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.e());
      if ( v4.contains(Integer.valueOf(2)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.i(), p2, true);
      if ( v4.contains(Integer.valueOf(3)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.l(), p2, true);
      if ( v4.contains(Integer.valueOf(4)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.n());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.kt$b bI(android.os.Parcel p0)
    {
      com.google.android.gms.internal.kt$b$b v1;
      int v2;
      int v3;
      java.util.Set v4;
      com.google.android.gms.internal.kt$b$a v5;
      int v6;
      int v7;
      com.google.android.gms.internal.kt$b$a v8;
      com.google.android.gms.internal.kt$b$b v9;
      v1 = null;
      v2 = 0;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = new java.util.HashSet();
      v5 = null;
      v6 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            v4.add(Integer.valueOf(1));
            break;
          case 2:
            v8 = (com.google.android.gms.internal.kt$b$a)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, (android.os.Parcelable.Creator)kt$b$a.CREATOR);
            v4.add(Integer.valueOf(2));
            v5 = v8;
            break;
          case 3:
            v9 = (com.google.android.gms.internal.kt$b$b)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, (android.os.Parcelable.Creator)kt$b$b.CREATOR);
            v4.add(Integer.valueOf(3));
            v1 = v9;
            break;
          case 4:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            v4.add(Integer.valueOf(4));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.kt$b(v4, v6, v5, v1, v2);
    }

    private static com.google.android.gms.internal.kt$b[] df(int p0)
    {
      return new com.google.android.gms.internal.kt$b[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      com.google.android.gms.internal.kt$b$b v2;
      int v3;
      int v4;
      java.util.Set v5;
      com.google.android.gms.internal.kt$b$a v6;
      int v7;
      int v8;
      com.google.android.gms.internal.kt$b$a v9;
      com.google.android.gms.internal.kt$b$b v10;
      v2 = null;
      v3 = 0;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = new java.util.HashSet();
      v6 = null;
      v7 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v8 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v8) )
        {
          case 1:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            v5.add(Integer.valueOf(1));
            break;
          case 2:
            v9 = (com.google.android.gms.internal.kt$b$a)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, (android.os.Parcelable.Creator)kt$b$a.CREATOR);
            v5.add(Integer.valueOf(2));
            v6 = v9;
            break;
          case 3:
            v10 = (com.google.android.gms.internal.kt$b$b)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, (android.os.Parcelable.Creator)kt$b$b.CREATOR);
            v5.add(Integer.valueOf(3));
            v2 = v10;
            break;
          case 4:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            v5.add(Integer.valueOf(4));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.internal.kt$b(v5, v7, v6, v2, v3);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.kt$b[p0];
    }

}
