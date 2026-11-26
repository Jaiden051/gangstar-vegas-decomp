// Decompiled from classes.dex (SourceFile: QuestsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.games.Games;
public final class QuestsImpl implements com.google.android.gms.games.quest.Quests {
    // Methods
    public QuestsImpl()
    {
      super();
    }

    public final android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0, String p1)
    {
      return Games.c(p0).d(p1);
    }

    public final android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0, int[] p1)
    {
      return Games.c(p0).a(p1);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.quest.Quests$ClaimMilestoneResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            String p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.QuestsImpl$2(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.quest.Quests$LoadQuestsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            boolean p1,
            String[] p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.QuestsImpl$4(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.quest.Quests$LoadQuestsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int[] p1,
            int p2,
            boolean p3)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.QuestsImpl$3(this, p1, p2, p3));
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      Games.c(p0).q();
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.quest.QuestUpdateListener p1)
    {
      Games.c(p0).a(p1);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.quest.Quests$AcceptQuestResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.QuestsImpl$1(this, p1));
    }

}
