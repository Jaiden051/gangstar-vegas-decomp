// Decompiled from classes.dex (SourceFile: gp.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Looper;
import android.os.Message;
import android.os.SystemClock;
import java.util.concurrent.TimeUnit;
public class gp extends com.google.android.gms.internal.gh {
    // Fields
    private static final java.lang.String a;
    private static final long c;
    private static final long d;
    private static final long e;
    private static final long f;
    private long g;
    private com.google.android.gms.cast.MediaStatus h;
    private final android.os.Handler i;
    private final com.google.android.gms.internal.gs j;
    private final com.google.android.gms.internal.gs k;
    private final com.google.android.gms.internal.gs l;
    private final com.google.android.gms.internal.gs m;
    private final com.google.android.gms.internal.gs n;
    private final com.google.android.gms.internal.gs o;
    private final com.google.android.gms.internal.gs p;
    private final com.google.android.gms.internal.gs q;
    private final com.google.android.gms.internal.gs r;
    private final com.google.android.gms.internal.gs s;
    private final java.util.List t;
    private final java.lang.Runnable u;
    private boolean v;

    // Methods
    static
    {
      a = gj.al("com.google.cast.media");
      c = TimeUnit.HOURS.toMillis(24);
      d = TimeUnit.HOURS.toMillis(24);
      e = TimeUnit.HOURS.toMillis(24);
      f = TimeUnit.SECONDS.toMillis(1);
    }

    public gp()
    {
      this(null);
    }

    private gp(String p0)
    {
      super(a, "MediaControlChannel", null);
      this.i = new android.os.Handler(Looper.getMainLooper());
      this.u = (Runnable)new com.google.android.gms.internal.gp$a(this, 0);
      this.t = new java.util.ArrayList();
      this.j = new com.google.android.gms.internal.gs(d);
      this.t.add(this.j);
      this.k = new com.google.android.gms.internal.gs(c);
      this.t.add(this.k);
      this.l = new com.google.android.gms.internal.gs(c);
      this.t.add(this.l);
      this.m = new com.google.android.gms.internal.gs(c);
      this.t.add(this.m);
      this.n = new com.google.android.gms.internal.gs(e);
      this.t.add(this.n);
      this.o = new com.google.android.gms.internal.gs(c);
      this.t.add(this.o);
      this.p = new com.google.android.gms.internal.gs(c);
      this.t.add(this.p);
      this.q = new com.google.android.gms.internal.gs(c);
      this.t.add(this.q);
      this.r = new com.google.android.gms.internal.gs(c);
      this.t.add(this.r);
      this.s = new com.google.android.gms.internal.gs(c);
      this.t.add(this.s);
      this.k();
    }

    /* synthetic */ static java.util.List a(com.google.android.gms.internal.gp p0)
    {
      return p0.t;
    }

    private void a(long p0, org.json.JSONObject p2)
 throws org.json.JSONException, android.os.RemoteException {
      int v3;
      boolean v4;
      boolean v5;
      int v6;
      int v7;
      java.util.Iterator i;
      v3 = 1;
      v4 = this.j.a(p0);
      v5 = this.n.b() && !this.n.a(p0);
      if ( (!this.o.b() || this.o.a(p0)) && (!this.p.b() || this.p.a(p0)) )
        v3 = 0;
      if ( v5 )
        v6 = 2;
      else
        v6 = 0;
      if ( v3 != 0 )
        v6 |= 1;
      if ( !v4 && this.h != null )
      {
        v7 = (int)this.h.a(p2, v6);
      }
      else
      {
        this.h = new com.google.android.gms.cast.MediaStatus(p2);
        this.g = SystemClock.elapsedRealtime();
        v7 = 7;
      }
      if ( (v7 & 1) != 0 )
      {
        this.g = SystemClock.elapsedRealtime();
        this.a();
      }
      if ( (v7 & 2) != 0 )
      {
        this.g = SystemClock.elapsedRealtime();
        this.a();
      }
      if ( (v7 & 4) != 0 )
        this.b();
      for ( i = this.t.iterator(); i.hasNext(); ((com.google.android.gms.internal.gs)i.next()).a(p0, 0) )
        ;
    }

    private void a(boolean p0)
    {
      if ( this.v != p0 )
      {
        this.v = p0;
        if ( p0 )
          this.i.postDelayed(this.u, f);
        else
          this.i.removeCallbacks(this.u);
      }
    }

