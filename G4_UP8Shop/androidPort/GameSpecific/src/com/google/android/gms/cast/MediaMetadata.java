// Decompiled from classes.dex (SourceFile: MediaMetadata.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import android.text.TextUtils;
import com.google.android.gms.internal.gt;
import java.util.Arrays;
public class MediaMetadata {
    // Fields
    private static final java.lang.String[] A;
    private static final com.google.android.gms.cast.MediaMetadata$a B;
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static java.lang.String g;
    public static java.lang.String h;
    public static java.lang.String i;
    public static java.lang.String j;
    public static java.lang.String k;
    public static java.lang.String l;
    public static java.lang.String m;
    public static java.lang.String n;
    public static java.lang.String o;
    public static java.lang.String p;
    public static java.lang.String q;
    public static java.lang.String r;
    public static java.lang.String s;
    public static java.lang.String t;
    public static java.lang.String u;
    public static java.lang.String v;
    public static java.lang.String w;
    public static java.lang.String x;
    public static java.lang.String y;
    public static java.lang.String z;
    private final java.util.List C;
    private final android.os.Bundle D;
    private int E;

    // Methods
    static
    {
      String[] v0;
      v0 = new String[5];
      v0[0] = null;
      v0[1] = "String";
      v0[2] = "int";
      v0[3] = "double";
      v0[4] = "ISO-8601 date String";
      A = (String[])v0;
      B = new com.google.android.gms.cast.MediaMetadata$a().a("com.google.android.gms.cast.metadata.CREATION_DATE", "creationDateTime", 4).a("com.google.android.gms.cast.metadata.RELEASE_DATE", "releaseDate", 4).a("com.google.android.gms.cast.metadata.BROADCAST_DATE", "originalAirdate", 4).a("com.google.android.gms.cast.metadata.TITLE", "title", 1).a("com.google.android.gms.cast.metadata.SUBTITLE", "subtitle", 1).a("com.google.android.gms.cast.metadata.ARTIST", "artist", 1).a("com.google.android.gms.cast.metadata.ALBUM_ARTIST", "albumArtist", 1).a("com.google.android.gms.cast.metadata.ALBUM_TITLE", "albumName", 1).a("com.google.android.gms.cast.metadata.COMPOSER", "composer", 1).a("com.google.android.gms.cast.metadata.DISC_NUMBER", "discNumber", 2).a("com.google.android.gms.cast.metadata.TRACK_NUMBER", "trackNumber", 2).a("com.google.android.gms.cast.metadata.SEASON_NUMBER", "season", 2).a("com.google.android.gms.cast.metadata.EPISODE_NUMBER", "episode", 2).a("com.google.android.gms.cast.metadata.SERIES_TITLE", "seriesTitle", 1).a("com.google.android.gms.cast.metadata.STUDIO", "studio", 1).a("com.google.android.gms.cast.metadata.WIDTH", "width", 2).a("com.google.android.gms.cast.metadata.HEIGHT", "height", 2).a("com.google.android.gms.cast.metadata.LOCATION_NAME", "location", 1).a("com.google.android.gms.cast.metadata.LOCATION_LATITUDE", "latitude", 3).a("com.google.android.gms.cast.metadata.LOCATION_LONGITUDE", "longitude", 3);
    }

    public MediaMetadata()
    {
      this(0);
    }

    public MediaMetadata(int p0)
    {
      super();
      this.C = new java.util.ArrayList();
      this.D = new android.os.Bundle();
      this.E = p0;
    }

    private void a(com.google.android.gms.common.images.WebImage p0)
    {
      this.C.add(p0);
    }

    private void a(String p0, double p1)
    {
      d(p0, 3);
      this.D.putDouble(p0, p1);
    }

    private void a(String p0, int p1)
    {
      d(p0, 2);
      this.D.putInt(p0, p1);
    }

    private void a(String p0, String p1)
    {
      d(p0, 1);
      this.D.putString(p0, p1);
    }

    private void a(String p0, java.util.Calendar p1)
    {
      d(p0, 4);
      this.D.putString(p0, gt.a(p1));
    }

