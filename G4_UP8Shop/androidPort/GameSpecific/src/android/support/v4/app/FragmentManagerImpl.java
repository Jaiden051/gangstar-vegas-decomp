// Decompiled from classes.dex (SourceFile: FragmentManagerImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.os.Build;
import android.os.Looper;
import android.support.v4.util.DebugUtils;
import android.util.Log;
import android.view.animation.AnimationUtils;
import java.util.Arrays;
final class FragmentManagerImpl extends android.support.v4.app.FragmentManager {
    // Fields
    static final android.view.animation.Interpolator F;
    static final android.view.animation.Interpolator G;
    static final android.view.animation.Interpolator H;
    static final android.view.animation.Interpolator I;
    static int J;
    public static int K;
    public static int L;
    public static int M;
    public static int N;
    public static int O;
    public static int P;
    static boolean b;
    static final java.lang.String c = "FragmentManager";
    static final boolean d;
    static java.lang.String e;
    static java.lang.String f;
    static java.lang.String g;
    static java.lang.String h;
    java.lang.String A;
    boolean B;
    android.os.Bundle C;
    android.util.SparseArray D;
    java.lang.Runnable E;
    java.util.ArrayList i;
    java.lang.Runnable[] j;
    boolean k;
    java.util.ArrayList l;
    java.util.ArrayList m;
    java.util.ArrayList n;
    java.util.ArrayList o;
    java.util.ArrayList p;
    java.util.ArrayList q;
    java.util.ArrayList r;
    java.util.ArrayList s;
    int t;
    android.support.v4.app.FragmentActivity u;
    android.support.v4.app.r v;
    android.support.v4.app.Fragment w;
    boolean x;
    boolean y;
    boolean z;

    // Methods
    static
    {
      b = false;
      d = Build.VERSION.SDK_INT >= 11;
      F = new android.view.animation.DecelerateInterpolator(2.5f);
      G = new android.view.animation.DecelerateInterpolator(1.5f);
      H = new android.view.animation.AccelerateInterpolator(2.5f);
      I = new android.view.animation.AccelerateInterpolator(1.5f);
    }

    FragmentManagerImpl()
    {
      super();
      this.t = 0;
      this.C = null;
      this.D = null;
      this.E = (Runnable)new android.support.v4.app.u(this);
    }

    private android.view.animation.Animation a(
            android.support.v4.app.Fragment p0,
            int p1,
            boolean p2,
            int p3)
    {
      android.view.animation.Animation Animation;
      int v7; // RETVAL
    
      Animation = p0.onCreateAnimation(p1, p2, p0.mNextAnim);
      if ( Animation == null
        && (p0.mNextAnim == 0 || (Animation = AnimationUtils.loadAnimation(this.u, p0.mNextAnim)) == null) )
      {
        if ( p1 != 0 )
        {
          v7 = transitToStyleIndex(p1, p2);
          if ( v7 >= 0 )
          {
            switch ( v7 )
            {
              case 1:
                Animation = makeOpenCloseAnimation(this.u, 1.125f, 1.0f, 0.0f, 1.0f);
                break;
              case 2:
                Animation = makeOpenCloseAnimation(this.u, 1.0f, 0.975f, 1.0f, 0.0f);
                break;
              case 3:
                Animation = makeOpenCloseAnimation(this.u, 0.975f, 1.0f, 0.0f, 1.0f);
                break;
              case 4:
                Animation = makeOpenCloseAnimation(this.u, 1.0f, 1.075f, 1.0f, 0.0f);
                break;
              case 5:
                Animation = makeFadeAnimation(this.u, 0.0f, 1.0f);
                break;
              case 6:
                Animation = makeFadeAnimation(this.u, 1.0f, 0.0f);
                break;
              default:
                if ( p3 == 0 && this.u.getWindow() != null )
                  this.u.getWindow().getAttributes();
                Animation = null;
                break;
            }
          }
          else
          {
            return null;
          }
        }
        else
        {
          return null;
        }
      }
      return Animation;
    }

    private void a(int p0, android.support.v4.app.j p1)
    {
      int v3;
      synchronized ( this )
      {
        if ( this.q == null )
          this.q = new java.util.ArrayList();
        v3 = this.q.size();
        if ( p0 >= v3 )
        {
          while ( v3 < p0 )
          {
            this.q.add(null);
            if ( this.r == null )
              this.r = new java.util.ArrayList();
            if ( b )
              Log.v("FragmentManager", "Adding available back stack index " + v3);
            this.r.add(Integer.valueOf(v3++));
          }
          if ( b )
            Log.v("FragmentManager", "Adding back stack index " + p0 + " with " + p1);
          this.q.add(p1);
        }
        else
        {
          if ( b )
            Log.v("FragmentManager", "Setting back stack index " + p0 + " to " + p1);
          this.q.set(p0, p1);
        }
        return;
      }
    }

    private void a(int p0, boolean p1)
    {
      this.a(p0, 0, 0, false);
    }

    private void a(RuntimeException p0)
    {
      java.io.PrintWriter v2;
      Log.e("FragmentManager", p0.getMessage());
      Log.e("FragmentManager", "Activity state:");
      v2 = new java.io.PrintWriter(new android.support.v4.util.c("FragmentManager"));
      if ( this.u != null )
      {
        try
        {
          this.u.dump("  ", null, v2, new String[0]);
        }
        catch ( Exception v3 )
        {
          Log.e("FragmentManager", "Failed dumping state", v3);
        }
      }
      else
      {
        try
        {
          this.a("  ", null, v2, new String[0]);
        }
        catch ( Exception v4 )
        {
          Log.e("FragmentManager", "Failed dumping state", v4);
        }
      }
      throw p0;
    }

    private void d(android.support.v4.app.Fragment p0)
    {
      if ( p0.mIndex < 0 )
      {
        if ( this.n != null && this.n.size() > 0 )
        {
          p0.setIndex(((Integer)this.n.remove(this.n.size() - 1)).intValue(), this.w);
          this.l.set(p0.mIndex, p0);
        }
        else
        {
          if ( this.l == null )
            this.l = new java.util.ArrayList();
          p0.setIndex(this.l.size(), this.w);
          this.l.add(p0);
        }
        if ( b )
          Log.v("FragmentManager", "Allocated fragment index " + p0);
      }
    }

    private void e(android.support.v4.app.Fragment p0)
    {
      if ( p0.mIndex >= 0 )
      {
        if ( b )
          Log.v("FragmentManager", "Freeing fragment index " + p0);
        this.l.set(p0.mIndex, null);
        if ( this.n == null )
          this.n = new java.util.ArrayList();
        this.n.add(Integer.valueOf(p0.mIndex));
        this.u.a(p0.mWho);
        p0.initState();
      }
    }

