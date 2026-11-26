// Decompiled from classes.dex (SourceFile: DataHolder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.data;

import android.net.Uri;
import android.util.Log;
import com.google.android.gms.internal.hn;
public final class DataHolder implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.common.data.f CREATOR;
    private static final com.google.android.gms.common.data.DataHolder$a l;
    android.os.Bundle a;
    int[] b;
    int c;
    boolean d;
    private final int e;
    private final java.lang.String[] f;
    private final android.database.CursorWindow[] g;
    private final int h;
    private final android.os.Bundle i;
    private java.lang.Object j;
    private boolean k;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.common.data.f();
      l = new com.google.android.gms.common.data.DataHolder$1(new String[0], null);
    }

    DataHolder(int p0, String[] p1, android.database.CursorWindow[] p2, int p3, android.os.Bundle p4)
    {
      super();
      this.d = false;
      this.k = true;
      this.e = p0;
      this.f = p1;
      this.g = (android.database.CursorWindow[])p2;
      this.h = p3;
      this.i = p4;
    }

    private DataHolder(com.google.android.gms.common.data.DataHolder$a p0, int p1, android.os.Bundle p2)
    {
      this(DataHolder$a.a(p0), a(p0, -1), p1, p2);
    }

    private DataHolder(String[] p0, android.database.CursorWindow[] p1, int p2, android.os.Bundle p3)
    {
      super();
      this.d = false;
      this.k = true;
      this.e = 1;
      this.f = (String[])hn.f(p0);
      this.g = (android.database.CursorWindow[])hn.f(p1);
      this.h = p2;
      this.i = p3;
      this.a();
    }

    public static com.google.android.gms.common.data.DataHolder a(int p0, android.os.Bundle p1)
    {
      return new com.google.android.gms.common.data.DataHolder(l, p0, p1);
    }

    private void a(String p0, int p1)
    {
      if ( this.a == null || !this.a.containsKey(p0) )
        throw new IllegalArgumentException("No such column: " + p0);
      if ( this.h() )
        throw new IllegalArgumentException("Buffer is closed.");
      if ( p1 < 0 || p1 >= this.c )
        throw new android.database.CursorIndexOutOfBoundsException(p1, this.c);
    }

    private static android.database.CursorWindow[] a(com.google.android.gms.common.data.DataHolder$a p0, int p1)
    {
      int v2 = 0;
      java.util.List v5 = null;
      int v6 = 0;
      android.database.CursorWindow v7 = null;
      java.util.ArrayList v8 = null;
      int v9 = 0;
      int v10 = 0;
      int v11 = 0;
      java.util.Map v12 = null;
      boolean v13 = false;
      int i = 0;
      String v15 = null;
      Object v16 = null; // RETVAL
      Object v17 = null;
      int v18 = 0;
      android.database.CursorWindow v19 = null;
      int v20 = 0;
      android.database.CursorWindow v21 = null;
      int v22 = 0;
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
              v2 = 0;
              if ( !(DataHolder$a.a(p0).length != 0) ) { _pc = 8; continue _sm; }
              if ( p1 >= 0 && p1 < DataHolder$a.b(p0).size() )
              v5 = DataHolder$a.b(p0).subList(0, p1);
              else
              v5 = DataHolder$a.b(p0);
              v6 = v5.size();
              v7 = new android.database.CursorWindow(false);
              v8 = new java.util.ArrayList();
              v8.add(v7);
              v7.setNumColumns(DataHolder$a.a(p0).length);
              v9 = 0;
              v10 = 0;
              _pc = 1;
              continue _sm;
            case 1:
              if ( v9 >= v6 )
              return (android.database.CursorWindow[])v8.toArray(new android.database.CursorWindow[v8.size()]);
              _ehEx = null;
              _ehCatchPc = 4;
              if ( v7.allocRow() )
              {
              v11 = v10;
              }
              else
              {
              Log.d("DataHolder", "Allocating additional cursor window for large data set (row " + v9 + ")");
              v7 = new android.database.CursorWindow(false);
              v7.setStartPosition(v9);
              v7.setNumColumns(DataHolder$a.a(p0).length);
              v8.add(v7);
              if ( !v7.allocRow() )
              {
              Log.e("DataHolder", "Unable to allocate row to hold data.");
              v8.remove(v7);
              return (android.database.CursorWindow[])v8.toArray(new android.database.CursorWindow[v8.size()]);
              }
              v11 = 0;
              }
              v12 = (java.util.Map)v5.get(v9);
              v13 = true;
              for ( i = 0; i < DataHolder$a.a(p0).length && v13; ++i )
              {
              v15 = DataHolder$a.a(p0)[i];
              v16 = v12.get(v15);
              if ( v16 != null )
              {
              if ( v16 instanceof String )
              {
              v13 = v7.putString((String)v16, v11, i);
              }
              else if ( v16 instanceof Long )
              {
              v13 = v7.putLong(((Long)v16).longValue(), v11, i);
              }
              else if ( v16 instanceof Integer )
              {
              v13 = v7.putLong(((Integer)v16).intValue(), v11, i);
              }
              else if ( v16 instanceof Boolean )
              {
              v13 = v7.putLong(com.gameloft.android.DecompRT.b2i(((Boolean)v16).booleanValue()), v11, i);
              }
              else if ( v16 instanceof byte[] )
              {
              v13 = v7.putBlob((byte[])v16, v11, i);
              }
              else if ( v16 instanceof Double )
              {
              v13 = v7.putDouble(((Double)v16).doubleValue(), v11, i);
              }
              else
              {
              if ( !(v16 instanceof Float) )
              throw new IllegalArgumentException("Unsupported object for column " + v15 + ": " + v16);
              v13 = v7.putDouble(((Float)v16).floatValue(), v11, i);
              }
              }
              else
              {
              v13 = v7.putNull(v11, i);
              }
              }
              if ( !v13 )
              {
              Log.d("DataHolder", "Couldn't populate window data for row " + v9 + " - allocating new window.");
              v7.freeLastRow();
              v19 = new android.database.CursorWindow(false);
              v19.setNumColumns(DataHolder$a.a(p0).length);
              v8.add(v19);
              { _pc = 7; continue _sm; }
              }
              v22 = v11 + 1;
              v20 = v9;
              v21 = v7;
              _pc = 2;
              continue _sm;
            case 2:
              v7 = v21;
              v9 = v20 + 1;
              v10 = v22;
              _pc = 1;
              continue _sm;
            case 4:
              _ehCatchPc = -1;
              if ( !((_ehEx != null && (_ehEx instanceof RuntimeException))) ) { _pc = 5; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v17 = _ehCaught;
              v18 = v8.size();
              while ( v2 < v18 )
              ((android.database.CursorWindow)v8.get(v2++)).close();
              throw com.gameloft.android.DecompRT.sneakyThrow(v17);
            case 5:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 6;
              continue _sm;
            case 6:
              _ehCatchPc = -1;
              _pc = 7;
              continue _sm;
            case 7:
              v20 = v9 - 1;
              v21 = v19;
              v22 = 0;
              _pc = 2;
              continue _sm;
            case 8:
              return new android.database.CursorWindow[0];
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

    public static com.google.android.gms.common.data.DataHolder af(int p0)
    {
      return a(p0, null);
    }

    public final int a(int p0)
    {
      int v2;
      boolean v3;
      v2 = 0;
      v3 = p0 >= 0 && p0 < this.c;
      hn.A(v3);
      while ( v2 < this.b.length )
      {
        if ( p0 < this.b[v2] )
        {
          --v2;
          break;
        }
        ++v2;
      }
      if ( v2 == this.b.length )
        --v2;
      return v2;
    }

    public final long a(String p0, int p1, int p2)
    {
      this.a(p0, p1);
      return this.g[p2].getLong(p1, this.a.getInt(p0));
    }

    public final void a()
    {
      int v1;
      int i;
      int v3;
      v1 = 0;
      this.a = new android.os.Bundle();
      for ( i = 0; i < this.f.length; ++i )
        this.a.putInt(this.f[i], i);
      this.b = new int[this.g.length];
      v3 = 0;
      while ( v1 < this.g.length )
      {
        this.b[v1] = v3;
        v3 = this.g[v1].getNumRows() + this.g[v1].getStartPosition();
        ++v1;
      }
      this.c = v3;
    }

    public final void a(Object p0)
    {
      this.j = p0;
    }

    public final void a(String p0, int p1, int p2, android.database.CharArrayBuffer p3)
    {
      this.a(p0, p1);
      this.g[p2].copyStringToBuffer(p1, this.a.getInt(p0), p3);
    }

    public final boolean a(String p0)
    {
      return this.a.containsKey(p0);
    }

    final int b()
    {
      return this.e;
    }

    public final int b(String p0, int p1, int p2)
    {
      this.a(p0, p1);
      return this.g[p2].getInt(p1, this.a.getInt(p0));
    }

    public final String c(String p0, int p1, int p2)
    {
      this.a(p0, p1);
      return this.g[p2].getString(p1, this.a.getInt(p0));
    }

    final String[] c()
    {
      return this.f;
    }

    public final boolean d(String p0, int p1, int p2)
    {
      this.a(p0, p1);
      return Long.valueOf(this.g[p2].getLong(p1, this.a.getInt(p0))).longValue() == 1;
    }

    final android.database.CursorWindow[] d()
    {
      return this.g;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final float e(String p0, int p1, int p2)
    {
      this.a(p0, p1);
      return this.g[p2].getFloat(p1, this.a.getInt(p0));
    }

    public final int e()
    {
      return this.h;
    }

    public final android.os.Bundle f()
    {
      return this.i;
    }

    public final byte[] f(String p0, int p1, int p2)
    {
      this.a(p0, p1);
      return this.g[p2].getBlob(p1, this.a.getInt(p0));
    }

    protected final void finalize()
 throws Throwable {
      String v1;
      try
      {
        if ( this.k && this.g.length > 0 && !this.h() )
        {
          if ( this.j != null )
            v1 = this.j.toString();
          else
            v1 = "internal object: " + this.toString();
          Log.e(
            "DataBuffer",
            "Internal data leak within a DataBuffer object detected!  Be sure to explicitly call close() on all DataBuffer ex" +
            "tending objects when you are done with them. ("
          + v1
          + ")");
          this.i();
        }
        return;
      }
      finally
      {
        super.finalize();
      }
    }

    public final int g()
    {
      return this.c;
    }

    public final android.net.Uri g(String p0, int p1, int p2)
    {
      String v4; // RETVAL
    
      v4 = this.c(p0, p1, p2);
      if ( v4 != null )
        return Uri.parse(v4);
      else
        return null;
    }

    public final boolean h()
    {
      synchronized ( this )
      {
        return this.d;
      }
    }

    public final boolean h(String p0, int p1, int p2)
    {
      this.a(p0, p1);
      return this.g[p2].isNull(p1, this.a.getInt(p0));
    }

    public final void i()
    {
      int i;
      synchronized ( this )
      {
        if ( !this.d )
        {
          this.d = true;
          for ( i = 0; i < this.g.length; ++i )
            this.g[i].close();
        }
      }
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.common.data.f.a(this, p0, p1);
    }

}
