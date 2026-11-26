// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

public final class j {
    // Fields
    java.util.Vector a;
    android.content.res.Resources b;
    long c;
    long d;
    long e;
    long f;

    // Methods
    public j(android.content.Context p0)
    {
      super();
      this.a = null;
      this.c = 0;
      this.d = 0;
      this.e = 0;
      this.a = new java.util.Vector();
      this.b = p0.getResources();
    }

    private java.util.Vector<com.gameloft.android.GAND.GloftGGSS.installer.utils.i> a(int p0)
 throws java.io.IOException {
      java.io.DataInputStream v2;
      v2 = new java.io.DataInputStream(this.b.openRawResource(p0));
      if ( v2.available() > 0 )
      {
        this.a(v2);
        v2.close();
      }
      return this.a;
    }

    private void a(java.io.DataInputStream p0)
 throws java.io.IOException {
      int v2 = 0;
      long v3 = 0L;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.i v4 = null;
      String UTF = null;
      int v6 = 0;
      int Int = 0;
      int v8 = 0;
      long v9 = 0L;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.i v10 = null;
      int v11 = 0;
      long v12 = 0L;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.i v13 = null;
      int v14 = 0;
      int v15 = 0;
      long Long = 0L;
      String v17 = null; // RETVAL
      String v18 = null;
      int v19 = 0;
      String v20 = null; // RETVAL
      long v21 = 0L;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = 0;
            v3 = 0;
            v4 = null;
            _pc = 1;
            continue _sm;
          case 1:
            UTF = p0.readUTF();
            if ( UTF.startsWith("version: ") )
            {
            v6 = Integer.parseInt(UTF.substring(9));
            this.f = p0.readInt() << 10;
            UTF = p0.readUTF();
            }
            else
            {
            v6 = -1;
            this.f = 0;
            }
            Int = p0.readInt();
            v8 = 0;
            v9 = v3;
            v10 = v4;
            v11 = v2;
            v12 = v9;
            _pc = 2;
            continue _sm;
          case 2:
            if ( !(v8 < Int) ) { _pc = 6; continue _sm; }
            v13 = new com.gameloft.android.GAND.GloftGGSS.installer.utils.i();
            v14 = p0.readInt();
            v15 = p0.readInt();
            Long = p0.readLong();
            v17 = p0.readUTF();
            v18 = v17;
            if ( !(v6 >= 101) ) { _pc = 5; continue _sm; }
            if ( !(v17.endsWith(".split_0001")) ) { _pc = 4; continue _sm; }
            v12 = p0.readLong();
            _pc = 3;
            continue _sm;
          case 3:
            v13.c(v12);
            _pc = 5;
            continue _sm;
          case 4:
            if ( v18.contains(".split_") )
            { _pc = 3; continue _sm; }
            v13.c(v15);
            _pc = 5;
            continue _sm;
          case 5:
            v19 = p0.readInt();
            v20 = p0.readUTF();
            v13.a(UTF);
            v13.b(v18);
            v13.c(v20);
            v13.a(v15);
            v13.b(Long);
            v13.a(v19);
            v13.b(v14);
            v13.c(v11);
            this.a.add(v13);
            if ( v19 > this.d )
            this.d = v19;
            if ( v15 > this.e )
            this.e = v15;
            ++v8;
            ++v11;
            v10 = v13;
            _pc = 2;
            continue _sm;
          case 6:
            if ( !(p0.available() > 0) ) { _pc = 7; continue _sm; }
            v21 = v12;
            v4 = v10;
            v2 = v11;
            v3 = v21;
            _pc = 1;
            continue _sm;
          case 7:
            _pc = 8;
            continue _sm;
          case 8:
            this.c = v10.g() + v10.f();
            return;
        }
      }
}

    private long b()
    {
      return this.c;
    }

    private long c()
    {
      return this.d;
    }

    public final long a()
    {
      return this.e;
    }

    public final java.util.Vector<com.gameloft.android.GAND.GloftGGSS.installer.utils.i> a(String p0)
 throws java.io.FileNotFoundException, java.io.IOException {
      java.io.DataInputStream v2;
      v2 = new java.io.DataInputStream(new java.io.FileInputStream(p0));
      if ( v2.available() > 0 )
      {
        this.a(v2);
        v2.close();
      }
      return this.a;
    }

}
