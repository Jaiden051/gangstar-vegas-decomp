// Decompiled from classes.dex (SourceFile: Fragment.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.support.v4.util.DebugUtils;
public class Fragment implements android.content.ComponentCallbacks, android.view.View.OnCreateContextMenuListener {
    // Fields
    static int ACTIVITY_CREATED;
    static int CREATED;
    static int INITIALIZING;
    static int RESUMED;
    static int STARTED;
    static int STOPPED;
    private static final android.support.v4.util.SimpleArrayMap sClassMap;
    android.support.v4.app.FragmentActivity mActivity;
    boolean mAdded;
    android.view.View mAnimatingAway;
    android.os.Bundle mArguments;
    int mBackStackNesting;
    boolean mCalled;
    boolean mCheckedForLoaderManager;
    android.support.v4.app.FragmentManagerImpl mChildFragmentManager;
    android.view.ViewGroup mContainer;
    int mContainerId;
    boolean mDeferStart;
    boolean mDetached;
    int mFragmentId;
    android.support.v4.app.FragmentManagerImpl mFragmentManager;
    boolean mFromLayout;
    boolean mHasMenu;
    boolean mHidden;
    boolean mInLayout;
    int mIndex;
    android.view.View mInnerView;
    android.support.v4.app.LoaderManagerImpl mLoaderManager;
    boolean mLoadersStarted;
    boolean mMenuVisible;
    int mNextAnim;
    android.support.v4.app.Fragment mParentFragment;
    boolean mRemoving;
    boolean mRestored;
    boolean mResumed;
    boolean mRetainInstance;
    boolean mRetaining;
    android.os.Bundle mSavedFragmentState;
    android.util.SparseArray mSavedViewState;
    int mState;
    int mStateAfterAnimating;
    java.lang.String mTag;
    android.support.v4.app.Fragment mTarget;
    int mTargetIndex;
    int mTargetRequestCode;
    boolean mUserVisibleHint;
    android.view.View mView;
    java.lang.String mWho;

    // Methods
    static
    {
      sClassMap = new android.support.v4.util.SimpleArrayMap();
    }

    public Fragment()
    {
      super();
      this.mState = 0;
      this.mIndex = -1;
      this.mTargetIndex = -1;
      this.mMenuVisible = true;
      this.mUserVisibleHint = true;
    }

    public static android.support.v4.app.Fragment instantiate(android.content.Context p0, String p1)
    {
      return instantiate(p0, p1, null);
    }

    public static android.support.v4.app.Fragment instantiate(
            android.content.Context p0,
            String p1,
            android.os.Bundle p2)
    {
      Class Class;
      android.support.v4.app.Fragment v4;
      try
      {
        Class = (Class)sClassMap.get(p1);
        if ( Class == null )
        {
          Class = p0.getClassLoader().loadClass(p1);
          sClassMap.put(p1, Class);
        }
        v4 = (android.support.v4.app.Fragment)Class.newInstance();
        if ( p2 != null )
        {
          p2.setClassLoader(v4.getClass().getClassLoader());
          v4.mArguments = p2;
        }
        return v4;
      }
      catch ( ClassNotFoundException v6 )
      {
        throw new android.support.v4.app.n("Unable to instantiate fragment "
                                         + p1
                                         + ": make sure class name exists, is public, and has an empty constructor that is public", v6);
      }
      catch ( InstantiationException v7 )
      {
        throw new android.support.v4.app.n("Unable to instantiate fragment "
                                         + p1
                                         + ": make sure class name exists, is public, and has an empty constructor that is public", v7);
      }
      catch ( IllegalAccessException v8 )
      {
        throw new android.support.v4.app.n("Unable to instantiate fragment "
                                         + p1
                                         + ": make sure class name exists, is public, and has an empty constructor that is public", v8);
      }
    }

