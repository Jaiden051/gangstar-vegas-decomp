// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadEventResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadEventResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.event.Events$LoadEventsResult {
    // Fields
    private final com.google.android.gms.games.event.EventBuffer c;

    // Methods
    GamesClientImpl$LoadEventResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.c = new com.google.android.gms.games.event.EventBuffer(p0);
    }

    public final com.google.android.gms.games.event.EventBuffer b()
    {
      return this.c;
    }

}
