// Decompiled from classes.dex (SourceFile: ScoreSubmissionData.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.leaderboard;

import com.google.android.gms.games.internal.constants.TimeSpan;
import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.hn;
public final class ScoreSubmissionData {
    // Fields
    private static final java.lang.String[] a;
    private java.lang.String b;
    private java.lang.String c;
    private int d;
    private java.util.HashMap e;

    // Methods
    static
    {
      String[] v0;
      v0 = new String[8];
      v0[0] = "leaderboardId";
      v0[1] = "playerId";
      v0[2] = "timeSpan";
      v0[3] = "hasResult";
      v0[4] = "rawScore";
      v0[5] = "formattedScore";
      v0[6] = "newBest";
      v0[7] = "scoreTag";
      a = v0;
    }

    public ScoreSubmissionData(com.google.android.gms.common.data.DataHolder p0)
    {
      super();
      int v2;
      int i;
      int v4; // RETVAL
      int v5;
      this.d = p0.e();
      this.e = new java.util.HashMap();
      v2 = p0.g();
      hn.C(v2 == 3);
      for ( i = 0; i < v2; ++i )
      {
        v4 = p0.a(i);
        v5 = v4;
        if ( i == 0 )
        {
          this.b = p0.c("leaderboardId", 0, v4);
          this.c = p0.c("playerId", 0, v5);
        }
        if ( p0.d("hasResult", i, v5) )
          this.e.put(Integer.valueOf(p0.b("timeSpan", i, v5)), new com.google.android.gms.games.leaderboard.ScoreSubmissionData$Result(p0.a("rawScore", i, v5), p0.c("formattedScore", i, v5), p0.c("scoreTag", i, v5), p0.d("newBest", i, v5)));
      }
    
    }

    private com.google.android.gms.games.leaderboard.ScoreSubmissionData$Result a(int p0)
    {
      return (com.google.android.gms.games.leaderboard.ScoreSubmissionData$Result)this.e.get(Integer.valueOf(p0));
    }

    private String a()
    {
      return this.b;
    }

    private void a(com.google.android.gms.games.leaderboard.ScoreSubmissionData$Result p0, int p1)
    {
      this.e.put(Integer.valueOf(p1), p0);
    }

    private String b()
    {
      return this.c;
    }

    public final String toString()
    {
      com.google.android.gms.internal.hl$a v1;
      int i;
      com.google.android.gms.games.leaderboard.ScoreSubmissionData$Result v3;
      String v4;
      v1 = hl.e(this).a("PlayerId", this.c).a("StatusCode", Integer.valueOf(this.d));
      for ( i = 0; i < 3; ++i )
      {
        v3 = (com.google.android.gms.games.leaderboard.ScoreSubmissionData$Result)this.e.get(Integer.valueOf(i));
        v1.a("TimesSpan", TimeSpan.cm(i));
        if ( v3 != null )
          v4 = v3.toString();
        else
          v4 = "null";
        v1.a("Result", v4);
      }
      return v1.toString();
    }

}
