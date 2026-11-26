// Decompiled from classes.dex (SourceFile: v.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.text.TextUtils;
import com.google.android.gms.internal.im;
import java.util.Arrays;
import java.util.Collections;
import java.util.concurrent.Executors;
class v implements com.google.android.gms.tagmanager.DataLayer$c {
    // Fields
    private static final java.lang.String a;
    private final java.util.concurrent.Executor b;
    private final android.content.Context c;
    private com.google.android.gms.tagmanager.v$a d;
    private com.google.android.gms.internal.ik e;
    private int f;

    // Methods
    static
    {
      Object[] v0;
      v0 = new Object[5];
      v0[0] = "datalayer";
      v0[1] = "ID";
      v0[2] = "key";
      v0[3] = "value";
      v0[4] = "expires";
      a = String.format(
              "CREATE TABLE IF NOT EXISTS %s ( '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, '%s' STRING NOT NULL, '%s' BL" +
              "OB NOT NULL, '%s' INTEGER NOT NULL);",
              v0);
    }

    public v(android.content.Context p0)
    {
      this(p0, im.fW(), "google_tagmanager.db", 2000, Executors.newSingleThreadExecutor());
    }

    private v(
            android.content.Context p0,
            com.google.android.gms.internal.ik p1,
            String p2,
            int p3,
            java.util.concurrent.Executor p4)
    {
      super();
      this.c = p0;
      this.e = p1;
      this.f = 2000;
      this.b = p4;
      this.d = new com.google.android.gms.tagmanager.v$a(this, this.c, p2);
    }

    private java.util.List<com.google.android.gms.tagmanager.DataLayer$a> a()
    {
      java.util.List v1;
      java.util.Iterator v2;
      com.google.android.gms.tagmanager.v$b v3;
      try
      {
        this.a(this.e.a());
        v1 = new java.util.ArrayList();
        v2 = this.b().iterator();
        while ( v2.hasNext() )
        {
          v3 = (com.google.android.gms.tagmanager.v$b)v2.next();
          v1.add(new com.google.android.gms.tagmanager.DataLayer$a(v3.a, j(v3.b)));
        }
        return v1;
      }
      finally
      {
        this.d();
      }
    }

    /* synthetic */ static java.util.List a(com.google.android.gms.tagmanager.v p0)
    {
      return p0.a();
    }

    private java.util.List<com.google.android.gms.tagmanager.DataLayer$a> a(
            java.util.List<com.google.android.gms.tagmanager.v$b> p0)
    {
      java.util.List v2;
      java.util.Iterator v3;
      com.google.android.gms.tagmanager.v$b v4;
      v2 = new java.util.ArrayList();
      v3 = p0.iterator();
      while ( v3.hasNext() )
      {
        v4 = (com.google.android.gms.tagmanager.v$b)v3.next();
        v2.add(new com.google.android.gms.tagmanager.DataLayer$a(v4.a, j(v4.b)));
      }
      return v2;
    }

    private void a(int p0)
    {
      int v2;
      java.util.List v3;
      String[] v4;
      android.database.sqlite.SQLiteDatabase v5;
      Object[] v6;
      String v7; // RETVAL
    
      v2 = this.c() - this.f + p0;
      if ( v2 > 0 )
      {
        v3 = this.b(v2);
        bh.B("DataLayer store full, deleting " + v3.size() + " entries to make room.");
        v4 = (String[])v3.toArray(new String[0]);
        if ( v4 != null && v4.length != 0 )
        {
          v5 = this.c("Error opening database for deleteEntries.");
          if ( v5 != null )
          {
            v6 = new Object[2];
            v6[0] = "ID";
            v6[1] = TextUtils.join(",", Collections.nCopies(v4.length, "?"));
            v7 = String.format("%s in (%s)", v6);
            try
            {
              v5.delete("datalayer", v7, v4);
            }
            catch ( android.database.sqlite.SQLiteException e )
            {
              bh.D("Error deleting entries " + Arrays.toString(v4));
            }
          }
        }
      }
    }

    private void a(long p0)
    {
      android.database.sqlite.SQLiteDatabase v2;
      String[] v3;
      v2 = this.c("Error opening database for deleteOlderThan.");
      if ( v2 != null )
      {
        try
        {
          v3 = new String[1];
          v3[0] = java.lang.Long.toString(p0);
          bh.C("Deleted " + v2.delete("datalayer", "expires <= ?", v3) + " expired items");
        }
        catch ( android.database.sqlite.SQLiteException e )
        {
          bh.D("Error deleting old entries.");
        }
      }
    }

