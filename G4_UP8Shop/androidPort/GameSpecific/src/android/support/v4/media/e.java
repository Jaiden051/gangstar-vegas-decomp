// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.media;

import android.app.PendingIntent;
final class e implements android.media.RemoteControlClient.OnGetPlaybackPositionListener, android.media.RemoteControlClient.OnPlaybackPositionUpdateListener {
    // Fields
    final android.content.Context a;
    final android.media.AudioManager b;
    final android.view.View c;
    final android.support.v4.media.d d;
    final java.lang.String e;
    final android.content.IntentFilter f;
    final android.content.Intent g;
    final android.view.ViewTreeObserver.OnWindowAttachListener h;
    final android.view.ViewTreeObserver.OnWindowFocusChangeListener i;
    final android.content.BroadcastReceiver j;
    android.media.AudioManager.OnAudioFocusChangeListener k;
    android.app.PendingIntent l;
    android.media.RemoteControlClient m;
    boolean n;
    int o;
    boolean p;

    // Methods
    public e(
            android.content.Context p0,
            android.media.AudioManager p1,
            android.view.View p2,
            android.support.v4.media.d p3)
    {
      super();
      this.h = (android.view.ViewTreeObserver.OnWindowAttachListener)new android.support.v4.media.f(this);
      this.i = (android.view.ViewTreeObserver.OnWindowFocusChangeListener)new android.support.v4.media.g(this);
      this.j = new android.support.v4.media.h(this);
      this.k = (android.media.AudioManager.OnAudioFocusChangeListener)new android.support.v4.media.i(this);
      this.o = 0;
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p0.getPackageName() + ":transport:" + System.identityHashCode(this);
      this.g = new android.content.Intent(this.e);
      this.g.setPackage(p0.getPackageName());
      this.f = new android.content.IntentFilter();
      this.f.addAction(this.e);
      this.c.getViewTreeObserver().addOnWindowAttachListener(this.h);
      this.c.getViewTreeObserver().addOnWindowFocusChangeListener(this.i);
    }

    private void j()
    {
      if ( !this.p )
      {
        this.p = true;
        this.b.requestAudioFocus(this.k, 3, 1);
      }
    }

    private void k()
    {
      if ( this.p )
      {
        this.p = false;
        this.b.abandonAudioFocus(this.k);
      }
    }

    public final Object a()
    {
      return this.m;
    }

    public final void a(boolean p0, long p1, int p3)
    {
      android.media.RemoteControlClient m;
      int v5;
      float v6;
      if ( this.m != null )
      {
        m = this.m;
        if ( p0 )
          v5 = 3;
        else
          v5 = 1;
        if ( p0 )
          v6 = 1.0f;
        else
          v6 = 0.0f;
        m.setPlaybackState(v5, p1, v6);
        this.m.setTransportControlFlags(p3);
      }
    }

    public final void b()
    {
      this.i();
      this.c.getViewTreeObserver().removeOnWindowAttachListener(this.h);
      this.c.getViewTreeObserver().removeOnWindowFocusChangeListener(this.i);
    }

    final void c()
    {
      com.gameloft.android.GAND.GloftGGSS.CompatUtil.registerReceiverCompat(this.a, this.j, this.f);
      this.l = PendingIntent.getBroadcast(this.a, 0, this.g, 0x10000000);
      this.m = new android.media.RemoteControlClient(this.l);
      this.m.setOnGetPlaybackPositionListener((android.media.RemoteControlClient.OnGetPlaybackPositionListener)this);
      this.m.setPlaybackPositionUpdateListener((android.media.RemoteControlClient.OnPlaybackPositionUpdateListener)this);
    }

    final void d()
    {
      if ( !this.n )
      {
        this.n = true;
        this.b.registerMediaButtonEventReceiver(this.l);
        this.b.registerRemoteControlClient(this.m);
        if ( this.o == 3 )
          this.j();
      }
    }

    public final void e()
    {
      if ( this.o != 3 )
      {
        this.o = 3;
        this.m.setPlaybackState(3);
      }
      if ( this.n )
        this.j();
    }

    public final void f()
    {
      if ( this.o == 3 )
      {
        this.o = 2;
        this.m.setPlaybackState(2);
      }
      this.k();
    }

    public final void g()
    {
      if ( this.o != 1 )
      {
        this.o = 1;
        this.m.setPlaybackState(1);
      }
      this.k();
    }

    final void h()
    {
      this.k();
      if ( this.n )
      {
        this.n = false;
        this.b.unregisterRemoteControlClient(this.m);
        this.b.unregisterMediaButtonEventReceiver(this.l);
      }
    }

    final void i()
    {
      this.h();
      if ( this.l != null )
      {
        this.a.unregisterReceiver(this.j);
        this.l.cancel();
        this.l = null;
        this.m = null;
      }
    }

    public final long onGetPlaybackPosition()
    {
      return this.d.a();
    }

    public final void onPlaybackPositionUpdate(long p0)
    {
      this.d.a(p0);
    }

}
