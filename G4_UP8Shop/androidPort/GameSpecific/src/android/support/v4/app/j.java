// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.util.Log;
final class j extends android.support.v4.app.ac implements android.support.v4.app.s, java.lang.Runnable {
    // Fields
    static final java.lang.String a = "FragmentManager";
    static final int c = 0;
    static final int d = 1;
    static final int e = 2;
    static final int f = 3;
    static final int g = 4;
    static final int h = 5;
    static final int i = 6;
    static final int j = 7;
    int A;
    java.lang.CharSequence B;
    final android.support.v4.app.FragmentManagerImpl b;
    android.support.v4.app.k k;
    android.support.v4.app.k l;
    int m;
    int n;
    int o;
    int p;
    int q;
    int r;
    int s;
    boolean t;
    boolean u;
    java.lang.String v;
    boolean w;
    int x;
    int y;
    java.lang.CharSequence z;

    // Methods
    public j(android.support.v4.app.FragmentManagerImpl p0)
    {
      super();
      this.u = true;
      this.x = -1;
      this.b = p0;
    }

    private void a(int p0, android.support.v4.app.Fragment p1, String p2, int p3)
    {
      android.support.v4.app.k v5;
      p1.mFragmentManager = this.b;
      if ( p2 != null )
      {
        if ( p1.mTag != null && !p2.equals(p1.mTag) )
          throw new IllegalStateException("Can't change tag of fragment " + p1 + ": was " + p1.mTag + " now " + p2);
        p1.mTag = p2;
      }
      if ( p0 != 0 )
      {
        if ( p1.mFragmentId != 0 && p1.mFragmentId != p0 )
          throw new IllegalStateException("Can't change container ID of fragment "
                                        + p1
                                        + ": was "
                                        + p1.mFragmentId
                                        + " now "
                                        + p0);
        p1.mFragmentId = p0;
        p1.mContainerId = p0;
      }
      v5 = new android.support.v4.app.k();
      v5.c = p3;
      v5.d = p1;
      this.a(v5);
    }

    private int b(boolean p0)
    {
      if ( this.w )
        throw new IllegalStateException("commit already called");
      if ( FragmentManagerImpl.b )
      {
        Log.v("FragmentManager", "Commit: " + this);
        this.a("  ", new java.io.PrintWriter(new android.support.v4.util.c("FragmentManager")));
      }
      this.w = true;
      if ( this.t )
        this.x = this.b.a(this);
      else
        this.x = -1;
      this.b.a((Runnable)this, p0);
      return this.x;
    }

    private int l()
    {
      return this.r;
    }

    private int m()
    {
      return this.s;
    }

    public final int a()
    {
      return this.x;
    }

    public final android.support.v4.app.ac a(int p0)
    {
      this.r = p0;
      return this;
    }

    public final android.support.v4.app.ac a(int p0, int p1)
    {
      this.n = p0;
      this.o = p1;
      this.p = 0;
      this.q = 0;
      return this;
    }

    public final android.support.v4.app.ac a(int p0, int p1, int p2, int p3)
    {
      this.n = p0;
      this.o = p1;
      this.p = 0;
      this.q = 0;
      return this;
    }

    public final android.support.v4.app.ac a(int p0, android.support.v4.app.Fragment p1)
    {
      this.a(p0, p1, null, 1);
      return this;
    }

    public final android.support.v4.app.ac a(int p0, android.support.v4.app.Fragment p1, String p2)
    {
      this.a(p0, p1, p2, 1);
      return this;
    }

    public final android.support.v4.app.ac a(android.support.v4.app.Fragment p0)
    {
      android.support.v4.app.k v2;
      v2 = new android.support.v4.app.k();
      v2.c = 3;
      v2.d = p0;
      this.a(v2);
      return this;
    }

    public final android.support.v4.app.ac a(android.support.v4.app.Fragment p0, String p1)
    {
      this.a(0, p0, p1, 1);
      return this;
    }

    public final android.support.v4.app.ac a(CharSequence p0)
    {
      this.y = 0;
      this.z = p0;
      return this;
    }

    public final android.support.v4.app.ac a(String p0)
    {
      if ( !this.u )
        throw new IllegalStateException("This FragmentTransaction is not allowed to be added to the back stack.");
      this.t = true;
      this.v = p0;
      return this;
    }

    final void a(android.support.v4.app.k p0)
    {
      if ( this.k != null )
      {
        p0.b = this.l;
        this.l.a = p0;
        this.l = p0;
      }
      else
      {
        this.l = p0;
        this.k = p0;
      }
      p0.e = this.n;
      p0.f = this.o;
      p0.g = this.p;
      p0.h = this.q;
      ++this.m;
    }

