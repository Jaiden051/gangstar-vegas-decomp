// Decompiled from classes.dex (SourceFile: Batch$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

class Batch$1 implements com.google.android.gms.common.api.PendingResult$a {
    // Fields
    final com.google.android.gms.common.api.Batch a;

    // Methods
    Batch$1(com.google.android.gms.common.api.Batch p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      Object v2; // RETVAL
      Object v3;
      com.google.android.gms.common.api.Status v5;
      v2 = Batch.a(this.a);
      v3 = v2;
      synchronized ( v3 )
      {
        if ( !this.a.c() )
        {
          if ( p0.f() )
          {
            Batch.a(this.a, true);
          }
          else if ( !p0.e() )
          {
            Batch.b(this.a, true);
          }
          Batch.b(this.a);
          if ( Batch.c(this.a) == 0 )
          {
            if ( Batch.d(this.a) )
            {
              Batch.e(this.a);
            }
            else
            {
              if ( Batch.f(this.a) )
                v5 = new com.google.android.gms.common.api.Status(13);
              else
                v5 = Status.a;
              this.a.a((com.google.android.gms.common.api.Result)new com.google.android.gms.common.api.BatchResult(v5, Batch.g(this.a)));
            }
          }
        }
        com.gameloft.android.DecompRT.monitorExit(v3);
        return;
      }
    }

}