    /* synthetic */ static boolean a(com.google.android.gms.internal.gp p0, boolean p1)
    {
      p0.v = p1;
      return p1;
    }

    /* synthetic */ static void b(com.google.android.gms.internal.gp p0, boolean p1)
    {
      p0.a(p1);
    }

    private long j()
    {
      if ( this.h == null )
        throw new IllegalStateException("No current media session");
      return this.h.a();
    }

    private void k()
    {
      this.a(false);
      this.g = 0;
      this.h = null;
      this.j.a();
      this.n.a();
      this.o.a();
    }

    public final long a(com.google.android.gms.internal.gr p0)
 throws java.io.IOException, android.os.RemoteException {
      org.json.JSONObject v2;
      long v3; // RETVAL
      long v4;
      v2 = new org.json.JSONObject();
      v3 = this.d();
      v4 = v3;
      this.q.a(v3, p0);
      this.a(true);
      try
      {
        v2.put("requestId", v3);
        v2.put("type", "GET_STATUS");
        if ( this.h != null )
          v2.put("mediaSessionId", this.h.a());
      }
      catch ( org.json.JSONException e )
      {
      }
      this.a(v2.toString(), v4, null);
      return v4;
    }

    public final long a(com.google.android.gms.internal.gr p0, double p1, org.json.JSONObject p3)
 throws java.io.IOException, android.os.RemoteException {
      org.json.JSONObject v4;
      long v5; // RETVAL
      long v6;
      org.json.JSONObject v7;
      if ( Double.isInfinite(p1) || Double.isNaN(p1) )
        throw new IllegalArgumentException("Volume cannot be " + p1);
      v4 = new org.json.JSONObject();
      v5 = this.d();
      v6 = v5;
      this.o.a(v5, p0);
      this.a(true);
      try
      {
        v4.put("requestId", v5);
        v4.put("type", "SET_VOLUME");
        v4.put("mediaSessionId", this.j());
        v7 = new org.json.JSONObject();
        v7.put("level", p1);
        v4.put("volume", v7);
        if ( p3 != null )
          v4.put("customData", p3);
      }
      catch ( org.json.JSONException e )
      {
      }
      this.a(v4.toString(), v6, null);
      return v6;
    }

    public final long a(com.google.android.gms.internal.gr p0, long p1, int p3, org.json.JSONObject p4)
 throws java.io.IOException, android.os.RemoteException {
      org.json.JSONObject v5;
      long v6; // RETVAL
      long v7;
      v5 = new org.json.JSONObject();
      v6 = this.d();
      v7 = v6;
      this.n.a(v6, p0);
      this.a(true);
      try
      {
        v5.put("requestId", v6);
        v5.put("type", "SEEK");
        v5.put("mediaSessionId", this.j());
        v5.put("currentTime", gj.o(p1));
        if ( p3 == 1 )
        {
          v5.put("resumeState", "PLAYBACK_START");
        }
        else if ( p3 == 2 )
        {
          v5.put("resumeState", "PLAYBACK_PAUSE");
        }
        if ( p4 != null )
          v5.put("customData", p4);
      }
      catch ( org.json.JSONException e )
      {
      }
      this.a(v5.toString(), v7, null);
      return v7;
    }

    public final long a(
            com.google.android.gms.internal.gr p0,
            com.google.android.gms.cast.MediaInfo p1,
            boolean p2,
            long p3,
            org.json.JSONObject p5)
 throws java.io.IOException, android.os.RemoteException {
      org.json.JSONObject v6;
      long v7; // RETVAL
      long v8;
      v6 = new org.json.JSONObject();
      v7 = this.d();
      v8 = v7;
      this.j.a(v7, p0);
      this.a(true);
      try
      {
        v6.put("requestId", v7);
        v6.put("type", "LOAD");
        v6.put("media", p1.c());
        v6.put("autoplay", p2);
        v6.put("currentTime", gj.o(p3));
        if ( p5 != null )
          v6.put("customData", p5);
      }
      catch ( org.json.JSONException e )
      {
      }
      this.a(v6.toString(), v8, null);
      return v8;
    }

