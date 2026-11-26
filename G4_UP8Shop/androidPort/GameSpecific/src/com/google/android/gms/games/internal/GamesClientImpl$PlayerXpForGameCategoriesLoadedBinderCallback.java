// Decompiled from classes.dex (SourceFile: GamesClientImpl$PlayerXpForGameCategoriesLoadedBinderCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import com.google.android.gms.internal.hn;
final class GamesClientImpl$PlayerXpForGameCategoriesLoadedBinderCallback extends com.google.android.gms.games.internal.AbstractGamesCallbacks {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.common.api.a$d b;

    // Methods
    GamesClientImpl$PlayerXpForGameCategoriesLoadedBinderCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.common.api.a$d p1)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.common.api.a$d)hn.b(p1, "Holder must not be null");
    
    }

    public final void d(int p0, android.os.Bundle p1)
 throws android.os.RemoteException {
      p1.setClassLoader(this.getClass().getClassLoader());
      this.b.a(new com.google.android.gms.games.internal.GamesClientImpl$LoadXpForGameCategoriesResultImpl(new com.google.android.gms.common.api.Status(p0), p1));
    }

}
