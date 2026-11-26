// Decompiled from classes.dex (SourceFile: SnapshotMetadataEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.snapshot;

import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.il;
public final class SnapshotMetadataEntity implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.games.snapshot.SnapshotMetadata {
    // Fields
    public static final com.google.android.gms.games.snapshot.SnapshotMetadataEntityCreator CREATOR;
    private final int b;
    private final com.google.android.gms.games.GameEntity c;
    private final com.google.android.gms.games.PlayerEntity d;
    private final java.lang.String e;
    private final android.net.Uri f;
    private final java.lang.String g;
    private final java.lang.String h;
    private final java.lang.String i;
    private final long j;
    private final long k;
    private final float l;
    private final java.lang.String m;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.snapshot.SnapshotMetadataEntityCreator();
    }

    SnapshotMetadataEntity(
            int p0,
            com.google.android.gms.games.GameEntity p1,
            com.google.android.gms.games.PlayerEntity p2,
            String p3,
            android.net.Uri p4,
            String p5,
            String p6,
            String p7,
            long p8,
            long p10,
            float p12,
            String p13)
    {
      super();
      this.b = p0;
      this.c = p1;
      this.d = p2;
      this.e = p3;
      this.f = p4;
      this.g = p5;
      this.l = p12;
      this.h = p6;
      this.i = p7;
      this.j = p8;
      this.k = p10;
      this.m = p13;
    }

    public SnapshotMetadataEntity(com.google.android.gms.games.snapshot.SnapshotMetadata p0)
    {
      super();
      this.b = 3;
      this.c = new com.google.android.gms.games.GameEntity(p0.a());
      this.d = new com.google.android.gms.games.PlayerEntity(p0.b());
      this.e = p0.c();
      this.f = p0.d();
      this.g = p0.e();
      this.l = p0.f();
      this.h = p0.j();
      this.i = p0.k();
      this.j = p0.l();
      this.k = p0.m();
      this.m = p0.y_();
    }

    static int a(com.google.android.gms.games.snapshot.SnapshotMetadata p0)
    {
      Object[] v1;
      v1 = new Object[10];
      v1[0] = p0.a();
      v1[1] = p0.b();
      v1[2] = p0.c();
      v1[3] = p0.d();
      v1[4] = Float.valueOf(p0.f());
      v1[5] = p0.j();
      v1[6] = p0.k();
      v1[7] = Long.valueOf(p0.l());
      v1[8] = Long.valueOf(p0.m());
      v1[9] = p0.y_();
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.snapshot.SnapshotMetadata p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.snapshot.SnapshotMetadata v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.snapshot.SnapshotMetadata )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.snapshot.SnapshotMetadata)p1;
          if ( hl.equal(v4.a(), p0.a())
            && hl.equal(v4.b(), p0.b())
            && hl.equal(v4.c(), p0.c())
            && hl.equal(v4.d(), p0.d())
            && hl.equal(Float.valueOf(v4.f()), Float.valueOf(p0.f()))
            && hl.equal(v4.j(), p0.j())
            && hl.equal(v4.k(), p0.k())
            && hl.equal(Long.valueOf(v4.l()), Long.valueOf(p0.l()))
            && hl.equal(Long.valueOf(v4.m()), Long.valueOf(p0.m())) )
          {
            return hl.equal(v4.y_(), p0.y_());
          }
        }
      }
      return v2;
    }

    static String b(com.google.android.gms.games.snapshot.SnapshotMetadata p0)
    {
      return hl.e(p0).a("Game", p0.a()).a("Owner", p0.b()).a("SnapshotId", p0.c()).a("CoverImageUri", p0.d()).a("CoverImageUrl", p0.e()).a("CoverImageAspectRatio", Float.valueOf(p0.f())).a("Description", p0.k()).a("LastModifiedTimestamp", Long.valueOf(p0.l())).a("PlayedTime", Long.valueOf(p0.m())).a("UniqueName", p0.y_()).toString();
    }

    private com.google.android.gms.games.snapshot.SnapshotMetadata o()
    {
      return (com.google.android.gms.games.snapshot.SnapshotMetadata)this;
    }

    public final com.google.android.gms.games.Game a()
    {
      return (com.google.android.gms.games.Game)this.c;
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      il.b(this.i, p0);
    }

    public final com.google.android.gms.games.Player b()
    {
      return (com.google.android.gms.games.Player)this.d;
    }

    public final String c()
    {
      return this.e;
    }

    public final android.net.Uri d()
    {
      return this.f;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.g;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.snapshot.SnapshotMetadata)this, p0);
    }

    public final float f()
    {
      return this.l;
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.snapshot.SnapshotMetadata)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final String j()
    {
      return this.h;
    }

    public final String k()
    {
      return this.i;
    }

    public final long l()
    {
      return this.j;
    }

    public final long m()
    {
      return this.k;
    }

    public final int n()
    {
      return this.b;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.snapshot.SnapshotMetadata)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      SnapshotMetadataEntityCreator.a(this, p0, p1);
    }

    public final String y_()
    {
      return this.m;
    }

}
