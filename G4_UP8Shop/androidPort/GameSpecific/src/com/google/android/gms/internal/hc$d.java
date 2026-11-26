// Decompiled from classes.dex (SourceFile: hc$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class hc$d<TListener> extends com.google.android.gms.internal.hc$b<TListener> {
    // Fields
    private final com.google.android.gms.common.data.DataHolder a;
    final com.google.android.gms.internal.hc e;

    // Methods
    public hc$d(com.google.android.gms.internal.hc p0, Object p1, com.google.android.gms.common.data.DataHolder p2)
    {
      super(p0, p1);
      this.e = p0;
      this.a = p2;
    
    }



    protected final void a()
    {
      if ( this.a != null )
        this.a.i();
    }

    protected final void a(TListener p0)
 throws android.os.RemoteException {
      this.a(p0, this.a);
    }

    protected abstract void a(TListener p0, com.google.android.gms.common.data.DataHolder p1) throws android.os.RemoteException;





}
