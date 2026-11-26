// Decompiled from classes.dex (SourceFile: RequestUpdateOutcomes$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.request;

import com.google.android.gms.games.internal.constants.RequestUpdateResultOutcome;
public final class RequestUpdateOutcomes$Builder {
    // Fields
    private java.util.HashMap a;
    private int b;

    // Methods
    public RequestUpdateOutcomes$Builder()
    {
      super();
      this.a = new java.util.HashMap();
      this.b = 0;
    }

    public final com.google.android.gms.games.internal.request.RequestUpdateOutcomes$Builder a(
            int p0)
    {
      this.b = p0;
      return this;
    }

    public final com.google.android.gms.games.internal.request.RequestUpdateOutcomes$Builder a(
            String p0,
            int p1)
    {
      if ( RequestUpdateResultOutcome.isValid(p1) )
        this.a.put(p0, Integer.valueOf(p1));
      return this;
    }

    public final com.google.android.gms.games.internal.request.RequestUpdateOutcomes a()
    {
      return new com.google.android.gms.games.internal.request.RequestUpdateOutcomes(this.b, this.a, 0);
    }

}