    public final void a(String p0, java.io.PrintWriter p1)
    {
      this.a(p0, p1, true);
    }

    public final void a(String p0, java.io.PrintWriter p1, boolean p2)
    {
      String v4;
      int v5;
      android.support.v4.app.k k;
      String v7;
      int i;
      if ( p2 )
      {
        p1.print(p0);
        p1.print("mName=");
        p1.print(this.v);
        p1.print(" mIndex=");
        p1.print(this.x);
        p1.print(" mCommitted=");
        p1.println(this.w);
        if ( this.r != 0 )
        {
          p1.print(p0);
          p1.print("mTransition=#");
          p1.print(Integer.toHexString(this.r));
          p1.print(" mTransitionStyle=#");
          p1.println(Integer.toHexString(this.s));
        }
        if ( this.n != 0 || this.o != 0 )
        {
          p1.print(p0);
          p1.print("mEnterAnim=#");
          p1.print(Integer.toHexString(this.n));
          p1.print(" mExitAnim=#");
          p1.println(Integer.toHexString(this.o));
        }
        if ( this.p != 0 || this.q != 0 )
        {
          p1.print(p0);
          p1.print("mPopEnterAnim=#");
          p1.print(Integer.toHexString(this.p));
          p1.print(" mPopExitAnim=#");
          p1.println(Integer.toHexString(this.q));
        }
        if ( this.y != 0 || this.z != null )
        {
          p1.print(p0);
          p1.print("mBreadCrumbTitleRes=#");
          p1.print(Integer.toHexString(this.y));
          p1.print(" mBreadCrumbTitleText=");
          p1.println(this.z);
        }
        if ( this.A != 0 || this.B != null )
        {
          p1.print(p0);
          p1.print("mBreadCrumbShortTitleRes=#");
          p1.print(Integer.toHexString(this.A));
          p1.print(" mBreadCrumbShortTitleText=");
          p1.println(this.B);
        }
      }
      if ( this.k != null )
      {
        p1.print(p0);
        p1.println("Operations:");
        v4 = p0 + "    ";
        v5 = 0;
        k = this.k;
        while ( k != null )
        {
          switch ( k.c )
          {
            case 0:
              v7 = "NULL";
              break;
            case 1:
              v7 = "ADD";
              break;
            case 2:
              v7 = "REPLACE";
              break;
            case 3:
              v7 = "REMOVE";
              break;
            case 4:
              v7 = "HIDE";
              break;
            case 5:
              v7 = "SHOW";
              break;
            case 6:
              v7 = "DETACH";
              break;
            case 7:
              v7 = "ATTACH";
              break;
            default:
              v7 = "cmd=" + k.c;
              break;
          }
          p1.print(p0);
          p1.print("  Op #");
          p1.print(v5);
          p1.print(": ");
          p1.print(v7);
          p1.print(" ");
          p1.println(k.d);
          if ( p2 )
          {
            if ( k.e != 0 || k.f != 0 )
            {
              p1.print(p0);
              p1.print("enterAnim=#");
              p1.print(Integer.toHexString(k.e));
              p1.print(" exitAnim=#");
              p1.println(Integer.toHexString(k.f));
            }
            if ( k.g != 0 || k.h != 0 )
            {
              p1.print(p0);
              p1.print("popEnterAnim=#");
              p1.print(Integer.toHexString(k.g));
              p1.print(" popExitAnim=#");
              p1.println(Integer.toHexString(k.h));
            }
          }
          if ( k.i != null && k.i.size() > 0 )
          {
            for ( i = 0; i < k.i.size(); ++i )
            {
              p1.print(v4);
              if ( k.i.size() == 1 )
              {
                p1.print("Removed: ");
              }
              else
              {
                if ( i == 0 )
                  p1.println("Removed:");
                p1.print(v4);
                p1.print("  #");
                p1.print(i);
                p1.print(": ");
              }
              p1.println(k.i.get(i));
            }
          }
          k = k.a;
          ++v5;
        }
      }
    }