    static boolean isSupportFragmentClass(android.content.Context p0, String p1)
    {
      Class Class;
      try
      {
        Class = (Class)sClassMap.get(p1);
        if ( Class == null )
        {
          Class = p0.getClassLoader().loadClass(p1);
          sClassMap.put(p1, Class);
        }
        return android.support.v4.app.Fragment.class.isAssignableFrom(Class);
      }
      catch ( ClassNotFoundException e )
      {
        return false;
      }
    }

    public void dump(String p0, java.io.FileDescriptor p1, java.io.PrintWriter p2, String[] p3)
    {
      p2.print(p0);
      p2.print("mFragmentId=#");
      p2.print(Integer.toHexString(this.mFragmentId));
      p2.print(" mContainerId=#");
      p2.print(Integer.toHexString(this.mContainerId));
      p2.print(" mTag=");
      p2.println(this.mTag);
      p2.print(p0);
      p2.print("mState=");
      p2.print(this.mState);
      p2.print(" mIndex=");
      p2.print(this.mIndex);
      p2.print(" mWho=");
      p2.print(this.mWho);
      p2.print(" mBackStackNesting=");
      p2.println(this.mBackStackNesting);
      p2.print(p0);
      p2.print("mAdded=");
      p2.print(this.mAdded);
      p2.print(" mRemoving=");
      p2.print(this.mRemoving);
      p2.print(" mResumed=");
      p2.print(this.mResumed);
      p2.print(" mFromLayout=");
      p2.print(this.mFromLayout);
      p2.print(" mInLayout=");
      p2.println(this.mInLayout);
      p2.print(p0);
      p2.print("mHidden=");
      p2.print(this.mHidden);
      p2.print(" mDetached=");
      p2.print(this.mDetached);
      p2.print(" mMenuVisible=");
      p2.print(this.mMenuVisible);
      p2.print(" mHasMenu=");
      p2.println(this.mHasMenu);
      p2.print(p0);
      p2.print("mRetainInstance=");
      p2.print(this.mRetainInstance);
      p2.print(" mRetaining=");
      p2.print(this.mRetaining);
      p2.print(" mUserVisibleHint=");
      p2.println(this.mUserVisibleHint);
      if ( this.mFragmentManager != null )
      {
        p2.print(p0);
        p2.print("mFragmentManager=");
        p2.println(this.mFragmentManager);
      }
      if ( this.mActivity != null )
      {
        p2.print(p0);
        p2.print("mActivity=");
        p2.println(this.mActivity);
      }
      if ( this.mParentFragment != null )
      {
        p2.print(p0);
        p2.print("mParentFragment=");
        p2.println(this.mParentFragment);
      }
      if ( this.mArguments != null )
      {
        p2.print(p0);
        p2.print("mArguments=");
        p2.println(this.mArguments);
      }
      if ( this.mSavedFragmentState != null )
      {
        p2.print(p0);
        p2.print("mSavedFragmentState=");
        p2.println(this.mSavedFragmentState);
      }
      if ( this.mSavedViewState != null )
      {
        p2.print(p0);
        p2.print("mSavedViewState=");
        p2.println(this.mSavedViewState);
      }
      if ( this.mTarget != null )
      {
        p2.print(p0);
        p2.print("mTarget=");
        p2.print(this.mTarget);
        p2.print(" mTargetRequestCode=");
        p2.println(this.mTargetRequestCode);
      }
      if ( this.mNextAnim != 0 )
      {
        p2.print(p0);
        p2.print("mNextAnim=");
        p2.println(this.mNextAnim);
      }
      if ( this.mContainer != null )
      {
        p2.print(p0);
        p2.print("mContainer=");
        p2.println(this.mContainer);
      }
      if ( this.mView != null )
      {
        p2.print(p0);
        p2.print("mView=");
        p2.println(this.mView);
      }
      if ( this.mInnerView != null )
      {
        p2.print(p0);
        p2.print("mInnerView=");
        p2.println(this.mView);
      }
      if ( this.mAnimatingAway != null )
      {
        p2.print(p0);
        p2.print("mAnimatingAway=");
        p2.println(this.mAnimatingAway);
        p2.print(p0);
        p2.print("mStateAfterAnimating=");
        p2.println(this.mStateAfterAnimating);
      }
      if ( this.mLoaderManager != null )
      {
        p2.print(p0);
        p2.println("Loader Manager:");
        this.mLoaderManager.a(p0 + "  ", p1, p2, p3);
      }
      if ( this.mChildFragmentManager != null )
      {
        p2.print(p0);
        p2.println("Child " + this.mChildFragmentManager + ":");
        this.mChildFragmentManager.a(p0 + "  ", p1, p2, p3);
      }
    }

