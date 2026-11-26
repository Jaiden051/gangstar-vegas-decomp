// Decompiled from classes.dex (SourceFile: cy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.SystemClock;
public class cy {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.Object c;
    private static com.google.android.gms.internal.cy d;
    private final com.google.android.gms.internal.cy$a b;

    // Methods
    static
    {
      Object[] v0;
      v0 = new Object[5];
      v0[0] = "InAppPurchase";
      v0[1] = "purchase_id";
      v0[2] = "product_id";
      v0[3] = "developer_payload";
      v0[4] = "record_time";
      a = String.format(
              "CREATE TABLE IF NOT EXISTS %s ( %s INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, %s TEXT NOT NULL, %s TEXT NOT N" +
              "ULL, %s INTEGER)",
              v0);
      c = new Object();
    }

    private cy(android.content.Context p0)
    {
      super();
      this.b = new com.google.android.gms.internal.cy$a(this, p0, "google_inapp_purchase.db");
    }

    private android.database.sqlite.SQLiteDatabase a()
    {
      try
      {
        return this.b.getWritableDatabase();
      }
      catch ( android.database.sqlite.SQLiteException e )
      {
        ev.D("Error opening writable conversion tracking database");
        return null;
      }
    }

    private static com.google.android.gms.internal.cw a(android.database.Cursor p0)
    {
      if ( p0 != null )
        return new com.google.android.gms.internal.cw(p0.getLong(0), p0.getString(1), p0.getString(2));
      else
        return null;
    }

    private int b()
    {
      int Int;
      Object v2;
      android.database.sqlite.SQLiteDatabase v3; // RETVAL
      android.database.Cursor v5;
      Int = 0;
      v2 = c;
      synchronized ( v2 )
      {
        v3 = this.a();
        if ( v3 == null )
          return Int;
        try
        {
          try
          {
            v5 = v3.rawQuery("select count(*) from InAppPurchase", null);
            if ( v5.moveToFirst() )
            {
              Int = v5.getInt(0);
              if ( v5 != null )
                v5.close();
              return Int;
            }
            if ( v5 != null )
              v5.close();
          }
          catch ( android.database.sqlite.SQLiteException v7 )
          {
            ev.D("Error getting record count" + v7.getMessage());
            return Int;
          }
          return Int;
        }
        finally
        {
        }
      }
    }

    /* synthetic */ static String bg()
    {
      return a;
    }

