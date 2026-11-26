// Decompiled from classes.dex (SourceFile: GameBadgeEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.game;

import com.google.android.gms.games.internal.GamesDowngradeableSafeParcel;
import com.google.android.gms.internal.hb;
import com.google.android.gms.internal.hl;
public final class GameBadgeEntity extends com.google.android.gms.games.internal.GamesDowngradeableSafeParcel implements com.google.android.gms.games.internal.game.GameBadge {
    // Fields
    public static final com.google.android.gms.games.internal.game.GameBadgeEntityCreator CREATOR;
    private final int a;
    private int b;
    private java.lang.String c;
    private java.lang.String d;
    private android.net.Uri e;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.internal.game.GameBadgeEntity$GameBadgeEntityCreatorCompat();
    }

    GameBadgeEntity(int p0, int p1, String p2, String p3, android.net.Uri p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
    }

    public GameBadgeEntity(com.google.android.gms.games.internal.game.GameBadge p0)
    {
      super();
      this.a = 1;
      this.b = p0.a();
      this.c = p0.b();
      this.d = p0.c();
      this.e = p0.d();
    }

    static int a(com.google.android.gms.games.internal.game.GameBadge p0)
    {
      Object[] v1;
      v1 = new Object[4];
      v1[0] = Integer.valueOf(p0.a());
      v1[1] = p0.b();
      v1[2] = p0.c();
      v1[3] = p0.d();
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.internal.game.GameBadge p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.internal.game.GameBadge v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.internal.game.GameBadge )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.internal.game.GameBadge)p1;
          if ( hl.equal(Integer.valueOf(v4.a()), p0.b()) )
            return hl.equal(v4.c(), p0.d());
        }
      }
      return v2;
    }

    /* synthetic */ static boolean aQ(String p0)
    {
      return hb.aA(p0);
    }

    static String b(com.google.android.gms.games.internal.game.GameBadge p0)
    {
      return hl.e(p0).a("Type", Integer.valueOf(p0.a())).a("Title", p0.b()).a("Description", p0.c()).a("IconImageUri", p0.d()).toString();
    }

    /* synthetic */ static boolean b(Integer p0)
    {
      return GamesDowngradeableSafeParcel.c(p0);
    }

    private com.google.android.gms.games.internal.game.GameBadge f()
    {
      return (com.google.android.gms.games.internal.game.GameBadge)this;
    }

    /* synthetic */ static Integer gM()
    {
      return hb.fl();
    }

    public final int a()
    {
      return this.b;
    }

    public final String b()
    {
      return this.c;
    }

    public final String c()
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

    public final int e()
    {
      return this.a;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.internal.game.GameBadge)this, p0);
    }

    /* synthetic */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.internal.game.GameBadge)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.internal.game.GameBadge)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      String v3;
      if ( this.A() )
      {
        p0.writeInt(this.b);
        p0.writeString(this.c);
        p0.writeString(this.d);
        if ( this.e != null )
          v3 = this.e.toString();
        else
          v3 = null;
        p0.writeString(v3);
      }
      else
      {
        GameBadgeEntityCreator.a(this, p0, p1);
      }
    }

}
