// Decompiled from classes.dex (SourceFile: MediaInfo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import android.text.TextUtils;
import com.google.android.gms.internal.gj;
import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.io;
import org.json.JSONObject;
public final class MediaInfo {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    private final java.lang.String e;
    private int f;
    private java.lang.String g;
    private com.google.android.gms.cast.MediaMetadata h;
    private long i;
    private java.util.List j;
    private com.google.android.gms.cast.TextTrackStyle k;
    private org.json.JSONObject l;

    // Methods
    MediaInfo(String p0)
    {
      super();
      if ( TextUtils.isEmpty(p0) )
        throw new IllegalArgumentException("content ID cannot be null or empty");
      this.e = p0;
      this.f = -1;
    }

    MediaInfo(org.json.JSONObject p0)
 throws org.json.JSONException {
      super();
      int v2;
      String String;
      org.json.JSONObject JSONObject;
      org.json.JSONArray i;
      com.google.android.gms.cast.TextTrackStyle v6;
      v2 = 0;
      this.e = p0.getString("contentId");
      String = p0.getString("streamType");
      if ( "NONE".equals(String) )
      {
        this.f = 0;
      }
      else if ( "BUFFERED".equals(String) )
      {
        this.f = 1;
      }
      else if ( "LIVE".equals(String) )
      {
        this.f = 2;
      }
      else
      {
        this.f = -1;
      }
      this.g = p0.getString("contentType");
      if ( p0.has("metadata") )
      {
        JSONObject = p0.getJSONObject("metadata");
        this.h = new com.google.android.gms.cast.MediaMetadata(JSONObject.getInt("metadataType"));
        this.h.a(JSONObject);
      }
      this.i = gj.b(p0.optDouble("duration", 0.0));
      if ( p0.has("tracks") )
      {
        this.j = new java.util.ArrayList();
        for ( i = p0.getJSONArray("tracks");
              v2 < i.length();
              this.j.add(new com.google.android.gms.cast.MediaTrack(i.getJSONObject(v2++))) )
        {
          ;
        }
      }
      else
      {
        this.j = null;
      }
      if ( p0.has("textTrackStyle") )
      {
        v6 = new com.google.android.gms.cast.TextTrackStyle();
        v6.a(p0.getJSONObject("textTrackStyle"));
        this.k = v6;
      }
      else
      {
        this.k = null;
      }
      this.l = p0.optJSONObject("customData");
    
    }

    private String d()
    {
      return this.e;
    }

    private int e()
    {
      return this.f;
    }

    private String f()
    {
      return this.g;
    }

    private com.google.android.gms.cast.MediaMetadata g()
    {
      return this.h;
    }

    private java.util.List<com.google.android.gms.cast.MediaTrack> h()
    {
      return this.j;
    }

    private com.google.android.gms.cast.TextTrackStyle i()
    {
      return this.k;
    }

    private org.json.JSONObject j()
    {
      return this.l;
    }

    public final long a()
    {
      return this.i;
    }

    final void a(int p0)
    {
      if ( p0 < -1 || p0 > 2 )
        throw new IllegalArgumentException("invalid stream type");
      this.f = p0;
    }

    final void a(long p0)
    {
      if ( p0 < 0 )
        throw new IllegalArgumentException("Stream duration cannot be negative");
      this.i = p0;
    }

    final void a(com.google.android.gms.cast.MediaMetadata p0)
    {
      this.h = p0;
    }

    public final void a(com.google.android.gms.cast.TextTrackStyle p0)
    {
      this.k = p0;
    }

    final void a(String p0)
    {
      if ( TextUtils.isEmpty(p0) )
        throw new IllegalArgumentException("content type cannot be null or empty");
      this.g = p0;
    }

    final void a(java.util.List<com.google.android.gms.cast.MediaTrack> p0)
    {
      this.j = p0;
    }

    final void a(org.json.JSONObject p0)
    {
      this.l = p0;
    }

    final void b()
    {
      if ( TextUtils.isEmpty(this.e) )
        throw new IllegalArgumentException("content ID cannot be null or empty");
      if ( TextUtils.isEmpty(this.g) )
        throw new IllegalArgumentException("content type cannot be null or empty");
      if ( this.f == -1 )
        throw new IllegalArgumentException("a valid stream type must be specified");
    }

    public final org.json.JSONObject c()
    {
      org.json.JSONObject v1;
      String v2;
      org.json.JSONArray v3;
      java.util.Iterator i;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("contentId", this.e);
        switch ( this.f )
        {
          case 1:
            v2 = "BUFFERED";
            break;
          case 2:
            v2 = "LIVE";
            break;
          default:
            v2 = "NONE";
            break;
        }
        v1.put("streamType", v2);
        if ( this.g != null )
          v1.put("contentType", this.g);
        if ( this.h != null )
          v1.put("metadata", this.h.a());
        v1.put("duration", gj.o(this.i));
        if ( this.j != null )
        {
          v3 = new org.json.JSONArray();
          for ( i = this.j.iterator(); i.hasNext(); v3.put(((com.google.android.gms.cast.MediaTrack)i.next()).a()) )
            ;
          v1.put("tracks", v3);
        }
        if ( this.k != null )
          v1.put("textTrackStyle", this.k.a());
        if ( this.l != null )
          v1.put("customData", this.l);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.cast.MediaInfo v4;
      v2 = false;
      if ( this == p0 )
        return true;
      if ( p0 instanceof com.google.android.gms.cast.MediaInfo )
      {
        v4 = (com.google.android.gms.cast.MediaInfo)p0;
        if ( (this.l == null) == (v4.l == null)
          && (this.l == null || v4.l == null || io.d(this.l, v4.l))
          && gj.a(this.e, v4.e)
          && this.f == v4.f
          && gj.a(this.g, v4.g)
          && gj.a(this.h, v4.h)
          && this.i == v4.i )
        {
          return true;
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[6];
      v1[0] = this.e;
      v1[1] = Integer.valueOf(this.f);
      v1[2] = this.g;
      v1[3] = this.h;
      v1[4] = Long.valueOf(this.i);
      v1[5] = String.valueOf(this.l);
      return hl.hashCode(v1);
    }

}