    private void a(org.json.JSONObject p0, String[] p1)
    {
      int v3;
      int i;
      String v5;
      java.util.Iterator v6;
      String v7;
      Object v8; // RETVAL
    
      try
      {
        v3 = p1.length;
        for ( i = 0; i < v3; ++i )
        {
          v5 = p1[i];
          if ( this.D.containsKey(v5) )
          {
            switch ( B.c(v5) )
            {
              case 1:
              case 4:
                p0.put(B.a(v5), this.D.getString(v5));
                break;
              case 2:
                p0.put(B.a(v5), this.D.getInt(v5));
                break;
              case 3:
                p0.put(B.a(v5), this.D.getDouble(v5));
                break;
              default:
                continue;
            }
          }
        }
        v6 = this.D.keySet().iterator();
        while ( v6.hasNext() )
        {
          v7 = (String)v6.next();
          if ( !v7.startsWith("com.google.") )
          {
            v8 = this.D.get(v7);
            if ( v8 instanceof String || v8 instanceof Integer || v8 instanceof Double )
              p0.put(v7, v8);
          }
        }
      }
      catch ( org.json.JSONException e )
      {
      }
    }

    private boolean a(android.os.Bundle p0, android.os.Bundle p1)
    {
      java.util.Iterator v5;
      String v6;
      Object v7;
      Object v8; // RETVAL
      Object v9;
      if ( p0.size() != p1.size() )
        return false;
      v5 = p0.keySet().iterator();
      while ( v5.hasNext() )
      {
        v6 = (String)v5.next();
        v7 = p0.get(v6);
        v8 = p1.get(v6);
        v9 = v8;
        if ( v7 instanceof android.os.Bundle
          && v8 instanceof android.os.Bundle
          && !this.a((android.os.Bundle)v7, (android.os.Bundle)v8) )
        {
          return false;
        }
        if ( v7 != null )
        {
          if ( !v7.equals(v9) )
            return false;
        }
        else if ( v9 != null || !p1.containsKey(v6) )
        {
          return false;
        }
      }
      return true;
    }

    private boolean a(String p0)
    {
      return this.D.containsKey(p0);
    }

    private int b()
    {
      return this.E;
    }

    private String b(String p0)
    {
      d(p0, 1);
      return this.D.getString(p0);
    }

