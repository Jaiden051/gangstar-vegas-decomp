// Decompiled from classes.dex (SourceFile: TurnBasedMatchConfig$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.turnbased;

import com.google.android.gms.internal.hn;
public final class TurnBasedMatchConfig$Builder {
    // Fields
    int a;
    java.util.ArrayList b;
    android.os.Bundle c;
    int d;

    // Methods
    private TurnBasedMatchConfig$Builder()
    {
      super();
      this.a = -1;
      this.b = new java.util.ArrayList();
      this.c = null;
      this.d = 2;
    }

    /* synthetic */ TurnBasedMatchConfig$Builder(int p0)
    {
      this();
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig$Builder a(
            int p0)
    {
      boolean v2;
      v2 = p0 == -1 || p0 > 0;
      hn.b(v2, "Variant must be a positive integer or TurnBasedMatch.MATCH_VARIANT_ANY");
      this.a = p0;
      return this;
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig$Builder a(
            android.os.Bundle p0)
    {
      this.c = p0;
      return this;
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig$Builder a(
            String p0)
    {
      hn.f(p0);
      this.b.add(p0);
      return this;
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig$Builder a(
            java.util.ArrayList<String> p0)
    {
      hn.f(p0);
      this.b.addAll(p0);
      return this;
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig a()
    {
      return new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig(this, 0);
    }

}
