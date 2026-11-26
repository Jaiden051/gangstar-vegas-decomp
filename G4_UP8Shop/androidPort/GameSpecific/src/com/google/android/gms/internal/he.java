// Decompiled from classes.dex (SourceFile: he.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class he implements android.os.Handler.Callback {
    // Fields
    private static final java.lang.Object a;
    private static com.google.android.gms.internal.he b;
    private final android.content.Context c;
    private final java.util.HashMap d;
    private final android.os.Handler e;

    // Methods
    static
    {
      a = new Object();
    }

    private he(android.content.Context p0)
    {
      super();
      this.e = new android.os.Handler(p0.getMainLooper(), (android.os.Handler.Callback)this);
      this.d = new java.util.HashMap();
      this.c = p0.getApplicationContext();
    }

    public static com.google.android.gms.internal.he B(android.content.Context p0)
    {
      Object v1;
      v1 = a;
      synchronized ( v1 )
      {
        if ( b == null )
          b = new com.google.android.gms.internal.he(p0.getApplicationContext());
        return b;
      }
    }

    /* synthetic */ static java.util.HashMap a(com.google.android.gms.internal.he p0)
    {
      return p0.d;
    }

    public final boolean a(String p0, com.google.android.gms.internal.hc$f p1)
    {
      java.util.HashMap d;
      com.google.android.gms.internal.he$a v4;
      d = this.d;
      synchronized ( d )
      {
        v4 = (com.google.android.gms.internal.he$a)this.d.get(p0);
        if ( v4 != null )
        {
          this.e.removeMessages(0, v4);
          if ( v4.c(p1) )
            throw new IllegalStateException("Trying to bind a GmsServiceConnection that was already connected before.  startServiceAction="
                                          + p0);
          v4.a(p1);
          switch ( v4.d() )
          {
            case 1:
              p1.onServiceConnected(v4.g(), v4.f());
              break;
            case 2:
              v4.a(this.c.bindService(new android.content.Intent(p0).setPackage("com.google.android.gms"), (android.content.ServiceConnection)v4.a(), 129));
              break;
            default:
              break;
          }
        }
        else
        {
          v4 = new com.google.android.gms.internal.he$a(this, p0);
          v4.a(p1);
          v4.a(this.c.bindService(new android.content.Intent(p0).setPackage("com.google.android.gms"), (android.content.ServiceConnection)v4.a(), 129));
          this.d.put(p0, v4);
        }
        return v4.c();
      }
    }

    public final void b(String p0, com.google.android.gms.internal.hc$f p1)
    {
      java.util.HashMap d;
      com.google.android.gms.internal.he$a v4;
      d = this.d;
      synchronized ( d )
      {
        v4 = (com.google.android.gms.internal.he$a)this.d.get(p0);
        if ( v4 == null )
          throw new IllegalStateException("Nonexistent connection status for service action: " + p0);
        if ( !v4.c(p1) )
          throw new IllegalStateException("Trying to unbind a GmsServiceConnection  that was not bound before.  startServiceAction="
                                        + p0);
        v4.b(p1);
        if ( v4.e() )
          this.e.sendMessageDelayed(this.e.obtainMessage(0, v4), 5000);
      }
    }

    public final boolean handleMessage(android.os.Message p0)
    {
      com.google.android.gms.internal.he$a v4;
      java.util.HashMap d;
      if ( p0.what != 0 )
        return false;
      v4 = (com.google.android.gms.internal.he$a)p0.obj;
      d = this.d;
      synchronized ( d )
      {
        if ( v4.e() )
        {
          this.c.unbindService((android.content.ServiceConnection)v4.a());
          this.d.remove(v4.b());
        }
        return true;
      }
    }

}
