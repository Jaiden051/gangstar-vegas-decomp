// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.identity.intents;

import com.google.android.gms.identity.intents.model.CountrySpecification;
public class a implements android.os.Parcelable.Creator {
    // Methods
    public a()
    {
      super();
    }

    static void a(com.google.android.gms.identity.intents.UserAddressRequest p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 2, p0.a, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.identity.intents.UserAddressRequest bp(android.os.Parcel p0)
    {
      int v1;
      int v2;
      java.util.ArrayList v3;
      int v4;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      while ( p0.dataPosition() < v1 )
      {
        v4 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v4) )
        {
          case 1:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v4);
            break;
          case 2:
            v3 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v4, CountrySpecification.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v4);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.identity.intents.UserAddressRequest(v2, v3);
    }

    private static com.google.android.gms.identity.intents.UserAddressRequest[] cC(int p0)
    {
      return new com.google.android.gms.identity.intents.UserAddressRequest[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      java.util.ArrayList v4;
      int v5;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      while ( p0.dataPosition() < v2 )
      {
        v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v5) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v5, CountrySpecification.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v5);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.identity.intents.UserAddressRequest(v3, v4);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.identity.intents.UserAddressRequest[p0];
    }

}
