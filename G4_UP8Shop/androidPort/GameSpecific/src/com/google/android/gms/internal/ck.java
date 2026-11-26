// Decompiled from classes.dex (SourceFile: ck.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.TextUtils;
public final class ck extends android.widget.FrameLayout implements android.media.MediaPlayer.OnCompletionListener, android.media.MediaPlayer.OnErrorListener, android.media.MediaPlayer.OnPreparedListener {
    // Fields
    private final com.google.android.gms.internal.ey a;
    private final android.widget.MediaController b;
    private final com.google.android.gms.internal.ck$a c;
    private final android.widget.VideoView d;
    private long e;
    private java.lang.String f;

    // Methods
    public ck(android.content.Context p0, com.google.android.gms.internal.ey p1)
    {
      super(p0);
      this.a = p1;
      this.d = new android.widget.VideoView(p0);
      this.addView(this.d, new android.widget.FrameLayout.LayoutParams(-1, -1, 17));
      this.b = new android.widget.MediaController(p0);
      this.c = new com.google.android.gms.internal.ck$a(this);
      this.c.b();
      this.d.setOnCompletionListener(this);
      this.d.setOnPreparedListener(this);
      this.d.setOnErrorListener(this);
    }

    private static void a(com.google.android.gms.internal.ey p0, String p1)
    {
      a(p0, p1, new java.util.HashMap(1));
    }

    public static void a(com.google.android.gms.internal.ey p0, String p1, String p2)
    {
      java.util.HashMap v3;
      int v4;
      java.util.HashMap v5;
      v3 = null;
      if ( p2 != null )
        v4 = 3;
      else
        v4 = 2;
      v5 = (v3 = new java.util.HashMap(v4));
      v5.put("what", p1);
      if ( p2 != null )
        v5.put("extra", p2);
      a(p0, "error", v5);
    }

    private static void a(com.google.android.gms.internal.ey p0, String p1, String p2, String p3)
    {
      java.util.HashMap v4;
      v4 = new java.util.HashMap(2);
      v4.put(p2, p3);
      a(p0, p1, v4);
    }

    private static void a(com.google.android.gms.internal.ey p0, String p1, java.util.Map<String, String> p2)
    {
      p2.put("event", p1);
      p0.a("onVideoEvent", p2);
    }

    public final void a()
    {
      this.c.a();
      this.d.stopPlayback();
    }

    public final void a(int p0)
    {
      this.d.seekTo(p0);
    }

    public final void a(android.view.MotionEvent p0)
    {
      this.d.dispatchTouchEvent(p0);
    }

    public final void a(String p0)
    {
      this.f = p0;
    }

    public final void a(boolean p0)
    {
      if ( p0 )
      {
        this.d.setMediaController(this.b);
      }
      else
      {
        this.b.hide();
        this.d.setMediaController(null);
      }
    }

    public final void b()
    {
      if ( TextUtils.isEmpty(this.f) )
        a(this.a, "no_src", (String)null);
      else
        this.d.setVideoPath(this.f);
    }

    public final void c()
    {
      this.d.pause();
    }

    public final void d()
    {
      this.d.start();
    }

    public final void e()
    {
      int CurrentPosition; // RETVAL
      long v2;
      CurrentPosition = this.d.getCurrentPosition();
      v2 = CurrentPosition;
      if ( this.e != CurrentPosition )
      {
        a(this.a, "timeupdate", "time", String.valueOf((float)CurrentPosition / 1000.0f));
        this.e = v2;
      }
    }

    public final void onCompletion(android.media.MediaPlayer p0)
    {
      a(this.a, "ended");
    }

    public final boolean onError(android.media.MediaPlayer p0, int p1, int p2)
    {
      a(this.a, String.valueOf(p1), String.valueOf(p2));
      return true;
    }

    public final void onPrepared(android.media.MediaPlayer p0)
    {
      a(this.a, "canplaythrough", "duration", String.valueOf((float)this.d.getDuration() / 1000.0f));
    }

}
