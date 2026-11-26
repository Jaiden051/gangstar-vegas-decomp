// Decompiled from classes.dex (SourceFile: au.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
import java.util.Collections;
public final class au {
    // Fields
    public static final java.lang.String a;
    private final java.util.Date b;
    private final java.lang.String c;
    private final int d;
    private final java.util.Set e;
    private final android.location.Location f;
    private final boolean g;
    private final android.os.Bundle h;
    private final java.util.Map i;
    private final java.lang.String j;
    private final com.google.android.gms.ads.search.SearchAdRequest k;
    private final int l;
    private final java.util.Set m;

    // Methods
    static
    {
      a = eu.y("emulator");
    }

    public au(com.google.android.gms.internal.au$a p0)
    {
      this(p0, null);
    }

    public au(com.google.android.gms.internal.au$a p0, com.google.android.gms.ads.search.SearchAdRequest p1)
    {
      super();
      this.b = au$a.a(p0);
      this.c = au$a.b(p0);
      this.d = au$a.c(p0);
      this.e = Collections.unmodifiableSet(au$a.d(p0));
      this.f = au$a.e(p0);
      this.g = au$a.f(p0);
      this.h = au$a.g(p0);
      this.i = Collections.unmodifiableMap(au$a.h(p0));
      this.j = au$a.i(p0);
      this.k = p1;
      this.l = au$a.j(p0);
      this.m = Collections.unmodifiableSet(au$a.k(p0));
    }

    public final <T extends com.google.android.gms.ads.mediation.NetworkExtras> T a(Class<T> p0)
    {
      return (T)this.i.get(p0);
    }

    public final java.util.Date a()
    {
      return this.b;
    }

    public final boolean a(android.content.Context p0)
    {
      return this.m.contains(eu.o(p0));
    }

    public final android.os.Bundle b(Class<? extends com.google.android.gms.ads.mediation.MediationAdapter> p0)
    {
      return this.h.getBundle(p0.getName());
    }

    public final String b()
    {
      return this.c;
    }

    public final int c()
    {
      return this.d;
    }

    public final android.os.Bundle c(Class<? extends com.google.android.gms.ads.mediation.customevent.CustomEvent> p0)
    {
      android.os.Bundle Bundle;
      Bundle = this.h.getBundle("com.google.android.gms.ads.mediation.customevent.CustomEventAdapter");
      if ( Bundle != null )
        return Bundle.getBundle(p0.getClass().getName());
      else
        return null;
    }

    public final java.util.Set<String> d()
    {
      return this.e;
    }

    public final android.location.Location e()
    {
      return this.f;
    }

    public final boolean f()
    {
      return this.g;
    }

    public final String g()
    {
      return this.j;
    }

    public final com.google.android.gms.ads.search.SearchAdRequest h()
    {
      return this.k;
    }

    public final java.util.Map<Class<? extends com.google.android.gms.ads.mediation.NetworkExtras>, com.google.android.gms.ads.mediation.NetworkExtras> i()
    {
      return this.i;
    }

    public final android.os.Bundle j()
    {
      return this.h;
    }

    public final int k()
    {
      return this.l;
    }

}
