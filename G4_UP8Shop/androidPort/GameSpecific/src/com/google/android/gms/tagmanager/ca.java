// Decompiled from classes.dex (SourceFile: ca.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.text.TextUtils;
import com.google.android.gms.internal.im;
import java.util.Collections;
class ca implements com.google.android.gms.tagmanager.at {
    // Fields
    private static final java.lang.String a;
    private final com.google.android.gms.tagmanager.ca$b b;
    private volatile com.google.android.gms.tagmanager.ab c;
    private final com.google.android.gms.tagmanager.au d;
    private final android.content.Context e;
    private final java.lang.String f;
    private long g;
    private com.google.android.gms.internal.ik h;
    private final int i;

    // Methods
    static
    {
      Object[] v0;
      v0 = new Object[5];
      v0[0] = "gtm_hits";
      v0[1] = "hit_id";
      v0[2] = "hit_time";
      v0[3] = "hit_url";
      v0[4] = "hit_first_send_time";
      a = String.format(
            "CREATE TABLE IF NOT EXISTS %s ( '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, '%s' INTEGER NOT NULL, '%s' TEX" +
            "T NOT NULL,'%s' INTEGER NOT NULL);",
            v0);
    }

    ca(com.google.android.gms.tagmanager.au p0, android.content.Context p1)
    {
      this(p0, p1, "gtm_urls.db", 2000);
    }