    public final boolean equals(Object p0)
    {
      return super.equals(p0);
    }

    android.support.v4.app.Fragment findFragmentByWho(String p0)
    {
      if ( !p0.equals(this.mWho) )
      {
        if ( this.mChildFragmentManager != null )
          return this.mChildFragmentManager.b(p0);
        else
          return null;
      }
      return this;
    }

    public final android.support.v4.app.FragmentActivity getActivity()
    {
      return this.mActivity;
    }

    public final android.os.Bundle getArguments()
    {
      return this.mArguments;
    }

    public final android.support.v4.app.FragmentManager getChildFragmentManager()
    {
      if ( this.mChildFragmentManager == null )
      {
        this.instantiateChildFragmentManager();
        if ( this.mState < 5 )
        {
          if ( this.mState < 4 )
          {
            if ( this.mState < 2 )
            {
              if ( this.mState > 0 )
                this.mChildFragmentManager.l();
            }
            else
            {
              this.mChildFragmentManager.m();
            }
          }
          else
          {
            this.mChildFragmentManager.n();
          }
        }
        else
        {
          this.mChildFragmentManager.o();
        }
      }
      return this.mChildFragmentManager;
    }

    public final android.support.v4.app.FragmentManager getFragmentManager()
    {
      return this.mFragmentManager;
    }

    public final int getId()
    {
      return this.mFragmentId;
    }

    public android.view.LayoutInflater getLayoutInflater(android.os.Bundle p0)
    {
      return this.mActivity.getLayoutInflater();
    }

    public android.support.v4.app.LoaderManager getLoaderManager()
    {
      if ( this.mLoaderManager != null )
        return this.mLoaderManager;
      if ( this.mActivity == null )
        throw new IllegalStateException("Fragment " + this + " not attached to Activity");
      this.mCheckedForLoaderManager = true;
      this.mLoaderManager = this.mActivity.a(this.mWho, this.mLoadersStarted, true);
      return this.mLoaderManager;
    }

    public final android.support.v4.app.Fragment getParentFragment()
    {
      return this.mParentFragment;
    }

    public final android.content.res.Resources getResources()
    {
      if ( this.mActivity == null )
        throw new IllegalStateException("Fragment " + this + " not attached to Activity");
      return this.mActivity.getResources();
    }

    public final boolean getRetainInstance()
    {
      return this.mRetainInstance;
    }

    public final String getString(int p0)
    {
      return this.getResources().getString(p0);
    }

    public final String getString(int p0, Object[] p1)
    {
      return this.getResources().getString(p0, p1);
    }

    public final String getTag()
    {
      return this.mTag;
    }

    public final android.support.v4.app.Fragment getTargetFragment()
    {
      return this.mTarget;
    }

    public final int getTargetRequestCode()
    {
      return this.mTargetRequestCode;
    }

    public final CharSequence getText(int p0)
    {
      return this.getResources().getText(p0);
    }

    public boolean getUserVisibleHint()
    {
      return this.mUserVisibleHint;
    }

    public android.view.View getView()
    {
      return this.mView;
    }

    public final boolean hasOptionsMenu()
    {
      return this.mHasMenu;
    }

    public final int hashCode()
    {
      return super.hashCode();
    }

