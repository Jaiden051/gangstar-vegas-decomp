// Decompiled from classes.dex (SourceFile: ku.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ku implements android.os.Parcelable.Creator {
    // Methods
    public ku()
    {
      super();
    }

    static void a(com.google.android.gms.internal.kt p0, android.os.Parcel p1, int p2)
    {
      int v3;
      java.util.Set v4;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      v4 = p0.d();
      if ( v4.contains(Integer.valueOf(1)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.e());
      if ( v4.contains(Integer.valueOf(2)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.f(), true);
      if ( v4.contains(Integer.valueOf(3)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.k(), p2, true);
      if ( v4.contains(Integer.valueOf(4)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.m(), true);
      if ( v4.contains(Integer.valueOf(5)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.o(), true);
      if ( v4.contains(Integer.valueOf(6)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 6, p0.q());
      if ( v4.contains(Integer.valueOf(7)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, (android.os.Parcelable)p0.t(), p2, true);
      if ( v4.contains(Integer.valueOf(8)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.v(), true);
      if ( v4.contains(Integer.valueOf(9)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.x(), true);
      if ( v4.contains(Integer.valueOf(12)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 12, p0.z());
      if ( v4.contains(Integer.valueOf(14)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 14, p0.B(), true);
      if ( v4.contains(Integer.valueOf(15)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 15, (android.os.Parcelable)p0.E(), p2, true);
      if ( v4.contains(Integer.valueOf(16)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 16, p0.G());
      if ( v4.contains(Integer.valueOf(19)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 19, (android.os.Parcelable)p0.L(), p2, true);
      if ( v4.contains(Integer.valueOf(18)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 18, p0.I(), true);
      if ( v4.contains(Integer.valueOf(21)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 21, p0.P());
      if ( v4.contains(Integer.valueOf(20)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 20, p0.N(), true);
      if ( v4.contains(Integer.valueOf(23)) )
        com.google.android.gms.common.internal.safeparcel.b.b(p1, 23, p0.V(), true);
      if ( v4.contains(Integer.valueOf(22)) )
        com.google.android.gms.common.internal.safeparcel.b.b(p1, 22, p0.S(), true);
      if ( v4.contains(Integer.valueOf(25)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 25, p0.Z());
      if ( v4.contains(Integer.valueOf(24)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 24, p0.X());
      if ( v4.contains(Integer.valueOf(27)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 27, p0.ad(), true);
      if ( v4.contains(Integer.valueOf(26)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 26, p0.ab(), true);
      if ( v4.contains(Integer.valueOf(29)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 29, p0.ai());
      if ( v4.contains(Integer.valueOf(28)) )
        com.google.android.gms.common.internal.safeparcel.b.b(p1, 28, p0.ag(), true);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.internal.kt bG(android.os.Parcel p0)
    {
      int v1;
      java.util.Set v2;
      int v3;
      String v4;
      com.google.android.gms.internal.kt$a v5;
      String v6;
      String v7;
      int v8;
      com.google.android.gms.internal.kt$b v9;
      String v10;
      String v11;
      int v12;
      String v13;
      com.google.android.gms.internal.kt$c v14;
      boolean v15;
      String v16;
      com.google.android.gms.internal.kt$d v17;
      String v18;
      int v19;
      java.util.ArrayList v20;
      java.util.ArrayList v21;
      int v22;
      int v23;
      String v24;
      String v25;
      java.util.ArrayList v26;
      boolean v27;
      int v28;
      com.google.android.gms.internal.kt$a v29;
      com.google.android.gms.internal.kt$b v30;
      com.google.android.gms.internal.kt$c v31;
      com.google.android.gms.internal.kt$d v32;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = new java.util.HashSet();
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = 0;
      v9 = null;
      v10 = null;
      v11 = null;
      v12 = 0;
      v13 = null;
      v14 = null;
      v15 = false;
      v16 = null;
      v17 = null;
      v18 = null;
      v19 = 0;
      v20 = null;
      v21 = null;
      v22 = 0;
      v23 = 0;
      v24 = null;
      v25 = null;
      v26 = null;
      v27 = false;
      while ( p0.dataPosition() < v1 )
      {
        v28 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v28) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v28);
            v2.add(Integer.valueOf(1));
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v28);
            v2.add(Integer.valueOf(2));
            break;
          case 3:
            v29 = (com.google.android.gms.internal.kt$a)com.google.android.gms.common.internal.safeparcel.a.a(p0, v28, (android.os.Parcelable.Creator)kt$a.CREATOR);
            v2.add(Integer.valueOf(3));
            v5 = v29;
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v28);
            v2.add(Integer.valueOf(4));
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v28);
            v2.add(Integer.valueOf(5));
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v28);
            v2.add(Integer.valueOf(6));
            break;
          case 7:
            v30 = (com.google.android.gms.internal.kt$b)com.google.android.gms.common.internal.safeparcel.a.a(p0, v28, (android.os.Parcelable.Creator)kt$b.CREATOR);
            v2.add(Integer.valueOf(7));
            v9 = v30;
            break;
          case 8:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v28);
            v2.add(Integer.valueOf(8));
            break;
          case 9:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v28);
            v2.add(Integer.valueOf(9));
            break;
          case 12:
            v12 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v28);
            v2.add(Integer.valueOf(12));
            break;
          case 14:
            v13 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v28);
            v2.add(Integer.valueOf(14));
            break;
          case 15:
            v31 = (com.google.android.gms.internal.kt$c)com.google.android.gms.common.internal.safeparcel.a.a(p0, v28, (android.os.Parcelable.Creator)kt$c.CREATOR);
            v2.add(Integer.valueOf(15));
            v14 = v31;
            break;
          case 16:
            v15 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v28);
            v2.add(Integer.valueOf(16));
            break;
          case 18:
            v16 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v28);
            v2.add(Integer.valueOf(18));
            break;
          case 19:
            v32 = (com.google.android.gms.internal.kt$d)com.google.android.gms.common.internal.safeparcel.a.a(p0, v28, (android.os.Parcelable.Creator)kt$d.CREATOR);
            v2.add(Integer.valueOf(19));
            v17 = v32;
            break;
          case 20:
            v18 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v28);
            v2.add(Integer.valueOf(20));
            break;
          case 21:
            v19 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v28);
            v2.add(Integer.valueOf(21));
            break;
          case 22:
            v20 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v28, (android.os.Parcelable.Creator)kt$f.CREATOR);
            v2.add(Integer.valueOf(22));
            break;
          case 23:
            v21 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v28, (android.os.Parcelable.Creator)kt$g.CREATOR);
            v2.add(Integer.valueOf(23));
            break;
          case 24:
            v22 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v28);
            v2.add(Integer.valueOf(24));
            break;
          case 25:
            v23 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v28);
            v2.add(Integer.valueOf(25));
            break;
          case 26:
            v24 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v28);
            v2.add(Integer.valueOf(26));
            break;
          case 27:
            v25 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v28);
            v2.add(Integer.valueOf(27));
            break;
          case 28:
            v26 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v28, (android.os.Parcelable.Creator)kt$h.CREATOR);
            v2.add(Integer.valueOf(28));
            break;
          case 29:
            v27 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v28);
            v2.add(Integer.valueOf(29));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v28);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.internal.kt(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27);
    }

    private static com.google.android.gms.internal.kt[] dd(int p0)
    {
      return new com.google.android.gms.internal.kt[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return bG(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.kt[p0];
    }

}
