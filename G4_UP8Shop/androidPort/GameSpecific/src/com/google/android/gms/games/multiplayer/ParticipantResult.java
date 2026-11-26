// Decompiled from classes.dex (SourceFile: ParticipantResult.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

import com.google.android.gms.games.internal.constants.MatchResult;
import com.google.android.gms.internal.hn;
public final class ParticipantResult implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.games.multiplayer.ParticipantResultCreator CREATOR;
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    private final int i;
    private final java.lang.String j;
    private final int k;
    private final int l;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.multiplayer.ParticipantResultCreator();
    }

    public ParticipantResult(int p0, String p1, int p2, int p3)
    {
      super();
      this.i = p0;
      this.j = (String)hn.f(p1);
      hn.A(MatchResult.isValid(p2));
      this.k = p2;
      this.l = p3;
    }

    public ParticipantResult(String p0, int p1, int p2)
    {
      this(1, p0, p1, p2);
    }

    public final int a()
    {
      return this.i;
    }

    public final String b()
    {
      return this.j;
    }

    public final int c()
    {
      return this.k;
    }

    public final int d()
    {
      return this.l;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ParticipantResultCreator.a(this, p0, p1);
    }

}
