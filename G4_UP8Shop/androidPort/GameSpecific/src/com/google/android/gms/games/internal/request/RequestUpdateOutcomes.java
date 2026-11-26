// Decompiled from classes.dex (SourceFile: RequestUpdateOutcomes.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.request;

import com.google.android.gms.internal.hn;
public final class RequestUpdateOutcomes {
    // Fields
    private static final java.lang.String[] a;
    private final int b;
    private final java.util.HashMap c;

    // Methods
    static
    {
      String[] v0;
      v0 = new String[2];
      v0[0] = "requestId";
      v0[1] = "outcome";
      a = v0;
    }

    private RequestUpdateOutcomes(int p0, java.util.HashMap<String, Integer> p1)
    {
      super();
      this.b = p0;
      this.c = p1;
    }

    /* synthetic */ RequestUpdateOutcomes(int p0, java.util.HashMap p1, int p2)
    {
      this(p0, p1);
    }

    public static com.google.android.gms.games.internal.request.RequestUpdateOutcomes U(
            com.google.android.gms.common.data.DataHolder p0)
    {
      com.google.android.gms.games.internal.request.RequestUpdateOutcomes$Builder v1;
      int v2;
      int i;
      int v4;
      v1 = new com.google.android.gms.games.internal.request.RequestUpdateOutcomes$Builder();
      v1.a(p0.e());
      v2 = p0.g();
      for ( i = 0; i < v2; ++i )
      {
        v4 = p0.a(i);
        v1.a(p0.c("requestId", i, v4), p0.b("outcome", i, v4));
      }
      return v1.a();
    }

    public final int a(String p0)
    {
      hn.b(this.c.containsKey(p0), "Request " + p0 + " was not part of the update operation!");
      return ((Integer)this.c.get(p0)).intValue();
    }

    public final java.util.Set<String> a()
    {
      return this.c.keySet();
    }

}