    /* synthetic */ static void a(com.google.android.gms.tagmanager.v p0, String p1)
    {
      android.database.sqlite.SQLiteDatabase v2;
      String[] v3;
      v2 = p0.c("Error opening database for clearKeysWithPrefix.");
      if ( v2 == null )
        return;
      try
      {
        try
        {
          v3 = new String[2];
          v3[0] = p1;
          v3[1] = p1 + ".%";
          bh.C("Cleared " + v2.delete("datalayer", "key = ? OR key LIKE ?", v3) + " items");
          return;
        }
        catch ( android.database.sqlite.SQLiteException v4 )
        {
          bh.D("Error deleting entries with key prefix: " + p1 + " (" + v4 + ").");
        }
      }
      finally
      {
        p0.d();
      }
      return;
    }

    /* synthetic */ static void a(com.google.android.gms.tagmanager.v p0, java.util.List p1, long p2)
    {
      p0.b(p1, p2);
    }

    private void a(String[] p0)
    {
      android.database.sqlite.SQLiteDatabase v2;
      Object[] v3;
      String v4; // RETVAL
    
      if ( p0 != null && p0.length != 0 )
      {
        v2 = this.c("Error opening database for deleteEntries.");
        if ( v2 != null )
        {
          v3 = new Object[2];
          v3[0] = "ID";
          v3[1] = TextUtils.join(",", Collections.nCopies(p0.length, "?"));
          v4 = String.format("%s in (%s)", v3);
          try
          {
            v2.delete("datalayer", v4, p0);
          }
          catch ( android.database.sqlite.SQLiteException e )
          {
            bh.D("Error deleting entries " + Arrays.toString(p0));
          }
        }
      }
    }

    /* synthetic */ static android.content.Context b(com.google.android.gms.tagmanager.v p0)
    {
      return p0.c;
    }

    private java.util.List<com.google.android.gms.tagmanager.v$b> b()
    {
      android.database.sqlite.SQLiteDatabase v1; // RETVAL
      java.util.List v2;
      String[] v5;
      android.database.Cursor v6;
      v1 = this.c("Error opening database for loadSerialized.");
      v2 = new java.util.ArrayList();
      if ( v1 != null )
      {
        v5 = new String[2];
        v5[0] = "key";
        v5[1] = "value";
        v6 = v1.query("datalayer", v5, null, null, null, null, "ID", null);
        while ( true )
        {
          try
          {
            if ( !v6.moveToNext() )
            {
              v6.close();
              return v2;
            }
            v2.add(new com.google.android.gms.tagmanager.v$b(v6.getString(0), v6.getBlob(1)));
          }
          catch ( Throwable v7 )
          {
            v6.close();
            throw com.gameloft.android.DecompRT.sneakyThrow(v7);
          }
        }
      }
      return v2;
    }

    private java.util.List<String> b(int p0)
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
              v5 = this.c("Error opening database for peekEntryIds.");
              if ( v5 == null )
              return v2;
              _ehCatchPc = 8;
              v6 = new String[1];
              v6[0] = "ID";
              v7 = new Object[1];
              v7[0] = "ID";
              v8 = v5.query("datalayer", v6, null, null, null, null, String.format("%s ASC", v7), Integer.toString(p0));
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
              bh.D("Error in peekEntries fetching entryIds: " + _cv_1.getMessage());
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
              bh.D("Invalid maxEntries specified. Skipping.");
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

    private java.util.List<com.google.android.gms.tagmanager.v$b> b(
            java.util.List<com.google.android.gms.tagmanager.DataLayer$a> p0)
    {
      java.util.List v2;
      java.util.Iterator v3;
      com.google.android.gms.tagmanager.DataLayer$a v4;
      v2 = new java.util.ArrayList();
      v3 = p0.iterator();
      while ( v3.hasNext() )
      {
        v4 = (com.google.android.gms.tagmanager.DataLayer$a)v3.next();
        v2.add(new com.google.android.gms.tagmanager.v$b(v4.a, j(v4.b)));
      }
      return v2;
    }

