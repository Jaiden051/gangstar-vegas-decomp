// Decompiled from classes.dex (SourceFile: ac.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.text.TextUtils;
import java.util.Collections;
class ac implements com.google.android.gms.analytics.d {
    // Fields
    private static final java.lang.String a;
    private final com.google.android.gms.analytics.ac$a b;
    private volatile com.google.android.gms.analytics.n c;
    private final com.google.android.gms.analytics.e d;
    private final android.content.Context e;
    private final java.lang.String f;
    private com.google.android.gms.analytics.ab g;
    private long h;
    private final int i;
    private com.google.android.gms.analytics.i j;

    // Methods
    static
    {
      Object[] v0;
      v0 = new Object[6];
      v0[0] = "hits2";
      v0[1] = "hit_id";
      v0[2] = "hit_time";
      v0[3] = "hit_url";
      v0[4] = "hit_string";
      v0[5] = "hit_app_id";
      a = String.format(
            "CREATE TABLE IF NOT EXISTS %s ( '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, '%s' INTEGER NOT NULL, '%s' TEX" +
            "T NOT NULL, '%s' TEXT NOT NULL, '%s' INTEGER);",
            v0);
    }

    ac(com.google.android.gms.analytics.e p0, android.content.Context p1)
    {
      this(p0, p1, "google_analytics_v4.db", 2000);
    }

    private ac(com.google.android.gms.analytics.e p0, android.content.Context p1, String p2, int p3)
    {
      super();
      this.e = p1.getApplicationContext();
      this.f = p2;
      this.d = p0;
      this.j = (com.google.android.gms.analytics.i)new com.google.android.gms.analytics.ac$1(this);
      this.b = new com.google.android.gms.analytics.ac$a(this, this.e, this.f);
      this.c = (com.google.android.gms.analytics.n)new com.google.android.gms.analytics.ah(new org.apache.http.impl.client.DefaultHttpClient(), this.e);
      this.h = 0;
      this.i = 2000;
    }

    private android.database.sqlite.SQLiteDatabase a(String p0)
    {
      try
      {
        return this.b.getWritableDatabase();
      }
      catch ( android.database.sqlite.SQLiteException e )
      {
        aa.D(p0);
        return null;
      }
    }

    /* synthetic */ static com.google.android.gms.analytics.i a(com.google.android.gms.analytics.ac p0)
    {
      return p0.j;
    }

