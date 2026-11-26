// Decompiled from classes.dex (SourceFile: v$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.os.Build;
class v$a extends android.database.sqlite.SQLiteOpenHelper {
    // Fields
    final com.google.android.gms.tagmanager.v a;

    // Methods
    v$a(com.google.android.gms.tagmanager.v p0, android.content.Context p1, String p2)
    {
      super(p1, p2, null, 1);
      this.a = p0;
    
    }

    private static void a(android.database.sqlite.SQLiteDatabase p0)
    {
      android.database.Cursor v1; // RETVAL
      android.database.Cursor v2;
      java.util.Set v3;
      Object[] ColumnNames;
      int i;
      v1 = p0.rawQuery("SELECT * FROM datalayer WHERE 0", null);
      v2 = v1;
      v3 = new java.util.HashSet();
      try
      {
        ColumnNames = v1.getColumnNames();
        for ( i = 0; i < ColumnNames.length; ++i )
          v3.add(ColumnNames[i]);
        v2.close();
        if ( !v3.remove("key") || !v3.remove("value") || !v3.remove("ID") || !v3.remove("expires") )
          throw new android.database.sqlite.SQLiteException("Database column missing");
        if ( !v3.isEmpty() )
          throw new android.database.sqlite.SQLiteException("Database has extra columns");
        return;
      }
      catch ( Throwable v6 )
      {
        v1.close();
        throw v6;
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
              bh.D("Error querying for table " + p0);
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
      WritableDatabase = null;
      try
      {
        WritableDatabase = super.getWritableDatabase();
      }
      catch ( android.database.sqlite.SQLiteException e )
      {
        v.b(this.a).getDatabasePath("google_tagmanager.db").delete();
      }
      if ( WritableDatabase == null )
        return super.getWritableDatabase();
      return WritableDatabase;
    }

    public void onCreate(android.database.sqlite.SQLiteDatabase p0)
    {
      ak.N(p0.getPath());
    }

    public void onOpen(android.database.sqlite.SQLiteDatabase p0)
    {
      android.database.Cursor v2; // RETVAL
      android.database.Cursor v3;
      android.database.Cursor v5; // RETVAL
      android.database.Cursor v6;
      java.util.Set v7;
      Object[] ColumnNames;
      int i;
      if ( Build.VERSION.SDK_INT < 15 )
      {
        v2 = p0.rawQuery("PRAGMA journal_mode=memory", null);
        v3 = v2;
        try
        {
          v2.moveToFirst();
        }
        catch ( Throwable v4 )
        {
          v2.close();
          throw v4;
        }
        v3.close();
      }
      if ( !a("datalayer", p0) )
      {
        p0.execSQL(v.lB());
        return;
      }
      v5 = p0.rawQuery("SELECT * FROM datalayer WHERE 0", null);
      v6 = v5;
      v7 = new java.util.HashSet();
      try
      {
        ColumnNames = v5.getColumnNames();
        for ( i = 0; i < ColumnNames.length; ++i )
          v7.add(ColumnNames[i]);
        v6.close();
        if ( !v7.remove("key") || !v7.remove("value") || !v7.remove("ID") || !v7.remove("expires") )
          throw new android.database.sqlite.SQLiteException("Database column missing");
        if ( !v7.isEmpty() )
          throw new android.database.sqlite.SQLiteException("Database has extra columns");
        return;
      }
      catch ( Throwable v10 )
      {
        v5.close();
        throw v10;
      }
    }

    public void onUpgrade(android.database.sqlite.SQLiteDatabase p0, int p1, int p2)
    {
      ;
    }

}
