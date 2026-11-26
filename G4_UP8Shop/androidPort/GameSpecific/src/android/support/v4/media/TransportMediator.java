// Decompiled from classes.dex (SourceFile: TransportMediator.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.media;

import android.os.Build;
import android.support.v4.view.KeyEventCompat;
public class TransportMediator extends android.support.v4.media.a {
    // Fields
    public static int i;
    public static int j;
    public static int k;
    public static int l;
    public static int m;
    public static int n;
    public static int o;
    public static int p;
    public static int q;
    public static int r;
    public static int s;
    final android.content.Context a;
    final android.support.v4.media.TransportPerformer b;
    final android.media.AudioManager c;
    final android.view.View d;
    final java.lang.Object e;
    final android.support.v4.media.e f;
    final java.util.ArrayList g;
    final android.support.v4.media.d h;
    final android.view.KeyEvent.Callback t;

    // Methods
    private TransportMediator(android.app.Activity p0, android.support.v4.media.TransportPerformer p1)
    {
      this(p0, null, p1);
    }

    private TransportMediator(
            android.app.Activity p0,
            android.view.View p1,
            android.support.v4.media.TransportPerformer p2)
    {
      super();
      android.content.Context Context;
      this.g = new java.util.ArrayList();
      this.h = (android.support.v4.media.d)new android.support.v4.media.b(this);
      this.t = (android.view.KeyEvent.Callback)new android.support.v4.media.c(this);
      if ( p0 != null )
        Context = p0;
      else
        Context = p1.getContext();
      this.a = Context;
      this.b = p2;
      this.c = (android.media.AudioManager)this.a.getSystemService("audio");
      if ( p0 != null )
        p1 = p0.getWindow().getDecorView();
      this.d = p1;
      this.e = KeyEventCompat.getKeyDispatcherState(this.d);
      if ( Build.VERSION.SDK_INT < 18 )
        this.f = null;
      else
        this.f = new android.support.v4.media.e(this.a, this.c, this.d, this.h);
    
    }

    private TransportMediator(android.view.View p0, android.support.v4.media.TransportPerformer p1)
    {
      this(null, p0, p1);
    }

    private boolean a(android.view.KeyEvent p0)
    {
      return KeyEventCompat.dispatch(p0, this.t, this.e, this);
    }

    private Object i()
    {
      if ( this.f != null )
        return this.f.a();
      else
        return null;
    }

    static boolean isMediaKey(int p0)
    {
      boolean v1;
      switch ( p0 )
      {
        case 79:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 126:
        case 127:
        case 130:
          v1 = true;
          break;
        default:
          v1 = false;
          break;
      }
      return v1;
    }

    private android.support.v4.media.TransportStateListener[] j()
    {
      android.support.v4.media.TransportStateListener[] v1;
      if ( this.g.size() <= 0 )
        return null;
      v1 = new android.support.v4.media.TransportStateListener[this.g.size()];
      this.g.toArray(v1);
      return v1;
    }

    private void k()
    {
      this.j();
    }

    private void l()
    {
      this.j();
    }

    private void m()
    {
      if ( this.f != null )
        this.f.a(this.b.g(), this.b.e(), 60);
    }

    private void n()
    {
      this.m();
      this.j();
      this.j();
    }

    private void o()
    {
      this.f.b();
    }

    public final void a()
    {
      if ( this.f != null )
        this.f.e();
      this.m();
      this.j();
    }

    public final void a(long p0)
    {
      ;
    }

    public final void a(android.support.v4.media.TransportStateListener p0)
    {
      this.g.add(p0);
    }

    public final void b()
    {
      if ( this.f != null )
        this.f.f();
      this.m();
      this.j();
    }

    public final void b(android.support.v4.media.TransportStateListener p0)
    {
      this.g.remove(p0);
    }

    public final void c()
    {
      if ( this.f != null )
        this.f.g();
      this.m();
      this.j();
    }

    public final long d()
    {
      return this.b.d();
    }

    public final long e()
    {
      return this.b.e();
    }

    public final boolean f()
    {
      return this.b.g();
    }

    public final int g()
    {
      return 100;
    }

    public final int h()
    {
      return 60;
    }

}
