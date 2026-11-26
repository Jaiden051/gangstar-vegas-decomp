// Decompiled from classes.dex (SourceFile: PlayerLevel.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.hn;
public final class PlayerLevel implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.games.PlayerLevelCreator CREATOR;
    private final int a;
    private final int b;
    private final long c;
    private final long d;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.PlayerLevelCreator();
    }

    PlayerLevel(int p0, int p1, long p2, long p4)
    {
      super();
      hn.a(p2 >= 0, "Min XP must be positive!");
      hn.a(p4 > p2, "Max XP must be more than min XP!");
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p4;
    }

    public PlayerLevel(int p0, long p1, long p3)
    {
      this(1, p0, p1, p3);
    }

    public final int a()
    {
      return this.a;
    }

    public final int b()
    {
      return this.b;
    }

    public final long c()
    {
      return this.c;
    }

    public final long d()
    {
      return this.d;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.games.PlayerLevel v4;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.games.PlayerLevel )
      {
        if ( this == p0 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.PlayerLevel)p0;
          if ( hl.equal(Integer.valueOf(v4.b), Integer.valueOf(this.b))
            && hl.equal(Long.valueOf(v4.c), Long.valueOf(this.c)) )
          {
            return hl.equal(Long.valueOf(v4.d), Long.valueOf(this.d));
          }
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[3];
      v1[0] = Integer.valueOf(this.b);
      v1[1] = Long.valueOf(this.c);
      v1[2] = Long.valueOf(this.d);
      return hl.hashCode(v1);
    }

    public final String toString()
    {
      return hl.e(this).a("LevelNumber", Integer.valueOf(this.b)).a("MinXp", Long.valueOf(this.c)).a("MaxXp", Long.valueOf(this.d)).toString();
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      PlayerLevelCreator.a(this, p0, p1);
    }

}
