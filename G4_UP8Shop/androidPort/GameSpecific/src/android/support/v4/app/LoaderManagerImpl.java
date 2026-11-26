// Decompiled from classes.dex (SourceFile: LoaderManagerImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.support.v4.util.DebugUtils;
import android.util.Log;
class LoaderManagerImpl extends android.support.v4.app.LoaderManager {
    // Fields
    static java.lang.String a;
    static boolean b;
    final android.support.v4.util.SparseArrayCompat c;
    final android.support.v4.util.SparseArrayCompat d;
    final java.lang.String e;
    android.support.v4.app.FragmentActivity f;
    boolean g;
    boolean h;
    boolean i;
    boolean j;

    // Methods
    static
    {
      b = false;
    }

    LoaderManagerImpl(String p0, android.support.v4.app.FragmentActivity p1, boolean p2)
    {
      super();
      this.c = new android.support.v4.util.SparseArrayCompat();
      this.d = new android.support.v4.util.SparseArrayCompat();
      this.e = p0;
      this.f = p1;
      this.g = p2;
    }

    private android.support.v4.app.ag c(
            int p0,
            android.os.Bundle p1,
            android.support.v4.app.af<Object> p2)
    {
      android.support.v4.app.ag v4;
      v4 = new android.support.v4.app.ag(this, p0, p1, p2);
      v4.d = p2.onCreateLoader(p0, p1);
      return v4;
    }

    private android.support.v4.app.ag d(
            int p0,
            android.os.Bundle p1,
            android.support.v4.app.af<Object> p2)
    {
      int v4;
      android.support.v4.app.ag v5;
      v4 = 1;
      try
      {
        this.j = true;
        v5 = this.c(p0, p1, p2);
        this.a(v5);
      }
      finally
      {
        this.j = false;
      }
      return v5;
    }

    public final <D> android.support.v4.content.Loader<D> a(
            int p0,
            android.os.Bundle p1,
            android.support.v4.app.af<D> p2)
    {
      android.support.v4.app.ag v4;
      android.support.v4.app.ag v5; // RETVAL
    
      if ( this.j )
        throw new IllegalStateException("Called while creating a loader");
      v4 = (android.support.v4.app.ag)this.c.a(0);
      if ( b )
        Log.v("LoaderManager", "initLoader in " + this + ": args=" + null);
      if ( v4 != null )
      {
        if ( b )
          Log.v("LoaderManager", "  Re-using existing loader " + v4);
        v4.c = p2;
      }
      else
      {
        v5 = this.d(0, null, (android.support.v4.app.af)p2);
        v4 = v5;
        if ( b )
          Log.v("LoaderManager", "  Created new loader " + v5);
      }
      if ( v4.e && this.g )
        v4.a(v4.d, v4.g);
      return v4.d;
    }