    private void f(android.support.v4.app.Fragment p0)
    {
      if ( p0.mInnerView != null )
      {
        if ( this.D != null )
          this.D.clear();
        else
          this.D = new android.util.SparseArray();
        p0.mInnerView.saveHierarchyState(this.D);
        if ( this.D.size() > 0 )
        {
          p0.mSavedViewState = this.D;
          this.D = null;
        }
      }
    }

    private android.os.Bundle g(android.support.v4.app.Fragment p0)
    {
      android.os.Bundle C;
      if ( this.C == null )
        this.C = new android.os.Bundle();
      p0.performSaveInstanceState(this.C);
      if ( this.C.isEmpty() )
      {
        C = null;
      }
      else
      {
        C = this.C;
        this.C = null;
      }
      if ( p0.mView != null )
        this.f(p0);
      if ( p0.mSavedViewState != null )
      {
        if ( C == null )
          C = new android.os.Bundle();
        C.putSparseParcelableArray("android:view_state", p0.mSavedViewState);
      }
      if ( !p0.mUserVisibleHint )
      {
        if ( C == null )
          C = new android.os.Bundle();
        C.putBoolean("android:user_visible_hint", p0.mUserVisibleHint);
      }
      return C;
    }

    static android.view.animation.Animation makeFadeAnimation(
            android.content.Context p0,
            float p1,
            float p2)
    {
      android.view.animation.AlphaAnimation v3;
      v3 = new android.view.animation.AlphaAnimation(p1, p2);
      v3.setInterpolator(G);
      v3.setDuration(220);
      return v3;
    }

    static android.view.animation.Animation makeOpenCloseAnimation(
            android.content.Context p0,
            float p1,
            float p2,
            float p3,
            float p4)
    {
      android.view.animation.AnimationSet v5;
      android.view.animation.ScaleAnimation v6;
      android.view.animation.AlphaAnimation v7;
      v5 = new android.view.animation.AnimationSet(false);
      v6 = new android.view.animation.ScaleAnimation(p1, p2, p1, p2, 1, 0.5f, 1, 0.5f);
      v6.setInterpolator(F);
      v6.setDuration(220);
      v5.addAnimation(v6);
      v7 = new android.view.animation.AlphaAnimation(p3, p4);
      v7.setInterpolator(G);
      v7.setDuration(220);
      v5.addAnimation(v7);
      return v5;
    }

    public static int reverseTransit(int p0)
    {
      int v1;
      v1 = 0;
      switch ( p0 )
      {
        case 4097:
          v1 = 8194;
          break;
        case 4099:
          v1 = 4099;
          break;
        case 8194:
          v1 = 4097;
          break;
        default:
          return v1;
      }
      return v1;
    }

    public static int transitToStyleIndex(int p0, boolean p1)
    {
      int v2;
      v2 = -1;
      switch ( p0 )
      {
        case 4097:
          if ( p1 )
            v2 = 1;
          else
            v2 = 2;
          break;
        case 4099:
          if ( p1 )
            v2 = 5;
          else
            v2 = 6;
          break;
        case 8194:
          if ( p1 )
            v2 = 3;
          else
            v2 = 4;
          break;
        default:
          return v2;
      }
      return v2;
    }

    private void v()
    {
      if ( this.y )
        throw new IllegalStateException("Can not perform this action after onSaveInstanceState");
      if ( this.A != null )
        throw new IllegalStateException("Can not perform this action inside of " + this.A);
    }

    private void w()
    {
      int i;
      if ( this.s != null )
      {
        for ( i = 0; i < this.s.size(); ++i )
          this.s.get(i);
      }
    }

    public final int a(android.support.v4.app.j p0)
    {
      int v2; // RETVAL
      int v3;
      int v5; // RETVAL
    
      synchronized ( this )
      {
        if ( this.r != null && this.r.size() > 0 )
        {
          v5 = ((Integer)this.r.remove(this.r.size() - 1)).intValue();
          v3 = v5;
          if ( b )
            Log.v("FragmentManager", "Adding back stack index " + v5 + " with " + p0);
          this.q.set(v3, p0);
        }
        else
        {
          if ( this.q == null )
            this.q = new java.util.ArrayList();
          v2 = this.q.size();
          v3 = v2;
          if ( b )
            Log.v("FragmentManager", "Setting back stack index " + v2 + " to " + p0);
          this.q.add(p0);
        }
        return v3;
      }
    }

    public final android.support.v4.app.Fragment$SavedState a(android.support.v4.app.Fragment p0)
    {
      android.support.v4.app.Fragment$SavedState v2;
      android.os.Bundle v3; // RETVAL
    
      v2 = null;
      if ( p0.mIndex < 0 )
        this.a(new IllegalStateException("Fragment " + p0 + " is not currently in the FragmentManager"));
      if ( p0.mState > 0 )
      {
        v3 = this.g(p0);
        if ( v3 != null )
          return new android.support.v4.app.Fragment$SavedState(v3);
      }
      return v2;
    }

    public final android.support.v4.app.Fragment a(int p0)
    {
      int i;
      android.support.v4.app.Fragment v3;
      int j;
      if ( this.m != null )
      {
        for ( i = this.m.size() - 1; i >= 0; --i )
        {
          v3 = (android.support.v4.app.Fragment)this.m.get(i);
          if ( v3 != null && v3.mFragmentId == p0 )
            return v3;
        }
      }
      if ( this.l != null )
      {
        for ( j = this.l.size() - 1; j >= 0; --j )
        {
          v3 = (android.support.v4.app.Fragment)this.l.get(j);
          if ( v3 != null && v3.mFragmentId == p0 )
            return v3;
        }
      }
      return null;
    }

    public final android.support.v4.app.Fragment a(android.os.Bundle p0, String p1)
    {
      int Int;
      android.support.v4.app.Fragment v4;
      Int = p0.getInt(p1, -1);
      if ( Int == -1 )
        return null;
      if ( Int >= this.l.size() )
        this.a(new IllegalStateException("Fragement no longer exists for key " + p1 + ": index " + Int));
      v4 = (android.support.v4.app.Fragment)this.l.get(Int);
      if ( v4 == null )
        this.a(new IllegalStateException("Fragement no longer exists for key " + p1 + ": index " + Int));
      return v4;
    }

    public final android.support.v4.app.Fragment a(String p0)
    {
      int i;
      android.support.v4.app.Fragment v3;
      int j;
      if ( this.m != null && p0 != null )
      {
        for ( i = this.m.size() - 1; i >= 0; --i )
        {
          v3 = (android.support.v4.app.Fragment)this.m.get(i);
          if ( v3 != null && p0.equals(v3.mTag) )
            return v3;
        }
      }
      if ( this.l != null && p0 != null )
      {
        for ( j = this.l.size() - 1; j >= 0; --j )
        {
          v3 = (android.support.v4.app.Fragment)this.l.get(j);
          if ( v3 != null && p0.equals(v3.mTag) )
            return v3;
        }
      }
      return null;
    }

    public final android.support.v4.app.ac a()
    {
      return new android.support.v4.app.j(this);
    }