    private java.util.List<String> a(int p0)
    {
      java.util.List v2 = null;
      android.database.sqlite.SQLiteDatabase v5 = null;
      String[] v6 = null;
      Object[] v7 = null;
      android.database.Cursor v8 = null; // RETVAL
      android.database.Cursor v9 = null;
      android.database.sqlite.SQLiteException _cv_1 = null;
      Throwable _cv_2 = null;
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
              v2 = new java.util.ArrayList();
              if ( !(p0 > 0) ) { _pc = 12; continue _sm; }
              v5 = this.a("Error opening database for peekHitIds.");
              if ( v5 == null )
              return v2;
              _ehCatchPc = 8;
              v6 = new String[1];
              v6[0] = "hit_id";
              v7 = new Object[1];
              v7[0] = "hit_id";
              v8 = v5.query("hits2", v6, null, null, null, null, String.format("%s ASC", v7), Integer.toString(p0));
              v9 = v8;
              _ehCatchPc = 5;
              _ehCatchPc = 1;
              if ( v8.moveToFirst() )
              {
              do
              v2.add(String.valueOf(v9.getLong(0)));
              while ( v9.moveToNext() );
              }
              if ( v9 != null )
              v9.close();
              return v2;
            case 1:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 3; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              _pc = 2;
              continue _sm;
            case 2:
              aa.D("Error in peekHits fetching hitIds: " + _cv_1.getMessage());
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              _ehCatchPc = 8;
              _pc = 7;
              continue _sm;
            case 5:
              _ehCatchPc = 8;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 6; continue _sm; }
              _pc = 10;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              if ( v9 != null )
              v9.close();
              return v2;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 9; continue _sm; }
              v9 = null;
              _pc = 2;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v9 = null;
              _pc = 10;
              continue _sm;
            case 10:
              if ( v9 != null )
              v9.close();
              throw _cv_2;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 12:
              aa.D("Invalid maxHits specified. Skipping");
              return v2;
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

    private void a(java.util.Collection<com.google.android.gms.analytics.x> p0)
    {
      String[] v2;
      java.util.Iterator v3;
      int v4;
      if ( p0 != null && !p0.isEmpty() )
      {
        v2 = new String[p0.size()];
        v3 = p0.iterator();
        v4 = 0;
        while ( v3.hasNext() )
          v2[v4++] = String.valueOf(((com.google.android.gms.analytics.x)v3.next()).b());
        this.a(v2);
      }
      else
      {
        aa.D("Empty/Null collection passed to deleteHits.");
      }
    }

    private void a(java.util.Map<String, String> p0, long p1, String p3)
    {
      android.database.sqlite.SQLiteDatabase v4 = null;
      android.content.ContentValues v5 = null;
      long v6 = 0L;
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
              v4 = this.a("Error opening database for putHit");
              if ( v4 == null )
              return;
              v5 = new android.content.ContentValues();
              v5.put("hit_string", v(p0));
              v5.put("hit_time", java.lang.Long.valueOf(p1));
              if ( !(p0.containsKey("AppUID")) ) { _pc = 4; continue _sm; }
              _ehCatchPc = 2;
              v6 = java.lang.Long.parseLong((String)p0.get("AppUID"));
              _pc = 1;
              continue _sm;
            case 1:
              v5.put("hit_app_id", java.lang.Long.valueOf(v6));
              if ( p3 == null )
              p3 = "http://www.google-analytics.com/collect";
              if ( p3.length() != 0 )
              {
              v5.put("hit_url", p3);
              try
              {
              v4.insert("hits2", null, v5);
              this.d.a(false);
              }
              catch ( android.database.sqlite.SQLiteException e )
              {
              aa.D("Error storing hit");
              }
              }
              else
              {
              aa.D("Empty path: not sending hit");
              }
              return;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof NumberFormatException) ) { _pc = 3; continue _sm; }
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              v6 = 0;
              _pc = 1;
              continue _sm;
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

    private static void a(java.util.Map<String, String> p0, java.util.Collection<com.google.android.gms.internal.fe> p1)
    {
      String v2;
      java.util.Iterator v3;
      com.google.android.gms.internal.fe v4;
      v2 = "&_v".substring(1);
      if ( p1 != null )
      {
        v3 = p1.iterator();
        while ( v3.hasNext() )
        {
          v4 = (com.google.android.gms.internal.fe)v3.next();
          if ( "appendVersion".equals(v4.a()) )
          {
            p0.put(v2, v4.b());
            return;
          }
        }
      }
    }

    private void a(String[] p0)
    {
      android.database.sqlite.SQLiteDatabase v2;
      Object[] v3;
      String v4; // RETVAL
    
      if ( p0 != null && p0.length != 0 )
      {
        v2 = this.a("Error opening database for deleteHits.");
        if ( v2 != null )
        {
          v3 = new Object[1];
          v3[0] = TextUtils.join(",", Collections.nCopies(p0.length, "?"));
          v4 = String.format("HIT_ID in (%s)", v3);
          try
          {
            v2.delete("hits2", v4, p0);
            this.d.a(this.e() == 0);
          }
          catch ( android.database.sqlite.SQLiteException e )
          {
            aa.D("Error deleting hits " + p0);
          }
        }
      }
      else
      {
        aa.D("Empty hitIds passed to deleteHits.");
      }
    }

    /* synthetic */ static String b(com.google.android.gms.analytics.ac p0)
    {
      return p0.f;
    }

    private java.util.List<com.google.android.gms.analytics.x> b(int p0)
    {
      java.util.List v2 = null;
      android.database.sqlite.SQLiteDatabase v3 = null;
      java.util.List v4 = null;
      android.database.Cursor v6 = null;
      String[] v7 = null;
      Object[] v8 = null;
      android.database.Cursor v9 = null; // RETVAL
      android.database.Cursor v10 = null;
      java.util.List v11 = null;
      String[] v14 = null;
      Object[] v15 = null;
      android.database.Cursor v16 = null; // RETVAL
      android.database.Cursor v17 = null;
      int i = 0;
      Object[] v20 = null;
      java.util.List v21 = null;
      int v22 = 0;
      java.util.Iterator v23 = null;
      com.google.android.gms.analytics.x v24 = null;
      android.database.sqlite.SQLiteException v30 = null;
      android.database.Cursor v31 = null;
      android.database.sqlite.SQLiteException _cv_1 = null;
      Throwable _cv_2 = null;
      android.database.sqlite.SQLiteException _cv_3 = null;
      android.database.sqlite.SQLiteException _cv_4 = null;
      android.database.sqlite.SQLiteException _cv_5 = null;
      Throwable _cv_6 = null;
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
              v2 = new java.util.ArrayList();
              v3 = this.a("Error opening database for peekHits");
              if ( v3 == null )
              return v2;
              v6 = null;
              _ehCatchPc = 22;
              v7 = new String[2];
              v7[0] = "hit_id";
              v7[1] = "hit_time";
              v8 = new Object[1];
              v8[0] = "hit_id";
              v9 = v3.query("hits2", v7, null, null, null, null, String.format("%s ASC", v8), Integer.toString(40));
              v10 = v9;
              _ehCatchPc = 18;
              v11 = new java.util.ArrayList();
              _ehCatchPc = 13;
              if ( v9.moveToFirst() )
              {
              do
              v11.add(new com.google.android.gms.analytics.x(null, v10.getLong(0), v10.getLong(1)));
              while ( v10.moveToNext() );
              }
              if ( v10 != null )
              v10.close();
              _ehCatchPc = 10;
              _ehCatchPc = 7;
              v14 = new String[3];
              v14[0] = "hit_id";
              v14[1] = "hit_string";
              v14[2] = "hit_url";
              v15 = new Object[1];
              v15[0] = "hit_id";
              v16 = v3.query("hits2", v14, null, null, null, null, String.format("%s ASC", v15), Integer.toString(40));
              v17 = v16;
              _ehCatchPc = 1;
              if ( v16.moveToFirst() )
              {
              for ( i = 0; ; ++i )
              {
              if ( ((android.database.sqlite.SQLiteCursor)v17).getWindow().getNumRows() <= 0 )
              {
              v20 = new Object[1];
              v20[0] = java.lang.Long.valueOf(((com.google.android.gms.analytics.x)v11.get(i)).b());
              aa.D(String.format("HitString for hitId %d too large.  Hit will be deleted.", v20));
              }
              else
              {
              ((com.google.android.gms.analytics.x)v11.get(i)).a(v17.getString(1));
              ((com.google.android.gms.analytics.x)v11.get(i)).b(v17.getString(2));
              }
              if ( !v17.moveToNext() )
              break;
              }
              }
              if ( v17 != null )
              v17.close();
              return v11;
            case 1:
              _ehCatchPc = 7;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 3; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              v10 = v16;
              _pc = 2;
              continue _sm;
            case 2:
              aa.D("Error in peekHits fetching hitString: " + _cv_1.getMessage());
              v21 = new java.util.ArrayList();
              v22 = 0;
              v23 = v11.iterator();
              while ( v23.hasNext() )
              {
              v24 = (com.google.android.gms.analytics.x)v23.next();
              if ( TextUtils.isEmpty(v24.a()) )
              {
              if ( v22 != 0 )
              break;
              v22 = 1;
              }
              v21.add(v24);
              }
              if ( v10 != null )
              v10.close();
              return v21;
            case 3:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v10 = v16;
              _pc = 4;
              continue _sm;
            case 4:
              if ( v10 != null )
              v10.close();
              throw _cv_2;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              _ehCatchPc = 10;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 8; continue _sm; }
              _pc = 2;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 10:
              _ehCatchPc = 13;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _pc = 4;
              continue _sm;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 13:
              _ehCatchPc = 18;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 14; continue _sm; }
              _cv_3 = (android.database.sqlite.SQLiteException)_ehCaught;
              v30 = _cv_3;
              v31 = v9;
              v4 = v11;
              _pc = 23;
              continue _sm;
            case 14:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 16; continue _sm; }
              _pc = 15;
              continue _sm;
            case 15:
              v6 = v9;
              _pc = 25;
              continue _sm;
            case 16:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 18:
              _ehCatchPc = 22;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 19; continue _sm; }
              _cv_4 = (android.database.sqlite.SQLiteException)_ehCaught;
              v30 = _cv_4;
              v31 = v9;
              v4 = v2;
              _pc = 23;
              continue _sm;
            case 19:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 20; continue _sm; }
              _pc = 15;
              continue _sm;
            case 20:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 22:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 24; continue _sm; }
              _cv_5 = (android.database.sqlite.SQLiteException)_ehCaught;
              v30 = _cv_5;
              v31 = null;
              v4 = v2;
              _pc = 23;
              continue _sm;
            case 23:
              try
              {
              aa.D("Error in peekHits fetching hitIds: " + v30.getMessage());
              }
              catch ( Throwable v27 )
              {
              v6 = v31;
              { _pc = 25; continue _sm; }
              }
              
              if ( v31 != null )
              v31.close();
              return v4;
            case 24:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 26; continue _sm; }
              _cv_6 = (Throwable)_ehCaught;
              _pc = 25;
              continue _sm;
            case 25:
              if ( v6 != null )
              v6.close();
              throw _cv_6;
            case 26:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
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

    /* synthetic */ static android.content.Context c(com.google.android.gms.analytics.ac p0)
    {
      return p0.e;
    }

    private void c()
    {
      int v1;
      java.util.List v2;
      v1 = this.e() - this.i + 1;
      if ( v1 > 0 )
      {
        v2 = this.a(v1);
        aa.C("Store full, deleting " + v2.size() + " hits to make room.");
        this.a((String[])v2.toArray(new String[0]));
      }
    }

    private int d()
    {
      int v1;
      long v2; // RETVAL
      android.database.sqlite.SQLiteDatabase v4;
      String[] v5;
      int v6;
      v1 = 0;
      v2 = this.j.a();
      if ( v2 > this.h + 86400000 )
      {
        this.h = v2;
        v4 = this.a("Error opening database for deleteStaleHits.");
        if ( v4 != null )
        {
          v5 = new String[1];
          v5[0] = java.lang.Long.toString(this.j.a() - 2592000000L);
          v6 = v4.delete("hits2", "HIT_TIME < ?", v5);
          this.d.a(this.e() == 0);
          return v6;
        }
      }
      return v1;
    }

    /* synthetic */ static String dp()
    {
      return a;
    }

    private int e()
    {
      int Long;
      android.database.sqlite.SQLiteDatabase v2; // RETVAL
      android.database.Cursor v4;
      Long = 0;
      v2 = this.a("Error opening database for getNumStoredHits.");
      if ( v2 == null )
        return Long;
      try
      {
        try
        {
          v4 = v2.rawQuery("SELECT COUNT(*) from hits2", null);
          if ( v4.moveToFirst() )
            Long = (int)v4.getLong(0);
          if ( v4 != null )
            v4.close();
          return Long;
        }
        catch ( android.database.sqlite.SQLiteException e )
        {
          aa.D("Error getting numStoredHits");
          return Long;
        }
      }
      finally
      {
      }
    }

    static String v(java.util.Map<String, String> p0)
    {
      java.util.List v1;
      java.util.Iterator v2;
      java.util.Map.Entry v3;
      v1 = new java.util.ArrayList(p0.size());
      v2 = p0.entrySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (java.util.Map.Entry)v2.next();
        v1.add(y.encode((String)v3.getKey()) + "=" + y.encode((String)v3.getValue()));
      }
      return TextUtils.join("&", v1);
    }

    public final void a()
    {
      boolean v1;
      com.google.android.gms.analytics.n c;
      java.util.List v3;
      com.google.android.gms.analytics.n v4;
      int v5;
      v1 = true;
      aa.C("Dispatch running...");
      c = this.c;
      if ( c.a() )
      {
        v3 = this.b(40);
        if ( v3.isEmpty() )
        {
          aa.C("...nothing to dispatch");
          this.d.a(true);
        }
        else
        {
          if ( this.g == null )
            this.g = new com.google.android.gms.analytics.ab("_t=dispatch&_v=ma4.0.2", true);
          if ( this.e() > v3.size() )
            v1 = false;
          v4 = this.c;
          v5 = v4.a(v3, this.g, v1);
          aa.C("sent " + v5 + " of " + v3.size() + " hits");
          this.a(v3.subList(0, Math.min(v5, v3.size())));
          if ( v5 == v3.size() && this.e() > 0 )
            GoogleAnalytics.getInstance(this.e).d();
          else
            this.g = null;
        }
      }
    }

    public final void a(long p0)
    {
      android.database.sqlite.SQLiteDatabase v2; // RETVAL
    
      v2 = this.a("Error opening database for clearHits");
      if ( v2 != null )
      {
        v2.delete("hits2", null, null);
        this.d.a(this.e() == 0);
      }
    }

    public final void a(
            java.util.Map<String, String> p0,
            long p1,
            String p3,
            java.util.Collection<com.google.android.gms.internal.fe> p4)
    {
      long v5 = 0L; // RETVAL
      int v6 = 0;
      java.util.List v7 = null;
      android.database.sqlite.SQLiteDatabase v8 = null;
      android.content.ContentValues v9 = null;
      long v10 = 0L;
      android.database.sqlite.SQLiteDatabase v11 = null;
      String[] v12 = null;
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
              v5 = this.j.a();
              if ( v5 > this.h + 86400000 )
              {
              this.h = v5;
              v11 = this.a("Error opening database for deleteStaleHits.");
              if ( v11 != null )
              {
              v12 = new String[1];
              v12[0] = java.lang.Long.toString(this.j.a() - 2592000000L);
              v11.delete("hits2", "HIT_TIME < ?", v12);
              this.d.a(this.e() == 0);
              }
              }
              v6 = this.e() - this.i + 1;
              if ( v6 > 0 )
              {
              v7 = this.a(v6);
              aa.C("Store full, deleting " + v7.size() + " hits to make room.");
              this.a((String[])v7.toArray(new String[0]));
              }
              a(p0, p4);
              v8 = this.a("Error opening database for putHit");
              if ( !(v8 != null) ) { _pc = 5; continue _sm; }
              v9 = new android.content.ContentValues();
              v9.put("hit_string", v(p0));
              v9.put("hit_time", java.lang.Long.valueOf(p1));
              if ( !(p0.containsKey("AppUID")) ) { _pc = 4; continue _sm; }
              _ehCatchPc = 2;
              v10 = java.lang.Long.parseLong((String)p0.get("AppUID"));
              _pc = 1;
              continue _sm;
            case 1:
              v9.put("hit_app_id", java.lang.Long.valueOf(v10));
              if ( p3 == null )
              p3 = "http://www.google-analytics.com/collect";
              if ( p3.length() != 0 )
              {
              v9.put("hit_url", p3);
              try
              {
              v8.insert("hits2", null, v9);
              this.d.a(false);
              }
              catch ( android.database.sqlite.SQLiteException e )
              {
              aa.D("Error storing hit");
              }
              }
              else
              {
              aa.D("Empty path: not sending hit");
              }
              return;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof NumberFormatException) ) { _pc = 3; continue _sm; }
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              v10 = 0;
              _pc = 1;
              continue _sm;
            case 5:
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

    public final com.google.android.gms.analytics.n b()
    {
      return this.c;
    }

}
