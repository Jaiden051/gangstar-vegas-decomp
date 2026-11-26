// Decompiled from classes.dex (SourceFile: SnapshotEntityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.snapshot;

import com.google.android.gms.drive.Contents;
public class SnapshotEntityCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public SnapshotEntityCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.games.snapshot.SnapshotEntity p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, (android.os.Parcelable)p0.a(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.b(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.snapshot.SnapshotEntity _typed_createFromParcel(
            android.os.Parcel p0)
    {
      int v1;
      com.google.android.gms.games.snapshot.SnapshotMetadata v2;
      int v3;
      com.google.android.gms.drive.Contents v4;
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
            v2 = (com.google.android.gms.games.snapshot.SnapshotMetadata)(com.google.android.gms.games.snapshot.SnapshotMetadataEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v5, (android.os.Parcelable.Creator)SnapshotMetadataEntity.CREATOR);
            break;
          case 2:
            v4 = (com.google.android.gms.drive.Contents)com.google.android.gms.common.internal.safeparcel.a.a(p0, v5, Contents.CREATOR);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v5);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.games.snapshot.SnapshotEntity(v3, v2, v4);
    }

    private static com.google.android.gms.games.snapshot.SnapshotEntity[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.games.snapshot.SnapshotEntity[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      com.google.android.gms.games.snapshot.SnapshotMetadata v3;
      int v4;
      com.google.android.gms.drive.Contents v5;
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
            v3 = (com.google.android.gms.games.snapshot.SnapshotMetadata)(com.google.android.gms.games.snapshot.SnapshotMetadataEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v6, (android.os.Parcelable.Creator)SnapshotMetadataEntity.CREATOR);
            break;
          case 2:
            v5 = (com.google.android.gms.drive.Contents)com.google.android.gms.common.internal.safeparcel.a.a(p0, v6, Contents.CREATOR);
            break;
          case 1000:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.games.snapshot.SnapshotEntity(v4, v3, v5);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.snapshot.SnapshotEntity[p0];
    }

}
