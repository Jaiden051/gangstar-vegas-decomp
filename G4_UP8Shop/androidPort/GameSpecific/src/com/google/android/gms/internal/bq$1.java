// Decompiled from classes.dex (SourceFile: bq$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class bq$1 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.bp a;
    final com.google.android.gms.internal.bq b;

    // Methods
    bq$1(com.google.android.gms.internal.bq p0, com.google.android.gms.internal.bp p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      Object v1; // RETVAL
      Object v2;
      v1 = bq.a(this.b);
      v2 = v1;
      synchronized ( v2 )
      {
        if ( bq.b(this.b) == -2 )
        {
          bq.a(this.b, bq.c(this.b));
          if ( bq.d(this.b) != null )
          {
            this.a.a((com.google.android.gms.internal.br$a)this.b);
            bq.a(this.b, this.a);
          }
          else
          {
            this.b.a(4);
          }
        }
        com.gameloft.android.DecompRT.monitorExit(v2);
        return;
      }
    }

}
