// Decompiled from classes.dex (SourceFile: TurnBasedMatchConfig.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.turnbased;

public final class TurnBasedMatchConfig {
    // Fields
    private final int a;
    private final java.lang.String[] b;
    private final android.os.Bundle c;
    private final int d;

    // Methods
    private TurnBasedMatchConfig(com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig$Builder p0)
    {
      super();
      this.a = p0.a;
      this.d = p0.d;
      this.c = p0.c;
      this.b = (String[])p0.b.toArray(new String[p0.b.size()]);
    }

    /* synthetic */ TurnBasedMatchConfig(
            com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig$Builder p0,
            int p1)
    {
      this(p0);
    }

    public static com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig$Builder builder()
    {
      return new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig$Builder(0);
    }

    public static android.os.Bundle createAutoMatchCriteria(int p0, int p1, long p2)
    {
      android.os.Bundle v3;
      v3 = new android.os.Bundle();
      v3.putInt("min_automatch_players", p0);
      v3.putInt("max_automatch_players", p1);
      v3.putLong("exclusive_bit_mask", p2);
      return v3;
    }

    public final int a()
    {
      return this.a;
    }

    public final int b()
    {
      return this.d;
    }

    public final String[] c()
    {
      return this.b;
    }

    public final android.os.Bundle d()
    {
      return this.c;
    }

}
