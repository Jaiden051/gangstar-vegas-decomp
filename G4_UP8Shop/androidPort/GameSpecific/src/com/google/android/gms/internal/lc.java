// Decompiled from classes.dex (SourceFile: lc.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class lc implements android.os.Parcelable.Creator {
    // Methods
    public lc()
    {
      super();
    }

    static void a(com.google.android.gms.internal.kt$g p0, android.os.Parcel p1, int p2)
    {
      int v3;
      java.util.Set v4;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      v4 = p0.d();
      if ( v4.contains(Integer.valueOf(1)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.e());
      if ( v4.contains(Integer.valueOf(2)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.f());
      if ( v4.contains(Integer.valueOf(3)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.j(), true);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.kt$g bO(android.os.Parcel p0)
    {
      boolean v1;
      int v2;
      java.util.Set v3;
      String v4;
      int v5;
      int v6;
      v1 = false;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = new java.util.HashSet();
      v4 = null;
      v5 = 0;
      while ( p0.dataPosition() < v2 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            v3.add(Integer.valueOf(1));
            break;
          case 2:
            v1 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v6);
            v3.add(Integer.valueOf(2));
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v6);
            v3.add(Integer.valueOf(3));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.kt$g(v3, v5, v1, v4);
    }

    private static com.google.android.gms.internal.kt$g[] dl(int p0)
    {
      return new com.google.android.gms.internal.kt$g[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      boolean v2;
      int v3;
      java.util.Set v4;
      String v5;
      int v6;
      int v7;
      v2 = false;
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
            v2 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v7);
            v4.add(Integer.valueOf(2));
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v7);
            v4.add(Integer.valueOf(3));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.kt$g(v4, v6, v2, v5);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.kt$g[p0];
    }

}
