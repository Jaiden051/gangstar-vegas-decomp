// Decompiled from classes.dex (SourceFile: ac$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.os.Build;
class ac$a extends android.database.sqlite.SQLiteOpenHelper {
    // Fields
    final com.google.android.gms.analytics.ac a;
    private boolean b;
    private long c;

    // Methods
    ac$a(com.google.android.gms.analytics.ac p0, android.content.Context p1, String p2)
    {
      super(p1, p2, null, 1);
      this.a = p0;
      this.c = 0;
    
    }

    private static void a(android.database.sqlite.SQLiteDatabase p0)
    {
      int v1;
      android.database.Cursor v2; // RETVAL
      android.database.Cursor v3;
      java.util.Set v4;
      Object[] ColumnNames;
      int i;
      v1 = 0;
      v2 = p0.rawQuery("SELECT * FROM hits2 WHERE 0", null);
      v3 = v2;
      v4 = new java.util.HashSet();
      try
      {
        ColumnNames = v2.getColumnNames();
        for ( i = 0; i < ColumnNames.length; ++i )
          v4.add(ColumnNames[i]);
        v3.close();
        if ( !v4.remove("hit_id") || !v4.remove("hit_url") || !v4.remove("hit_string") || !v4.remove("hit_time") )
          throw new android.database.sqlite.SQLiteException("Database column missing");
        if ( !v4.remove("hit_app_id") )
          v1 = 1;
        if ( !v4.isEmpty() )
          throw new android.database.sqlite.SQLiteException("Database has extra columns");
        if ( v1 != 0 )
          p0.execSQL("ALTER TABLE hits2 ADD COLUMN hit_app_id");
        return;
      }
      catch ( Throwable v7 )
      {
        v2.close();
        throw v7;
      }
    }

    private static boolean a(String p0, android.database.sqlite.SQLiteDatabase p1)
    {
      android.database.Cursor v2 = null;
      String[] v3 = null;
      String[] v4 = null;
      android.database.Cursor v6 = null; // RETVAL
      android.database.Cursor v7 = null;
      boolean v8 = false;
      Object v11 = null;
      android.database.Cursor v12 = null;
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
              v2 = null;
              _ehCatchPc = 1;
              v3 = new String[1];
              v3[0] = "name";
              v4 = new String[1];
              v4[0] = p0;
              v6 = p1.query("SQLITE_MASTER", v3, "name=?", v4, null, null, null);
              v7 = v6;
              try
              {
              v8 = v6.moveToFirst();
              if ( v7 != null )
              v7.close();
              return v8;
              }
              catch ( android.database.sqlite.SQLiteException e )
              {
              v12 = v6;
              { _pc = 2; continue _sm; }
              }
              catch ( Throwable v14 )
              {
              v11 = v14;
              v2 = v6;
              { _pc = 4; continue _sm; }
              }
              



            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 3; continue _sm; }
              v12 = null;
              _pc = 2;
              continue _sm;
            case 2:
              try
              {
              aa.D("Error querying for table " + p0);
              }
              catch ( Throwable v10 )
              {
              v2 = v12;
              v11 = v10;
              { _pc = 4; continue _sm; }
              }
              
              if ( v12 != null )
              v12.close();
              return false;
            case 3:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v11 = _cv_1;
              _pc = 4;
              continue _sm;
            case 4:
              if ( v2 != null )
              v2.close();
              throw com.gameloft.android.DecompRT.sneakyThrow(v11);
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              throw new IllegalStateException("Unreachable");
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

    public android.database.sqlite.SQLiteDatabase getWritableDatabase()
    {
      android.database.sqlite.SQLiteDatabase WritableDatabase;
      if ( this.b && this.c + 3600000 > ac.a(this.a).a() )
        throw new android.database.sqlite.SQLiteException("Database creation failed");
      WritableDatabase = null;
      this.b = true;
      this.c = ac.a(this.a).a();
      try
      {
        WritableDatabase = super.getWritableDatabase();
      }
      catch ( android.database.sqlite.SQLiteException e )
      {
        ac.c(this.a).getDatabasePath(ac.b(this.a)).delete();
      }
      if ( WritableDatabase == null )
        WritableDatabase = super.getWritableDatabase();
      this.b = false;
      return WritableDatabase;
    }

    public void onCreate(android.database.sqlite.SQLiteDatabase p0)
    {
      p.N(p0.getPath());
    }

    public void onOpen(android.database.sqlite.SQLiteDatabase p0)
    {
      int v2;
      android.database.Cursor v3; // RETVAL
      android.database.Cursor v4;
      android.database.Cursor v6; // RETVAL
      android.database.Cursor v7;
      java.util.Set v8;
      Object[] ColumnNames;
      int i;
      v2 = 0;
      if ( Build.VERSION.SDK_INT < 15 )
      {
        v3 = p0.rawQuery("PRAGMA journal_mode=memory", null);
        v4 = v3;
        try
        {
          v3.moveToFirst();
        }
        catch ( Throwable v5 )
        {
          v3.close();
          throw v5;
        }
        v4.close();
      }
      if ( !a("hits2", p0) )
      {
        p0.execSQL(ac.dp());
        return;
      }
      v6 = p0.rawQuery("SELECT * FROM hits2 WHERE 0", null);
      v7 = v6;
      v8 = new java.util.HashSet();
      try
      {
        ColumnNames = v6.getColumnNames();
        for ( i = 0; i < ColumnNames.length; ++i )
          v8.add(ColumnNames[i]);
        v7.close();
        if ( !v8.remove("hit_id") || !v8.remove("hit_url") || !v8.remove("hit_string") || !v8.remove("hit_time") )
          throw new android.database.sqlite.SQLiteException("Database column missing");
        if ( !v8.remove("hit_app_id") )
          v2 = 1;
        if ( !v8.isEmpty() )
          throw new android.database.sqlite.SQLiteException("Database has extra columns");
        if ( v2 != 0 )
          p0.execSQL("ALTER TABLE hits2 ADD COLUMN hit_app_id");
        return;
      }
      catch ( Throwable v11 )
      {
        v6.close();
        throw com.gameloft.android.DecompRT.sneakyThrow(v11);
      }
    }

    public void onUpgrade(android.database.sqlite.SQLiteDatabase p0, int p1, int p2)
    {
      ;
    }

}
