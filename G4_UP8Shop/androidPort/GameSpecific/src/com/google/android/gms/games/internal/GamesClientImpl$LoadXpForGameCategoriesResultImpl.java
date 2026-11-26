// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadXpForGameCategoriesResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadXpForGameCategoriesResultImpl implements com.google.android.gms.games.Players$LoadXpForGameCategoriesResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final java.util.List b;
    private final android.os.Bundle c;

    // Methods
    GamesClientImpl$LoadXpForGameCategoriesResultImpl(com.google.android.gms.common.api.Status p0, android.os.Bundle p1)
    {
      super();
      this.a = p0;
      this.b = p1.getStringArrayList("game_category_list");
      this.c = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

}
