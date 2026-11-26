// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

import com.google.android.gms.common.data.DataHolder;
import com.google.android.gms.internal.kt;
import java.util.Arrays;
public class e extends com.google.android.gms.internal.hc {
    // Fields
    private com.google.android.gms.plus.model.people.Person a;
    private final com.google.android.gms.plus.internal.h b;

    // Methods
    public e(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p2,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p3,
            com.google.android.gms.plus.internal.h p4)
    {
      super(p0, p1, p2, p3, p4.c());
      this.b = p4;
    }

    public e(
            android.content.Context p0,
            com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p1,
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p2,
            com.google.android.gms.plus.internal.h p3)
    {
      this(p0, p0.getMainLooper(), (com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)new com.google.android.gms.internal.hc$c(p1), (com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener)new com.google.android.gms.internal.hc$g(p2), p3);
    }

    private static com.google.android.gms.plus.internal.d bn(android.os.IBinder p0)
    {
      return d$a.bm(p0);
    }

    /* synthetic */ protected final android.os.IInterface a(android.os.IBinder p0)
    {
      return (android.os.IInterface)d$a.bm(p0);
    }

    public final com.google.android.gms.internal.hh a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.plus.People$LoadPeopleResult> p0,
            int p1,
            String p2)
 throws android.os.RemoteException {
      com.google.android.gms.plus.internal.b v4;
      this.G();
      v4 = new com.google.android.gms.plus.internal.e$e(this, p0);
      try
      {
        return ((com.google.android.gms.plus.internal.d)this.H()).a(v4, 1, p1, -1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        v4.a(DataHolder.af(8), null);
        return null;
      }
    }

    public final com.google.android.gms.internal.hh a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.plus.People$LoadPeopleResult> p0,
            String p1)
 throws android.os.RemoteException {
      return this.a(p0, 0, p1);
    }

    protected final void a(int p0, android.os.IBinder p1, android.os.Bundle p2)
 throws android.os.RemoteException {
      if ( p0 == 0 && p2 != null && p2.containsKey("loaded_person") )
        this.a = (com.google.android.gms.plus.model.people.Person)kt.i(p2.getByteArray("loaded_person"));
      super.a(p0, p1, p2);
    }

    public final void a(com.google.android.gms.common.api.a$d<com.google.android.gms.plus.Moments$LoadMomentsResult> p0)
 throws android.os.RemoteException {
      this.a(p0, 20, null, null, null, "me");
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.plus.Moments$LoadMomentsResult> p0,
            int p1,
            String p2,
            android.net.Uri p3,
            String p4,
            String p5)
 throws android.os.RemoteException {
      com.google.android.gms.plus.internal.b v7;
      this.G();
      if ( p0 != null )
        v7 = new com.google.android.gms.plus.internal.e$b(this, p0);
      else
        v7 = null;
      try
      {
        ((com.google.android.gms.plus.internal.d)this.H()).a(v7, p1, p2, p3, p4, p5);
      }
      catch ( android.os.RemoteException e )
      {
        v7.a(DataHolder.af(8), null, null);
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0,
            com.google.android.gms.plus.model.moments.Moment p1)
 throws android.os.RemoteException {
      com.google.android.gms.plus.internal.b v3;
      this.G();
      if ( p0 != null )
        v3 = new com.google.android.gms.plus.internal.e$a(this, p0);
      else
        v3 = null;
      try
      {
        ((com.google.android.gms.plus.internal.d)this.H()).a(v3, com.google.android.gms.internal.Decomp_if.a((com.google.android.gms.internal.kq)p1));
      }
      catch ( android.os.RemoteException v4 )
      {
        if ( v3 == null )
          throw new IllegalStateException(v4);
        v3.a(new com.google.android.gms.common.api.Status(8, null, null));
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.plus.People$LoadPeopleResult> p0,
            java.util.Collection<String> p1)
 throws android.os.RemoteException {
      com.google.android.gms.plus.internal.b v3;
      this.G();
      v3 = new com.google.android.gms.plus.internal.e$e(this, p0);
      try
      {
        ((com.google.android.gms.plus.internal.d)this.H()).a(v3, new java.util.ArrayList(p1));
      }
      catch ( android.os.RemoteException e )
      {
        v3.a(DataHolder.af(8), null);
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.plus.People$LoadPeopleResult> p0,
            String[] p1)
 throws android.os.RemoteException {
      this.a(p0, Arrays.asList(p1));
    }

    protected final void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1)
 throws android.os.RemoteException {
      android.os.Bundle v3;
      v3 = this.b.k();
      v3.putStringArray("request_visible_actions", this.b.d());
      p0.a(p1, 5077000, this.b.g(), this.b.f(), this.F(), this.b.b(), v3);
    }

    public final void a(String p0)
    {
      this.G();
      try
      {
        ((com.google.android.gms.plus.internal.d)this.H()).a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new IllegalStateException(v2);
      }
    }

    public final void b(com.google.android.gms.common.api.a$d<com.google.android.gms.plus.People$LoadPeopleResult> p0)
 throws android.os.RemoteException {
      com.google.android.gms.plus.internal.b v2;
      this.G();
      v2 = new com.google.android.gms.plus.internal.e$e(this, p0);
      try
      {
        ((com.google.android.gms.plus.internal.d)this.H()).a(v2, 2, 1, -1, null);
      }
      catch ( android.os.RemoteException e )
      {
        v2.a(DataHolder.af(8), null);
      }
    }

    public final boolean b(String p0)
    {
      return Arrays.asList(this.F()).contains(p0);
    }

    public final void c(com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0)
 throws android.os.RemoteException {
      com.google.android.gms.plus.internal.b v2;
      this.G();
      this.i();
      v2 = new com.google.android.gms.plus.internal.e$g(this, p0);
      try
      {
        ((com.google.android.gms.plus.internal.d)this.H()).b(v2);
      }
      catch ( android.os.RemoteException e )
      {
        v2.a(8, (android.os.Bundle)null);
      }
    }

    protected final String e()
    {
      return "com.google.android.gms.plus.internal.IPlusService";
    }

    protected final String f()
    {
      return "com.google.android.gms.plus.service.START";
    }

    public final String g()
    {
      this.G();
      try
      {
        return ((com.google.android.gms.plus.internal.d)this.H()).a();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new IllegalStateException(v2);
      }
    }

    public final com.google.android.gms.plus.model.people.Person h()
    {
      this.G();
      return this.a;
    }

    public final void i()
    {
      this.G();
      try
      {
        this.a = null;
        ((com.google.android.gms.plus.internal.d)this.H()).b();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new IllegalStateException(v1);
      }
    }

}
