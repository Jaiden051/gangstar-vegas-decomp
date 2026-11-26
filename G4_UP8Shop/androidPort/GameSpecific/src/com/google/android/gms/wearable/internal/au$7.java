// Decompiled from classes.dex (SourceFile: au$7.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

class au$7 extends com.google.android.gms.wearable.internal.a {
    // Fields
    final com.google.android.gms.wearable.DataApi$DataListener a;
    final com.google.android.gms.common.api.a$d b;
    final com.google.android.gms.wearable.internal.au c;

    // Methods
    au$7(
            com.google.android.gms.wearable.internal.au p0,
            com.google.android.gms.wearable.DataApi$DataListener p1,
            com.google.android.gms.common.api.a$d p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public final void a(com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      java.util.HashMap v2; // RETVAL
      Object v3;
      if ( !p0.e() )
      {
        v2 = au.b(this.c);
        v3 = v2;
        synchronized ( v3 )
        {
          au.b(this.c).remove(this.a);
          com.gameloft.android.DecompRT.monitorExit(v3);
        }
      }
      this.b.a(p0);
    }

}
