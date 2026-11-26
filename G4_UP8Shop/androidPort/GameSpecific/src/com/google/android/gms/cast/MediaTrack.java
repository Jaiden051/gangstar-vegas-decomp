// Decompiled from classes.dex (SourceFile: MediaTrack.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import android.text.TextUtils;
import com.google.android.gms.internal.gj;
import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.io;
public final class MediaTrack {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    public static int i;
    public static int j;
    public static int k;
    private long l;
    private int m;
    private java.lang.String n;
    private java.lang.String o;
    private java.lang.String p;
    private java.lang.String q;
    private int r;
    private org.json.JSONObject s;

    // Methods
    MediaTrack(long p0, int p2)
    {
      super();
      this.j();
      this.l = p0;
      if ( p2 <= 0 || p2 > 3 )
        throw new IllegalArgumentException("invalid type " + p2);
      this.m = p2;
    }

    MediaTrack(org.json.JSONObject p0)
 throws org.json.JSONException {
      super();
      String String;
      String v3;
      this.j();
      this.l = p0.getLong("trackId");
      String = p0.getString("type");
      if ( "TEXT".equals(String) )
      {
        this.m = 1;
      }
      else if ( "AUDIO".equals(String) )
      {
        this.m = 2;
      }
      else
      {
        if ( !"VIDEO".equals(String) )
          throw new org.json.JSONException("invalid type: " + String);
        this.m = 3;
      }
      this.n = p0.optString("trackContentId", null);
      this.o = p0.optString("trackContentType", null);
      this.p = p0.optString("name", null);
      this.q = p0.optString("language", null);
      if ( p0.has("subtype") )
      {
        v3 = p0.getString("subtype");
        if ( "SUBTITLES".equals(v3) )
        {
          this.r = 1;
        }
        else if ( "CAPTIONS".equals(v3) )
        {
          this.r = 2;
        }
        else if ( "DESCRIPTIONS".equals(v3) )
        {
          this.r = 3;
        }
        else if ( "CHAPTERS".equals(v3) )
        {
          this.r = 4;
        }
        else
        {
          if ( !"METADATA".equals(v3) )
            throw new org.json.JSONException("invalid subtype: " + v3);
          this.r = 5;
        }
      }
      else
      {
        this.r = 0;
      }
      this.s = p0.optJSONObject("customData");
    
    }

    private long b()
    {
      return this.l;
    }

    private void b(org.json.JSONObject p0)
 throws org.json.JSONException {
      String String;
      String v3;
      this.j();
      this.l = p0.getLong("trackId");
      String = p0.getString("type");
      if ( "TEXT".equals(String) )
      {
        this.m = 1;
      }
      else if ( "AUDIO".equals(String) )
      {
        this.m = 2;
      }
      else
      {
        if ( !"VIDEO".equals(String) )
          throw new org.json.JSONException("invalid type: " + String);
        this.m = 3;
      }
      this.n = p0.optString("trackContentId", null);
      this.o = p0.optString("trackContentType", null);
      this.p = p0.optString("name", null);
      this.q = p0.optString("language", null);
      if ( p0.has("subtype") )
      {
        v3 = p0.getString("subtype");
        if ( "SUBTITLES".equals(v3) )
        {
          this.r = 1;
        }
        else if ( "CAPTIONS".equals(v3) )
        {
          this.r = 2;
        }
        else if ( "DESCRIPTIONS".equals(v3) )
        {
          this.r = 3;
        }
        else if ( "CHAPTERS".equals(v3) )
        {
          this.r = 4;
        }
        else
        {
          if ( !"METADATA".equals(v3) )
            throw new org.json.JSONException("invalid subtype: " + v3);
          this.r = 5;
        }
      }
      else
      {
        this.r = 0;
      }
      this.s = p0.optJSONObject("customData");
    }

    private int c()
    {
      return this.m;
    }

    private String d()
    {
      return this.n;
    }

    private String e()
    {
      return this.o;
    }

    private String f()
    {
      return this.p;
    }

    private String g()
    {
      return this.q;
    }

    private int h()
    {
      return this.r;
    }

    private org.json.JSONObject i()
    {
      return this.s;
    }

    private void j()
    {
      this.l = 0;
      this.m = 0;
      this.n = null;
      this.p = null;
      this.q = null;
      this.r = -1;
      this.s = null;
    }

    public final org.json.JSONObject a()
    {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("trackId", this.l);
        switch ( this.m )
        {
          case 1:
            v1.put("type", "TEXT");
            break;
          case 2:
            v1.put("type", "AUDIO");
            break;
          case 3:
            v1.put("type", "VIDEO");
            break;
          default:
            break;
        }
        if ( this.n != null )
          v1.put("trackContentId", this.n);
        if ( this.o != null )
          v1.put("trackContentType", this.o);
        if ( this.p != null )
          v1.put("name", this.p);
        if ( !TextUtils.isEmpty(this.q) )
          v1.put("language", this.q);
        switch ( this.r )
        {
          case 1:
            v1.put("subtype", "SUBTITLES");
            break;
          case 2:
            v1.put("subtype", "CAPTIONS");
            break;
          case 3:
            v1.put("subtype", "DESCRIPTIONS");
            break;
          case 4:
            v1.put("subtype", "CHAPTERS");
            break;
          case 5:
            v1.put("subtype", "METADATA");
            break;
          default:
            break;
        }
        if ( this.s != null )
          v1.put("customData", this.s);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    final void a(int p0)
    {
      if ( p0 < 0 || p0 > 5 )
        throw new IllegalArgumentException("invalid subtype " + p0);
      if ( p0 != 0 && this.m != 1 )
        throw new IllegalArgumentException("subtypes are only valid for text tracks");
      this.r = p0;
    }

    public final void a(String p0)
    {
      this.n = p0;
    }

    final void a(org.json.JSONObject p0)
    {
      this.s = p0;
    }

    public final void b(String p0)
    {
      this.o = p0;
    }

    final void c(String p0)
    {
      this.p = p0;
    }

    final void d(String p0)
    {
      this.q = p0;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.cast.MediaTrack v4;
      v2 = false;
      if ( this == p0 )
        return true;
      if ( p0 instanceof com.google.android.gms.cast.MediaTrack )
      {
        v4 = (com.google.android.gms.cast.MediaTrack)p0;
        if ( (this.s == null) == (v4.s == null)
          && (this.s == null || v4.s == null || io.d(this.s, v4.s))
          && this.l == v4.l
          && this.m == v4.m
          && gj.a(this.n, v4.n)
          && gj.a(this.o, v4.o)
          && gj.a(this.p, v4.p)
          && gj.a(this.q, v4.q)
          && this.r == v4.r )
        {
          return true;
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[8];
      v1[0] = Long.valueOf(this.l);
      v1[1] = Integer.valueOf(this.m);
      v1[2] = this.n;
      v1[3] = this.o;
      v1[4] = this.p;
      v1[5] = this.q;
      v1[6] = Integer.valueOf(this.r);
      v1[7] = this.s;
      return hl.hashCode(v1);
    }

}
