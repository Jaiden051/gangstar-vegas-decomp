// Decompiled from classes.dex (SourceFile: au$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

class au$a extends com.google.android.gms.wearable.internal.a {
    // Fields
    private final com.google.android.gms.common.api.a$d a;
    private final java.util.List b;

    // Methods
    au$a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.wearable.DataApi$DataItemResult> p0,
            java.util.List<java.util.concurrent.FutureTask<Boolean>> p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final void a(com.google.android.gms.wearable.internal.am p0)
 throws android.os.RemoteException {
      java.util.Iterator i;
      this.a.a(new com.google.android.gms.wearable.internal.f$a(new com.google.android.gms.common.api.Status(p0.b), (com.google.android.gms.wearable.DataItem)p0.c));
      if ( p0.b != 0 )
      {
        for ( i = this.b.iterator(); i.hasNext(); ((java.util.concurrent.FutureTask)i.next()).cancel(true) )
          ;
      }
    }

}
