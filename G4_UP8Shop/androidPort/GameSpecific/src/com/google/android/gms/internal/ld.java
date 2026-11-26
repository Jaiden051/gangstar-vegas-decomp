// Decompiled from classes.dex (SourceFile: ld.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ld implements android.os.Parcelable.Creator {
    // Methods
    public ld()
    {
      super();
    }

    static void a(com.google.android.gms.internal.kt$h p0, android.os.Parcel p1, int p2)
    {
      int v3;
      java.util.Set v4;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      v4 = p0.d();
      if ( v4.contains(Integer.valueOf(1)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.e());
      if ( v4.contains(Integer.valueOf(3)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 3, kt$h.kS());
      if ( v4.contains(Integer.valueOf(4)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.l(), true);
      if ( v4.contains(Integer.valueOf(5)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.f(), true);
      if ( v4.contains(Integer.valueOf(6)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 6, p0.j());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.kt$h bP(android.os.Parcel p0)
    {
      String v1;
      int v2;
      int v3;
      java.util.Set v4;
      String v5;
      int v6;
      int v7;
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
          case 3:
            com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            v4.add(Integer.valueOf(3));
            break;
          case 4:
            v1 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v7);
            v4.add(Integer.valueOf(4));
            break;
          case 5:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v7);
            v4.add(Integer.valueOf(5));
            break;
          case 6:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            v4.add(Integer.valueOf(6));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.kt$h(v4, v6, v5, v2, v1);
    }

    private static com.google.android.gms.internal.kt$h[] dm(int p0)
    {
      return new com.google.android.gms.internal.kt$h[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      String v2;
      int v3;
      int v4;
      java.util.Set v5;
      String v6;
      int v7;
      int v8;
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
          case 3:
            com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            v5.add(Integer.valueOf(3));
            break;
          case 4:
            v2 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v8);
            v5.add(Integer.valueOf(4));
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v8);
            v5.add(Integer.valueOf(5));
            break;
          case 6:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            v5.add(Integer.valueOf(6));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.internal.kt$h(v5, v7, v6, v3, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.kt$h[p0];
    }

}
