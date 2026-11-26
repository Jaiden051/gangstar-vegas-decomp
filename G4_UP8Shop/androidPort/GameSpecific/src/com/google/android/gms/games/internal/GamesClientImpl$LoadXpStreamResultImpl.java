// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadXpStreamResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadXpStreamResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.Players$LoadXpStreamResult {
    // Fields
    private final com.google.android.gms.games.internal.experience.ExperienceEventBuffer c;

    // Methods
    GamesClientImpl$LoadXpStreamResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.c = new com.google.android.gms.games.internal.experience.ExperienceEventBuffer(p0);
    }

}