    public final void a(int p0, int p1)
    {
      if ( p0 < 0 )
        throw new IllegalArgumentException("Bad id: " + p0);
      this.a((Runnable)new android.support.v4.app.x(this, p0, 1), false);
    }

    final void a(int p0, int p1, int p2, boolean p3)
    {
      int v5;
      int v6;
      android.support.v4.app.Fragment v7;
      int v8;
      if ( this.u == null && p0 != 0 )
        throw new IllegalStateException("No activity");
      if ( p3 || this.t != p0 )
      {
        this.t = p0;
        if ( this.l != null )
        {
          v5 = 0;
          v6 = 0;
          while ( v5 < this.l.size() )
          {
            v7 = (android.support.v4.app.Fragment)this.l.get(v5);
            if ( v7 != null ) { this.a(v7, p0, p1, p2, false); if ( v7.mLoaderManager != null )
              v8 = v6 | com.gameloft.android.DecompRT.b2i(v7.mLoaderManager.a()); else v8 = v6; }
            else
              v8 = v6;
            ++v5;
            v6 = v8;
          }
          if ( v6 == 0 )
            this.g();
          if ( this.x && this.u != null && this.t == 5 )
          {
            this.u.c_();
            this.x = false;
          }
        }
      }
    }

    public final void a(android.content.res.Configuration p0)
    {
      int i;
      android.support.v4.app.Fragment v3;
      if ( this.m != null )
      {
        for ( i = 0; i < this.m.size(); ++i )
        {
          v3 = (android.support.v4.app.Fragment)this.m.get(i);
          if ( v3 != null )
            v3.performConfigurationChanged(p0);
        }
      }
    }

    public final void a(android.os.Bundle p0, String p1, android.support.v4.app.Fragment p2)
    {
      if ( p2.mIndex < 0 )
        this.a(new IllegalStateException("Fragment " + p2 + " is not currently in the FragmentManager"));
      p0.putInt(p1, p2.mIndex);
    }

    final void a(android.os.Parcelable p0, java.util.ArrayList<android.support.v4.app.Fragment> p1)
    {
      android.support.v4.app.FragmentManagerState v3;
      int i;
      android.support.v4.app.Fragment v5;
      android.support.v4.app.FragmentState v6;
      int j;
      android.support.v4.app.FragmentState v8;
      android.support.v4.app.Fragment v9;
      int k;
      android.support.v4.app.Fragment v11;
      int m;
      android.support.v4.app.Fragment v13;
      int n;
      android.support.v4.app.j v15;
      if ( p0 != null )
      {
        v3 = (android.support.v4.app.FragmentManagerState)p0;
        if ( v3.a != null )
        {
          if ( p1 != null )
          {
            for ( i = 0; i < p1.size(); ++i )
            {
              v5 = (android.support.v4.app.Fragment)p1.get(i);
              if ( b )
                Log.v("FragmentManager", "restoreAllState: re-attaching retained " + v5);
              v6 = v3.a[v5.mIndex];
              v6.k = v5;
              v5.mSavedViewState = null;
              v5.mBackStackNesting = 0;
              v5.mInLayout = false;
              v5.mAdded = false;
              v5.mTarget = null;
              if ( v6.j != null )
              {
                v6.j.setClassLoader(this.u.getClassLoader());
                v5.mSavedViewState = v6.j.getSparseParcelableArray("android:view_state");
              }
            }
          }
          this.l = new java.util.ArrayList(v3.a.length);
          if ( this.n != null )
            this.n.clear();
          for ( j = 0; j < v3.a.length; ++j )
          {
            v8 = v3.a[j];
            if ( v8 != null )
            {
              v9 = v8.a(this.u, this.w);
              if ( b )
                Log.v("FragmentManager", "restoreAllState: active #" + j + ": " + v9);
              this.l.add(v9);
              v8.k = null;
            }
            else
            {
              this.l.add(null);
              if ( this.n == null )
                this.n = new java.util.ArrayList();
              if ( b )
                Log.v("FragmentManager", "restoreAllState: avail #" + j);
              this.n.add(Integer.valueOf(j));
            }
          }
          if ( p1 != null )
          {
            for ( k = 0; k < p1.size(); ++k )
            {
              v11 = (android.support.v4.app.Fragment)p1.get(k);
              if ( v11.mTargetIndex >= 0 )
              {
                if ( v11.mTargetIndex >= this.l.size() )
                {
                  Log.w(
                    "FragmentManager",
                    "Re-attaching retained fragment " + v11 + " target no longer exists: " + v11.mTargetIndex);
                  v11.mTarget = null;
                }
                else
                {
                  v11.mTarget = (android.support.v4.app.Fragment)this.l.get(v11.mTargetIndex);
                }
              }
            }
          }
          if ( v3.b != null )
          {
            this.m = new java.util.ArrayList(v3.b.length);
            for ( m = 0; m < v3.b.length; ++m )
            {
              v13 = (android.support.v4.app.Fragment)this.l.get(v3.b[m]);
              if ( v13 == null )
                this.a(new IllegalStateException("No instantiated fragment for index #" + v3.b[m]));
              v13.mAdded = true;
              if ( b )
                Log.v("FragmentManager", "restoreAllState: added #" + m + ": " + v13);
              if ( this.m.contains(v13) )
                throw new IllegalStateException("Already added!");
              this.m.add(v13);
            }
          }
          else
          {
            this.m = null;
          }
          if ( v3.c != null )
          {
            this.o = new java.util.ArrayList(v3.c.length);
            for ( n = 0; n < v3.c.length; ++n )
            {
              v15 = v3.c[n].a(this);
              if ( b )
              {
                Log.v("FragmentManager", "restoreAllState: back stack #" + n + " (index " + v15.x + "): " + v15);
                v15.a("  ", new java.io.PrintWriter(new android.support.v4.util.c("FragmentManager")), false);
              }
              this.o.add(v15);
              if ( v15.x >= 0 )
                this.a(v15.x, v15);
            }
          }
          else
          {
            this.o = null;
          }
        }
      }
    }

    public final void a(android.support.v4.app.Fragment p0, int p1, int p2)
    {
      boolean v4;
      if ( b )
        Log.v("FragmentManager", "remove: " + p0 + " nesting=" + p0.mBackStackNesting);
      v4 = !p0.isInBackStack();
      if ( !p0.mDetached || v4 )
      {
        if ( this.m != null )
          this.m.remove(p0);
        if ( p0.mHasMenu && p0.mMenuVisible )
          this.x = true;
        p0.mAdded = false;
        p0.mRemoving = true;
        this.a(p0, com.gameloft.android.DecompRT.b2i(!v4), p1, p2, false);
      }
    }

