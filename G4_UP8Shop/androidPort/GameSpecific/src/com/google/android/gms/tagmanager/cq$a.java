// Decompiled from classes.dex (SourceFile: cq$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.util.Collections;
public class cq$a {
    // Fields
    private final java.util.Map a;
    private final com.google.android.gms.internal.d$a b;

    // Methods
    private cq$a(java.util.Map<String, com.google.android.gms.internal.d$a> p0, com.google.android.gms.internal.d$a p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    /* synthetic */ cq$a(java.util.Map p0, com.google.android.gms.internal.d$a p1, int p2)
    {
      this(p0, p1);
    }

    public static com.google.android.gms.tagmanager.cq$b mi()
    {
      return new com.google.android.gms.tagmanager.cq$b(0);
    }

    public final java.util.Map<String, com.google.android.gms.internal.d$a> a()
    {
      return Collections.unmodifiableMap(this.a);
    }

    public final void a(String p0, com.google.android.gms.internal.d$a p1)
    {
      this.a.put(p0, p1);
    }

    public final com.google.android.gms.internal.d$a b()
    {
      return this.b;
    }

    public String toString()
    {
      return "Properties: " + Collections.unmodifiableMap(this.a) + " pushAfterEvaluate: " + this.b;
    }

}
