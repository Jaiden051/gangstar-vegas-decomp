// Decompiled from classes.dex (SourceFile: ag.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.support.v4.util.DebugUtils;
import android.util.Log;
import java.lang.reflect.Modifier;
final class ag implements android.support.v4.content.Loader$OnLoadCompleteListener<Object> {
    // Fields
    final int a;
    final android.os.Bundle b;
    android.support.v4.app.af c;
    android.support.v4.content.Loader d;
    boolean e;
    boolean f;
    java.lang.Object g;
    boolean h;
    boolean i;
    boolean j;
    boolean k;
    boolean l;
    boolean m;
    android.support.v4.app.ag n;
    final android.support.v4.app.LoaderManagerImpl o;

    // Methods
    public ag(android.support.v4.app.LoaderManagerImpl p0, int p1, android.os.Bundle p2, android.support.v4.app.af p3)
    {
      super();
      this.o = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    
    }

    final void a()
    {
      if ( this.i && this.j )
      {
        this.h = true;
      }
      else if ( !this.h )
      {
        this.h = true;
        if ( LoaderManagerImpl.b )
          Log.v("LoaderManager", "  Starting: " + this);
        if ( this.d == null && this.c != null )
          this.d = this.c.onCreateLoader(this.a, this.b);
        if ( this.d != null )
        {
          if ( this.d.getClass().isMemberClass() && !Modifier.isStatic(this.d.getClass().getModifiers()) )
            throw new IllegalArgumentException("Object returned from onCreateLoader must not be a non-static inner member class: "
                                             + this.d);
          if ( !this.m )
          {
            this.d.registerListener(this.a, (android.support.v4.content.Loader$OnLoadCompleteListener)this);
            this.m = true;
          }
          this.d.startLoading();
        }
      }
    }

    final void a(android.support.v4.content.Loader<Object> p0, Object p1)
    {
      String A;
      String v4;
      if ( this.c == null )
        return;
      A = null;
      if ( this.o.f != null )
      {
        A = this.o.f.e.A;
        this.o.f.e.A = "onLoadFinished";
      }
      v4 = A;
      try
      {
        if ( LoaderManagerImpl.b )
          Log.v("LoaderManager", "  onLoadFinished in " + p0 + ": " + p0.dataToString(p1));
        this.c.onLoadFinished(p0, p1);
      }
      catch ( Throwable v5 )
      {
        if ( this.o.f != null )
          this.o.f.e.A = v4;
        throw v5;
      }
      if ( this.o.f != null )
        this.o.f.e.A = A;
      this.f = true;
    }

    public final void a(String p0, java.io.FileDescriptor p1, java.io.PrintWriter p2, String[] p3)
    {
      android.support.v4.app.ag _cur = this;
      while ( true )
      {
        p2.print(p0);
        p2.print("mId=");
        p2.print(_cur.a);
        p2.print(" mArgs=");
        p2.println(_cur.b);
        p2.print(p0);
        p2.print("mCallbacks=");
        p2.println(_cur.c);
        p2.print(p0);
        p2.print("mLoader=");
        p2.println(_cur.d);
        if ( _cur.d != null )
          _cur.d.dump(p0 + "  ", p1, p2, p3);
        if ( _cur.e || _cur.f )
        {
          p2.print(p0);
          p2.print("mHaveData=");
          p2.print(_cur.e);
          p2.print("  mDeliveredData=");
          p2.println(_cur.f);
          p2.print(p0);
          p2.print("mData=");
          p2.println(_cur.g);
        }
        p2.print(p0);
        p2.print("mStarted=");
        p2.print(_cur.h);
        p2.print(" mReportNextStart=");
        p2.print(_cur.k);
        p2.print(" mDestroyed=");
        p2.println(_cur.l);
        p2.print(p0);
        p2.print("mRetaining=");
        p2.print(_cur.i);
        p2.print(" mRetainingStarted=");
        p2.print(_cur.j);
        p2.print(" mListenerRegistered=");
        p2.println(_cur.m);
        if ( _cur.n == null )
          break;
        p2.print(p0);
        p2.println("Pending Loader ");
        p2.print(_cur.n);
        p2.println(":");
        _cur = _cur.n;
        p0 = p0 + "  ";
      }
    }