    public final long a(com.google.android.gms.internal.gr p0, com.google.android.gms.cast.TextTrackStyle p1)
 throws java.io.IOException, android.os.RemoteException {
      org.json.JSONObject v3;
      long v4; // RETVAL
      long v5;
      v3 = new org.json.JSONObject();
      v4 = this.d();
      v5 = v4;
      this.s.a(v4, p0);
      this.a(true);
      try
      {
        v3.put("requestId", v4);
        v3.put("type", "EDIT_TRACKS_INFO");
        if ( p1 != null )
          v3.put("textTrackStyle", p1.a());
        v3.put("mediaSessionId", this.j());
      }
      catch ( org.json.JSONException e )
      {
      }
      this.a(v3.toString(), v5, null);
      return v5;
    }

    public final long a(com.google.android.gms.internal.gr p0, org.json.JSONObject p1)
 throws java.io.IOException, android.os.RemoteException {
      org.json.JSONObject v3;
      long v4; // RETVAL
      long v5;
      v3 = new org.json.JSONObject();
      v4 = this.d();
      v5 = v4;
      this.k.a(v4, p0);
      this.a(true);
      try
      {
        v3.put("requestId", v4);
        v3.put("type", "PAUSE");
        v3.put("mediaSessionId", this.j());
        if ( p1 != null )
          v3.put("customData", p1);
      }
      catch ( org.json.JSONException e )
      {
      }
      this.a(v3.toString(), v5, null);
      return v5;
    }

    public final long a(com.google.android.gms.internal.gr p0, boolean p1, org.json.JSONObject p2)
 throws java.io.IOException, android.os.RemoteException {
      org.json.JSONObject v4;
      long v5; // RETVAL
      long v6;
      org.json.JSONObject v7;
      v4 = new org.json.JSONObject();
      v5 = this.d();
      v6 = v5;
      this.p.a(v5, p0);
      this.a(true);
      try
      {
        v4.put("requestId", v5);
        v4.put("type", "SET_VOLUME");
        v4.put("mediaSessionId", this.j());
        v7 = new org.json.JSONObject();
        v7.put("muted", p1);
        v4.put("volume", v7);
        if ( p2 != null )
          v4.put("customData", p2);
      }
      catch ( org.json.JSONException e )
      {
      }
      this.a(v4.toString(), v6, null);
      return v6;
    }

    public final long a(com.google.android.gms.internal.gr p0, long[] p1)
 throws java.io.IOException, android.os.RemoteException {
      org.json.JSONObject v3;
      long v4; // RETVAL
      long v5;
      org.json.JSONArray v6;
      int i;
      v3 = new org.json.JSONObject();
      v4 = this.d();
      v5 = v4;
      this.r.a(v4, p0);
      this.a(true);
      try
      {
        v3.put("requestId", v4);
        v3.put("type", "EDIT_TRACKS_INFO");
        v3.put("mediaSessionId", this.j());
        v6 = new org.json.JSONArray();
        for ( i = 0; i < p1.length; ++i )
          v6.put(i, p1[i]);
        v3.put("activeTrackIds", v6);
      }
      catch ( org.json.JSONException e )
      {
      }
      this.a(v3.toString(), v5, null);
      return v5;
    }

    protected void a()
    {
      ;
    }

    public final void a(long p0, int p2)
 throws android.os.RemoteException {
      java.util.Iterator i;
      for ( i = this.t.iterator(); i.hasNext(); ((com.google.android.gms.internal.gs)i.next()).a(p0, p2) )
        ;
    }

