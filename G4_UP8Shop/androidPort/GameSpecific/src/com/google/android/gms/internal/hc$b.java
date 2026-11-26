// Decompiled from classes.dex (SourceFile: hc$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
public abstract class hc$b<TListener> {
    // Fields
    private java.lang.Object a;
    private boolean b;
    final com.google.android.gms.internal.hc d;

    // Methods
    public hc$b(com.google.android.gms.internal.hc p0, Object p1)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = false;
    
    }

    public void G_()
    {
      java.util.ArrayList v1; // RETVAL
      Object v2;
      this.e();
      v1 = hc.b(this.d);
      v2 = v1;
      synchronized ( v2 )
      {
        hc.b(this.d).remove(this);
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

    protected abstract void a();

    protected abstract void a(TListener p0) throws android.os.RemoteException;

    public void b()
 throws android.os.RemoteException {
      Object a;
      synchronized ( this )
      {
        a = this.a;
        if ( this.b )
          Log.w("GmsClient", "Callback proxy " + this + " being reused. This is not safe.");
      }
      if ( a != null )
      {
        try
        {
          this.a((TListener)a);
        }
        catch ( RuntimeException v3 )
        {
          this.a();
          throw v3;
        }
      }
      else
      {
        this.a();
      }
      synchronized ( this )
      {
        this.b = true;
      }
      this.G_();
    }

    public void e()
    {
      synchronized ( this )
      {
        this.a = null;
      }
    }

}