    private void b(String p0)
    {
      android.database.sqlite.SQLiteDatabase v2;
      String[] v3;
      v2 = this.c("Error opening database for clearKeysWithPrefix.");
      if ( v2 == null )
        return;
      try
      {
        try
        {
          v3 = new String[2];
          v3[0] = p0;
          v3[1] = p0 + ".%";
          bh.C("Cleared " + v2.delete("datalayer", "key = ? OR key LIKE ?", v3) + " items");
          return;
        }
        catch ( android.database.sqlite.SQLiteException v4 )
        {
          bh.D("Error deleting entries with key prefix: " + p0 + " (" + v4 + ").");
        }
      }
      finally
      {
        this.d();
      }
      return;
    }

    private synchronized void b(java.util.List<com.google.android.gms.tagmanager.v$b> p0, long p1)
    {
      long v3;
      int v4;
      java.util.List v5;
      v3 = this.e.a();
      this.a(v3);
      v4 = p0.size() + this.c() - this.f;
      if ( v4 > 0 )
      {
        v5 = this.b(v4);
        bh.B("DataLayer store full, deleting " + v5.size() + " entries to make room.");
        this.a((String[])v5.toArray(new String[0]));
      }
      this.c(p0, v3 + p1);
      try
      {
        this.d();
        return;
      }
      finally
      {
      }
    }

    private int c()
    {
      int Long;
      android.database.sqlite.SQLiteDatabase v2; // RETVAL
      android.database.Cursor v4;
      Long = 0;
      v2 = this.c("Error opening database for getNumStoredEntries.");
      if ( v2 == null )
        return Long;
      try
      {
        try
        {
          v4 = v2.rawQuery("SELECT COUNT(*) from datalayer", null);
          if ( v4.moveToFirst() )
            Long = (int)v4.getLong(0);
          if ( v4 != null )
            v4.close();
          return Long;
        }
        catch ( android.database.sqlite.SQLiteException e )
        {
          bh.D("Error getting numStoredEntries");
          return Long;
        }
      }
      finally
      {
      }
    }

    private android.database.sqlite.SQLiteDatabase c(String p0)
    {
      try
      {
        return this.d.getWritableDatabase();
      }
      catch ( android.database.sqlite.SQLiteException e )
      {
        bh.D(p0);
        return null;
      }
    }

    private void c(java.util.List<com.google.android.gms.tagmanager.v$b> p0, long p1)
    {
      android.database.sqlite.SQLiteDatabase v3;
      java.util.Iterator v4;
      com.google.android.gms.tagmanager.v$b v5;
      android.content.ContentValues v6;
      v3 = this.c("Error opening database for writeEntryToDatabase.");
      if ( v3 != null )
      {
        v4 = p0.iterator();
        while ( v4.hasNext() )
        {
          v5 = (com.google.android.gms.tagmanager.v$b)v4.next();
          v6 = new android.content.ContentValues();
          v6.put("expires", java.lang.Long.valueOf(p1));
          v6.put("key", v5.a);
          v6.put("value", v5.b);
          v3.insert("datalayer", null, v6);
        }
      }
    }

    private void d()
    {
      try
      {
        this.d.close();
      }
      catch ( android.database.sqlite.SQLiteException e )
      {
      }
    }

    private static Object j(byte[] p0)
    {
      Object Object = null;
      java.io.ByteArrayInputStream v2 = null;
      java.io.ObjectInputStream v3 = null;
      Object v6 = null;
      Object v7 = null;
      Throwable _cv_1 = null;
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
              Object = null;
              v2 = new java.io.ByteArrayInputStream(p0);
              _ehCatchPc = 12;
              v3 = new java.io.ObjectInputStream(v2);
              _ehCatchPc = 1;
              Object = v3.readObject();
              try
              {
              v3.close();
              v2.close();
              return Object;
              }
              catch ( java.io.IOException e )
              {
              }
              
              return Object;
            case 1:
              _ehCatchPc = 12;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 5; continue _sm; }
              _pc = 2;
              continue _sm;
            case 2:
              if ( !(v3 == null) ) { _pc = 4; continue _sm; }
              _pc = 3;
              continue _sm;
            case 3:
              v2.close();
              return Object;
            case 4:
              try
              {
              v3.close();
              { _pc = 3; continue _sm; }
              }
              catch ( java.io.IOException e2 )
              {
              }
              