    final void b()
    {
      if ( LoaderManagerImpl.b )
        Log.v("LoaderManager", "  Retaining: " + this);
      this.i = true;
      this.j = this.h;
      this.h = false;
      this.c = null;
    }

    final void c()
    {
      if ( this.i )
      {
        if ( LoaderManagerImpl.b )
          Log.v("LoaderManager", "  Finished Retaining: " + this);
        this.i = false;
        if ( this.h != this.j && !this.h )
          this.e();
      }
      if ( this.h && this.e && !this.k )
        this.a(this.d, this.g);
    }

    final void d()
    {
      if ( this.h && this.k )
      {
        this.k = false;
        if ( this.e )
          this.a(this.d, this.g);
      }
    }

    final void e()
    {
      if ( LoaderManagerImpl.b )
        Log.v("LoaderManager", "  Stopping: " + this);
      this.h = false;
      if ( !this.i && this.d != null && this.m )
      {
        this.m = false;
        this.d.unregisterListener((android.support.v4.content.Loader$OnLoadCompleteListener)this);
        this.d.stopLoading();
      }
    }

    final void f()
    {
      android.support.v4.app.ag _cur = this;
      boolean f;
      String A;
      while ( true )
      {
        if ( LoaderManagerImpl.b )
          Log.v("LoaderManager", "  Destroying: " + _cur);
        _cur.l = true;
        f = _cur.f;
        _cur.f = false;
        if ( _cur.c != null && _cur.d != null && _cur.e && f )
        {
          if ( LoaderManagerImpl.b )
            Log.v("LoaderManager", "  Reseting: " + _cur);
          if ( _cur.o.f != null )
          {
            _cur.o.f.e.A = "onLoaderReset";
            A = _cur.o.f.e.A;
          }
          else
          {
            A = null;
          }
          try
          {
            _cur.c.onLoaderReset(_cur.d);
          }
          finally
          {
            if ( _cur.o.f != null )
              _cur.o.f.e.A = A;
          }
        }
        _cur.c = null;
        _cur.g = null;
        _cur.e = false;
        if ( _cur.d != null )
        {
          if ( _cur.m )
          {
            _cur.m = false;
            _cur.d.unregisterListener((android.support.v4.content.Loader$OnLoadCompleteListener)_cur);
          }
          _cur.d.reset();
        }
        if ( _cur.n == null )
          break;
        _cur = _cur.n;
      }
    }

    public final void onLoadComplete(android.support.v4.content.Loader p0, Object p1)
    {
      android.support.v4.app.ag n;
      android.support.v4.app.ag v4;
      if ( LoaderManagerImpl.b )
        Log.v("LoaderManager", "onLoadComplete: " + this);
      if ( this.l )
      {
        if ( LoaderManagerImpl.b )
          Log.v("LoaderManager", "  Ignoring load complete -- destroyed");
      }
      else if ( this.o.c.a(this.a) == this )
      {
        n = this.n;
        if ( n != null )
        {
          if ( LoaderManagerImpl.b )
            Log.v("LoaderManager", "  Switching to pending loader: " + n);
          this.n = null;
          this.o.c.a(this.a, null);
          this.f();
          this.o.a(n);
        }
        else
        {
          if ( this.g != p1 || !this.e )
          {
            this.g = p1;
            this.e = true;
            if ( this.h )
              this.a(p0, p1);
          }
          v4 = (android.support.v4.app.ag)this.o.d.a(this.a);
          if ( v4 != null && v4 != this )
          {
            v4.f = false;
            v4.f();
            this.o.d.b(this.a);
          }
          if ( this.o.f != null && !this.o.a() )
            this.o.f.e.g();
        }
      }
      else if ( LoaderManagerImpl.b )
      {
        Log.v("LoaderManager", "  Ignoring load complete -- not active");
      }
    }

    public final String toString()
    {
      StringBuilder v1;
      v1 = new StringBuilder(64);
      v1.append("LoaderInfo{");
      v1.append(Integer.toHexString(System.identityHashCode(this)));
      v1.append(" #");
      v1.append(this.a);
      v1.append(" : ");
      DebugUtils.buildShortClassTag(this.d, v1);
      v1.append("}}");
      return v1.toString();
    }

}
