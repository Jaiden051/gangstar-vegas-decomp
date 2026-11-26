// Decompiled from classes.dex (SourceFile: GamesClientImpl$InboxCountResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$InboxCountResultImpl implements com.google.android.gms.games.Notifications$InboxCountResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final android.os.Bundle b;

    // Methods
    GamesClientImpl$InboxCountResultImpl(com.google.android.gms.common.api.Status p0, android.os.Bundle p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

}
