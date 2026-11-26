// Decompiled from classes.dex (SourceFile: GamesClientImpl$ClaimMilestoneResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$ClaimMilestoneResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.quest.Quests$ClaimMilestoneResult {
    // Fields
    private com.google.android.gms.games.quest.Milestone c;
    private com.google.android.gms.games.quest.Quest d;

    // Methods
    GamesClientImpl$ClaimMilestoneResultImpl(com.google.android.gms.common.data.DataHolder p0, String p1)
    {
      super(p0);
      Throwable _cv_1 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int v3 = 0;
      com.google.android.gms.games.quest.QuestBuffer v4 = null;
      java.util.List v5 = null;
      int v6 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              v3 = 0;
              v4 = new com.google.android.gms.games.quest.QuestBuffer(p0);
              _ehCatchPc = 2;
              if ( v4.b() <= 0 )
              {
              this.c = null;
              this.d = null;
              { _pc = 4; continue _sm; }
              }
              this.d = (com.google.android.gms.games.quest.Quest)new com.google.android.gms.games.quest.QuestEntity((com.google.android.gms.games.quest.Quest)v4.b(0));
              v5 = this.d.k();
              v6 = v5.size();
              while ( v3 < v6 )
              {
              if ( ((com.google.android.gms.games.quest.Milestone)v5.get(v3)).a().equals(p1) )
              {
              this.c = (com.google.android.gms.games.quest.Milestone)v5.get(v3);
              v4.c();
              return;
              }
              ++v3;
              }
              this.c = null;
              _pc = 1;
              continue _sm;
            case 1:
              v4.c();
              return;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v4.c();
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              _pc = 1;
              continue _sm;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    public final com.google.android.gms.games.quest.Milestone b()
    {
      return this.c;
    }

    public final com.google.android.gms.games.quest.Quest c()
    {
      return this.d;
    }

}
