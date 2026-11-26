// Decompiled from classes.dex (SourceFile: ky.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ky implements android.os.Parcelable.Creator {
    // Methods
    public ky()
    {
      super();
    }

    static void a(com.google.android.gms.internal.kt$b$b p0, android.os.Parcel p1, int p2)
    {
      int v3;
      java.util.Set v4;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      v4 = p0.d();
      if ( v4.contains(Integer.valueOf(1)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.e());
      if ( v4.contains(Integer.valueOf(2)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.f());
      if ( v4.contains(Integer.valueOf(3)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.j(), true);
      if ( v4.contains(Integer.valueOf(4)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.l());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.kt$b$b bK(android.os.Parcel p0)
    {
      int v1;
      int v2;
      java.util.Set v3;
      String v4;
      int v5;
      int v6;
      int v7;
      v1 = 0;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = new java.util.HashSet();
      v4 = null;
      v5 = 0;
      v6 = 0;
      while ( p0.dataPosition() < v2 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            v3.add(Integer.valueOf(1));
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            v3.add(Integer.valueOf(2));
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v7);
            v3.add(Integer.valueOf(3));
            break;
          case 4:
            v1 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            v3.add(Integer.valueOf(4));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.kt$b$b(v3, v6, v5, v4, v1);
    }

    private static com.google.android.gms.internal.kt$b$b[] dh(int p0)
    {
      return new com.google.android.gms.internal.kt$b$b[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      java.util.Set v4;
      String v5;
      int v6;
      int v7;
      int v8;
      v2 = 0;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = new java.util.HashSet();
      v5 = null;
      v6 = 0;
      v7 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v8 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v8) )
        {
          case 1:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            v4.add(Integer.valueOf(1));
            break;
          case 2:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            v4.add(Integer.valueOf(2));
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v8);
            v4.add(Integer.valueOf(3));
            break;
          case 4:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            v4.add(Integer.valueOf(4));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.kt$b$b(v4, v7, v6, v5, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.kt$b$b[p0];
    }

}
