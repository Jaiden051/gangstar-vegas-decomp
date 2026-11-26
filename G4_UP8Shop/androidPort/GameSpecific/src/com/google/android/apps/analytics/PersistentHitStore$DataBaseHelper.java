// Decompiled from classes.dex (SourceFile: PersistentHitStore$DataBaseHelper.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

import android.util.Log;
final class PersistentHitStore$DataBaseHelper extends android.database.sqlite.SQLiteOpenHelper {
    // Fields
    private final int a;
    private final com.google.android.apps.analytics.PersistentHitStore b;

    // Methods
    private PersistentHitStore$DataBaseHelper(android.content.Context p0, com.google.android.apps.analytics.PersistentHitStore p1)
    {
      this(p0, "google_analytics.db", 5, p1);
    }

    PersistentHitStore$DataBaseHelper(android.content.Context p0, String p1, int p2, com.google.android.apps.analytics.PersistentHitStore p3)
    {
      super(p0, p1, null, p2);
      this.a = p2;
      this.b = p3;
    }

    private PersistentHitStore$DataBaseHelper(android.content.Context p0, String p1, com.google.android.apps.analytics.PersistentHitStore p2)
    {
      this(p0, p1, 5, p2);
    }

    private void a(android.database.sqlite.SQLiteDatabase p0)
    {
      android.database.Cursor v2 = null; // RETVAL
      android.database.Cursor v3 = null;
      Object[] ColumnNames = null;
      int v5 = 0;
      int v6 = 0;
      int v7 = 0;
      int ColumnIndex = 0;
      int v9 = 0;
      com.google.android.apps.analytics.q v10 = null;
      String String = null;
      long Long = 0L;
      int Int = 0;
      int v14 = 0;
      com.google.android.apps.analytics.q v15 = null;
      android.content.ContentValues v16 = null;
      android.database.Cursor v19 = null;
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
              _ehCatchPc = 1;
              v2 = p0.query("referrer", null, null, null, null, null, null);
              v3 = v2;
              try
              {
              ColumnNames = v2.getColumnNames();
              v5 = 0;
              v6 = 0;
              v7 = 0;
              while ( v5 < ColumnNames.length )
              {
              if ( ColumnNames[v5].equals("referrer_index") )
              {
              v7 = 1;
              }
              else if ( ColumnNames[v5].equals("referrer_visit") )
              {
              v6 = 1;
              }
              ++v5;
              }
              if ( v7 == 0 || v6 == 0 )
              {
              if ( v3.moveToFirst() )
              {
              ColumnIndex = v3.getColumnIndex("referrer_visit");
              v9 = v3.getColumnIndex("referrer_index");
              v10 = null;
              String = v3.getString(v3.getColumnIndex("referrer"));
              Long = v3.getLong(v3.getColumnIndex("timestamp_referrer"));
              if ( ColumnIndex == -1 )
              Int = 1;
              else
              Int = v3.getInt(ColumnIndex);
              if ( v9 == -1 )
              v14 = 1;
              else
              v14 = v3.getInt(v9);
              v15 = (v10 = new com.google.android.apps.analytics.q(String, Long, Int, v14));
              }
              else
              {
              v15 = null;
              }
              p0.beginTransaction();
              createReferrerTable(p0);
              if ( v15 != null )
              {
              v16 = new android.content.ContentValues();
              v16.put("referrer", v15.a());
              v16.put("timestamp_referrer", java.lang.Long.valueOf(v15.b()));
              v16.put("referrer_visit", Integer.valueOf(v15.c()));
              v16.put("referrer_index", Integer.valueOf(v15.d()));
              p0.insert("referrer", null, v16);
              }
              p0.setTransactionSuccessful();
              }
              if ( v3 != null )
              v3.close();
              if ( p0.inTransaction() )
              PersistentHitStore.access$900(p0);
              }
              catch ( android.database.sqlite.SQLiteException v18 )
              {
              v19 = v2;
              { _pc = 2; continue _sm; }
              }
              catch ( Throwable v17 )
              {
              { _pc = 4; continue _sm; }
              }
              
              _ehCatchPc = -1;
              _pc = 6;
              continue _sm;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 3; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              v19 = null;
              _pc = 2;
              continue _sm;
            case 2:
              try
              {
              Log.e("GoogleAnalyticsTracker", _cv_1.toString());
              }
              catch ( Throwable v17 )
              {
              v3 = v19;
              { _pc = 4; continue _sm; }
              }
              
              if ( v19 != null )
              v19.close();
              if ( p0.inTransaction() )
              PersistentHitStore.access$900(p0);
              _pc = 6;
              continue _sm;
            case 3:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v3 = null;
              _pc = 4;
              continue _sm;
            case 4:
              if ( v3 != null )
              v3.close();
              if ( p0.inTransaction() )
              PersistentHitStore.access$900(p0);
              throw _cv_2;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
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

    private void a(android.database.sqlite.SQLiteDatabase p0, int p1)
    {
      com.google.android.apps.analytics.e[] v3; // RETVAL
      int i;
      this.b.a(p0);
      PersistentHitStore.access$702(this.b, PersistentHitStore.getVisitorVarBuffer(p0));
      v3 = this.b.a(1000, p0, p1);
      for ( i = 0; i < v3.length; ++i )
        PersistentHitStore.access$800(this.b, v3[i], p0, false);
      p0.execSQL("DELETE from events;");
      p0.execSQL("DELETE from item_events;");
      p0.execSQL("DELETE from transaction_events;");
      p0.execSQL("DELETE from custom_variables;");
    }

    private static void createCustomVariableTables(
            android.database.sqlite.SQLiteDatabase p0)
    {
      int i;
      android.content.ContentValues v2;
      p0.execSQL("DROP TABLE IF EXISTS custom_variables;");
      p0.execSQL(PersistentHitStore.access$200());
      p0.execSQL("DROP TABLE IF EXISTS custom_var_cache;");
      p0.execSQL(PersistentHitStore.access$300());
      for ( i = 1; i <= 5; ++i )
      {
        v2 = new android.content.ContentValues();
        v2.put("event_id", Integer.valueOf(0));
        v2.put("cv_index", Integer.valueOf(i));
        v2.put("cv_name", "");
        v2.put("cv_scope", Integer.valueOf(3));
        v2.put("cv_value", "");
        p0.insert("custom_var_cache", "event_id", v2);
      }
    }

    private static void createECommerceTables(android.database.sqlite.SQLiteDatabase p0)
    {
      p0.execSQL("DROP TABLE IF EXISTS transaction_events;");
      p0.execSQL(PersistentHitStore.access$400());
      p0.execSQL("DROP TABLE IF EXISTS item_events;");
      p0.execSQL(PersistentHitStore.access$500());
    }

    private static void createHitTable(android.database.sqlite.SQLiteDatabase p0)
    {
      p0.execSQL("DROP TABLE IF EXISTS hits;");
      p0.execSQL(PersistentHitStore.access$600());
    }

    private static void createReferrerTable(android.database.sqlite.SQLiteDatabase p0)
    {
      p0.execSQL("DROP TABLE IF EXISTS referrer;");
      p0.execSQL("CREATE TABLE IF NOT EXISTS referrer (referrer TEXT PRIMARY KEY NOT NULL,timestamp_referrer INTEGER NOT NULL" +
                 ",referrer_visit INTEGER NOT NULL DEFAULT 1,referrer_index INTEGER NOT NULL DEFAULT 1);");
    }

    private static void migratePreV4Referrer(android.database.sqlite.SQLiteDatabase p0)
    {
      android.database.Cursor v1 = null;
      String[] v2 = null;
      android.database.Cursor v3 = null; // RETVAL
      android.database.Cursor v4 = null;
      String String = null;
      android.database.Cursor v6 = null; // RETVAL
      android.database.Cursor v7 = null;
      long Long = 0L;
      android.content.ContentValues v9 = null;
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
              v1 = null;
              _ehCatchPc = 7;
              v2 = new String[1];
              v2[0] = "referrer";
              v3 = p0.query("install_referrer", v2, null, null, null, null, null);
              v4 = v3;
              _ehCatchPc = 3;
              if ( !(!v3.moveToFirst()) ) { _pc = 2; continue _sm; }
              v7 = null;
              _pc = 1;
              continue _sm;
            case 1:
              if ( v4 != null )
              v4.close();
              if ( v7 != null )
              v7.close();
              return;
            case 2:
              String = v4.getString(0);
              v6 = p0.query("session", null, null, null, null, null, null);
              v7 = v6;
              try
              {
              if ( v6.moveToFirst() )
              Long = v7.getLong(0);
              else
              Long = 0;
              v9 = new android.content.ContentValues();
              v9.put("referrer", String);
              v9.put("timestamp_referrer", java.lang.Long.valueOf(Long));
              v9.put("referrer_visit", Integer.valueOf(1));
              v9.put("referrer_index", Integer.valueOf(1));
              p0.insert("referrer", null, v9);
              { _pc = 1; continue _sm; }
              }
              catch ( android.database.sqlite.SQLiteException v11 )
              {
              v1 = v4;
              { _pc = 8; continue _sm; }
              }
              catch ( Throwable v10 )
              {
              { _pc = 10; continue _sm; }
              }
              



            case 3:
              _ehCatchPc = 7;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 4; continue _sm; }
              v7 = null;
              v1 = v3;
              _pc = 8;
              continue _sm;
            case 4:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              v7 = null;
              _pc = 10;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              _ehCatchPc = -1;
              _pc = 12;
              continue _sm;
            case 7:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 9; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              v7 = null;
              _pc = 8;
              continue _sm;
            case 8:
              try
              {
              Log.e("GoogleAnalyticsTracker", _cv_1.toString());
              }
              catch ( Throwable v10 )
              {
              v4 = v1;
              { _pc = 10; continue _sm; }
              }
              
              if ( v1 != null )
              v1.close();
              if ( v7 != null )
              v7.close();
              _pc = 12;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v7 = null;
              v4 = null;
              _pc = 10;
              continue _sm;
            case 10:
              if ( v4 != null )
              v4.close();
              if ( v7 != null )
              v7.close();
              throw _cv_2;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 12:
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

    public final void onCreate(android.database.sqlite.SQLiteDatabase p0)
    {
      p0.execSQL("DROP TABLE IF EXISTS events;");
      p0.execSQL(PersistentHitStore.access$000());
      p0.execSQL("DROP TABLE IF EXISTS install_referrer;");
      p0.execSQL("CREATE TABLE install_referrer (referrer TEXT PRIMARY KEY NOT NULL);");
      p0.execSQL("DROP TABLE IF EXISTS session;");
      p0.execSQL(PersistentHitStore.access$100());
      if ( this.a > 1 )
        createCustomVariableTables(p0);
      if ( this.a > 2 )
        createECommerceTables(p0);
      if ( this.a > 3 )
      {
        createHitTable(p0);
        createReferrerTable(p0);
      }
    }

    public final void onDowngrade(
            android.database.sqlite.SQLiteDatabase p0,
            int p1,
            int p2)
    {
      java.util.Set v4 = null;
      android.database.Cursor v5 = null;
      int v7 = 0;
      android.content.ContentValues v8 = null;
      Object v9 = null;
      android.database.sqlite.SQLiteException _cv_1 = null;
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
              Log.w("GoogleAnalyticsTracker", "Downgrading database version from " + p1 + " to " + p2 + " not recommended.");
              p0.execSQL("CREATE TABLE IF NOT EXISTS referrer (referrer TEXT PRIMARY KEY NOT NULL,timestamp_referrer INTEGER NOT NULL" +
              ",referrer_visit INTEGER NOT NULL DEFAULT 1,referrer_index INTEGER NOT NULL DEFAULT 1);");
              p0.execSQL(PersistentHitStore.access$600());
              p0.execSQL(PersistentHitStore.access$300());
              p0.execSQL(PersistentHitStore.access$100());
              v4 = new java.util.HashSet();
              v5 = p0.query("custom_var_cache", null, null, null, null, null, null, null);
              _pc = 1;
              continue _sm;
            case 1:
              _ehEx = null;
              _ehCatchPc = 7;
              _ehCatchPc = 3;
              if ( v5.moveToNext() )
              {
              v4.add(Integer.valueOf(v5.getInt(v5.getColumnIndex("cv_index"))));
              { _pc = 5; continue _sm; }
              }
              v5.close();
              _pc = 2;
              continue _sm;
            case 2:
              v7 = 1;
              while ( true )
              {
              if ( v7 <= 5 )
              {
              try
              {
              if ( !v4.contains(Integer.valueOf(v7)) )
              {
              v8 = new android.content.ContentValues();
              v8.put("event_id", Integer.valueOf(0));
              v8.put("cv_index", Integer.valueOf(v7));
              v8.put("cv_name", "");
              v8.put("cv_scope", Integer.valueOf(3));
              v8.put("cv_value", "");
              p0.insert("custom_var_cache", "event_id", v8);
              }
              }
              catch ( android.database.sqlite.SQLiteException v10 )
              {
              Log.e("GoogleAnalyticsTracker", "Error inserting custom variable on downgrade: " + v10.toString());
              }
              ++v7;
              continue;
              }
              return;
              }



            case 3:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 4; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              Log.e("GoogleAnalyticsTracker", "Error on downgrade: " + _cv_1.toString());
              _pc = 10;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _pc = 1;
              continue _sm;
            case 7:
              _ehCatchPc = -1;
              if ( !((_ehEx != null)) ) { _pc = 8; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v9 = _ehCaught;
              v5.close();
              throw com.gameloft.android.DecompRT.sneakyThrow(v9);
            case 8:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 9;
              continue _sm;
            case 9:
              _ehCatchPc = -1;
              _pc = 10;
              continue _sm;
            case 10:
              v5.close();
              _pc = 2;
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

    public final void onOpen(android.database.sqlite.SQLiteDatabase p0)
    {
      android.database.Cursor v2 = null; // RETVAL
      android.database.Cursor v3 = null;
      Object[] ColumnNames = null;
      int v5 = 0;
      int v6 = 0;
      int v7 = 0;
      int ColumnIndex = 0;
      int v9 = 0;
      com.google.android.apps.analytics.q v10 = null;
      String String = null;
      long Long = 0L;
      int Int = 0;
      int v14 = 0;
      com.google.android.apps.analytics.q v15 = null;
      android.content.ContentValues v16 = null;
      android.database.Cursor v19 = null;
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
              if ( p0.isReadOnly() )
              {
              Log.w("GoogleAnalyticsTracker", "Warning: Need to update database, but it's read only.");
              return;
              }
              _ehCatchPc = 1;
              v2 = p0.query("referrer", null, null, null, null, null, null);
              v3 = v2;
              try
              {
              ColumnNames = v2.getColumnNames();
              v5 = 0;
              v6 = 0;
              v7 = 0;
              while ( v5 < ColumnNames.length )
              {
              if ( ColumnNames[v5].equals("referrer_index") )
              {
              v7 = 1;
              }
              else if ( ColumnNames[v5].equals("referrer_visit") )
              {
              v6 = 1;
              }
              ++v5;
              }
              if ( v7 == 0 || v6 == 0 )
              {
              if ( v3.moveToFirst() )
              {
              ColumnIndex = v3.getColumnIndex("referrer_visit");
              v9 = v3.getColumnIndex("referrer_index");
              v10 = null;
              String = v3.getString(v3.getColumnIndex("referrer"));
              Long = v3.getLong(v3.getColumnIndex("timestamp_referrer"));
              if ( ColumnIndex == -1 )
              Int = 1;
              else
              Int = v3.getInt(ColumnIndex);
              if ( v9 == -1 )
              v14 = 1;
              else
              v14 = v3.getInt(v9);
              v15 = (v10 = new com.google.android.apps.analytics.q(String, Long, Int, v14));
              }
              else
              {
              v15 = null;
              }
              p0.beginTransaction();
              createReferrerTable(p0);
              if ( v15 != null )
              {
              v16 = new android.content.ContentValues();
              v16.put("referrer", v15.a());
              v16.put("timestamp_referrer", java.lang.Long.valueOf(v15.b()));
              v16.put("referrer_visit", Integer.valueOf(v15.c()));
              v16.put("referrer_index", Integer.valueOf(v15.d()));
              p0.insert("referrer", null, v16);
              }
              p0.setTransactionSuccessful();
              }
              if ( v3 != null )
              v3.close();
              if ( p0.inTransaction() )
              PersistentHitStore.access$900(p0);
              }
              catch ( android.database.sqlite.SQLiteException v18 )
              {
              v19 = v2;
              { _pc = 2; continue _sm; }
              }
              catch ( Throwable v17 )
              {
              { _pc = 4; continue _sm; }
              }
              
              _ehCatchPc = -1;
              _pc = 6;
              continue _sm;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 3; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              v19 = null;
              _pc = 2;
              continue _sm;
            case 2:
              try
              {
              Log.e("GoogleAnalyticsTracker", _cv_1.toString());
              }
              catch ( Throwable v17 )
              {
              v3 = v19;
              { _pc = 4; continue _sm; }
              }
              
              if ( v19 != null )
              v19.close();
              if ( p0.inTransaction() )
              PersistentHitStore.access$900(p0);
              _pc = 6;
              continue _sm;
            case 3:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v3 = null;
              _pc = 4;
              continue _sm;
            case 4:
              if ( v3 != null )
              v3.close();
              if ( p0.inTransaction() )
              PersistentHitStore.access$900(p0);
              throw _cv_2;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
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

    public final void onUpgrade(
            android.database.sqlite.SQLiteDatabase p0,
            int p1,
            int p2)
    {
      com.google.android.apps.analytics.e[] v4 = null; // RETVAL
      int i = 0;
      android.database.Cursor v6 = null;
      String[] v7 = null;
      android.database.Cursor v8 = null; // RETVAL
      String String = null;
      android.database.Cursor v10 = null; // RETVAL
      android.database.Cursor v11 = null;
      long Long = 0L;
      android.content.ContentValues v13 = null;
      android.database.Cursor v16 = null;
      Throwable _cv_1 = null;
      android.database.sqlite.SQLiteException _cv_2 = null;
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
              if ( p1 > p2 )
              {
              this.onDowngrade(p0, p1, p2);
              return;
              }
              if ( p1 < 2 && p2 > 1 )
              createCustomVariableTables(p0);
              if ( p1 < 3 && p2 > 2 )
              createECommerceTables(p0);
              if ( p1 >= 4 || p2 <= 3 )
              return;
              createHitTable(p0);
              createReferrerTable(p0);
              this.b.a(p0);
              PersistentHitStore.access$702(this.b, PersistentHitStore.getVisitorVarBuffer(p0));
              v4 = this.b.a(1000, p0, p1);
              for ( i = 0; i < v4.length; ++i )
              PersistentHitStore.access$800(this.b, v4[i], p0, false);
              p0.execSQL("DELETE from events;");
              p0.execSQL("DELETE from item_events;");
              p0.execSQL("DELETE from transaction_events;");
              p0.execSQL("DELETE from custom_variables;");
              v6 = null;
              _ehCatchPc = 13;
              v7 = new String[1];
              v7[0] = "referrer";
              v8 = p0.query("install_referrer", v7, null, null, null, null, null);
              v6 = v8;
              _ehCatchPc = 8;
              if ( !(!v8.moveToFirst()) ) { _pc = 2; continue _sm; }
              v11 = null;
              _pc = 1;
              continue _sm;
            case 1:
              if ( v6 != null )
              v6.close();
              if ( v11 != null )
              v11.close();
              return;
            case 2:
              String = v6.getString(0);
              v10 = p0.query("session", null, null, null, null, null, null);
              v11 = v10;
              _ehCatchPc = 3;
              if ( v10.moveToFirst() )
              Long = v11.getLong(0);
              else
              Long = 0;
              v13 = new android.content.ContentValues();
              v13.put("referrer", String);
              v13.put("timestamp_referrer", java.lang.Long.valueOf(Long));
              v13.put("referrer_visit", Integer.valueOf(1));
              v13.put("referrer_index", Integer.valueOf(1));
              p0.insert("referrer", null, v13);
              _pc = 1;
              continue _sm;
            case 3:
              _ehCatchPc = 8;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 4; continue _sm; }
              v16 = v6;
              _pc = 14;
              continue _sm;
            case 4:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 6; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              _pc = 5;
              continue _sm;
            case 5:
              if ( v6 != null )
              v6.close();
              if ( v11 != null )
              v11.close();
              throw _cv_1;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              _ehCatchPc = 13;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 9; continue _sm; }
              v11 = null;
              v16 = v8;
              _pc = 14;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _pc = 10;
              continue _sm;
            case 10:
              v11 = null;
              _pc = 5;
              continue _sm;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 13:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 15; continue _sm; }
              _cv_2 = (android.database.sqlite.SQLiteException)_ehCaught;
              v11 = null;
              v16 = null;
              _pc = 14;
              continue _sm;
            case 14:
              try
              {
              Log.e("GoogleAnalyticsTracker", _cv_2.toString());
              }
              catch ( Throwable v14 )
              {
              v6 = v16;
              { _pc = 5; continue _sm; }
              }
              
              if ( v16 != null )
              v16.close();
              if ( v11 != null )
              v11.close();
              _pc = 17;
              continue _sm;
            case 15:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 16; continue _sm; }
              _pc = 10;
              continue _sm;
            case 16:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 17:
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

}
