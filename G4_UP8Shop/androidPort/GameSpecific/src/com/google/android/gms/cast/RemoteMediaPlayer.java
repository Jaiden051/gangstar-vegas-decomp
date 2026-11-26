// Decompiled from classes.dex (SourceFile: RemoteMediaPlayer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

public class RemoteMediaPlayer implements com.google.android.gms.cast.Cast$MessageReceivedCallback {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    private final java.lang.Object i;
    private final com.google.android.gms.internal.gp j;
    private final com.google.android.gms.cast.RemoteMediaPlayer$a k;
    private com.google.android.gms.cast.RemoteMediaPlayer$OnMetadataUpdatedListener l;
    private com.google.android.gms.cast.RemoteMediaPlayer$OnStatusUpdatedListener m;

    // Methods
    public RemoteMediaPlayer()
    {
      super();
      this.i = new Object();
      this.k = new com.google.android.gms.cast.RemoteMediaPlayer$a(this);
      this.j = new com.google.android.gms.cast.RemoteMediaPlayer$1(this);
      this.j.a((com.google.android.gms.internal.gq)this.k);
    }

    private long a()
    {
      Object i;
      i = this.i;
      synchronized ( i )
      {
        return this.j.f();
      }
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$5(this, p0, null));
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            double p1)
 throws android.os.RemoteException {
      if ( Double.isInfinite(p1) || Double.isNaN(p1) )
        throw new IllegalArgumentException("Volume cannot be " + p1);
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$9(this, p0, p1, null));
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            double p1,
            org.json.JSONObject p3)
 throws android.os.RemoteException {
      if ( Double.isInfinite(p1) || Double.isNaN(p1) )
        throw new IllegalArgumentException("Volume cannot be " + p1);
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$9(this, p0, p1, null));
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            long p1)
 throws android.os.RemoteException {
      return this.a(p0, p1, 0, null);
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            long p1,
            int p3)
 throws android.os.RemoteException {
      return this.a(p0, p1, p3, null);
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            long p1,
            int p3,
            org.json.JSONObject p4)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$8(this, p0, p1, p3, null));
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.cast.MediaInfo p1)
 throws android.os.RemoteException {
      return this.a(p0, p1, true, 0, null);
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.cast.MediaInfo p1,
            boolean p2)
 throws android.os.RemoteException {
      return this.a(p0, p1, p2, 0, null);
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.cast.MediaInfo p1,
            boolean p2,
            long p3)
 throws android.os.RemoteException {
      return this.a(p0, p1, p2, p3, null);
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.cast.MediaInfo p1,
            boolean p2,
            long p3,
            org.json.JSONObject p5)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$4(this, p0, p1, p2, p3, null));
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.cast.TextTrackStyle p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$3(this, p0, p1));
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            org.json.JSONObject p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$5(this, p0, null));
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            boolean p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$10(this, p0, p1, null));
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            boolean p1,
            org.json.JSONObject p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$10(this, p0, p1, null));
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            long[] p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$2(this, p0, p1));
    }

    private void a(com.google.android.gms.cast.RemoteMediaPlayer$OnMetadataUpdatedListener p0)
    {
      this.l = p0;
    }

    private void a(com.google.android.gms.cast.RemoteMediaPlayer$OnStatusUpdatedListener p0)
    {
      this.m = p0;
    }

    /* synthetic */ static void a(com.google.android.gms.cast.RemoteMediaPlayer p0)
    {
      if ( p0.m != null )
        p0.m.a();
    }

    private long b()
    {
      Object i;
      i = this.i;
      synchronized ( i )
      {
        return this.j.g();
      }
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$6(this, p0, null));
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            org.json.JSONObject p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$6(this, p0, null));
    }

    /* synthetic */ static void b(com.google.android.gms.cast.RemoteMediaPlayer p0)
    {
      if ( p0.l != null )
        p0.l.a();
    }

    private com.google.android.gms.cast.MediaStatus c()
    {
      Object i;
      i = this.i;
      synchronized ( i )
      {
        return this.j.h();
      }
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> c(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$7(this, p0, null));
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> c(
            com.google.android.gms.common.api.GoogleApiClient p0,
            org.json.JSONObject p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$7(this, p0, null));
    }

    /* synthetic */ static Object c(com.google.android.gms.cast.RemoteMediaPlayer p0)
    {
      return p0.i;
    }

    private com.google.android.gms.cast.MediaInfo d()
    {
      Object i;
      i = this.i;
      synchronized ( i )
      {
        return this.j.i();
      }
    }

    /* synthetic */ static com.google.android.gms.cast.RemoteMediaPlayer$a d(
            com.google.android.gms.cast.RemoteMediaPlayer p0)
    {
      return p0.k;
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.cast.RemoteMediaPlayer$MediaChannelResult> d(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.cast.RemoteMediaPlayer$11(this, p0));
    }

    /* synthetic */ static com.google.android.gms.internal.gp e(
            com.google.android.gms.cast.RemoteMediaPlayer p0)
    {
      return p0.j;
    }

    private void e()
    {
      if ( this.m != null )
        this.m.a();
    }

    private void f()
    {
      if ( this.l != null )
        this.l.a();
    }

    private String g()
    {
      return this.j.c();
    }

    public final void a(String p0)
 throws android.os.RemoteException {
      this.j.a(p0);
    }

}
