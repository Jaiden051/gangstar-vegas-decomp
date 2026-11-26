// Decompiled from classes.dex (SourceFile: SnapshotMetadataChangeCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.snapshot;

import android.net.Uri;
public class SnapshotMetadataChangeCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public SnapshotMetadataChangeCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.games.snapshot.SnapshotMetadataChange p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.e(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, (android.os.Parcelable)p0.d(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.games.snapshot.SnapshotMetadataChange _typed_createFromParcel(
            android.os.Parcel p0)
    {
      android.net.Uri v1;
      int v2;
      int v3;
      com.google.android.gms.common.data.a v4;
      Long v5;
      String v6;
      int v7;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      while ( p0.dataPosition() < v2 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v7);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.j(p0, v7);
            break;
          case 4:
            v1 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, Uri.CREATOR);
            break;
          case 5:
            v4 = (com.google.android.gms.common.data.a)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, com.google.android.gms.common.data.a.CREATOR);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.games.snapshot.SnapshotMetadataChange(v3, v6, v5, v4, v1);
    }

    private static com.google.android.gms.games.snapshot.SnapshotMetadataChange[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.games.snapshot.SnapshotMetadataChange[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.snapshot.SnapshotMetadataChange[p0];
    }

}
