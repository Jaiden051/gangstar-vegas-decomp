// Decompiled from classes.dex (SourceFile: gi$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class gi$a implements com.google.android.gms.cast.Cast$ApplicationConnectionResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final com.google.android.gms.cast.ApplicationMetadata b;
    private final java.lang.String c;
    private final java.lang.String d;
    private final boolean e;

    // Methods
    public gi$a(com.google.android.gms.common.api.Status p0)
    {
      this(p0, null, null, null, false);
    }

    public gi$a(
            com.google.android.gms.common.api.Status p0,
            com.google.android.gms.cast.ApplicationMetadata p1,
            String p2,
            String p3,
            boolean p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.cast.ApplicationMetadata b()
    {
      return this.b;
    }

    public final String c()
    {
      return this.c;
    }

    public final String d()
    {
      return this.d;
    }

    public final boolean e()
    {
      return this.e;
    }

}