    final void a(android.support.v4.app.Fragment p0, int p1, int p2, int p3, boolean p4)
    {
      android.support.v4.app.FragmentManagerImpl mChildFragmentManager = null;
      android.view.ViewGroup v7 = null;
      android.view.animation.Animation v8 = null; // RETVAL
      android.view.animation.Animation v9 = null;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( (!p0.mAdded || p0.mDetached) && p1 > 1 )
            p1 = 1;
            if ( p0.mRemoving && p1 > p0.mState )
            p1 = p0.mState;
            if ( p0.mDeferStart && p0.mState < 4 && p1 > 3 )
            p1 = 3;
            if ( !(p0.mState >= p1) ) { _pc = 12; continue _sm; }
            if ( !(p0.mState > p1) ) { _pc = 11; continue _sm; }
            _sw_1 = (p0.mState);
            if ( (_sw_1 == (1)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (4)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 5; continue _sm; }
            _pc = 10;
            continue _sm;
          case 1:
            _pc = 9;
            continue _sm;
          case 2:
            _pc = 8;
            continue _sm;
          case 3:
            _pc = 7;
            continue _sm;
          case 4:
            _pc = 6;
            continue _sm;
          case 5:
            if ( p1 < 5 )
            {
            if ( b )
            Log.v("FragmentManager", "movefrom RESUMED: " + p0);
            p0.performPause();
            p0.mResumed = false;
            }
            _pc = 6;
            continue _sm;
          case 6:
            if ( p1 < 4 )
            {
            if ( b )
            Log.v("FragmentManager", "movefrom STARTED: " + p0);
            p0.performStop();
            }
            _pc = 7;
            continue _sm;
          case 7:
            if ( p1 < 3 )
            {
            if ( b )
            Log.v("FragmentManager", "movefrom STOPPED: " + p0);
            p0.performReallyStop();
            }
            _pc = 8;
            continue _sm;
          case 8:
            if ( p1 < 2 )
            {
            if ( b )
            Log.v("FragmentManager", "movefrom ACTIVITY_CREATED: " + p0);
            if ( p0.mView != null && !this.u.isFinishing() && p0.mSavedViewState == null )
            this.f(p0);
            p0.performDestroyView();
            if ( p0.mView != null && p0.mContainer != null )
            {
            if ( this.t <= 0 || this.z )
            v9 = null;
            else
            v9 = this.a(p0, p2, false, p3);
            if ( v9 != null )
            {
            p0.mAnimatingAway = p0.mView;
            p0.mStateAfterAnimating = p1;
            v9.setAnimationListener((android.view.animation.Animation.AnimationListener)new android.support.v4.app.y(this, p0));
            p0.mView.startAnimation(v9);
            }
            p0.mContainer.removeView(p0.mView);
            }
            p0.mContainer = null;
            p0.mView = null;
            p0.mInnerView = null;
            }
            _pc = 9;
            continue _sm;
          case 9:
            if ( p1 <= 0 )
            {
            if ( this.z && p0.mAnimatingAway != null )
            {
            p0.mAnimatingAway = null;
            p0.mAnimatingAway.clearAnimation();
            }
            if ( p0.mAnimatingAway != null )
            {
            p0.mStateAfterAnimating = p1;
            p1 = 1;
            }
            else
            {
            if ( b )
            Log.v("FragmentManager", "movefrom CREATED: " + p0);
            if ( !p0.mRetaining )
            p0.performDestroy();
            p0.mCalled = false;
            p0.onDetach();
            if ( !p0.mCalled )
            throw new android.support.v4.app.ba("Fragment " + p0 + " did not call through to super.onDetach()");
            if ( !p4 )
            {
            if ( p0.mRetaining )
            {
            p0.mActivity = null;
            p0.mFragmentManager = null;
            }
            else if ( p0.mIndex >= 0 )
            {
            if ( b )
            Log.v("FragmentManager", "Freeing fragment index " + p0);
            this.l.set(p0.mIndex, null);
            if ( this.n == null )
            this.n = new java.util.ArrayList();
            this.n.add(Integer.valueOf(p0.mIndex));
            this.u.a(p0.mWho);
            p0.initState();
            }
            }
            }
            }
            _pc = 11;
            continue _sm;
          case 10:
            _pc = 13;
            continue _sm;
          case 11:
            _pc = 13;
            continue _sm;
          case 12:
            if ( !(!p0.mFromLayout || p0.mInLayout) ) { _pc = 14; continue _sm; }
            if ( p0.mAnimatingAway != null )
            {
            p0.mAnimatingAway = null;
            this.a(p0, p0.mStateAfterAnimating, 0, 0, true);
            }
            switch ( p0.mState )
            {
            case 0:
            if ( b )
            Log.v("FragmentManager", "moveto CREATED: " + p0);
            if ( p0.mSavedFragmentState != null )
            {
            p0.mSavedViewState = p0.mSavedFragmentState.getSparseParcelableArray("android:view_state");
            p0.mTarget = this.a(p0.mSavedFragmentState, "android:target_state");
            if ( p0.mTarget != null )
            p0.mTargetRequestCode = p0.mSavedFragmentState.getInt("android:target_req_state", 0);
            p0.mUserVisibleHint = p0.mSavedFragmentState.getBoolean("android:user_visible_hint", true);
            if ( !p0.mUserVisibleHint )
            {
            p0.mDeferStart = true;
            if ( p1 > 3 )
            p1 = 3;
            }
            }
            p0.mActivity = this.u;
            p0.mParentFragment = this.w;
            if ( this.w != null )
            mChildFragmentManager = this.w.mChildFragmentManager;
            else
            mChildFragmentManager = this.u.e;
            p0.mFragmentManager = mChildFragmentManager;
            p0.mCalled = false;
            p0.onAttach(this.u);
            if ( !p0.mCalled )
            throw new android.support.v4.app.ba("Fragment " + p0 + " did not call through to super.onAttach()");
            if ( p0.mParentFragment == null )
            FragmentActivity.onAttachFragment$65850823();
            if ( !p0.mRetaining )
            p0.performCreate(p0.mSavedFragmentState);
            p0.mRetaining = false;
            if ( p0.mFromLayout )
            {
            p0.mView = p0.performCreateView(p0.getLayoutInflater(p0.mSavedFragmentState), null, p0.mSavedFragmentState);
            if ( p0.mView != null )
            {
            p0.mInnerView = p0.mView;
            p0.mView = NoSaveStateFrameLayout.wrap(p0.mView);
            if ( p0.mHidden )
            p0.mView.setVisibility(8);
            p0.onViewCreated(p0.mView, p0.mSavedFragmentState);
            }
            else
            {
            p0.mInnerView = null;
            }
            }
            case 1:
            if ( p1 > 1 )
            {
            if ( b )
            Log.v("FragmentManager", "moveto ACTIVITY_CREATED: " + p0);
            if ( !p0.mFromLayout )
            {
            if ( p0.mContainerId != 0 )
            {
            v7 = (android.view.ViewGroup)this.v.a(p0.mContainerId);
            if ( v7 == null && !p0.mRestored )
            this.a(new IllegalArgumentException("No view found for id 0x"
            + Integer.toHexString(p0.mContainerId)
            + " ("
            + p0.getResources().getResourceName(p0.mContainerId)
            + ") for fragment "
            + p0));
            }
            else
            {
            v7 = null;
            }
            p0.mContainer = v7;
            p0.mView = p0.performCreateView(p0.getLayoutInflater(p0.mSavedFragmentState), v7, p0.mSavedFragmentState);
            if ( p0.mView != null )
            {
            p0.mInnerView = p0.mView;
            p0.mView = NoSaveStateFrameLayout.wrap(p0.mView);
            if ( v7 != null )
            {
            v8 = this.a(p0, p2, true, p3);
            if ( v8 != null )
            p0.mView.startAnimation(v8);
            v7.addView(p0.mView);
            }
            if ( p0.mHidden )
            p0.mView.setVisibility(8);
            p0.onViewCreated(p0.mView, p0.mSavedFragmentState);
            }
            else
            {
            p0.mInnerView = null;
            }
            }
            p0.performActivityCreated(p0.mSavedFragmentState);
            if ( p0.mView != null )
            p0.restoreViewState(p0.mSavedFragmentState);
            p0.mSavedFragmentState = null;
            }
            case 2:
            case 3:
            if ( p1 > 3 )
            {
            if ( b )
            Log.v("FragmentManager", "moveto STARTED: " + p0);
            p0.performStart();
            }
            case 4:
            if ( p1 > 4 )
            {
            if ( b )
            Log.v("FragmentManager", "moveto RESUMED: " + p0);
            p0.mResumed = true;
            p0.performResume();
            p0.mSavedFragmentState = null;
            p0.mSavedViewState = null;
            }
            break;
            default:
            break;
            }
            _pc = 13;
            continue _sm;
          case 13:
            p0.mState = p1;
            _pc = 14;
            continue _sm;
          case 14:
            return;
        }
      }
}

    public final void a(android.support.v4.app.Fragment p0, boolean p1)
    {
      if ( this.m == null )
        this.m = new java.util.ArrayList();
      if ( b )
        Log.v("FragmentManager", "add: " + p0);
      if ( p0.mIndex < 0 )
      {
        if ( this.n != null && this.n.size() > 0 )
        {
          p0.setIndex(((Integer)this.n.remove(this.n.size() - 1)).intValue(), this.w);
          this.l.set(p0.mIndex, p0);
        }
        else
        {
          if ( this.l == null )
            this.l = new java.util.ArrayList();
          p0.setIndex(this.l.size(), this.w);
          this.l.add(p0);
        }
        if ( b )
          Log.v("FragmentManager", "Allocated fragment index " + p0);
      }
      if ( !p0.mDetached )
      {
        if ( this.m.contains(p0) )
          throw new IllegalStateException("Fragment already added: " + p0);
        this.m.add(p0);
        p0.mAdded = true;
        p0.mRemoving = false;
        if ( p0.mHasMenu && p0.mMenuVisible )
          this.x = true;
        if ( p1 )
          this.c(p0);
      }
    }

    public final void a(
            android.support.v4.app.FragmentActivity p0,
            android.support.v4.app.r p1,
            android.support.v4.app.Fragment p2)
    {
      if ( this.u != null )
        throw new IllegalStateException("Already attached");
      this.u = p0;
      this.v = p1;
      this.w = p2;
    }

    public final void a(android.support.v4.app.t p0)
    {
      if ( this.s == null )
        this.s = new java.util.ArrayList();
      this.s.add(p0);
    }

    public final void a(Runnable p0, boolean p1)
    {
      if ( !p1 )
        this.v();
      synchronized ( this )
      {
        if ( this.z || this.u == null )
          throw new IllegalStateException("Activity has been destroyed");
        if ( this.i == null )
          this.i = new java.util.ArrayList();
        this.i.add(p0);
        if ( this.i.size() == 1 )
        {
          this.u.d.removeCallbacks(this.E);
          this.u.d.post(this.E);
        }
      }
    }

    public final void a(String p0, int p1)
    {
      this.a((Runnable)new android.support.v4.app.w(this, p0, p1), false);
    }

    public final void a(String p0, java.io.FileDescriptor p1, java.io.PrintWriter p2, String[] p3)
    {
      int v5;
      String v6;
      int v7;
      int i;
      android.support.v4.app.Fragment v9;
      int v10;
      int j;
      android.support.v4.app.Fragment v12;
      int v13;
      int k;
      android.support.v4.app.Fragment v15;
      int v16;
      int m;
      android.support.v4.app.j v18;
      int v19;
      int n;
      android.support.v4.app.j v21;
      int v22;
      Runnable v23;
      v5 = 0;
      v6 = p0 + "    ";
      if ( this.l != null )
      {
        v7 = this.l.size();
        if ( v7 > 0 )
        {
          p2.print(p0);
          p2.print("Active Fragments in ");
          p2.print(Integer.toHexString(System.identityHashCode(this)));
          p2.println(":");
          for ( i = 0; i < v7; ++i )
          {
            v9 = (android.support.v4.app.Fragment)this.l.get(i);
            p2.print(p0);
            p2.print("  #");
            p2.print(i);
            p2.print(": ");
            p2.println(v9);
            if ( v9 != null )
              v9.dump(v6, p1, p2, p3);
          }
        }
      }
      if ( this.m != null )
      {
        v10 = this.m.size();
        if ( v10 > 0 )
        {
          p2.print(p0);
          p2.println("Added Fragments:");
          for ( j = 0; j < v10; ++j )
          {
            v12 = (android.support.v4.app.Fragment)this.m.get(j);
            p2.print(p0);
            p2.print("  #");
            p2.print(j);
            p2.print(": ");
            p2.println(v12.toString());
          }
        }
      }
      if ( this.p != null )
      {
        v13 = this.p.size();
        if ( v13 > 0 )
        {
          p2.print(p0);
          p2.println("Fragments Created Menus:");
          for ( k = 0; k < v13; ++k )
          {
            v15 = (android.support.v4.app.Fragment)this.p.get(k);
            p2.print(p0);
            p2.print("  #");
            p2.print(k);
            p2.print(": ");
            p2.println(v15.toString());
          }
        }
      }
      if ( this.o != null )
      {
        v16 = this.o.size();
        if ( v16 > 0 )
        {
          p2.print(p0);
          p2.println("Back Stack:");
          for ( m = 0; m < v16; ++m )
          {
            v18 = (android.support.v4.app.j)this.o.get(m);
            p2.print(p0);
            p2.print("  #");
            p2.print(m);
            p2.print(": ");
            p2.println(v18.toString());
            v18.a(v6, p2);
          }
        }
      }
      synchronized ( this )
      {
        if ( this.q != null )
        {
          v19 = this.q.size();
          if ( v19 > 0 )
          {
            p2.print(p0);
            p2.println("Back Stack Indices:");
            for ( n = 0; n < v19; ++n )
            {
              v21 = (android.support.v4.app.j)this.q.get(n);
              p2.print(p0);
              p2.print("  #");
              p2.print(n);
              p2.print(": ");
              p2.println(v21);
            }
          }
        }
        if ( this.r != null && this.r.size() > 0 )
        {
          p2.print(p0);
          p2.print("mAvailBackStackIndices: ");
          p2.println(Arrays.toString(this.r.toArray()));
        }
      }
      if ( this.i != null )
      {
        v22 = this.i.size();
        if ( v22 > 0 )
        {
          p2.print(p0);
          p2.println("Pending Actions:");
          while ( v5 < v22 )
          {
            v23 = (Runnable)this.i.get(v5);
            p2.print(p0);
            p2.print("  #");
            p2.print(v5);
            p2.print(": ");
            p2.println(v23);
            ++v5;
          }
        }
      }
      p2.print(p0);
      p2.println("FragmentManager misc state:");
      p2.print(p0);
      p2.print("  mActivity=");
      p2.println(this.u);
      p2.print(p0);
      p2.print("  mContainer=");
      p2.println(this.v);
      if ( this.w != null )
      {
        p2.print(p0);
        p2.print("  mParent=");
        p2.println(this.w);
      }
      p2.print(p0);
      p2.print("  mCurState=");
      p2.print(this.t);
      p2.print(" mStateSaved=");
      p2.print(this.y);
      p2.print(" mDestroyed=");
      p2.println(this.z);
      if ( this.x )
      {
        p2.print(p0);
        p2.print("  mNeedMenuInvalidate=");
        p2.println(this.x);
      }
      if ( this.A != null )
      {
        p2.print(p0);
        p2.print("  mNoTransactionsBecause=");
        p2.println(this.A);
      }
      if ( this.n != null && this.n.size() > 0 )
      {
        p2.print(p0);
        p2.print("  mAvailIndices: ");
        p2.println(Arrays.toString(this.n.toArray()));
      }
    }

    public final boolean a(android.view.Menu p0)
    {
      int v2;
      boolean v3;
      android.support.v4.app.Fragment v4;
      if ( this.m == null )
        return false;
      v2 = 0;
      v3 = false;
      while ( v2 < this.m.size() )
      {
        v4 = (android.support.v4.app.Fragment)this.m.get(v2);
        if ( v4 != null && v4.performPrepareOptionsMenu(p0) )
          v3 = true;
        ++v2;
      }
      return v3;
    }

    public final boolean a(android.view.Menu p0, android.view.MenuInflater p1)
    {
      int v3;
      java.util.ArrayList v4;
      int v5;
      boolean v6;
      android.support.v4.app.Fragment v7;
      android.support.v4.app.Fragment v8;
      v3 = 0;
      v4 = null;
      if ( this.m != null )
      {
        v5 = 0;
        v6 = false;
        while ( v5 < this.m.size() )
        {
          v7 = (android.support.v4.app.Fragment)this.m.get(v5);
          if ( v7 != null && v7.performCreateOptionsMenu(p0, p1) )
          {
            v6 = true;
            if ( v4 == null )
              v4 = new java.util.ArrayList();
            v4.add(v7);
          }
          ++v5;
        }
      }
      else
      {
        v6 = false;
      }
      if ( this.p != null )
      {
        while ( v3 < this.p.size() )
        {
          v8 = (android.support.v4.app.Fragment)this.p.get(v3);
          if ( v4 == null || !v4.contains(v8) )
            v8.onDestroyOptionsMenu();
          ++v3;
        }
      }
      this.p = v4;
      return v6;
    }

    public final boolean a(android.view.MenuItem p0)
    {
      boolean v2;
      int i;
      android.support.v4.app.Fragment v4;
      v2 = false;
      if ( this.m != null )
      {
        for ( i = 0; i < this.m.size(); ++i )
        {
          v4 = (android.support.v4.app.Fragment)this.m.get(i);
          if ( v4 != null && v4.performOptionsItemSelected(p0) )
            return true;
        }
      }
      return v2;
    }

    final boolean a(String p0, int p1, int p2)
    {
      boolean v4 = false;
      int v6 = 0; // RETVAL
      int v7 = 0;
      int k = 0;
      android.support.v4.app.j v9 = null;
      android.support.v4.app.j v10 = null;
      java.util.ArrayList v11 = null;
      int i = 0;
      int v13 = 0;
      int j = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v4 = false;
            if ( this.o == null )
            return v4;
            if ( !(p0 == null && p1 < 0 && (p2 & 1) == 0) ) { _pc = 2; continue _sm; }
            v6 = this.o.size();
            if ( v6 - 1 < 0 )
            return v4;
            ((android.support.v4.app.j)this.o.remove(v6 - 1)).a(true);
            _pc = 1;
            continue _sm;
          case 1:
            this.w();
            return true;
          case 2:
            v7 = -1;
            if ( !(p0 == null && p1 < 0) ) { _pc = 4; continue _sm; }
            _pc = 3;
            continue _sm;
          case 3:
            if ( v7 == this.o.size() - 1 )
            return v4;
            v11 = new java.util.ArrayList();
            for ( i = this.o.size() - 1; i > v7; --i )
            v11.add(this.o.remove(i));
            v13 = v11.size() - 1;
            for ( j = 0; j <= v13; ++j )
            {
            if ( b )
            Log.v("FragmentManager", "Popping back stack state: " + v11.get(j));
            ((android.support.v4.app.j)v11.get(j)).a(j == v13);
            }
            _pc = 1;
            continue _sm;
          case 4:
            for ( k = this.o.size() - 1; k >= 0; --k )
            {
            v9 = (android.support.v4.app.j)this.o.get(k);
            if ( p0 != null && p0.equals(v9.j()) )
            break;
            if ( p1 >= 0 && p1 == v9.x )
            break;
            }
            if ( k >= 0 )
            {
            if ( (p2 & 1) != 0 )
            {
            --k;
            while ( k >= 0 )
            {
            v10 = (android.support.v4.app.j)this.o.get(k);
            if ( (p0 == null || !p0.equals(v10.j())) && (p1 < 0 || p1 != v10.x) )
            break;
            --k;
            }
            }
            v7 = k;
            { _pc = 3; continue _sm; }
            }
            return v4;
        }
      }
}

    public final android.support.v4.app.Fragment b(String p0)
    {
      int i;
      android.support.v4.app.Fragment v3;
      android.support.v4.app.Fragment FragmentByWho;
      if ( this.l != null && p0 != null )
      {
        for ( i = this.l.size() - 1; i >= 0; --i )
        {
          v3 = (android.support.v4.app.Fragment)this.l.get(i);
          if ( v3 != null )
          {
            FragmentByWho = v3.findFragmentByWho(p0);
            if ( FragmentByWho != null )
              return FragmentByWho;
          }
        }
      }
      return null;
    }

    public final android.support.v4.app.s b(int p0)
    {
      return (android.support.v4.app.s)this.o.get(p0);
    }

    public final void b(android.support.v4.app.Fragment p0)
    {
      if ( p0.mDeferStart )
      {
        if ( this.k )
        {
          this.B = true;
        }
        else
        {
          p0.mDeferStart = false;
          this.a(p0, this.t, 0, 0, false);
        }
      }
    }

    public final void b(android.support.v4.app.Fragment p0, int p1, int p2)
    {
      android.view.animation.Animation v4; // RETVAL
    
      if ( b )
        Log.v("FragmentManager", "hide: " + p0);
      if ( !p0.mHidden )
      {
        p0.mHidden = true;
        if ( p0.mView != null )
        {
          v4 = this.a(p0, p1, false, p2);
          if ( v4 != null )
            p0.mView.startAnimation(v4);
          p0.mView.setVisibility(8);
        }
        if ( p0.mAdded && p0.mHasMenu && p0.mMenuVisible )
          this.x = true;
        p0.onHiddenChanged(true);
      }
    }

    final void b(android.support.v4.app.j p0)
    {
      if ( this.o == null )
        this.o = new java.util.ArrayList();
      this.o.add(p0);
      this.w();
    }

    public final void b(android.support.v4.app.t p0)
    {
      if ( this.s != null )
        this.s.remove(p0);
    }

    public final void b(android.view.Menu p0)
    {
      int i;
      android.support.v4.app.Fragment v3;
      if ( this.m != null )
      {
        for ( i = 0; i < this.m.size(); ++i )
        {
          v3 = (android.support.v4.app.Fragment)this.m.get(i);
          if ( v3 != null )
            v3.performOptionsMenuClosed(p0);
        }
      }
    }

    public final boolean b()
    {
      return this.h();
    }

    public final boolean b(int p0, int p1)
    {
      this.v();
      this.h();
      if ( p0 < 0 )
        throw new IllegalArgumentException("Bad id: " + p0);
      return this.a((String)null, p0, p1);
    }

    public final boolean b(android.view.MenuItem p0)
    {
      boolean v2;
      int i;
      android.support.v4.app.Fragment v4;
      v2 = false;
      if ( this.m != null )
      {
        for ( i = 0; i < this.m.size(); ++i )
        {
          v4 = (android.support.v4.app.Fragment)this.m.get(i);
          if ( v4 != null && v4.performContextItemSelected(p0) )
            return true;
        }
      }
      return v2;
    }

    public final boolean b(String p0, int p1)
    {
      this.v();
      this.h();
      return this.a(p0, -1, p1);
    }

    public final void c()
    {
      this.a((Runnable)new android.support.v4.app.v(this), false);
    }

    public final void c(int p0)
    {
      synchronized ( this )
      {
        this.q.set(p0, null);
        if ( this.r == null )
          this.r = new java.util.ArrayList();
        if ( b )
          Log.v("FragmentManager", "Freeing back stack index " + p0);
        this.r.add(Integer.valueOf(p0));
      }
    }

    final void c(android.support.v4.app.Fragment p0)
    {
      this.a(p0, this.t, 0, 0, false);
    }

    public final void c(android.support.v4.app.Fragment p0, int p1, int p2)
    {
      android.view.animation.Animation v4; // RETVAL
    
      if ( b )
        Log.v("FragmentManager", "show: " + p0);
      if ( p0.mHidden )
      {
        p0.mHidden = false;
        if ( p0.mView != null )
        {
          v4 = this.a(p0, p1, true, p2);
          if ( v4 != null )
            p0.mView.startAnimation(v4);
          p0.mView.setVisibility(0);
        }
        if ( p0.mAdded && p0.mHasMenu && p0.mMenuVisible )
          this.x = true;
        p0.onHiddenChanged(false);
      }
    }

    public final void d(android.support.v4.app.Fragment p0, int p1, int p2)
    {
      if ( b )
        Log.v("FragmentManager", "detach: " + p0);
      if ( !p0.mDetached )
      {
        p0.mDetached = true;
        if ( p0.mAdded )
        {
          if ( this.m != null )
          {
            if ( b )
              Log.v("FragmentManager", "remove from detach: " + p0);
            this.m.remove(p0);
          }
          if ( p0.mHasMenu && p0.mMenuVisible )
            this.x = true;
          p0.mAdded = false;
          this.a(p0, 1, p1, p2, false);
        }
      }
    }

    public final boolean d()
    {
      this.v();
      this.h();
      return this.a((String)null, -1, 0);
    }

    public final int e()
    {
      if ( this.o != null )
        return this.o.size();
      else
        return 0;
    }

    public final void e(android.support.v4.app.Fragment p0, int p1, int p2)
    {
      if ( b )
        Log.v("FragmentManager", "attach: " + p0);
      if ( p0.mDetached )
      {
        p0.mDetached = false;
        if ( !p0.mAdded )
        {
          if ( this.m == null )
            this.m = new java.util.ArrayList();
          if ( this.m.contains(p0) )
            throw new IllegalStateException("Fragment already added: " + p0);
          if ( b )
            Log.v("FragmentManager", "add from attach: " + p0);
          this.m.add(p0);
          p0.mAdded = true;
          if ( p0.mHasMenu && p0.mMenuVisible )
            this.x = true;
          this.a(p0, this.t, p1, p2, false);
        }
      }
    }

    public final java.util.List<android.support.v4.app.Fragment> f()
    {
      return this.l;
    }

    final void g()
    {
      int i;
      android.support.v4.app.Fragment v2;
      if ( this.l != null )
      {
        for ( i = 0; i < this.l.size(); ++i )
        {
          v2 = (android.support.v4.app.Fragment)this.l.get(i);
          if ( v2 != null )
            this.b(v2);
        }
      }
    }

    public final boolean h()
    {
      android.os.Looper v1 = null;
      android.os.Looper Looper = null;
      boolean i = false;
      int v4 = 0;
      int v5 = 0;
      android.support.v4.app.Fragment v6 = null;
      int v7 = 0; // RETVAL
      int v8 = 0;
      int j = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( this.k )
            throw new IllegalStateException("Recursive entry to executePendingTransactions");
            v1 = Looper.myLooper();
            Looper = this.u.d.getLooper();
            if ( v1 != Looper )
            throw new IllegalStateException("Must be called from main thread of process");
            i = false;
            _pc = 1;
            continue _sm;
          case 1:
            synchronized ( this )
            {
            if ( this.i != null && this.i.size() != 0 )
            {
            v7 = this.i.size();
            v8 = v7;
            if ( this.j == null || this.j.length < v7 )
            this.j = new Runnable[v7];
            this.i.toArray(this.j);
            this.i.clear();
            this.u.d.removeCallbacks(this.E);
            { _pc = 2; continue _sm; }
            }
            if ( this.B )
            {
            v4 = 0;
            v5 = 0;
            while ( v4 < this.l.size() )
            {
            v6 = (android.support.v4.app.Fragment)this.l.get(v4);
            if ( v6 != null && v6.mLoaderManager != null )
            v5 |= v6.mLoaderManager.a() ? 1 : 0;
            ++v4;
            }
            if ( v5 == 0 )
            {
            this.B = false;
            this.g();
            }
            }
            return i;
            }
          case 2:
            this.k = true;
            for ( j = 0; j < v8; ++j )
            {
            this.j[j].run();
            this.j[j] = null;
            }
            this.k = false;
            _pc = 3;
            continue _sm;
          case 3:
            i = true;
            _pc = 1;
            continue _sm;
        }
      }
}

    final java.util.ArrayList<android.support.v4.app.Fragment> i()
    {
      java.util.ArrayList v1;
      int i;
      android.support.v4.app.Fragment v3;
      int mIndex;
      v1 = null;
      if ( this.l != null )
      {
        for ( i = 0; i < this.l.size(); ++i )
        {
          v3 = (android.support.v4.app.Fragment)this.l.get(i);
          if ( v3 != null && v3.mRetainInstance )
          {
            if ( v1 == null )
              v1 = new java.util.ArrayList();
            v1.add(v3);
            v3.mRetaining = true;
            if ( v3.mTarget != null )
              mIndex = v3.mTarget.mIndex;
            else
              mIndex = -1;
            v3.mTargetIndex = mIndex;
            if ( b )
              Log.v("FragmentManager", "retainNonConfig: keeping retained " + v3);
          }
        }
      }
      return v1;
    }

    final android.os.Parcelable j()
    {
      android.support.v4.app.BackStackState[] v1;
      int v3;
      android.support.v4.app.FragmentState[] v4;
      int v5;
      int v6;
      android.support.v4.app.Fragment v7;
      android.support.v4.app.FragmentState v8;
      int v9;
      int v10; // RETVAL
      int v11;
      int[] v12;
      int i;
      int v14; // RETVAL
      int v15;
      int j;
      android.support.v4.app.FragmentManagerState v17;
      v1 = null;
      this.h();
      if ( d )
        this.y = true;
      if ( this.l != null && this.l.size() > 0 )
      {
        v3 = this.l.size();
        v4 = new android.support.v4.app.FragmentState[v3];
        v5 = 0;
        v6 = 0;
        while ( v5 < v3 )
        {
          v7 = (android.support.v4.app.Fragment)this.l.get(v5);
          if ( v7 != null )
          {
            if ( v7.mIndex < 0 )
              this.a(new IllegalStateException("Failure saving state: active " + v7 + " has cleared index: " + v7.mIndex));
            v8 = new android.support.v4.app.FragmentState(v7);
            v4[v5] = v8;
            if ( v7.mState <= 0 || v8.j != null )
            {
              v8.j = v7.mSavedFragmentState;
            }
            else
            {
              v8.j = this.g(v7);
              if ( v7.mTarget != null )
              {
                if ( v7.mTarget.mIndex < 0 )
                  this.a(new IllegalStateException("Failure saving state: "
                                                 + v7
                                                 + " has target not in fragment manager: "
                                                 + v7.mTarget));
                if ( v8.j == null )
                  v8.j = new android.os.Bundle();
                this.a(v8.j, "android:target_state", v7.mTarget);
                if ( v7.mTargetRequestCode != 0 )
                  v8.j.putInt("android:target_req_state", v7.mTargetRequestCode);
              }
            }
            if ( b )
              Log.v("FragmentManager", "Saved state of " + v7 + ": " + v8.j);
            v9 = 1;
          }
          else
          {
            v9 = v6;
          }
          ++v5;
          v6 = v9;
        }
        if ( v6 != 0 )
        {
          if ( this.m != null && (com.gameloft.android.DecompRT.comma((v10 = this.m.size()), com.gameloft.android.DecompRT.comma((v11 = v10), (v10 > 0)))) )
          {
            v12 = new int[v10];
            for ( i = 0; i < v11; ++i )
            {
              v12[i] = ((android.support.v4.app.Fragment)this.m.get(i)).mIndex;
              if ( v12[i] < 0 )
                this.a(new IllegalStateException("Failure saving state: active "
                                               + this.m.get(i)
                                               + " has cleared index: "
                                               + v12[i]));
              if ( b )
                Log.v("FragmentManager", "saveAllState: adding fragment #" + i + ": " + this.m.get(i));
            }
          }
          else
          {
            v12 = null;
          }
          if ( this.o != null )
          {
            v14 = this.o.size();
            v15 = v14;
            if ( v14 > 0 )
            {
              v1 = new android.support.v4.app.BackStackState[v14];
              for ( j = 0; j < v15; ++j )
              {
                v1[j] = new android.support.v4.app.BackStackState((android.support.v4.app.j)this.o.get(j));
                if ( b )
                  Log.v("FragmentManager", "saveAllState: adding back stack #" + j + ": " + this.o.get(j));
              }
            }
          }
          v17 = new android.support.v4.app.FragmentManagerState();
          v17.a = v4;
          v17.b = (int[])v12;
          v17.c = (android.support.v4.app.BackStackState[])v1;
          return (android.os.Parcelable)v17;
        }
        else if ( b )
        {
          Log.v("FragmentManager", "saveAllState: no fragments!");
        }
      }
      return null;
    }

    public final void k()
    {
      this.y = false;
    }

    public final void l()
    {
      this.y = false;
      this.a(1, false);
    }

    public final void m()
    {
      this.y = false;
      this.a(2, false);
    }

    public final void n()
    {
      this.y = false;
      this.a(4, false);
    }

    public final void o()
    {
      this.y = false;
      this.a(5, false);
    }

    public final void p()
    {
      this.a(4, false);
    }

    public final void q()
    {
      this.y = true;
      this.a(3, false);
    }

    public final void r()
    {
      this.a(2, false);
    }

    public final void s()
    {
      this.a(1, false);
    }

    public final void t()
    {
      this.z = true;
      this.h();
      this.a(0, false);
      this.u = null;
      this.v = null;
      this.w = null;
    }

    public final String toString()
    {
      StringBuilder v1;
      v1 = new StringBuilder(128);
      v1.append("FragmentManager{");
      v1.append(Integer.toHexString(System.identityHashCode(this)));
      v1.append(" in ");
      if ( this.w != null )
        DebugUtils.buildShortClassTag(this.w, v1);
      else
        DebugUtils.buildShortClassTag(this.u, v1);
      v1.append("}}");
      return v1.toString();
    }

    public final void u()
    {
      int i;
      android.support.v4.app.Fragment v2;
      if ( this.m != null )
      {
        for ( i = 0; i < this.m.size(); ++i )
        {
          v2 = (android.support.v4.app.Fragment)this.m.get(i);
          if ( v2 != null )
            v2.performLowMemory();
        }
      }
    }

}
