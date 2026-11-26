// Decompiled from classes.dex (SourceFile: MediaStatus.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import com.google.android.gms.internal.gj;
import org.json.JSONObject;
public final class MediaStatus {
    // Fields
    public static long a;
    public static long b;
    public static long c;
    public static long d;
    public static long e;
    public static long f;
    public static int g;
    public static int h;
    public static int i;
    public static int j;
    public static int k;
    public static int l;
    public static int m;
    public static int n;
    public static int o;
    public static int p;
    private org.json.JSONObject A;
    private long q;
    private com.google.android.gms.cast.MediaInfo r;
    private double s;
    private int t;
    private int u;
    private long v;
    private long w;
    private double x;
    private boolean y;
    private long[] z;

    // Methods
    public MediaStatus(org.json.JSONObject p0)
 throws org.json.JSONException {
      super();
      this.a(p0, 0);
    }

    private boolean a(long p0)
    {
      return (this.w & p0) != 0;
    }

    private int f()
    {
      return this.u;
    }

    private double g()
    {
      return this.x;
    }

    private boolean h()
    {
      return this.y;
    }

    private long[] i()
    {
      return this.z;
    }

    private org.json.JSONObject j()
    {
      return this.A;
    }

    public final int a(org.json.JSONObject p0, int p1)
 throws org.json.JSONException {
      int v3 = 0;
      int v4 = 0;
      int v5 = 0;
      long Long = 0L; // RETVAL
      int v7 = 0;
      String String = null;
      int v9 = 0;
      String v10 = null;
      double Double = 0.0; // RETVAL
      long v12 = 0L; // RETVAL
      long v13 = 0L; // RETVAL
      org.json.JSONObject JSONObject = null;
      double v15 = 0.0; // RETVAL
      boolean Boolean = false; // RETVAL
      org.json.JSONArray JSONArray = null;
      int v18 = 0;
      long[] v19 = null;
      int i = 0;
      long[] v21 = null;
      org.json.JSONObject v22 = null; // RETVAL
      int j = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = 2;
            v4 = 0;
            v5 = 1;
            Long = p0.getLong("mediaSessionId");
            if ( Long == this.q )
            {
            v7 = 0;
            }
            else
            {
            this.q = Long;
            v7 = 1;
            }
            if ( p0.has("playerState") )
            {
            String = p0.getString("playerState");
            if ( String.equals("IDLE") )
            {
            v9 = 1;
            }
            else if ( String.equals("PLAYING") )
            {
            v9 = 2;
            }
            else if ( String.equals("PAUSED") )
            {
            v9 = 3;
            }
            else if ( String.equals("BUFFERING") )
            {
            v9 = 4;
            }
            else
            {
            v9 = 0;
            }
            if ( v9 != this.t )
            {
            this.t = v9;
            v7 |= 2;
            }
            if ( v9 == 1 && p0.has("idleReason") )
            {
            v10 = p0.getString("idleReason");
            if ( !v10.equals("CANCELLED") )
            {
            if ( v10.equals("INTERRUPTED") )
            {
            v3 = 3;
            }
            else if ( v10.equals("FINISHED") )
            {
            v3 = 1;
            }
            else if ( v10.equals("ERROR") )
            {
            v3 = 4;
            }
            else
            {
            v3 = 0;
            }
            }
            if ( v3 != this.u )
            {
            this.u = v3;
            v7 |= 2;
            }
            }
            }
            if ( p0.has("playbackRate") )
            {
            Double = p0.getDouble("playbackRate");
            if ( this.s != Double )
            {
            this.s = Double;
            v7 |= 2;
            }
            }
            if ( p0.has("currentTime") && (p1 & 2) == 0 )
            {
            v12 = gj.b(p0.getDouble("currentTime"));
            if ( v12 != this.v )
            {
            this.v = v12;
            v7 |= 2;
            }
            }
            if ( p0.has("supportedMediaCommands") )
            {
            v13 = p0.getLong("supportedMediaCommands");
            if ( v13 != this.w )
            {
            this.w = v13;
            v7 |= 2;
            }
            }
            if ( p0.has("volume") && (p1 & 1) == 0 )
            {
            JSONObject = p0.getJSONObject("volume");
            v15 = JSONObject.getDouble("level");
            if ( v15 != this.x )
            {
            this.x = v15;
            v7 |= 2;
            }
            Boolean = JSONObject.getBoolean("muted");
            if ( Boolean != this.y )
            {
            this.y = Boolean;
            v7 |= 2;
            }
            }
            if ( !(p0.has("activeTrackIds")) ) { _pc = 2; continue _sm; }
            JSONArray = p0.getJSONArray("activeTrackIds");
            v18 = JSONArray.length();
            v19 = new long[v18];
            for ( i = 0; i < v18; ++i )
            v19[i] = JSONArray.getLong(i);
            if ( this.z != null && this.z.length == v18 )
            {
            for ( j = 0; j < v18; ++j )
            {
            if ( this.z[j] != v19[j] )
            { _pc = 1; continue _sm; }
            }
            v5 = 0;
            }
            _pc = 1;
            continue _sm;
          case 1:
            if ( v5 != 0 )
            this.z = (long[])v19;
            v4 = v5;
            v21 = v19;
            _pc = 3;
            continue _sm;
          case 2:
            {
            if ( this.z != null )
            v4 = 1;
            v21 = null;
            }
            _pc = 3;
            continue _sm;
          case 3:
            if ( v4 != 0 )
            {
            this.z = (long[])v21;
            v7 |= 2;
            }
            if ( p0.has("customData") )
            {
            this.A = p0.getJSONObject("customData");
            v7 |= 2;
            }
            if ( p0.has("media") )
            {
            v22 = p0.getJSONObject("media");
            this.r = new com.google.android.gms.cast.MediaInfo(v22);
            v7 |= 2;
            if ( v22.has("metadata") )
            return v7 | 4;
            }
            return v7;
        }
      }
}

    public final long a()
    {
      return this.q;
    }

    public final int b()
    {
      return this.t;
    }

    public final double c()
    {
      return this.s;
    }

    public final com.google.android.gms.cast.MediaInfo d()
    {
      return this.r;
    }

    public final long e()
    {
      return this.v;
    }

}
