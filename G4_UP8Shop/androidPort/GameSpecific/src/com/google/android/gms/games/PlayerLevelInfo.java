// Decompiled from classes.dex (SourceFile: PlayerLevelInfo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.hn;
public final class PlayerLevelInfo implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.games.PlayerLevelInfoCreator CREATOR;
    private final int a;
    private final long b;
    private final long c;
    private final com.google.android.gms.games.PlayerLevel d;
    private final com.google.android.gms.games.PlayerLevel e;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.PlayerLevelInfoCreator();
    }

    PlayerLevelInfo(
            int p0,
            long p1,
            long p3,
            com.google.android.gms.games.PlayerLevel p5,
            com.google.android.gms.games.PlayerLevel p6)
    {
      super();
      hn.A(p1 != -1);
      hn.f(p5);
      hn.f(p6);
      this.a = p0;
      this.b = p1;
      this.c = p3;
      this.d = p5;
      this.e = p6;
    }

    public PlayerLevelInfo(
            long p0,
            long p2,
            com.google.android.gms.games.PlayerLevel p4,
            com.google.android.gms.games.PlayerLevel p5)
    {
      this(1, p0, p2, p4, p5);
    }

    private boolean f()
    {
      return this.d.equals(this.e);
    }

    public final int a()
    {
      return this.a;
    }

    public final long b()
    {
      return this.b;
    }

    public final long c()
    {
      return this.c;
    }

    public final com.google.android.gms.games.PlayerLevel d()
    {
      return this.d;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final com.google.android.gms.games.PlayerLevel e()
    {
      return this.e;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.games.PlayerLevelInfo v4;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.games.PlayerLevelInfo )
      {
        if ( p0 == this )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.PlayerLevelInfo)p0;
          if ( hl.equal(Long.valueOf(this.b), Long.valueOf(v4.b))
            && hl.equal(Long.valueOf(this.c), Long.valueOf(v4.c))
            && hl.equal(this.d, v4.d) )
          {
            return hl.equal(this.e, v4.e);
          }
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[4];
      v1[0] = Long.valueOf(this.b);
      v1[1] = Long.valueOf(this.c);
      v1[2] = this.d;
      v1[3] = this.e;
      return hl.hashCode(v1);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      PlayerLevelInfoCreator.a(this, p0, p1);
    }

}
