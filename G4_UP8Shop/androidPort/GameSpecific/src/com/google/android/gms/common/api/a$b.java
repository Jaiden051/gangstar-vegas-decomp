// Decompiled from classes.dex (SourceFile: a$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

import com.google.android.gms.internal.hn;
public abstract class a$b<R extends com.google.android.gms.common.api.Result, A extends com.google.android.gms.common.api.Api$a> extends com.google.android.gms.common.api.a$a<R> implements com.google.android.gms.common.api.c$c<A> {
    // Fields
    private final com.google.android.gms.common.api.Api$c a;
    private com.google.android.gms.common.api.c$a b;

    // Methods
    protected a$b(com.google.android.gms.common.api.Api$c<A> p0)
    {
      super();
      this.a = (com.google.android.gms.common.api.Api$c)hn.f(p0);
    }

    private void a(android.os.RemoteException p0)
 throws android.os.RemoteException {
      this.c(new com.google.android.gms.common.api.Status(8, p0.getLocalizedMessage(), null));
    }

    protected abstract void a(com.google.android.gms.common.api.Api$a p0) throws android.os.RemoteException;

    public final void a(com.google.android.gms.common.api.c$a p0)
    {
      this.b = p0;
    }

    public final void b(A p0)
 throws android.os.DeadObjectException, android.os.RemoteException {
      this.a(new com.google.android.gms.common.api.a$c(p0.d()));
      try
      {
        this.a(p0);
      }
      catch ( android.os.DeadObjectException v2 )
      {
        this.a(v2);
        throw v2;
      }
      catch ( android.os.RemoteException v3 )
      {
        this.a(v3);
      }
    }

    public final void c(com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      hn.b(!p0.e(), "Failed result must not be success");
      this.a(this.a(p0));
    }

    protected final void e()
    {
      super.e();
      if ( this.b != null )
      {
        this.b.a((com.google.android.gms.common.api.c$c)this);
        this.b = null;
      }
    }

    public final com.google.android.gms.common.api.Api$c<A> f()
    {
      return this.a;
    }

    public final int g()
    {
      return 0;
    }

}