    private ca(com.google.android.gms.tagmanager.au p0, android.content.Context p1, String p2, int p3)
    {
      super();
      this.e = p1.getApplicationContext();
      this.f = p2;
      this.d = p0;
      this.h = im.fW();
      this.b = new com.google.android.gms.tagmanager.ca$b(this, this.e, this.f);
      this.c = (com.google.android.gms.tagmanager.ab)new com.google.android.gms.tagmanager.da(new org.apache.http.impl.client.DefaultHttpClient(), this.e, (com.google.android.gms.tagmanager.da$a)new com.google.android.gms.tagmanager.ca$a(this));
      this.g = 0;
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
        bh.D(p0);
        return null;
      }
    }

    /* synthetic */ static com.google.android.gms.internal.ik a(com.google.android.gms.tagmanager.ca p0)
    {
      return p0.h;
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
              v8 = v5.query("gtm_hits", v6, null, null, null, null, String.format("%s ASC", v7), Integer.toString(p0));
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
              bh.D("Error in peekHits fetching hitIds: " + _cv_1.getMessage());
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
              bh.D("Invalid maxHits specified. Skipping");
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

    private void a(long p0)
    {
      String[] v2;
      v2 = new String[1];
      v2[0] = String.valueOf(p0);
      this.a(v2);
    }

    private void a(long p0, long p2)
    {
      android.database.sqlite.SQLiteDatabase v3;
      android.content.ContentValues v4;
      String[] v5;
      v3 = this.a("Error opening database for getNumStoredHits.");
      if ( v3 != null )
      {
        v4 = new android.content.ContentValues();
        v4.put("hit_first_send_time", java.lang.Long.valueOf(p2));
        try
        {
          v5 = new String[1];
          v5[0] = String.valueOf(p0);
          v3.update("gtm_hits", v4, "hit_id=?", v5);
        }
        catch ( android.database.sqlite.SQLiteException e )
        {
          bh.D("Error setting HIT_FIRST_DISPATCH_TIME for hitId: " + p0);
          this.a(p0);
        }
      }
    }

    /* synthetic */ static void a(com.google.android.gms.tagmanager.ca p0, long p1)
    {
      p0.a(p1);
    }

    /* synthetic */ static void a(com.google.android.gms.tagmanager.ca p0, long p1, long p3)
    {
      android.database.sqlite.SQLiteDatabase v3;
      android.content.ContentValues v4;
      String[] v5;
      v3 = p0.a("Error opening database for getNumStoredHits.");
      if ( v3 != null )
      {
        v4 = new android.content.ContentValues();
        v4.put("hit_first_send_time", java.lang.Long.valueOf(p3));
        try
        {
          v5 = new String[1];
          v5[0] = String.valueOf(p1);
          v3.update("gtm_hits", v4, "hit_id=?", v5);
        }
        catch ( android.database.sqlite.SQLiteException e )
        {
          bh.D("Error setting HIT_FIRST_DISPATCH_TIME for hitId: " + p1);
          p0.a(p1);
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
            v2.delete("gtm_hits", v4, p0);
            this.d.a(this.d() == 0);
          }
          catch ( android.database.sqlite.SQLiteException e )
          {
            bh.D("Error deleting hits");
          }
        }
      }
    }

    /* synthetic */ static String b(com.google.android.gms.tagmanager.ca p0)
    {
      return p0.f;
    }

    private java.util.List<com.google.android.gms.tagmanager.ap> b(int p0)
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
      com.google.android.gms.tagmanager.ap v24 = null;
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
              v7 = new String[3];
              v7[0] = "hit_id";
              v7[1] = "hit_time";
              v7[2] = "hit_first_send_time";
              v8 = new Object[1];
              v8[0] = "hit_id";
              v9 = v3.query("gtm_hits", v7, null, null, null, null, String.format("%s ASC", v8), Integer.toString(40));
              v10 = v9;
              _ehCatchPc = 18;
              v11 = new java.util.ArrayList();
              _ehCatchPc = 13;
              if ( v9.moveToFirst() )
              {
              do
              v11.add(new com.google.android.gms.tagmanager.ap(v10.getLong(0), v10.getLong(1), v10.getLong(2)));
              while ( v10.moveToNext() );
              }
              if ( v10 != null )
              v10.close();
              _ehCatchPc = 10;
              _ehCatchPc = 7;
              v14 = new String[2];
              v14[0] = "hit_id";
              v14[1] = "hit_url";
              v15 = new Object[1];
              v15[0] = "hit_id";
              v16 = v3.query("gtm_hits", v14, null, null, null, null, String.format("%s ASC", v15), Integer.toString(40));
              v17 = v16;
              _ehCatchPc = 1;
              if ( v16.moveToFirst() )
              {
              for ( i = 0; ; ++i )
              {
              if ( ((android.database.sqlite.SQLiteCursor)v17).getWindow().getNumRows() <= 0 )
              {
              v20 = new Object[1];
              v20[0] = java.lang.Long.valueOf(((com.google.android.gms.tagmanager.ap)v11.get(i)).a());
              bh.D(String.format("HitString for hitId %d too large.  Hit will be deleted.", v20));
              }
              else
              {
              ((com.google.android.gms.tagmanager.ap)v11.get(i)).a(v17.getString(1));
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
              bh.D("Error in peekHits fetching hit url: " + _cv_1.getMessage());
              v21 = new java.util.ArrayList();
              v22 = 0;
              v23 = v11.iterator();
              while ( v23.hasNext() )
              {
              v24 = (com.google.android.gms.tagmanager.ap)v23.next();
              if ( TextUtils.isEmpty(v24.c()) )
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
              bh.D("Error in peekHits fetching hitIds: " + v30.getMessage());
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

    private void b()
    {
      int v1;
      java.util.List v2;
      v1 = this.d() - this.i + 1;
      if ( v1 > 0 )
      {
        v2 = this.a(v1);
        bh.C("Store full, deleting " + v2.size() + " hits to make room.");
        this.a((String[])v2.toArray(new String[0]));
      }
    }

    private void b(long p0, String p2)
    {
      android.database.sqlite.SQLiteDatabase v3;
      android.content.ContentValues v4;
      v3 = this.a("Error opening database for putHit");
      if ( v3 != null )
      {
        v4 = new android.content.ContentValues();
        v4.put("hit_time", java.lang.Long.valueOf(p0));
        v4.put("hit_url", p2);
        v4.put("hit_first_send_time", Integer.valueOf(0));
        try
        {
          v3.insert("gtm_hits", null, v4);
          this.d.a(false);
        }
        catch ( android.database.sqlite.SQLiteException e )
        {
          bh.D("Error storing hit");
        }
      }
    }

    private int c()
    {
      int v1;
      long v2; // RETVAL
      android.database.sqlite.SQLiteDatabase v4;
      String[] v5;
      int v6;
      v1 = 0;
      v2 = this.h.a();
      if ( v2 > this.g + 86400000 )
      {
        this.g = v2;
        v4 = this.a("Error opening database for deleteStaleHits.");
        if ( v4 != null )
        {
          v5 = new String[1];
          v5[0] = java.lang.Long.toString(this.h.a() - 2592000000L);
          v6 = v4.delete("gtm_hits", "HIT_TIME < ?", v5);
          this.d.a(this.d() == 0);
          return v6;
        }
      }
      return v1;
    }

    /* synthetic */ static android.content.Context c(com.google.android.gms.tagmanager.ca p0)
    {
      return p0.e;
    }

    private int d()
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
          v4 = v2.rawQuery("SELECT COUNT(*) from gtm_hits", null);
          if ( v4.moveToFirst() )
            Long = (int)v4.getLong(0);
          if ( v4 != null )
            v4.close();
          return Long;
        }
        catch ( android.database.sqlite.SQLiteException e )
        {
          bh.D("Error getting numStoredHits");
          return Long;
        }
      }
      finally
      {
      }
    }

    private int e()
    {
      int v1 = 0;
      android.database.Cursor v2 = null;
      android.database.sqlite.SQLiteDatabase v3 = null; // RETVAL
      String[] v5 = null;
      android.database.Cursor v6 = null; // RETVAL
      android.database.Cursor v7 = null;
      int Count = 0;
      Object v10 = null;
      android.database.Cursor v11 = null;
      Throwable _cv_1 = null;
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
              v1 = 0;
              v2 = null;
              v3 = this.a("Error opening database for getNumStoredHits.");
              if ( !(v3 != null) ) { _pc = 6; continue _sm; }
              _ehCatchPc = 1;
              v5 = new String[2];
              v5[0] = "hit_id";
              v5[1] = "hit_first_send_time";
              v6 = v3.query("gtm_hits", v5, "hit_first_send_time=0", null, null, null, null);
              v7 = v6;
              try
              {
              Count = v6.getCount();
              if ( v7 != null )
              v7.close();
              return Count;
              }
              catch ( android.database.sqlite.SQLiteException e )
              {
              v11 = v6;
              { _pc = 2; continue _sm; }
              }
              catch ( Throwable v13 )
              {
              v10 = v13;
              v2 = v6;
              { _pc = 4; continue _sm; }
              }
              



            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 3; continue _sm; }
              v11 = null;
              _pc = 2;
              continue _sm;
            case 2:
              try
              {
              bh.D("Error getting num untried hits");
              }
              catch ( Throwable v9 )
              {
              v2 = v11;
              v10 = v9;
              { _pc = 4; continue _sm; }
              }
              
              if ( v11 != null )
              v11.close();
              return 0;
            case 3:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v10 = _cv_1;
              _pc = 4;
              continue _sm;
            case 4:
              if ( v2 != null )
              v2.close();
              throw com.gameloft.android.DecompRT.sneakyThrow(v10);
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              return v1;
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

    /* synthetic */ static String lX()
    {
      return a;
    }

    public final void a()
    {
      com.google.android.gms.tagmanager.ab c;
      java.util.List v2;
      com.google.android.gms.tagmanager.ab v3;
      bh.C("GTM Dispatch running...");
      c = this.c;
      if ( c.a() )
      {
        v2 = this.b(40);
        if ( v2.isEmpty() )
        {
          bh.C("...nothing to dispatch");
          this.d.a(true);
        }
        else
        {
          v3 = this.c;
          v3.a(v2);
          if ( this.e() > 0 )
            cx.mL().c();
        }
      }
    }

    public final void a(long p0, String p2)
    {
      long v3; // RETVAL
      int v4;
      java.util.List v5;
      android.database.sqlite.SQLiteDatabase v6;
      android.content.ContentValues v7;
      android.database.sqlite.SQLiteDatabase v8;
      String[] v9;
      v3 = this.h.a();
      if ( v3 > this.g + 86400000 )
      {
        this.g = v3;
        v8 = this.a("Error opening database for deleteStaleHits.");
        if ( v8 != null )
        {
          v9 = new String[1];
          v9[0] = java.lang.Long.toString(this.h.a() - 2592000000L);
          v8.delete("gtm_hits", "HIT_TIME < ?", v9);
          this.d.a(this.d() == 0);
        }
      }
      v4 = this.d() - this.i + 1;
      if ( v4 > 0 )
      {
        v5 = this.a(v4);
        bh.C("Store full, deleting " + v5.size() + " hits to make room.");
        this.a((String[])v5.toArray(new String[0]));
      }
      v6 = this.a("Error opening database for putHit");
      if ( v6 != null )
      {
        v7 = new android.content.ContentValues();
        v7.put("hit_time", java.lang.Long.valueOf(p0));
        v7.put("hit_url", p2);
        v7.put("hit_first_send_time", Integer.valueOf(0));
        try
        {
          v6.insert("gtm_hits", null, v7);
          this.d.a(false);
        }
        catch ( android.database.sqlite.SQLiteException e )
        {
          bh.D("Error storing hit");
        }
      }
    }

}
