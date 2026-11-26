// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

import com.google.android.gms.drive.metadata.CustomPropertyKey;
public class c implements android.os.Parcelable.Creator {
    // Methods
    public c()
    {
      super();
    }

    static void a(com.google.android.gms.drive.metadata.internal.CustomProperty p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.b, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.metadata.internal.CustomProperty aB(android.os.Parcel p0)
    {
      int v1;
      com.google.android.gms.drive.metadata.CustomPropertyKey v2;
      int v3;
      String v4;
      int v5;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = null;
      v3 = 0;
      v4 = null;
      while ( p0.dataPosition() < v1 )
      {
        v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v5) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          case 2:
            v2 = (com.google.android.gms.drive.metadata.CustomPropertyKey)com.google.android.gms.common.internal.safeparcel.a.a(p0, v5, CustomPropertyKey.CREATOR);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v5);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v5);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.drive.metadata.internal.CustomProperty(v3, v2, v4);
    }

    private static com.google.android.gms.drive.metadata.internal.CustomProperty[] bx(int p0)
    {
      return new com.google.android.gms.drive.metadata.internal.CustomProperty[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      com.google.android.gms.drive.metadata.CustomPropertyKey v3;
      int v4;
      String v5;
      int v6;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = null;
      v4 = 0;
      v5 = null;
      while ( p0.dataPosition() < v2 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v3 = (com.google.android.gms.drive.metadata.CustomPropertyKey)com.google.android.gms.common.internal.safeparcel.a.a(p0, v6, CustomPropertyKey.CREATOR);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.drive.metadata.internal.CustomProperty(v4, v3, v5);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.metadata.internal.CustomProperty[p0];
    }

}