    private void b(org.json.JSONObject p0, String[] p1)
    {
      java.util.Set v3 = null;
      java.util.Iterator v4 = null;
      String v5 = null;
      String v6 = null; // RETVAL
      String v7 = null;
      Object v8 = null;
      Object v9 = null; // RETVAL
      int _sw_1 = 0;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              v3 = new java.util.HashSet(Arrays.asList(p1));
              _ehCatchPc = 16;
              v4 = p0.keys();
              _pc = 1;
              continue _sm;
            case 1:
              if ( !(v4.hasNext()) ) { _pc = 15; continue _sm; }
              v5 = (String)v4.next();
              if ( !(!"metadataType".equals(v5)) ) { _pc = 14; continue _sm; }
              v6 = B.b(v5);
              v7 = v6;
              if ( !(v6 != null) ) { _pc = 13; continue _sm; }
              if ( !(v3.contains(v6)) ) { _pc = 12; continue _sm; }
              _ehCatchPc = 10;
              v8 = p0.get(v5);
              if ( !(v8 != null) ) { _pc = 9; continue _sm; }
              _sw_1 = (B.c(v7));
              if ( (_sw_1 == (1)) ) { _pc = 2; continue _sm; }
              if ( (_sw_1 == (2)) ) { _pc = 3; continue _sm; }
              if ( (_sw_1 == (3)) ) { _pc = 4; continue _sm; }
              if ( (_sw_1 == (4)) ) { _pc = 5; continue _sm; }
              _pc = 8;
              continue _sm;
            case 2:
              if ( v8 instanceof String )
              { _pc = 6; continue _sm; }
              _pc = 9;
              continue _sm;
            case 3:
              if ( v8 instanceof Integer )
              this.D.putInt(v7, ((Integer)v8).intValue());
              _pc = 9;
              continue _sm;
            case 4:
              if ( v8 instanceof Double )
              this.D.putDouble(v7, ((Double)v8).doubleValue());
              _pc = 9;
              continue _sm;
            case 5:
              if ( v8 instanceof String && gt.aq((String)v8) != null ) { _pc = 6; continue _sm; } else { _pc = 7; continue _sm; }
            case 6:
              this.D.putString(v7, (String)v8);
              _pc = 7;
              continue _sm;
            case 7:
              _pc = 9;
              continue _sm;
            case 8:
              _pc = 12;
              continue _sm;
            case 9:
              _ehCatchPc = 16;
              _pc = 12;
              continue _sm;
            case 10:
              _ehCatchPc = 16;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof org.json.JSONException) ) { _pc = 11; continue _sm; }
              _pc = 12;
              continue _sm;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 12:
              _pc = 14;
              continue _sm;
            case 13:
              {
              v9 = p0.get(v5);
              if ( v9 instanceof String )
              {
              this.D.putString(v5, (String)v9);
              }
              else if ( v9 instanceof Integer )
              {
              this.D.putInt(v5, ((Integer)v9).intValue());
              }
              else if ( v9 instanceof Double )
              {
              this.D.putDouble(v5, ((Double)v9).doubleValue());
              }
              }
              _pc = 14;
              continue _sm;
            case 14:
              _pc = 1;
              continue _sm;
            case 15:
              _ehCatchPc = -1;
              _pc = 18;
              continue _sm;
            case 16:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof org.json.JSONException) ) { _pc = 17; continue _sm; }
              _pc = 18;
              continue _sm;
            case 17:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 18:
              return;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    private int c(String p0)
    {
      d(p0, 2);
      return this.D.getInt(p0);
    }

    private void c()
    {
      this.D.clear();
      this.C.clear();
    }

    private double d(String p0)
    {
      d(p0, 3);
      return this.D.getDouble(p0);
    }

    private java.util.Set<String> d()
    {
      return this.D.keySet();
    }

    private static void d(String p0, int p1)
    {
      int v2; // RETVAL
    
      if ( TextUtils.isEmpty(p0) )
        throw new IllegalArgumentException("null and empty keys are not allowed");
      v2 = B.c(p0);
      if ( v2 != p1 && v2 != 0 )
        throw new IllegalArgumentException("Value for " + p0 + " must be a " + A[p1]);
    }

    private java.util.Calendar e(String p0)
    {
      String String; // RETVAL
    
      d(p0, 4);
      String = this.D.getString(p0);
      if ( String != null )
        return gt.aq(String);
      else
        return null;
    }

    private java.util.List<com.google.android.gms.common.images.WebImage> e()
    {
      return this.C;
    }

    private String f(String p0)
    {
      d(p0, 4);
      return this.D.getString(p0);
    }

    private boolean f()
    {
      return this.C != null && !this.C.isEmpty();
    }

    private void g()
    {
      this.C.clear();
    }

    public final org.json.JSONObject a()
    {
      org.json.JSONObject v1;
      String[] v3;
      String[] v4;
      String[] v5;
      String[] v6;
      String[] v7;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("metadataType", this.E);
      }
      catch ( org.json.JSONException e )
      {
      }
      gt.a(v1, this.C);
      switch ( this.E )
      {
        case 0:
          v3 = new String[4];
          v3[0] = "com.google.android.gms.cast.metadata.TITLE";
          v3[1] = "com.google.android.gms.cast.metadata.ARTIST";
          v3[2] = "com.google.android.gms.cast.metadata.SUBTITLE";
          v3[3] = "com.google.android.gms.cast.metadata.RELEASE_DATE";
          this.a(v1, v3);
          break;
        case 1:
          v4 = new String[4];
          v4[0] = "com.google.android.gms.cast.metadata.TITLE";
          v4[1] = "com.google.android.gms.cast.metadata.STUDIO";
          v4[2] = "com.google.android.gms.cast.metadata.SUBTITLE";
          v4[3] = "com.google.android.gms.cast.metadata.RELEASE_DATE";
          this.a(v1, v4);
          break;
        case 2:
          v5 = new String[5];
          v5[0] = "com.google.android.gms.cast.metadata.TITLE";
          v5[1] = "com.google.android.gms.cast.metadata.SERIES_TITLE";
          v5[2] = "com.google.android.gms.cast.metadata.SEASON_NUMBER";
          v5[3] = "com.google.android.gms.cast.metadata.EPISODE_NUMBER";
          v5[4] = "com.google.android.gms.cast.metadata.BROADCAST_DATE";
          this.a(v1, v5);
          break;
        case 3:
          v6 = new String[8];
          v6[0] = "com.google.android.gms.cast.metadata.TITLE";
          v6[1] = "com.google.android.gms.cast.metadata.ARTIST";
          v6[2] = "com.google.android.gms.cast.metadata.ALBUM_TITLE";
          v6[3] = "com.google.android.gms.cast.metadata.ALBUM_ARTIST";
          v6[4] = "com.google.android.gms.cast.metadata.COMPOSER";
          v6[5] = "com.google.android.gms.cast.metadata.TRACK_NUMBER";
          v6[6] = "com.google.android.gms.cast.metadata.DISC_NUMBER";
          v6[7] = "com.google.android.gms.cast.metadata.RELEASE_DATE";
          this.a(v1, v6);
          break;
        case 4:
          v7 = new String[8];
          v7[0] = "com.google.android.gms.cast.metadata.TITLE";
          v7[1] = "com.google.android.gms.cast.metadata.ARTIST";
          v7[2] = "com.google.android.gms.cast.metadata.LOCATION_NAME";
          v7[3] = "com.google.android.gms.cast.metadata.LOCATION_LATITUDE";
          v7[4] = "com.google.android.gms.cast.metadata.LOCATION_LONGITUDE";
          v7[5] = "com.google.android.gms.cast.metadata.WIDTH";
          v7[6] = "com.google.android.gms.cast.metadata.HEIGHT";
          v7[7] = "com.google.android.gms.cast.metadata.CREATION_DATE";
          this.a(v1, v7);
          break;
        default:
          this.a(v1, new String[0]);
          break;
      }
      return v1;
    }

    public final void a(org.json.JSONObject p0)
    {
      String[] v2;
      String[] v3;
      String[] v4;
      String[] v5;
      String[] v6;
      this.D.clear();
      this.C.clear();
      this.E = 0;
      try
      {
        this.E = p0.getInt("metadataType");
      }
      catch ( org.json.JSONException e )
      {
      }
      gt.a(this.C, p0);
      switch ( this.E )
      {
        case 0:
          v2 = new String[4];
          v2[0] = "com.google.android.gms.cast.metadata.TITLE";
          v2[1] = "com.google.android.gms.cast.metadata.ARTIST";
          v2[2] = "com.google.android.gms.cast.metadata.SUBTITLE";
          v2[3] = "com.google.android.gms.cast.metadata.RELEASE_DATE";
          this.b(p0, v2);
          break;
        case 1:
          v3 = new String[4];
          v3[0] = "com.google.android.gms.cast.metadata.TITLE";
          v3[1] = "com.google.android.gms.cast.metadata.STUDIO";
          v3[2] = "com.google.android.gms.cast.metadata.SUBTITLE";
          v3[3] = "com.google.android.gms.cast.metadata.RELEASE_DATE";
          this.b(p0, v3);
          break;
        case 2:
          v4 = new String[5];
          v4[0] = "com.google.android.gms.cast.metadata.TITLE";
          v4[1] = "com.google.android.gms.cast.metadata.SERIES_TITLE";
          v4[2] = "com.google.android.gms.cast.metadata.SEASON_NUMBER";
          v4[3] = "com.google.android.gms.cast.metadata.EPISODE_NUMBER";
          v4[4] = "com.google.android.gms.cast.metadata.BROADCAST_DATE";
          this.b(p0, v4);
          break;
        case 3:
          v5 = new String[8];
          v5[0] = "com.google.android.gms.cast.metadata.TITLE";
          v5[1] = "com.google.android.gms.cast.metadata.ALBUM_TITLE";
          v5[2] = "com.google.android.gms.cast.metadata.ARTIST";
          v5[3] = "com.google.android.gms.cast.metadata.ALBUM_ARTIST";
          v5[4] = "com.google.android.gms.cast.metadata.COMPOSER";
          v5[5] = "com.google.android.gms.cast.metadata.TRACK_NUMBER";
          v5[6] = "com.google.android.gms.cast.metadata.DISC_NUMBER";
          v5[7] = "com.google.android.gms.cast.metadata.RELEASE_DATE";
          this.b(p0, v5);
          break;
        case 4:
          v6 = new String[8];
          v6[0] = "com.google.android.gms.cast.metadata.TITLE";
          v6[1] = "com.google.android.gms.cast.metadata.ARTIST";
          v6[2] = "com.google.android.gms.cast.metadata.LOCATION_NAME";
          v6[3] = "com.google.android.gms.cast.metadata.LOCATION_LATITUDE";
          v6[4] = "com.google.android.gms.cast.metadata.LOCATION_LONGITUDE";
          v6[5] = "com.google.android.gms.cast.metadata.WIDTH";
          v6[6] = "com.google.android.gms.cast.metadata.HEIGHT";
          v6[7] = "com.google.android.gms.cast.metadata.CREATION_DATE";
          this.b(p0, v6);
          break;
        default:
          this.b(p0, new String[0]);
          break;
      }
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.cast.MediaMetadata v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.cast.MediaMetadata )
        {
          v4 = (com.google.android.gms.cast.MediaMetadata)p0;
          if ( !this.a(this.D, v4.D) || !this.C.equals(v4.C) )
            return false;
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public int hashCode()
    {
      java.util.Iterator v1;
      int v2;
      v1 = this.D.keySet().iterator();
      v2 = 17;
      while ( v1.hasNext() )
        v2 = this.D.get((String)v1.next()).hashCode() + 31 * v2;
      return 31 * v2 + this.C.hashCode();
    }

}
