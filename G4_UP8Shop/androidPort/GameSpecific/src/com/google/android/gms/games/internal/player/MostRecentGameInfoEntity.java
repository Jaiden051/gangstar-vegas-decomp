// Decompiled from classes.dex (SourceFile: MostRecentGameInfoEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.player;

import com.google.android.gms.internal.hl;
public final class MostRecentGameInfoEntity implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.games.internal.player.MostRecentGameInfo {
    // Fields
    public static final com.google.android.gms.games.internal.player.MostRecentGameInfoEntityCreator CREATOR;
    private final int a;
    private final java.lang.String b;
    private final java.lang.String c;
    private final long d;
    private final android.net.Uri e;
    private final android.net.Uri f;
    private final android.net.Uri g;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.internal.player.MostRecentGameInfoEntityCreator();
    }

    MostRecentGameInfoEntity(
            int p0,
            String p1,
            String p2,
            long p3,
            android.net.Uri p5,
            android.net.Uri p6,
            android.net.Uri p7)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p5;
      this.f = p6;
      this.g = p7;
    }

    public MostRecentGameInfoEntity(com.google.android.gms.games.internal.player.MostRecentGameInfo p0)
    {
      super();
      this.a = 2;
      this.b = p0.a();
      this.c = p0.b();
      this.d = p0.c();
      this.e = p0.d();
      this.f = p0.e();
      this.g = p0.f();
    }

    static int a(com.google.android.gms.games.internal.player.MostRecentGameInfo p0)
    {
      Object[] v1;
      v1 = new Object[6];
      v1[0] = p0.a();
      v1[1] = p0.b();
      v1[2] = Long.valueOf(p0.c());
      v1[3] = p0.d();
      v1[4] = p0.e();
      v1[5] = p0.f();
      return hl.hashCode(v1);
    }

    static boolean a(
            com.google.android.gms.games.internal.player.MostRecentGameInfo p0,
            Object p1)
    {
      boolean v2;
      com.google.android.gms.games.internal.player.MostRecentGameInfo v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.internal.player.MostRecentGameInfo )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.internal.player.MostRecentGameInfo)p1;
          if ( hl.equal(v4.a(), p0.a())
            && hl.equal(v4.b(), p0.b())
            && hl.equal(Long.valueOf(v4.c()), Long.valueOf(p0.c()))
            && hl.equal(v4.d(), p0.d())
            && hl.equal(v4.e(), p0.e()) )
          {
            return hl.equal(v4.f(), p0.f());
          }
        }
      }
      return v2;
    }

    static String b(com.google.android.gms.games.internal.player.MostRecentGameInfo p0)
    {
      return hl.e(p0).a("GameId", p0.a()).a("GameName", p0.b()).a("ActivityTimestampMillis", Long.valueOf(p0.c())).a("GameIconUri", p0.d()).a("GameHiResUri", p0.e()).a("GameFeaturedUri", p0.f()).toString();
    }

    private com.google.android.gms.games.internal.player.MostRecentGameInfo j()
    {
      return (com.google.android.gms.games.internal.player.MostRecentGameInfo)this;
    }

    public final String a()
    {
      return this.b;
    }

    public final String b()
    {
      return this.c;
    }

    public final long c()
    {
      return this.d;
    }

    public final android.net.Uri d()
    {
      return this.e;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final android.net.Uri e()
    {
      return this.f;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.internal.player.MostRecentGameInfo)this, p0);
    }

    public final android.net.Uri f()
    {
      return this.g;
    }

    /* synthetic */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.internal.player.MostRecentGameInfo)this);
    }

    public final int i()
    {
      return this.a;
    }

    public final boolean i_()
    {
      return true;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.internal.player.MostRecentGameInfo)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      MostRecentGameInfoEntityCreator.a(this, p0, p1);
    }

}
