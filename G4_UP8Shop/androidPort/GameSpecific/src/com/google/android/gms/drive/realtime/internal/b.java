// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

public class b implements android.os.Parcelable.Creator {
    // Methods
    public b()
    {
      super();
    }

    static void a(
            com.google.android.gms.drive.realtime.internal.EndCompoundOperationRequest p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.realtime.internal.EndCompoundOperationRequest aQ(android.os.Parcel p0)
    {
      int v1;
      int v2;
      int v3;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      while ( p0.dataPosition() < v1 )
      {
        v3 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        if ( com.google.android.gms.common.internal.safeparcel.a.ar(v3) == 1 )
          v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v3);
        else
          com.google.android.gms.common.internal.safeparcel.a.b(p0, v3);
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.drive.realtime.internal.EndCompoundOperationRequest(v2);
    }

    private static com.google.android.gms.drive.realtime.internal.EndCompoundOperationRequest[] bM(int p0)
    {
      return new com.google.android.gms.drive.realtime.internal.EndCompoundOperationRequest[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      int v4;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      while ( p0.dataPosition() < v2 )
      {
        v4 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        if ( com.google.android.gms.common.internal.safeparcel.a.ar(v4) == 1 )
          v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v4);
        else
          com.google.android.gms.common.internal.safeparcel.a.b(p0, v4);
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.drive.realtime.internal.EndCompoundOperationRequest(v3);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.realtime.internal.EndCompoundOperationRequest[p0];
    }

}
