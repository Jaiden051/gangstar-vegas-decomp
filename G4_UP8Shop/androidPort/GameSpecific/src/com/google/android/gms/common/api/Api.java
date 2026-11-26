// Decompiled from classes.dex (SourceFile: Api.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

import java.util.Arrays;
public final class Api<O> {
    // Fields
    private final com.google.android.gms.common.api.Api$b a;
    private final com.google.android.gms.common.api.Api$c b;
    private final java.util.ArrayList c;

    // Methods
    public <C extends com.google.android.gms.common.api.Api$a> Api(
            com.google.android.gms.common.api.Api$b<C, O> p0,
            com.google.android.gms.common.api.Api$c<C> p1,
            com.google.android.gms.common.api.Scope[] p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = new java.util.ArrayList(Arrays.asList(p2));
    }

    public final com.google.android.gms.common.api.Api$b<?, O> a()
    {
      return this.a;
    }

    public final java.util.List<com.google.android.gms.common.api.Scope> b()
    {
      return this.c;
    }

    public final com.google.android.gms.common.api.Api$c<?> c()
    {
      return this.b;
    }

}