    public final void a(String p0)
 throws android.os.RemoteException {
      Object[] v2;
      org.json.JSONObject v3;
      String String;
      long v5;
      org.json.JSONArray JSONArray;
      Object[] v8;
      org.json.JSONObject v9;
      java.util.Iterator i;
      org.json.JSONObject v11;
      java.util.Iterator j;
      v2 = new Object[1];
      v2[0] = p0;
      this.b.b("message received: %s", v2);
      try
      {
        v3 = new org.json.JSONObject(p0);
        String = v3.getString("type");
        v5 = v3.optLong("requestId", -1);
        if ( String.equals("MEDIA_STATUS") )
        {
          JSONArray = v3.getJSONArray("status");
          if ( JSONArray.length() <= 0 )
          {
            this.h = null;
            this.a();
            this.b();
            this.q.a(v5, 0);
          }
          else
          {
            this.a(v5, JSONArray.getJSONObject(0));
          }
        }
        else if ( String.equals("INVALID_PLAYER_STATE") )
        {
          this.b.d("received unexpected error: Invalid Player State.", new Object[0]);
          v9 = v3.optJSONObject("customData");
          for ( i = this.t.iterator(); i.hasNext(); ((com.google.android.gms.internal.gs)i.next()).a(v5, 1, v9) )
            ;
        }
        else if ( String.equals("LOAD_FAILED") )
        {
          this.j.a(v5, 1, v3.optJSONObject("customData"));
        }
        else if ( String.equals("LOAD_CANCELLED") )
        {
          this.j.a(v5, 2, v3.optJSONObject("customData"));
        }
        else if ( String.equals("INVALID_REQUEST") )
        {
          this.b.d("received unexpected error: Invalid Request.", new Object[0]);
          v11 = v3.optJSONObject("customData");
          for ( j = this.t.iterator(); j.hasNext(); ((com.google.android.gms.internal.gs)j.next()).a(v5, 1, v11) )
            ;
        }
      }
      catch ( org.json.JSONException v7 )
      {
        v8 = new Object[2];
        v8[0] = v7.getMessage();
        v8[1] = p0;
        this.b.d("Message is malformed (%s); ignoring: %s", v8);
      }
    }

    public final long b(com.google.android.gms.internal.gr p0, org.json.JSONObject p1)
 throws java.io.IOException, android.os.RemoteException {
      org.json.JSONObject v3;
      long v4; // RETVAL
      long v5;
      v3 = new org.json.JSONObject();
      v4 = this.d();
      v5 = v4;
      this.m.a(v4, p0);
      this.a(true);
      try
      {
        v3.put("requestId", v4);
        v3.put("type", "STOP");
        v3.put("mediaSessionId", this.j());
        if ( p1 != null )
          v3.put("customData", p1);
      }
      catch ( org.json.JSONException e )
      {
      }
      this.a(v3.toString(), v5, null);
      return v5;
    }

    protected void b()
    {
      ;
    }

    public final long c(com.google.android.gms.internal.gr p0, org.json.JSONObject p1)
 throws java.io.IOException, android.os.RemoteException {
      org.json.JSONObject v3;
      long v4; // RETVAL
      long v5;
      v3 = new org.json.JSONObject();
      v4 = this.d();
      v5 = v4;
      this.l.a(v4, p0);
      this.a(true);
      try
      {
        v3.put("requestId", v4);
        v3.put("type", "PLAY");
        v3.put("mediaSessionId", this.j());
        if ( p1 != null )
          v3.put("customData", p1);
      }
      catch ( org.json.JSONException e )
      {
      }
      this.a(v3.toString(), v5, null);
      return v5;
    }

    public final void e()
    {
      this.k();
    }

    public final long f()
    {
      long v1;
      com.google.android.gms.cast.MediaInfo v2;
      double v4;
      long v5;
      int v6; // RETVAL
      long v7;
      long v8;
      long v9;
      long v10;
      v1 = 0;
      v2 = this.i();
      if ( v2 != null && this.g != 0 )
      {
        v4 = this.h.c();
        v5 = this.h.e();
        v6 = this.h.b();
        if ( v4 != 0.0 && v6 == 2 )
        {
          v7 = SystemClock.elapsedRealtime() - this.g;
          if ( v7 >= 0 )
            v8 = v7;
          else
            v8 = 0;
          if ( v8 != 0 )
          {
            v9 = v2.a();
            v10 = v5 + (long)((double)v8 * v4);
            if ( v10 <= v9 )
            {
              if ( v10 >= 0 )
                return v10;
              else
                return 0;
            }
            return v9;
          }
          else
          {
            return v5;
          }
        }
        else
        {
          return v5;
        }
      }
      return v1;
    }

    public final long g()
    {
      com.google.android.gms.cast.MediaInfo v1; // RETVAL
    
      v1 = this.i();
      if ( v1 != null )
        return v1.a();
      else
        return 0;
    }

    public final com.google.android.gms.cast.MediaStatus h()
    {
      return this.h;
    }

    public final com.google.android.gms.cast.MediaInfo i()
    {
      if ( this.h != null )
        return this.h.d();
      else
        return null;
    }

}
