// Decompiled from classes.dex (SourceFile: ScoreSubmissionData$Result.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.leaderboard;

import com.google.android.gms.internal.hl;
public final class ScoreSubmissionData$Result {
    // Fields
    public final long a;
    public final java.lang.String b;
    public final java.lang.String c;
    public final boolean d;

    // Methods
    public ScoreSubmissionData$Result(long p0, String p2, String p3, boolean p4)
    {
      super();
      this.a = p0;
      this.b = p2;
      this.c = p3;
      this.d = p4;
    }

    public final String toString()
    {
      return hl.e(this).a("RawScore", Long.valueOf(this.a)).a("FormattedScore", this.b).a("ScoreTag", this.c).a("NewBest", Boolean.valueOf(this.d)).toString();
    }

}