    void initState()
    {
      this.mIndex = -1;
      this.mWho = null;
      this.mAdded = false;
      this.mRemoving = false;
      this.mResumed = false;
      this.mFromLayout = false;
      this.mInLayout = false;
      this.mRestored = false;
      this.mBackStackNesting = 0;
      this.mFragmentManager = null;
      this.mActivity = null;
      this.mFragmentId = 0;
      this.mContainerId = 0;
      this.mTag = null;
      this.mHidden = false;
      this.mDetached = false;
      this.mRetaining = false;
      this.mLoaderManager = null;
      this.mLoadersStarted = false;
      this.mCheckedForLoaderManager = false;
    }

    void instantiateChildFragmentManager()
    {
      this.mChildFragmentManager = new android.support.v4.app.FragmentManagerImpl();
      this.mChildFragmentManager.a(this.mActivity, (android.support.v4.app.r)new android.support.v4.app.m(this), this);
    }

    public final boolean isAdded()
    {
      return this.mActivity != null && this.mAdded;
    }

    public final boolean isDetached()
    {
      return this.mDetached;
    }

    public final boolean isHidden()
    {
      return this.mHidden;
    }

    final boolean isInBackStack()
    {
      return this.mBackStackNesting > 0;
    }

    public final boolean isInLayout()
    {
      return this.mInLayout;
    }

    public final boolean isMenuVisible()
    {
      return this.mMenuVisible;
    }

    public final boolean isRemoving()
    {
      return this.mRemoving;
    }

    public final boolean isResumed()
    {
      return this.mResumed;
    }

    public final boolean isVisible()
    {
      return this.isAdded()
          && !this.isHidden()
          && this.mView != null
          && this.mView.getWindowToken() != null
          && this.mView.getVisibility() == 0;
    }

    public void onActivityCreated(android.os.Bundle p0)
    {
      this.mCalled = true;
    }

