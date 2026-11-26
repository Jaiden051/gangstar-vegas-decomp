// Decompiled from classes.dex (SourceFile: AdSize.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.ads;

public final class AdSize {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static final com.google.ads.AdSize f;
    public static final com.google.ads.AdSize g;
    public static final com.google.ads.AdSize h;
    public static final com.google.ads.AdSize i;
    public static final com.google.ads.AdSize j;
    public static final com.google.ads.AdSize k;
    private final com.google.android.gms.ads.AdSize l;

    // Methods
    static
    {
      f = new com.google.ads.AdSize(-1, -2, (byte)0);
      g = new com.google.ads.AdSize(320, 50, (byte)0);
      h = new com.google.ads.AdSize(300, 250, (byte)0);
      i = new com.google.ads.AdSize(468, 60, (byte)0);
      j = new com.google.ads.AdSize(728, 90, (byte)0);
      k = new com.google.ads.AdSize(160, 600, (byte)0);
    }

    private AdSize(int p0, int p1)
    {
      this(new com.google.android.gms.ads.AdSize(p0, p1));
    }

    private AdSize(int p0, int p1, byte p2)
    {
      this(new com.google.android.gms.ads.AdSize(p0, p1));
    }

    public AdSize(com.google.android.gms.ads.AdSize p0)
    {
      super();
      this.l = p0;
    }

    private int a(android.content.Context p0)
    {
      return this.l.b(p0);
    }

    private com.google.ads.AdSize a(com.google.ads.AdSize[] p0)
    {
      com.google.ads.AdSize v2 = null;
      float v4 = 0.0f;
      int v5 = 0;
      int v6 = 0;
      int v7 = 0;
      int i = 0;
      com.google.ads.AdSize v9 = null;
      int v10 = 0;
      int v11 = 0;
      int v12 = 0;
      int v13 = 0; // RETVAL
      float v15 = 0.0f;
      com.google.ads.AdSize v16 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( p0 == null )
            return null;
            v2 = null;
            v4 = 0.0f;
            v5 = this.l.b();
            v6 = this.l.a();
            v7 = p0.length;
            i = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(i < v7) ) { _pc = 5; continue _sm; }
            v9 = p0[i];
            v10 = v9.l.b();
            v11 = v9.l.a();
            v12 = this.l.b();
            v13 = this.l.a();
            if ( (float)v10 > (float)v12 * 1.25f
            || (float)v10 < (float)v12 * 0.8f
            || (float)v11 > (float)v13 * 1.25f
            || (float)v11 < (float)v13 * 0.8f )
            {
            { _pc = 2; continue _sm; }
            }
            v15 = (float)(v10 * v11) / (float)(v5 * v6);
            if ( v15 > 1.0f )
            v15 = 1.0f / v15;
            if ( !(v15 > v4) ) { _pc = 2; continue _sm; }
            {
            v16 = v9;
            }
            _pc = 3;
            continue _sm;
          case 2:
            v15 = v4;
            v16 = v2;
            _pc = 3;
            continue _sm;
          case 3:
            v2 = v16;
            v4 = v15;
            _pc = 4;
            continue _sm;
          case 4:
            ++i;
            _pc = 1;
            continue _sm;
          case 5:
            return v2;
        }
      }
}

    private boolean a(int p0, int p1)
    {
      int v3;
      int v4; // RETVAL
    
      v3 = this.l.b();
      v4 = this.l.a();
      return (float)p0 <= (float)v3 * 1.25f
          && (float)p0 >= (float)v3 * 0.8f
          && (float)p1 <= (float)v4 * 1.25f
          && (float)p1 >= (float)v4 * 0.8f;
    }

    private int b(android.content.Context p0)
    {
      return this.l.a(p0);
    }

    private boolean c()
    {
      return this.l.d();
    }

    private boolean d()
    {
      return this.l.c();
    }

    private static boolean isCustomAdSize()
    {
      return false;
    }

    public final int a()
    {
      return this.l.b();
    }

    public final int b()
    {
      return this.l.a();
    }

    public final boolean equals(Object p0)
    {
      return p0 instanceof com.google.ads.AdSize && this.l.equals(((com.google.ads.AdSize)p0).l);
    }

    public final int hashCode()
    {
      return this.l.hashCode();
    }

    public final String toString()
    {
      return this.l.toString();
    }

}
