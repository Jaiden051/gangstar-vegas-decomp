// Decompiled from classes.dex (SourceFile: ConnectionInfoCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

public class ConnectionInfoCreator implements android.os.Parcelable.Creator {
    // Methods
    public ConnectionInfoCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.games.internal.ConnectionInfo p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.games.internal.ConnectionInfo bf(android.os.Parcel p0)
    {
      int v1;
      int v2;
      String v3;
      int v4;
      int v5;
      v1 = 0;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = null;
      v4 = 0;
      while ( p0.dataPosition() < v2 )
      {
        v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v5) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v5);
            break;
          case 2:
            v1 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          case 1000:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v5);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.games.internal.ConnectionInfo(v4, v3, v1);
    }

    private static com.google.android.gms.games.internal.ConnectionInfo[] cf(int p0)
    {
      return new com.google.android.gms.games.internal.ConnectionInfo[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return bf(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.internal.ConnectionInfo[p0];
    }

}