    public final void a(int p0)
    {
      int v2; // RETVAL
      int v3;
      android.support.v4.app.ag v4;
      int v5; // RETVAL
      int v6;
      android.support.v4.app.ag v7;
      if ( this.j )
        throw new IllegalStateException("Called while creating a loader");
      if ( b )
        Log.v("LoaderManager", "destroyLoader in " + this + " of " + p0);
      v2 = this.c.f(p0);
      v3 = v2;
      if ( v2 >= 0 )
      {
        v4 = (android.support.v4.app.ag)this.c.e(v2);
        this.c.c(v3);
        v4.f();
      }
      v5 = this.d.f(p0);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v7 = (android.support.v4.app.ag)this.d.e(v5);
        this.d.c(v6);
        v7.f();
      }
      if ( this.f != null && !this.a() )
        this.f.e.g();
    }

    final void a(android.support.v4.app.FragmentActivity p0)
    {
      this.f = p0;
    }

    final void a(android.support.v4.app.ag p0)
    {
      this.c.a(p0.a, p0);
      if ( this.g )
        p0.a();
    }

    public final void a(String p0, java.io.FileDescriptor p1, java.io.PrintWriter p2, String[] p3)
    {
      int v5;
      String v6;
      int i;
      android.support.v4.app.ag v8;
      String v9;
      android.support.v4.app.ag v10;
      v5 = 0;
      if ( this.c.a() > 0 )
      {
        p2.print(p0);
        p2.println("Active Loaders:");
        v6 = p0 + "    ";
        for ( i = 0; i < this.c.a(); ++i )
        {
          v8 = (android.support.v4.app.ag)this.c.e(i);
          p2.print(p0);
          p2.print("  #");
          p2.print(this.c.d(i));
          p2.print(": ");
          p2.println(v8.toString());
          v8.a(v6, p1, p2, p3);
        }
      }
      if ( this.d.a() > 0 )
      {
        p2.print(p0);
        p2.println("Inactive Loaders:");
        v9 = p0 + "    ";
        while ( v5 < this.d.a() )
        {
          v10 = (android.support.v4.app.ag)this.d.e(v5);
          p2.print(p0);
          p2.print("  #");
          p2.print(this.d.d(v5));
          p2.print(": ");
          p2.println(v10.toString());
          v10.a(v9, p1, p2, p3);
          ++v5;
        }
      }
    }

    public final boolean a()
    {
      int v1;
      int v2;
      int v3;
      android.support.v4.app.ag v4;
      boolean v5;
      v1 = this.c.a();
      v2 = 0;
      v3 = 0;
      while ( v2 < v1 )
      {
        v4 = (android.support.v4.app.ag)this.c.e(v2);
        v5 = v4.h && !v4.f;
        v3 |= v5 ? 1 : 0;
        ++v2;
      }
      return v3 != 0;
    }

    public final <D> android.support.v4.content.Loader<D> b(int p0)
    {
      android.support.v4.app.ag v2;
      if ( this.j )
        throw new IllegalStateException("Called while creating a loader");
      v2 = (android.support.v4.app.ag)this.c.a(p0);
      if ( v2 == null )
        return null;
      if ( v2.n != null )
        v2 = v2.n;
      return v2.d;
    }

    public final <D> android.support.v4.content.Loader<D> b(
            int p0,
            android.os.Bundle p1,
            android.support.v4.app.af<D> p2)
    {
      android.support.v4.app.ag v4 = null;
      android.support.v4.app.ag v5 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( this.j )
            throw new IllegalStateException("Called while creating a loader");
            v4 = (android.support.v4.app.ag)this.c.a(p0);
            if ( b )
            Log.v("LoaderManager", "restartLoader in " + this + ": args=" + p1);
            if ( v4 == null )
            return this.d(p0, p1, (android.support.v4.app.af)p2).d;
            v5 = (android.support.v4.app.ag)this.d.a(p0);
            if ( v5 == null )
            {
            if ( b )
            Log.v("LoaderManager", "  Making last loader inactive: " + v4);
            { _pc = 1; continue _sm; }
            }
            if ( !(v4.e) ) { _pc = 2; continue _sm; }
            if ( b )
            Log.v("LoaderManager", "  Removing last inactive loader: " + v4);
            v5.f = false;
            v5.f();
            _pc = 1;
            continue _sm;
          case 1:
            v4.d.abandon();
            this.d.a(p0, v4);
            return this.d(p0, p1, (android.support.v4.app.af)p2).d;
          case 2:
            if ( !v4.h )
            {
            if ( b )
            Log.v("LoaderManager", "  Current loader is stopped; replacing");
            this.c.a(p0, null);
            v4.f();
            return this.d(p0, p1, (android.support.v4.app.af)p2).d;
            }
            if ( v4.n != null )
            {
            if ( b )
            Log.v("LoaderManager", "  Removing pending loader: " + v4.n);
            v4.n.f();
            v4.n = null;
            }
            if ( b )
            Log.v("LoaderManager", "  Enqueuing as new pending loader");
            v4.n = this.c(p0, p1, (android.support.v4.app.af)p2);
            return v4.n.d;
        }
      }
}

    final void b()
    {
      RuntimeException v1;
      int i;
      if ( b )
        Log.v("LoaderManager", "Starting in " + this);
      if ( this.g )
      {
        v1 = new RuntimeException("here");
        v1.fillInStackTrace();
        Log.w("LoaderManager", "Called doStart when already started: " + this, v1);
      }
      else
      {
        this.g = true;
        for ( i = this.c.a() - 1; i >= 0; --i )
          ((android.support.v4.app.ag)this.c.e(i)).a();
      }
    }

    final void c()
    {
      RuntimeException v1;
      int i;
      if ( b )
        Log.v("LoaderManager", "Stopping in " + this);
      if ( this.g )
      {
        for ( i = this.c.a() - 1; i >= 0; --i )
          ((android.support.v4.app.ag)this.c.e(i)).e();
        this.g = false;
      }
      else
      {
        v1 = new RuntimeException("here");
        v1.fillInStackTrace();
        Log.w("LoaderManager", "Called doStop when not started: " + this, v1);
      }
    }

    final void d()
    {
      RuntimeException v1;
      int i;
      if ( b )
        Log.v("LoaderManager", "Retaining in " + this);
      if ( this.g )
      {
        this.h = true;
        this.g = false;
        for ( i = this.c.a() - 1; i >= 0; --i )
          ((android.support.v4.app.ag)this.c.e(i)).b();
      }
      else
      {
        v1 = new RuntimeException("here");
        v1.fillInStackTrace();
        Log.w("LoaderManager", "Called doRetain when not started: " + this, v1);
      }
    }

    final void e()
    {
      int i;
      if ( this.h )
      {
        if ( b )
          Log.v("LoaderManager", "Finished Retaining in " + this);
        this.h = false;
        for ( i = this.c.a() - 1; i >= 0; --i )
          ((android.support.v4.app.ag)this.c.e(i)).c();
      }
    }

    final void f()
    {
      int i;
      for ( i = this.c.a() - 1; i >= 0; --i )
        ((android.support.v4.app.ag)this.c.e(i)).k = true;
    }

    final void g()
    {
      int i;
      for ( i = this.c.a() - 1; i >= 0; --i )
        ((android.support.v4.app.ag)this.c.e(i)).d();
    }

    final void h()
    {
      int i;
      int j;
      if ( !this.h )
      {
        if ( b )
          Log.v("LoaderManager", "Destroying Active in " + this);
        for ( i = this.c.a() - 1; i >= 0; --i )
          ((android.support.v4.app.ag)this.c.e(i)).f();
        this.c.b();
      }
      if ( b )
        Log.v("LoaderManager", "Destroying Inactive in " + this);
      for ( j = this.d.a() - 1; j >= 0; --j )
        ((android.support.v4.app.ag)this.d.e(j)).f();
      this.d.b();
    }

    public String toString()
    {
      StringBuilder v1;
      v1 = new StringBuilder(128);
      v1.append("LoaderManager{");
      v1.append(Integer.toHexString(System.identityHashCode(this)));
      v1.append(" in ");
      DebugUtils.buildShortClassTag(this.f, v1);
      v1.append("}}");
      return v1.toString();
    }

}
