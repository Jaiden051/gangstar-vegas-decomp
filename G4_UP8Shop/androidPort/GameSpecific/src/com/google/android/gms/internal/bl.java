// Decompiled from classes.dex (SourceFile: bl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class bl {
    // Fields
    private final com.google.android.gms.internal.dt a;
    private final com.google.android.gms.internal.bu b;
    private final android.content.Context c;
    private final java.lang.Object d;
    private final com.google.android.gms.internal.bn e;
    private boolean f;
    private com.google.android.gms.internal.bq g;

    // Methods
    public bl(
            android.content.Context p0,
            com.google.android.gms.internal.dt p1,
            com.google.android.gms.internal.bu p2,
            com.google.android.gms.internal.bn p3)
    {
      super();
      this.d = new Object();
      this.f = false;
      this.c = p0;
      this.a = p1;
      this.b = p2;
      this.e = p3;
    }

    public final com.google.android.gms.internal.br a(long p0, long p2)
    {
      Object d = null;
      java.util.Iterator v4 = null;
      boolean hasNext = false; // RETVAL
      com.google.android.gms.internal.bm v6 = null;
      java.util.Iterator v7 = null;
      String v8 = null;
      com.google.android.gms.internal.br v9 = null;
      com.google.android.gms.internal.br v11 = null; // RETVAL
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            ev.z("Starting mediation.");
            v4 = this.e.a.iterator();
            _pc = 1;
            continue _sm;
          case 1:
            hasNext = v4.hasNext();
            try
            {
            if ( hasNext )
            {
            v6 = (com.google.android.gms.internal.bm)v4.next();
            ev.B("Trying mediation network: " + v6.b);
            v7 = v6.c.iterator();
            { _pc = 4; continue _sm; }
            }
            return new com.google.android.gms.internal.br(1);
            }
            catch ( Throwable v12 )
            {
            com.gameloft.android.DecompRT.monitorExit(d);
            throw v12;
            }
            


          case 2:
            v11 = this.g.a(p0, 60000);
            v9 = v11;
            if ( !(v11.a == 0) ) { _pc = 3; continue _sm; }
            _pc = 5;
            continue _sm;
          case 3:
            if ( v11.c != null )
            eu.a.post((Runnable)new com.google.android.gms.internal.bl$1(this, v11));
            _pc = 4;
            continue _sm;
          case 4:
            if ( !v7.hasNext() )
            { _pc = 1; continue _sm; }
            v8 = (String)v7.next();
            d = this.d;
            com.gameloft.android.DecompRT.monitorEnter(d);
            if ( this.f )
            {
            v9 = new com.google.android.gms.internal.br(-1);
            com.gameloft.android.DecompRT.monitorExit(d);
            return v9;
            }
            this.g = new com.google.android.gms.internal.bq(this.c, v8, this.b, this.e, v6, this.a.c, this.a.d, this.a.k);
            com.gameloft.android.DecompRT.monitorExit(d);
            _pc = 2;
            continue _sm;
          case 5:
            ev.z("Adapter succeeded.");
            return v9;
        }
      }
}

    public final void a()
    {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        this.f = true;
        if ( this.g != null )
          this.g.a();
      }
    }

}
