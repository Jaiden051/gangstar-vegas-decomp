// Decompiled from classes.dex (SourceFile: DetectedActivityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

public class DetectedActivityCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public DetectedActivityCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.location.DetectedActivity p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.i);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.j);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.location.DetectedActivity _typed_createFromParcel(
            android.os.Parcel p0)
    {
      int v1;
      int v2;
      int v3;
      int v4;
      int v5;
      v1 = 0;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = 0;
      while ( p0.dataPosition() < v2 )
      {
        v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v5) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
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
      return new com.google.android.gms.location.DetectedActivity(v4, v3, v1);
    }

    private static com.google.android.gms.location.DetectedActivity[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.location.DetectedActivity[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      int v4;
      int v5;
      int v6;
      v2 = 0;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 1000:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.location.DetectedActivity(v5, v4, v2);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.location.DetectedActivity[p0];
    }

}
