// Decompiled from classes.dex (SourceFile: Cast$CastApi$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

public final class Cast$CastApi$a implements com.google.android.gms.cast.Cast$CastApi {
    // Methods
    public Cast$CastApi$a()
    {
      super();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.Cast$ApplicationConnectionResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.Cast$CastApi$a$2(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.Cast$ApplicationConnectionResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            com.google.android.gms.cast.LaunchOptions p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.Cast$CastApi$a$3(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            String p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.Cast$CastApi$a$1(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.Cast$ApplicationConnectionResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            boolean p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.Cast$CastApi$a$3(this, p1, new com.google.android.gms.cast.LaunchOptions$Builder().a(p2).a()));
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0)
 throws java.io.IOException {
      try
      {
        ((com.google.android.gms.internal.gi)p0.a(Cast.d)).g();
      }
      catch ( android.os.RemoteException e )
      {
        throw new java.io.IOException("service error");
      }
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0, double p1)
 throws java.io.IOException {
      try
      {
        ((com.google.android.gms.internal.gi)p0.a(Cast.d)).a(p1);
      }
      catch ( android.os.RemoteException e )
      {
        throw new java.io.IOException("service error");
      }
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            com.google.android.gms.cast.Cast$MessageReceivedCallback p2)
 throws java.io.IOException {
      try
      {
        ((com.google.android.gms.internal.gi)p0.a(Cast.d)).a(p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        throw new java.io.IOException("service error");
      }
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0, boolean p1)
 throws java.io.IOException {
      try
      {
        ((com.google.android.gms.internal.gi)p0.a(Cast.d)).a(p1);
      }
      catch ( android.os.RemoteException e )
      {
        throw new java.io.IOException("service error");
      }
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.Cast$ApplicationConnectionResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.Cast$CastApi$a$6(this));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.Cast$ApplicationConnectionResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.Cast$CastApi$a$5(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.Cast$ApplicationConnectionResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            String p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.Cast$CastApi$a$4(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> c(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.Cast$CastApi$a$7(this));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> c(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.Cast$CastApi$a$9(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> d(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.Cast$CastApi$a$8(this));
    }

    public final void d(com.google.android.gms.common.api.GoogleApiClient p0, String p1)
 throws java.io.IOException {
      try
      {
        ((com.google.android.gms.internal.gi)p0.a(Cast.d)).a(p1);
      }
      catch ( android.os.RemoteException e )
      {
        throw new java.io.IOException("service error");
      }
    }

    public final double e(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return ((com.google.android.gms.internal.gi)p0.a(Cast.d)).h();
    }

    public final boolean f(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return ((com.google.android.gms.internal.gi)p0.a(Cast.d)).i();
    }

    public final com.google.android.gms.cast.ApplicationMetadata g(
            com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return ((com.google.android.gms.internal.gi)p0.a(Cast.d)).j();
    }

    public final String h(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return ((com.google.android.gms.internal.gi)p0.a(Cast.d)).k();
    }

}
