// Decompiled from classes.dex (SourceFile: lb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class lb implements android.os.Parcelable.Creator {
    // Methods
    public lb()
    {
      super();
    }

    static void a(com.google.android.gms.internal.kt$f p0, android.os.Parcel p1, int p2)
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
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.j(), true);
      if ( v4.contains(Integer.valueOf(4)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.l(), true);
      if ( v4.contains(Integer.valueOf(5)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.n(), true);
      if ( v4.contains(Integer.valueOf(6)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.p(), true);
      if ( v4.contains(Integer.valueOf(7)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.r());
      if ( v4.contains(Integer.valueOf(8)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.t(), true);
      if ( v4.contains(Integer.valueOf(9)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.v(), true);
      if ( v4.contains(Integer.valueOf(10)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 10, p0.x());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.kt$f bN(android.os.Parcel p0)
    {
      int v1;
      String v2;
      int v3;
      java.util.Set v4;
      String v5;
      boolean v6;
      String v7;
      String v8;
      String v9;
      String v10;
      String v11;
      int v12;
      int v13;
      v1 = 0;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = new java.util.HashSet();
      v5 = null;
      v6 = false;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = null;
      v12 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v13 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v13) )
        {
          case 1:
            v12 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v13);
            v4.add(Integer.valueOf(1));
            break;
          case 2:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            v4.add(Integer.valueOf(2));
            break;
          case 3:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            v4.add(Integer.valueOf(3));
            break;
          case 4:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            v4.add(Integer.valueOf(4));
            break;
          case 5:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            v4.add(Integer.valueOf(5));
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            v4.add(Integer.valueOf(6));
            break;
          case 7:
            v6 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v13);
            v4.add(Integer.valueOf(7));
            break;
          case 8:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            v4.add(Integer.valueOf(8));
            break;
          case 9:
            v2 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            v4.add(Integer.valueOf(9));
            break;
          case 10:
            v1 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v13);
            v4.add(Integer.valueOf(10));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v13);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.kt$f(v4, v12, v11, v10, v9, v8, v7, v6, v5, v2, v1);
    }

    private static com.google.android.gms.internal.kt$f[] dk(int p0)
    {
      return new com.google.android.gms.internal.kt$f[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      String v3;
      int v4;
      java.util.Set v5;
      String v6;
      boolean v7;
      String v8;
      String v9;
      String v10;
      String v11;
      String v12;
      int v13;
      int v14;
      v2 = 0;
      v3 = null;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = new java.util.HashSet();
      v6 = null;
      v7 = false;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = null;
      v12 = null;
      v13 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v14 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v14) )
        {
          case 1:
            v13 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v14);
            v5.add(Integer.valueOf(1));
            break;
          case 2:
            v12 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            v5.add(Integer.valueOf(2));
            break;
          case 3:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            v5.add(Integer.valueOf(3));
            break;
          case 4:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            v5.add(Integer.valueOf(4));
            break;
          case 5:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            v5.add(Integer.valueOf(5));
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            v5.add(Integer.valueOf(6));
            break;
          case 7:
            v7 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v14);
            v5.add(Integer.valueOf(7));
            break;
          case 8:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            v5.add(Integer.valueOf(8));
            break;
          case 9:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            v5.add(Integer.valueOf(9));
            break;
          case 10:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v14);
            v5.add(Integer.valueOf(10));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v14);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.internal.kt$f(v5, v13, v12, v11, v10, v9, v8, v7, v6, v3, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.kt$f[p0];
    }

}
