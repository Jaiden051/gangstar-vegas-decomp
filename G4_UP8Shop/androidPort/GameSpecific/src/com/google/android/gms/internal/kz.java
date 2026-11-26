// Decompiled from classes.dex (SourceFile: kz.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class kz implements android.os.Parcelable.Creator {
    // Methods
    public kz()
    {
      super();
    }

    static void a(com.google.android.gms.internal.kt$c p0, android.os.Parcel p1, int p2)
    {
      int v3;
      java.util.Set v4;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      v4 = p0.d();
      if ( v4.contains(Integer.valueOf(1)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.e());
      if ( v4.contains(Integer.valueOf(2)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.f(), true);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.kt$c bL(android.os.Parcel p0)
    {
      int v1;
      java.util.Set v2;
      int v3;
      String v4;
      int v5;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = new java.util.HashSet();
      v3 = 0;
      v4 = null;
      while ( p0.dataPosition() < v1 )
      {
        v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v5) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            v2.add(Integer.valueOf(1));
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v5);
            v2.add(Integer.valueOf(2));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v5);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.internal.kt$c(v2, v3, v4);
    }

    private static com.google.android.gms.internal.kt$c[] di(int p0)
    {
      return new com.google.android.gms.internal.kt$c[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      java.util.Set v3;
      int v4;
      String v5;
      int v6;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = new java.util.HashSet();
      v4 = 0;
      v5 = null;
      while ( p0.dataPosition() < v2 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            v3.add(Integer.valueOf(1));
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v6);
            v3.add(Integer.valueOf(2));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.kt$c(v3, v4, v5);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.kt$c[p0];
    }

}