    public final void a(boolean p0)
    {
      android.support.v4.app.k i;
      android.support.v4.app.Fragment d;
      android.support.v4.app.Fragment v4;
      int j;
      android.support.v4.app.Fragment v6;
      android.support.v4.app.Fragment v7;
      android.support.v4.app.Fragment v8;
      android.support.v4.app.Fragment v9;
      android.support.v4.app.Fragment v10;
      android.support.v4.app.Fragment v11;
      if ( FragmentManagerImpl.b )
      {
        Log.v("FragmentManager", "popFromBackStack: " + this);
        this.a("  ", new java.io.PrintWriter(new android.support.v4.util.c("FragmentManager")));
      }
      this.e(-1);
      for ( i = this.l; i != null; i = i.b )
      {
        switch ( i.c )
        {
          case 1:
            d = i.d;
            d.mNextAnim = i.h;
            this.b.a(d, FragmentManagerImpl.reverseTransit(this.r), this.s);
            break;
          case 2:
            v4 = i.d;
            if ( v4 != null )
            {
              v4.mNextAnim = i.h;
              this.b.a(v4, FragmentManagerImpl.reverseTransit(this.r), this.s);
            }
            if ( i.i != null )
            {
              for ( j = 0; j < i.i.size(); ++j )
              {
                v6 = (android.support.v4.app.Fragment)i.i.get(j);
                v6.mNextAnim = i.g;
                this.b.a(v6, false);
              }
            }
            break;
          case 3:
            v7 = i.d;
            v7.mNextAnim = i.g;
            this.b.a(v7, false);
            break;
          case 4:
            v8 = i.d;
            v8.mNextAnim = i.g;
            this.b.c(v8, FragmentManagerImpl.reverseTransit(this.r), this.s);
            break;
          case 5:
            v9 = i.d;
            v9.mNextAnim = i.h;
            this.b.b(v9, FragmentManagerImpl.reverseTransit(this.r), this.s);
            break;
          case 6:
            v10 = i.d;
            v10.mNextAnim = i.g;
            this.b.e(v10, FragmentManagerImpl.reverseTransit(this.r), this.s);
            break;
          case 7:
            v11 = i.d;
            v11.mNextAnim = i.g;
            this.b.d(v11, FragmentManagerImpl.reverseTransit(this.r), this.s);
            break;
          default:
            throw new IllegalArgumentException("Unknown cmd: " + i.c);
        }
      }
      if ( p0 )
        this.b.a(this.b.t, FragmentManagerImpl.reverseTransit(this.r), this.s, true);
      if ( this.x >= 0 )
      {
        this.b.c(this.x);
        this.x = -1;
      }
    }

    public final int b()
    {
      return this.y;
    }

    public final android.support.v4.app.ac b(int p0)
    {
      this.s = p0;
      return this;
    }

    public final android.support.v4.app.ac b(int p0, android.support.v4.app.Fragment p1)
    {
      if ( p0 == 0 )
        throw new IllegalArgumentException("Must use non-zero containerViewId");
      this.a(p0, p1, null, 2);
      return this;
    }

    public final android.support.v4.app.ac b(int p0, android.support.v4.app.Fragment p1, String p2)
    {
      if ( p0 == 0 )
        throw new IllegalArgumentException("Must use non-zero containerViewId");
      this.a(p0, p1, null, 2);
      return this;
    }

    public final android.support.v4.app.ac b(android.support.v4.app.Fragment p0)
    {
      android.support.v4.app.k v2;
      v2 = new android.support.v4.app.k();
      v2.c = 4;
      v2.d = p0;
      this.a(v2);
      return this;
    }

    public final android.support.v4.app.ac b(CharSequence p0)
    {
      this.A = 0;
      this.B = p0;
      return this;
    }

    public final int c()
    {
      return this.A;
    }

    public final android.support.v4.app.ac c(int p0)
    {
      this.y = p0;
      this.z = null;
      return this;
    }

    public final android.support.v4.app.ac c(android.support.v4.app.Fragment p0)
    {
      android.support.v4.app.k v2;
      v2 = new android.support.v4.app.k();
      v2.c = 5;
      v2.d = p0;
      this.a(v2);
      return this;
    }

    public final android.support.v4.app.ac d(int p0)
    {
      this.A = p0;
      this.B = null;
      return this;
    }

    public final android.support.v4.app.ac d(android.support.v4.app.Fragment p0)
    {
      android.support.v4.app.k v2;
      v2 = new android.support.v4.app.k();
      v2.c = 6;
      v2.d = p0;
      this.a(v2);
      return this;
    }

    public final CharSequence d()
    {
      if ( this.y != 0 )
        return this.b.u.getText(this.y);
      else
        return this.z;
    }

    public final android.support.v4.app.ac e(android.support.v4.app.Fragment p0)
    {
      android.support.v4.app.k v2;
      v2 = new android.support.v4.app.k();
      v2.c = 7;
      v2.d = p0;
      this.a(v2);
      return this;
    }

    public final CharSequence e()
    {
      if ( this.A != 0 )
        return this.b.u.getText(this.A);
      else
        return this.B;
    }

