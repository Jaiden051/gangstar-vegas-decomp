// Decompiled from classes.dex (SourceFile: GoogleApiClient$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

import com.google.android.gms.internal.hn;
public final class GoogleApiClient$Builder {
    // Fields
    private java.lang.String a;
    private final java.util.Set b;
    private int c;
    private android.view.View d;
    private java.lang.String e;
    private final android.content.Context f;
    private final java.util.Map g;
    private android.support.v4.app.FragmentActivity h;
    private com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener i;
    private android.os.Looper j;
    private final java.util.Set k;
    private final java.util.Set l;

    // Methods
    private GoogleApiClient$Builder(android.content.Context p0)
    {
      super();
      this.b = new java.util.HashSet();
      this.g = new java.util.HashMap();
      this.k = new java.util.HashSet();
      this.l = new java.util.HashSet();
      this.f = p0;
      this.j = p0.getMainLooper();
      this.e = p0.getPackageName();
    }

    private GoogleApiClient$Builder(
            android.content.Context p0,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p1,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p2)
    {
      this(p0);
      hn.b(p1, "Must provide a connected listener");
      this.k.add(p1);
      hn.b(p2, "Must provide a connection failed listener");
      this.l.add(p2);
    }

    private com.google.android.gms.common.api.GoogleApiClient$Builder a()
    {
      this.a = "<<default account>>";
      return this;
    }

    private com.google.android.gms.common.api.GoogleApiClient$Builder a(int p0)
    {
      this.c = p0;
      return this;
    }

    private com.google.android.gms.common.api.GoogleApiClient$Builder a(android.os.Handler p0)
    {
      hn.b(p0, "Handler must not be null");
      this.j = p0.getLooper();
      return this;
    }

    private com.google.android.gms.common.api.GoogleApiClient$Builder a(
            android.support.v4.app.FragmentActivity p0,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p1)
    {
      this.h = (android.support.v4.app.FragmentActivity)hn.b(p0, "Null activity is not permitted.");
      this.i = p1;
      return this;
    }

    private com.google.android.gms.common.api.GoogleApiClient$Builder a(android.view.View p0)
    {
      this.d = p0;
      return this;
    }

    private com.google.android.gms.common.api.GoogleApiClient$Builder a(
            com.google.android.gms.common.api.Api<? extends com.google.android.gms.common.api.Api$ApiOptions$NotRequiredOptions> p0)
    {
      java.util.List v2;
      int v3;
      int i;
      this.g.put(p0, null);
      v2 = p0.b();
      v3 = v2.size();
      for ( i = 0; i < v3; ++i )
        this.b.add(((com.google.android.gms.common.api.Scope)v2.get(i)).a());
      return this;
    }

    private <O extends com.google.android.gms.common.api.Api$ApiOptions$HasOptions> com.google.android.gms.common.api.GoogleApiClient$Builder a(
            com.google.android.gms.common.api.Api<O> p0,
            O p1)
    {
      java.util.List v3;
      int v4;
      int i;
      hn.b(p1, "Null options are not permitted for this Api");
      this.g.put(p0, p1);
      v3 = p0.b();
      v4 = v3.size();
      for ( i = 0; i < v4; ++i )
        this.b.add(((com.google.android.gms.common.api.Scope)v3.get(i)).a());
      return this;
    }

    private com.google.android.gms.common.api.GoogleApiClient$Builder a(
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p0)
    {
      this.k.add(p0);
      return this;
    }

    private com.google.android.gms.common.api.GoogleApiClient$Builder a(
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p0)
    {
      this.l.add(p0);
      return this;
    }

    private com.google.android.gms.common.api.GoogleApiClient$Builder a(
            com.google.android.gms.common.api.Scope p0)
    {
      this.b.add(p0.a());
      return this;
    }

    private com.google.android.gms.common.api.GoogleApiClient$Builder a(String p0)
    {
      this.a = p0;
      return this;
    }

    private com.google.android.gms.internal.gz b()
    {
      return new com.google.android.gms.internal.gz(this.a, this.b, this.c, this.d, this.e);
    }

    private com.google.android.gms.common.api.GoogleApiClient c()
    {
      com.google.android.gms.common.api.d v1 = null;
      android.support.v4.app.FragmentManager v2 = null;
      java.util.Iterator v3 = null;
      android.support.v4.app.Fragment v4 = null;
      com.google.android.gms.common.api.d v5 = null;
      com.google.android.gms.common.api.GoogleApiClient v6 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = null;
            hn.b(!this.g.isEmpty(), "must call addApi() to add at least one API");
            if ( !(this.h != null) ) { _pc = 2; continue _sm; }
            v2 = this.h.c();
            if ( v2.f() != null )
            {
            v3 = v2.f().iterator();
            while ( v3.hasNext() )
            {
            v4 = (android.support.v4.app.Fragment)v3.next();
            if ( v4 instanceof com.google.android.gms.common.api.d
            && v4.isAdded()
            && !((com.google.android.gms.common.api.d)v4).a() )
            {
            v5 = (com.google.android.gms.common.api.d)v4;
            { _pc = 1; continue _sm; }
            }
            }
            }
            v5 = new com.google.android.gms.common.api.d();
            v2.a().a(v5, null).h();
            _pc = 1;
            continue _sm;
          case 1:
            v1 = v5;
            _pc = 2;
            continue _sm;
          case 2:
            v6 = (com.google.android.gms.common.api.GoogleApiClient)new com.google.android.gms.common.api.c(this.f, this.j, new com.google.android.gms.internal.gz(this.a, this.b, this.c, this.d, this.e), this.g, v1, this.k, this.l);
            if ( v1 != null )
            v1.a(v6, this.i);
            return v6;
        }
      }
}

    private com.google.android.gms.common.api.d d()
    {
      android.support.v4.app.FragmentManager v1;
      java.util.Iterator v2;
      android.support.v4.app.Fragment v3;
      com.google.android.gms.common.api.d v4;
      v1 = this.h.c();
      if ( v1.f() != null )
      {
        v2 = v1.f().iterator();
        while ( v2.hasNext() )
        {
          v3 = (android.support.v4.app.Fragment)v2.next();
          if ( v3 instanceof com.google.android.gms.common.api.d
            && v3.isAdded()
            && !((com.google.android.gms.common.api.d)v3).a() )
          {
            return (com.google.android.gms.common.api.d)v3;
          }
        }
      }
      v4 = new com.google.android.gms.common.api.d();
      v1.a().a(v4, null).h();
      return v4;
    }

}