              return Object;
            case 5:
              if ( !(_ehCaught instanceof ClassNotFoundException) ) { _pc = 9; continue _sm; }
              _pc = 6;
              continue _sm;
            case 6:
              if ( !(v3 == null) ) { _pc = 8; continue _sm; }
              _pc = 7;
              continue _sm;
            case 7:
              v2.close();
              return Object;
            case 8:
              try
              {
              v3.close();
              { _pc = 7; continue _sm; }
              }
              catch ( java.io.IOException e2 )
              {
              }
              
              return Object;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 10; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v7 = _cv_1;
              _pc = 15;
              continue _sm;
            case 10:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 12:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 13; continue _sm; }
              v3 = null;
              _pc = 2;
              continue _sm;
            case 13:
              if ( !(_ehCaught instanceof ClassNotFoundException) ) { _pc = 14; continue _sm; }
              v3 = null;
              _pc = 6;
              continue _sm;
            case 14:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 18; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v6 = _cv_2;
              v3 = null;
              v7 = v6;
              _pc = 15;
              continue _sm;
            case 15:
              if ( !(v3 != null) ) { _pc = 17; continue _sm; }
              try
              {
              v3.close();
              { _pc = 17; continue _sm; }
              }
              catch ( java.io.IOException e )
              {
              }
              
              _pc = 16;
              continue _sm;
            case 16:
              throw com.gameloft.android.DecompRT.sneakyThrow(v7);
            case 17:
              v2.close();
              _pc = 16;
              continue _sm;
            case 18:
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

    private static byte[] j(Object p0)
    {
      byte[] v1 = null;
      java.io.ByteArrayOutputStream v2 = null;
      java.io.ObjectOutputStream v3 = null;
      Object v6 = null;
      Object v7 = null;
      Throwable _cv_1 = null;
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
              v2 = new java.io.ByteArrayOutputStream();
              _ehCatchPc = 8;
              v3 = new java.io.ObjectOutputStream(v2);
              _ehCatchPc = 1;
              v3.writeObject(p0);
              v1 = v2.toByteArray();
              try
              {
              v3.close();
              v2.close();
              return (byte[])v1;
              }
              catch ( java.io.IOException e )
              {
              }
              
              return (byte[])v1;
            case 1:
              _ehCatchPc = 8;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 5; continue _sm; }
              _pc = 2;
              continue _sm;
            case 2:
              if ( !(v3 == null) ) { _pc = 4; continue _sm; }
              _pc = 3;
              continue _sm;
            case 3:
              v2.close();
              return (byte[])v1;
            case 4:
              try
              {
              v3.close();
              { _pc = 3; continue _sm; }
              }
              catch ( java.io.IOException e2 )
              {
              }
              
              return (byte[])v1;
            case 5:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 6; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v7 = _cv_1;
              _pc = 10;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 9; continue _sm; }
              v3 = null;
              _pc = 2;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 13; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v6 = _cv_2;
              v3 = null;
              v7 = v6;
              _pc = 10;
              continue _sm;
            case 10:
              if ( !(v3 != null) ) { _pc = 12; continue _sm; }
              try
              {
              v3.close();
              { _pc = 12; continue _sm; }
              }
              catch ( java.io.IOException e )
              {
              }
              
              _pc = 11;
              continue _sm;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(v7);
            case 12:
              v2.close();
              _pc = 11;
              continue _sm;
            case 13:
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

    /* synthetic */ static String lB()
    {
      return a;
    }

    public final void a(com.google.android.gms.tagmanager.DataLayer$c$a p0)
    {
      this.b.execute((Runnable)new com.google.android.gms.tagmanager.v$2(this, p0));
    }

    public final void a(String p0)
    {
      this.b.execute((Runnable)new com.google.android.gms.tagmanager.v$3(this, p0));
    }

    public final void a(java.util.List<com.google.android.gms.tagmanager.DataLayer$a> p0, long p1)
    {
      java.util.List v3;
      java.util.Iterator v4;
      com.google.android.gms.tagmanager.DataLayer$a v5;
      v3 = new java.util.ArrayList();
      v4 = p0.iterator();
      while ( v4.hasNext() )
      {
        v5 = (com.google.android.gms.tagmanager.DataLayer$a)v4.next();
        v3.add(new com.google.android.gms.tagmanager.v$b(v5.a, j(v5.b)));
      }
      this.b.execute((Runnable)new com.google.android.gms.tagmanager.v$1(this, v3, p1));
    }

}