    public void onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      ;
    }

    public void onAttach(android.app.Activity p0)
    {
      this.mCalled = true;
    }

    public void onConfigurationChanged(android.content.res.Configuration p0)
    {
      this.mCalled = true;
    }

    public boolean onContextItemSelected(android.view.MenuItem p0)
    {
      return false;
    }

    public void onCreate(android.os.Bundle p0)
    {
      this.mCalled = true;
    }

    public android.view.animation.Animation onCreateAnimation(int p0, boolean p1, int p2)
    {
      return null;
    }

    public void onCreateContextMenu(
            android.view.ContextMenu p0,
            android.view.View p1,
            android.view.ContextMenu.ContextMenuInfo p2)
    {
      this.getActivity().onCreateContextMenu(p0, p1, p2);
    }

    public void onCreateOptionsMenu(android.view.Menu p0, android.view.MenuInflater p1)
    {
      ;
    }

    public android.view.View onCreateView(
            android.view.LayoutInflater p0,
            android.view.ViewGroup p1,
            android.os.Bundle p2)
    {
      return null;
    }

    public void onDestroy()
    {
      this.mCalled = true;
      if ( !this.mCheckedForLoaderManager )
      {
        this.mCheckedForLoaderManager = true;
        this.mLoaderManager = this.mActivity.a(this.mWho, this.mLoadersStarted, false);
      }
      if ( this.mLoaderManager != null )
        this.mLoaderManager.h();
    }

    public void onDestroyOptionsMenu()
    {
      ;
    }

    public void onDestroyView()
    {
      this.mCalled = true;
    }

    public void onDetach()
    {
      this.mCalled = true;
    }

    public void onHiddenChanged(boolean p0)
    {
      ;
    }

    public void onInflate(android.app.Activity p0, android.util.AttributeSet p1, android.os.Bundle p2)
    {
      this.mCalled = true;
    }

    public void onLowMemory()
    {
      this.mCalled = true;
    }

    public boolean onOptionsItemSelected(android.view.MenuItem p0)
    {
      return false;
    }

    public void onOptionsMenuClosed(android.view.Menu p0)
    {
      ;
    }

    public void onPause()
    {
      this.mCalled = true;
    }

    public void onPrepareOptionsMenu(android.view.Menu p0)
    {
      ;
    }

    public void onResume()
    {
      this.mCalled = true;
    }

    public void onSaveInstanceState(android.os.Bundle p0)
    {
      ;
    }

    public void onStart()
    {
      this.mCalled = true;
      if ( !this.mLoadersStarted )
      {
        this.mLoadersStarted = true;
        if ( !this.mCheckedForLoaderManager )
        {
          this.mCheckedForLoaderManager = true;
          this.mLoaderManager = this.mActivity.a(this.mWho, this.mLoadersStarted, false);
        }
        if ( this.mLoaderManager != null )
          this.mLoaderManager.b();
      }
    }

    public void onStop()
    {
      this.mCalled = true;
    }

    public void onViewCreated(android.view.View p0, android.os.Bundle p1)
    {
      ;
    }

    public void onViewStateRestored(android.os.Bundle p0)
    {
      this.mCalled = true;
    }

    void performActivityCreated(android.os.Bundle p0)
    {
      if ( this.mChildFragmentManager != null )
        this.mChildFragmentManager.k();
      this.mCalled = false;
      this.onActivityCreated(p0);
      if ( !this.mCalled )
        throw new android.support.v4.app.ba("Fragment " + this + " did not call through to super.onActivityCreated()");
      if ( this.mChildFragmentManager != null )
        this.mChildFragmentManager.m();
    }

    void performConfigurationChanged(android.content.res.Configuration p0)
    {
      this.onConfigurationChanged(p0);
      if ( this.mChildFragmentManager != null )
        this.mChildFragmentManager.a(p0);
    }

    boolean performContextItemSelected(android.view.MenuItem p0)
    {
      boolean v2;
      v2 = true;
      if ( this.mHidden
        || !this.onContextItemSelected(p0) && (this.mChildFragmentManager == null || !this.mChildFragmentManager.b(p0)) )
      {
        return false;
      }
      return v2;
    }

    void performCreate(android.os.Bundle p0)
    {
      android.os.Parcelable Parcelable; // RETVAL
    
      if ( this.mChildFragmentManager != null )
        this.mChildFragmentManager.k();
      this.mCalled = false;
      this.onCreate(p0);
      if ( !this.mCalled )
        throw new android.support.v4.app.ba("Fragment " + this + " did not call through to super.onCreate()");
      if ( p0 != null )
      {
        Parcelable = p0.getParcelable("android:support:fragments");
        if ( Parcelable != null )
        {
          if ( this.mChildFragmentManager == null )
            this.instantiateChildFragmentManager();
          this.mChildFragmentManager.a(Parcelable, null);
          this.mChildFragmentManager.l();
        }
      }
    }

    boolean performCreateOptionsMenu(android.view.Menu p0, android.view.MenuInflater p1)
    {
      int v3;
      v3 = 0;
      if ( !this.mHidden )
      {
        if ( this.mHasMenu && this.mMenuVisible )
        {
          v3 = 1;
          this.onCreateOptionsMenu(p0, p1);
        }
        if ( this.mChildFragmentManager != null )
          return (v3 | com.gameloft.android.DecompRT.b2i(this.mChildFragmentManager.a(p0, p1))) != 0;
      }
      return v3 != 0;
    }

    android.view.View performCreateView(
            android.view.LayoutInflater p0,
            android.view.ViewGroup p1,
            android.os.Bundle p2)
    {
      if ( this.mChildFragmentManager != null )
        this.mChildFragmentManager.k();
      return this.onCreateView(p0, p1, p2);
    }

    void performDestroy()
    {
      if ( this.mChildFragmentManager != null )
        this.mChildFragmentManager.t();
      this.mCalled = false;
      this.onDestroy();
      if ( !this.mCalled )
        throw new android.support.v4.app.ba("Fragment " + this + " did not call through to super.onDestroy()");
    }

    void performDestroyView()
    {
      if ( this.mChildFragmentManager != null )
        this.mChildFragmentManager.s();
      this.mCalled = false;
      this.onDestroyView();
      if ( !this.mCalled )
        throw new android.support.v4.app.ba("Fragment " + this + " did not call through to super.onDestroyView()");
      if ( this.mLoaderManager != null )
        this.mLoaderManager.f();
    }

    void performLowMemory()
    {
      this.onLowMemory();
      if ( this.mChildFragmentManager != null )
        this.mChildFragmentManager.u();
    }

    boolean performOptionsItemSelected(android.view.MenuItem p0)
    {
      boolean v2;
      v2 = true;
      if ( this.mHidden
        || (!this.mHasMenu || !this.mMenuVisible || !this.onOptionsItemSelected(p0))
        && (this.mChildFragmentManager == null || !this.mChildFragmentManager.a(p0)) )
      {
        return false;
      }
      return v2;
    }

    void performOptionsMenuClosed(android.view.Menu p0)
    {
      if ( !this.mHidden )
      {
        if ( this.mHasMenu && this.mMenuVisible )
          this.onOptionsMenuClosed(p0);
        if ( this.mChildFragmentManager != null )
          this.mChildFragmentManager.b(p0);
      }
    }

    void performPause()
    {
      if ( this.mChildFragmentManager != null )
        this.mChildFragmentManager.p();
      this.mCalled = false;
      this.onPause();
      if ( !this.mCalled )
        throw new android.support.v4.app.ba("Fragment " + this + " did not call through to super.onPause()");
    }

    boolean performPrepareOptionsMenu(android.view.Menu p0)
    {
      int v2;
      v2 = 0;
      if ( !this.mHidden )
      {
        if ( this.mHasMenu && this.mMenuVisible )
        {
          v2 = 1;
          this.onPrepareOptionsMenu(p0);
        }
        if ( this.mChildFragmentManager != null )
          return (v2 | com.gameloft.android.DecompRT.b2i(this.mChildFragmentManager.a(p0))) != 0;
      }
      return v2 != 0;
    }

    void performReallyStop()
    {
      if ( this.mChildFragmentManager != null )
        this.mChildFragmentManager.r();
      if ( this.mLoadersStarted )
      {
        this.mLoadersStarted = false;
        if ( !this.mCheckedForLoaderManager )
        {
          this.mCheckedForLoaderManager = true;
          this.mLoaderManager = this.mActivity.a(this.mWho, this.mLoadersStarted, false);
        }
        if ( this.mLoaderManager != null )
        {
          if ( this.mActivity.k )
            this.mLoaderManager.d();
          else
            this.mLoaderManager.c();
        }
      }
    }

    void performResume()
    {
      if ( this.mChildFragmentManager != null )
      {
        this.mChildFragmentManager.k();
        this.mChildFragmentManager.h();
      }
      this.mCalled = false;
      this.onResume();
      if ( !this.mCalled )
        throw new android.support.v4.app.ba("Fragment " + this + " did not call through to super.onResume()");
      if ( this.mChildFragmentManager != null )
      {
        this.mChildFragmentManager.o();
        this.mChildFragmentManager.h();
      }
    }

    void performSaveInstanceState(android.os.Bundle p0)
    {
      android.os.Parcelable v2; // RETVAL
    
      this.onSaveInstanceState(p0);
      if ( this.mChildFragmentManager != null )
      {
        v2 = this.mChildFragmentManager.j();
        if ( v2 != null )
          p0.putParcelable("android:support:fragments", v2);
      }
    }

    void performStart()
    {
      if ( this.mChildFragmentManager != null )
      {
        this.mChildFragmentManager.k();
        this.mChildFragmentManager.h();
      }
      this.mCalled = false;
      this.onStart();
      if ( !this.mCalled )
        throw new android.support.v4.app.ba("Fragment " + this + " did not call through to super.onStart()");
      if ( this.mChildFragmentManager != null )
        this.mChildFragmentManager.n();
      if ( this.mLoaderManager != null )
        this.mLoaderManager.g();
    }

    void performStop()
    {
      if ( this.mChildFragmentManager != null )
        this.mChildFragmentManager.q();
      this.mCalled = false;
      this.onStop();
      if ( !this.mCalled )
        throw new android.support.v4.app.ba("Fragment " + this + " did not call through to super.onStop()");
    }

    public void registerForContextMenu(android.view.View p0)
    {
      p0.setOnCreateContextMenuListener((android.view.View.OnCreateContextMenuListener)this);
    }

    final void restoreViewState(android.os.Bundle p0)
    {
      if ( this.mSavedViewState != null )
      {
        this.mInnerView.restoreHierarchyState(this.mSavedViewState);
        this.mSavedViewState = null;
      }
      this.mCalled = false;
      this.onViewStateRestored(p0);
      if ( !this.mCalled )
        throw new android.support.v4.app.ba("Fragment " + this + " did not call through to super.onViewStateRestored()");
    }

    public void setArguments(android.os.Bundle p0)
    {
      if ( this.mIndex >= 0 )
        throw new IllegalStateException("Fragment already active");
      this.mArguments = p0;
    }

    public void setHasOptionsMenu(boolean p0)
    {
      if ( this.mHasMenu != p0 )
      {
        this.mHasMenu = p0;
        if ( this.isAdded() && !this.isHidden() )
          this.mActivity.c_();
      }
    }

    final void setIndex(int p0, android.support.v4.app.Fragment p1)
    {
      this.mIndex = p0;
      if ( p1 != null )
        this.mWho = p1.mWho + ":" + this.mIndex;
      else
        this.mWho = "android:fragment:" + this.mIndex;
    }

    public void setInitialSavedState(android.support.v4.app.Fragment$SavedState p0)
    {
      android.os.Bundle a;
      if ( this.mIndex >= 0 )
        throw new IllegalStateException("Fragment already active");
      if ( p0 != null && p0.a != null )
        a = p0.a;
      else
        a = null;
      this.mSavedFragmentState = a;
    }

    public void setMenuVisibility(boolean p0)
    {
      if ( this.mMenuVisible != p0 )
      {
        this.mMenuVisible = p0;
        if ( this.mHasMenu && this.isAdded() && !this.isHidden() )
          this.mActivity.c_();
      }
    }

    public void setRetainInstance(boolean p0)
    {
      if ( p0 && this.mParentFragment != null )
        throw new IllegalStateException("Can't retain fragements that are nested in other fragments");
      this.mRetainInstance = p0;
    }

    public void setTargetFragment(android.support.v4.app.Fragment p0, int p1)
    {
      this.mTarget = p0;
      this.mTargetRequestCode = p1;
    }

    public void setUserVisibleHint(boolean p0)
    {
      if ( !this.mUserVisibleHint && p0 && this.mState < 4 )
        this.mFragmentManager.b(this);
      this.mUserVisibleHint = p0;
      this.mDeferStart = !p0;
    }

    public void startActivity(android.content.Intent p0)
    {
      if ( this.mActivity == null )
        throw new IllegalStateException("Fragment " + this + " not attached to Activity");
      this.mActivity.a(this, p0, -1);
    }

    public void startActivityForResult(android.content.Intent p0, int p1)
    {
      if ( this.mActivity == null )
        throw new IllegalStateException("Fragment " + this + " not attached to Activity");
      this.mActivity.a(this, p0, p1);
    }

    public String toString()
    {
      StringBuilder v1;
      v1 = new StringBuilder(128);
      DebugUtils.buildShortClassTag(this, v1);
      if ( this.mIndex >= 0 )
      {
        v1.append(" #");
        v1.append(this.mIndex);
      }
      if ( this.mFragmentId != 0 )
      {
        v1.append(" id=0x");
        v1.append(Integer.toHexString(this.mFragmentId));
      }
      if ( this.mTag != null )
      {
        v1.append(" ");
        v1.append(this.mTag);
      }
      v1.append('}');
      return v1.toString();
    }

    public void unregisterForContextMenu(android.view.View p0)
    {
      p0.setOnCreateContextMenuListener(null);
    }

}