    private void c()
    {
      Object v1 = null;
      android.database.sqlite.SQLiteDatabase v2 = null; // RETVAL
      android.database.Cursor v3 = null; // RETVAL
      android.database.Cursor v4 = null;
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
              v1 = c;
              com.gameloft.android.DecompRT.monitorEnter(v1);
              v2 = this.a();
              if ( v2 == null )
              return;
              _ehCatchPc = 10;
              v3 = v2.query("InAppPurchase", null, null, null, null, null, "record_time ASC", "1");
              v4 = v3;
              if ( !(v3 == null) ) { _pc = 2; continue _sm; }
              _pc = 1;
              continue _sm;
            case 1:
              if ( v4 != null )
              v4.close();
              return;
            case 2:
              _ehCatchPc = 7;
              _ehCatchPc = 3;
              if ( v3.moveToFirst() )
              this.a(a(v4));
              _pc = 1;
              continue _sm;
            case 3:
              _ehCatchPc = 7;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 5; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              _pc = 4;
              continue _sm;
            case 4:
              ev.D("Error remove oldest record" + _cv_1.getMessage());
              _pc = 6;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              _ehCatchPc = 10;
              _pc = 9;
              continue _sm;
            case 7:
              _ehCatchPc = 10;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 8; continue _sm; }
              _pc = 12;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 9:
              if ( v4 != null )
              v4.close();
              _ehCatchPc = -1;
              _pc = 14;
              continue _sm;
            case 10:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 11; continue _sm; }
              v4 = null;
              _pc = 4;
              continue _sm;
            case 11:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 13; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v4 = null;
              _pc = 12;
              continue _sm;
            case 12:
              if ( v4 != null )
              v4.close();
              throw _cv_2;
            case 13:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 14:
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

    public static com.google.android.gms.internal.cy h(android.content.Context p0)
    {
      Object v1;
      v1 = c;
      synchronized ( v1 )
      {
        if ( d == null )
          d = new com.google.android.gms.internal.cy(p0);
        return d;
      }
    }

    public final java.util.List<com.google.android.gms.internal.cw> a(long p0)
    {
      Object v2 = null;
      java.util.List v3 = null;
      android.database.sqlite.SQLiteDatabase v5 = null; // RETVAL
      android.database.Cursor v7 = null; // RETVAL
      android.database.Cursor v8 = null;
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
              v2 = c;
              com.gameloft.android.DecompRT.monitorEnter(v2);
              v3 = new java.util.LinkedList();
              v5 = this.a();
              if ( v5 == null )
              return v3;
              _ehCatchPc = 8;
              v7 = v5.query("InAppPurchase", null, null, null, null, null, "record_time ASC", String.valueOf(10));
              v8 = v7;
              _ehCatchPc = 5;
              _ehCatchPc = 1;
              if ( v7.moveToFirst() )
              {
              do
              v3.add(a(v8));
              while ( v8.moveToNext() );
              }
              if ( v8 != null )
              v8.close();
              return v3;
            case 1:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 3; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              _pc = 2;
              continue _sm;
            case 2:
              ev.D("Error extracing purchase info: " + _cv_1.getMessage());
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
              if ( v8 != null )
              v8.close();
              _ehCatchPc = -1;
              _pc = 12;
              continue _sm;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 9; continue _sm; }
              v8 = null;
              _pc = 2;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v8 = null;
              _pc = 10;
              continue _sm;
            case 10:
              if ( v8 != null )
              v8.close();
              throw _cv_2;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 12:
              return v3;
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

    public final void a(com.google.android.gms.internal.cw p0)
    {
      Object v2;
      android.database.sqlite.SQLiteDatabase v3;
      Object[] v5;
      if ( p0 != null )
      {
        v2 = c;
        synchronized ( v2 )
        {
          v3 = this.a();
          if ( v3 == null )
            return;
          v5 = new Object[2];
          v5[0] = "purchase_id";
          v5[1] = Long.valueOf(p0.a);
          v3.delete("InAppPurchase", String.format("%s = %d", v5), null);
        }
      }
    }

    public final void b(com.google.android.gms.internal.cw p0)
    {
      Object v2 = null;
      android.database.sqlite.SQLiteDatabase v3 = null;
      android.content.ContentValues v5 = null;
      Object v6 = null;
      android.database.sqlite.SQLiteDatabase v7 = null; // RETVAL
      android.database.Cursor v8 = null; // RETVAL
      android.database.Cursor v9 = null;
      android.database.sqlite.SQLiteException v11 = null;
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
              if ( p0 == null )
              return;
              v2 = c;
              com.gameloft.android.DecompRT.monitorEnter(v2);
              v3 = this.a();
              if ( v3 == null )
              { _pc = 8; continue _sm; }
              v5 = new android.content.ContentValues();
              v5.put("product_id", p0.c);
              v5.put("developer_payload", p0.b);
              v5.put("record_time", Long.valueOf(SystemClock.elapsedRealtime()));
              p0.a = v3.insert("InAppPurchase", null, v5);
              if ( this.b() <= 20000L )
              { _pc = 8; continue _sm; }
              v6 = c;
              com.gameloft.android.DecompRT.monitorEnter(v6);
              v7 = this.a();
              if ( v7 == null )
              { _pc = 8; continue _sm; }
              _ehCatchPc = 4;
              v8 = v7.query("InAppPurchase", null, null, null, null, null, "record_time ASC", "1");
              v9 = v8;
              if ( !(v8 == null) ) { _pc = 2; continue _sm; }
              _pc = 1;
              continue _sm;
            case 1:
              if ( v9 != null )
              v9.close();
              _pc = 8;
              continue _sm;
            case 2:
              try
              {
              try
              {
              if ( v8.moveToFirst() )
              this.a(a(v9));
              { _pc = 1; continue _sm; }
              }
              catch ( android.database.sqlite.SQLiteException v13 )
              {
              v11 = v13;
              { _pc = 10; continue _sm; }
              }
              }
              catch ( Throwable v12 )
              {
              { _pc = 6; continue _sm; }
              }
              


            case 3:
              if ( v9 != null )
              v9.close();
              _ehCatchPc = -1;
              _pc = 8;
              continue _sm;
            case 4:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 5; continue _sm; }
              _pc = 9;
              continue _sm;
            case 5:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 7; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v9 = null;
              _pc = 6;
              continue _sm;
            case 6:
              if ( v9 != null )
              v9.close();
              throw _cv_1;
            case 7:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              return;
            case 9:
              v11 = (android.database.sqlite.SQLiteException)_ehCaught;
              v9 = null;
              _pc = 10;
              continue _sm;
            case 10:
              ev.D("Error remove oldest record" + v11.getMessage());
              _pc = 3;
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

}