    final void e(int p0)
    {
      android.support.v4.app.k i;
      android.support.v4.app.Fragment d;
      int j;
      android.support.v4.app.Fragment v5;
      if ( this.t )
      {
        if ( FragmentManagerImpl.b )
          Log.v("FragmentManager", "Bump nesting in " + this + " by " + p0);
        for ( i = this.k; i != null; i = i.a )
        {
          if ( i.d != null )
          {
            d = i.d;
            d.mBackStackNesting += p0;
            if ( FragmentManagerImpl.b )
              Log.v("FragmentManager", "Bump nesting of " + i.d + " to " + i.d.mBackStackNesting);
          }
          if ( i.i != null )
          {
            for ( j = i.i.size() - 1; j >= 0; --j )
            {
              v5 = (android.support.v4.app.Fragment)i.i.get(j);
              v5.mBackStackNesting += p0;
              if ( FragmentManagerImpl.b )
                Log.v("FragmentManager", "Bump nesting of " + v5 + " to " + v5.mBackStackNesting);
            }
          }
        }
      }
    }

    public final boolean f()
    {
      return this.u;
    }

    public final android.support.v4.app.ac g()
    {
      if ( this.t )
        throw new IllegalStateException("This transaction is already being added to the back stack");
      this.u = false;
      return this;
    }

    public final int h()
    {
      return this.b(false);
    }

    public final int i()
    {
      return this.b(true);
    }

    public final String j()
    {
      return this.v;
    }

    public final boolean k()
    {
      return this.m == 0;
    }

    public final void run()
    {
      android.support.v4.app.k i;
      android.support.v4.app.Fragment d;
      android.support.v4.app.Fragment v3;
      int v4;
      android.support.v4.app.Fragment v5;
      android.support.v4.app.Fragment v6;
      android.support.v4.app.Fragment v7;
      android.support.v4.app.Fragment v8;
      android.support.v4.app.Fragment v9;
      android.support.v4.app.Fragment v10;
      android.support.v4.app.Fragment v11;
      if ( FragmentManagerImpl.b )
        Log.v("FragmentManager", "Run: " + this);
      if ( this.t && this.x < 0 )
        throw new IllegalStateException("addToBackStack() called after commit()");
      this.e(1);
      for ( i = this.k; i != null; i = i.a )
      {
        switch ( i.c )
        {
          case 1:
            d = i.d;
            d.mNextAnim = i.e;
            this.b.a(d, false);
            break;
          case 2:
            v3 = i.d;
            if ( this.b.m != null )
            {
              v4 = 0;
              v5 = v3;
              while ( v4 < this.b.m.size() )
              {
                v6 = (android.support.v4.app.Fragment)this.b.m.get(v4);
                if ( FragmentManagerImpl.b )
                  Log.v("FragmentManager", "OP_REPLACE: adding=" + v5 + " old=" + v6);
                if ( v5 == null || v6.mContainerId == v5.mContainerId )
                {
                  if ( v6 == v5 )
                  {
                    v5 = null;
                    i.d = null;
                  }
                  else
                  {
                    if ( i.i == null )
                      i.i = new java.util.ArrayList();
                    i.i.add(v6);
                    v6.mNextAnim = i.f;
                    if ( this.t )
                    {
                      ++v6.mBackStackNesting;
                      if ( FragmentManagerImpl.b )
                        Log.v("FragmentManager", "Bump nesting of " + v6 + " to " + v6.mBackStackNesting);
                    }
                    this.b.a(v6, this.r, this.s);
                  }
                }
                ++v4;
              }
            }
            else
            {
              v5 = v3;
            }
            if ( v5 != null )
            {
              v5.mNextAnim = i.e;
              this.b.a(v5, false);
            }
            break;
          case 3:
            v7 = i.d;
            v7.mNextAnim = i.f;
            this.b.a(v7, this.r, this.s);
            break;
          case 4:
            v8 = i.d;
            v8.mNextAnim = i.f;
            this.b.b(v8, this.r, this.s);
            break;
          case 5:
            v9 = i.d;
            v9.mNextAnim = i.e;
            this.b.c(v9, this.r, this.s);
            break;
          case 6:
            v10 = i.d;
            v10.mNextAnim = i.f;
            this.b.d(v10, this.r, this.s);
            break;
          case 7:
            v11 = i.d;
            v11.mNextAnim = i.e;
            this.b.e(v11, this.r, this.s);
            break;
          default:
            throw new IllegalArgumentException("Unknown cmd: " + i.c);
        }
      }
      this.b.a(this.b.t, this.r, this.s, true);
      if ( this.t )
        this.b.b(this);
    }

    public final String toString()
    {
      StringBuilder v1;
      v1 = new StringBuilder(128);
      v1.append("BackStackEntry{");
      v1.append(Integer.toHexString(System.identityHashCode(this)));
      if ( this.x >= 0 )
      {
        v1.append(" #");
        v1.append(this.x);
      }
      if ( this.v != null )
      {
        v1.append(" ");
        v1.append(this.v);
      }
      v1.append("}");
      return v1.toString();
    }

}
