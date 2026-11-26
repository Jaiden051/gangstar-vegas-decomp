// Decompiled from classes.dex (SourceFile: SnapshotMetadataEntityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.snapshot;

import android.net.Uri;
import com.google.android.gms.games.GameEntity;
import com.google.android.gms.games.PlayerEntity;
public class SnapshotMetadataEntityCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public SnapshotMetadataEntityCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.games.snapshot.SnapshotMetadataEntity p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, (android.os.Parcelable)p0.a(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.n());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.b(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.d(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.e(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.j(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.k(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.l());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.m());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.y_(), false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.snapshot.SnapshotMetadataEntity _typed_createFromParcel(
            android.os.Parcel p0)
    {
      int v1;
      int v2;
      com.google.android.gms.games.GameEntity v3;
      com.google.android.gms.games.PlayerEntity v4;
      String v5;
      android.net.Uri v6;
      String v7;
      String v8;
      String v9;
      long v10;
      long v11;
      float v12;
      String v13;
      int v14;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = 0;
      v11 = 0;
      v12 = 0.0f;
      v13 = null;
      while ( p0.dataPosition() < v1 )
      {
        v14 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v14) )
        {
          case 1:
            v3 = (com.google.android.gms.games.GameEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, GameEntity.CREATOR);
            break;
          case 2:
            v4 = (com.google.android.gms.games.PlayerEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, PlayerEntity.CREATOR);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 5:
            v6 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, Uri.CREATOR);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 7:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 8:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 9:
            v10 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v14);
            break;
          case 10:
            v11 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v14);
            break;
          case 11:
            v12 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v14);
            break;
          case 12:
            v13 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 1000:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v14);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v14);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.games.snapshot.SnapshotMetadataEntity(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13);
    }

    private static com.google.android.gms.games.snapshot.SnapshotMetadataEntity[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.games.snapshot.SnapshotMetadataEntity[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      com.google.android.gms.games.GameEntity v4;
      com.google.android.gms.games.PlayerEntity v5;
      String v6;
      android.net.Uri v7;
      String v8;
      String v9;
      String v10;
      long v11;
      long v12;
      float v13;
      String v14;
      int v15;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = 0;
      v12 = 0;
      v13 = 0.0f;
      v14 = null;
      while ( p0.dataPosition() < v2 )
      {
        v15 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v15) )
        {
          case 1:
            v4 = (com.google.android.gms.games.GameEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v15, GameEntity.CREATOR);
            break;
          case 2:
            v5 = (com.google.android.gms.games.PlayerEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v15, PlayerEntity.CREATOR);
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 5:
            v7 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v15, Uri.CREATOR);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 7:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 8:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 9:
            v11 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v15);
            break;
          case 10:
            v12 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v15);
            break;
          case 11:
            v13 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v15);
            break;
          case 12:
            v14 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v15);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v15);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.games.snapshot.SnapshotMetadataEntity(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.snapshot.SnapshotMetadataEntity[p0];
    }

}
