// Decompiled from classes.dex (SourceFile: FragmentActivity.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.content.res.Resources;
import android.os.Build;
import android.util.Log;
import android.view.View;
public class FragmentActivity extends android.app.Activity {
    // Fields
    static java.lang.String a;
    static int b;
    static int c;
    private static java.lang.String q;
    private static int r;
    final android.os.Handler d;
    final android.support.v4.app.FragmentManagerImpl e;
    final android.support.v4.app.r f;
    boolean g;
    boolean h;
    boolean i;
    boolean j;
    boolean k;
    boolean l;
    boolean m;
    boolean n;
    android.support.v4.util.SimpleArrayMap o;
    android.support.v4.app.LoaderManagerImpl p;

    // Methods
    public FragmentActivity()
    {
      super();
      this.d = new android.support.v4.app.o(this);
      this.e = new android.support.v4.app.FragmentManagerImpl();
      this.f = (android.support.v4.app.r)new android.support.v4.app.p(this);
    }

    private void a(String p0, java.io.PrintWriter p1, android.view.View p2)
    {
      android.view.ViewGroup v4;
      int ChildCount;
      String v6;
      int i;
      p1.print(p0);
      if ( p2 != null )
      {
        p1.println(viewToString(p2));
        if ( p2 instanceof android.view.ViewGroup )
        {
          v4 = (android.view.ViewGroup)p2;
          ChildCount = v4.getChildCount();
          if ( ChildCount > 0 )
          {
            v6 = p0 + "  ";
            for ( i = 0; i < ChildCount; ++i )
              this.a(v6, p1, v4.getChildAt(i));
          }
        }
      }
      else
      {
        p1.println("null");
      }
    }

    private boolean a(android.view.View p0, android.view.Menu p1)
    {
      return super.onPreparePanel(0, p0, p1);
    }

    private Object d()
    {
      android.support.v4.app.q v1;
      v1 = (android.support.v4.app.q)this.getLastNonConfigurationInstance();
      if ( v1 != null )
        return v1.b;
      else
        return null;
    }

    private void e()
    {
      if ( this.n )
      {
        this.n = false;
        if ( this.p != null )
        {
          if ( this.k )
            this.p.d();
          else
            this.p.c();
        }
      }
      this.e.r();
    }

    private android.support.v4.app.LoaderManager f()
    {
      if ( this.p == null )
      {
        this.m = true;
        this.p = this.a("(root)", this.n, true);
      }
      return this.p;
    }

    public static void onAttachFragment$65850823()
    {
      ;
    }

    private static Object onRetainCustomNonConfigurationInstance()
    {
      return null;
    }

    private static String viewToString(android.view.View p0)
    {
      char v1;
      char v2;
      StringBuilder v3;
      char v4;
      char v5;
      char v6;
      char v7;
      char v8;
      char v9;
      char v10;
      char v11;
      int Id;
      android.content.res.Resources Resources; // RETVAL
      android.content.res.Resources v14;
      String ResourcePackageName;
      String ResourceTypeName;
      String ResourceEntryName;
      v1 = 70;
      v2 = 46;
      v3 = new StringBuilder(128);
      v3.append(p0.getClass().getName());
      v3.append('{');
      v3.append(Integer.toHexString(System.identityHashCode(p0)));
      v3.append(' ');
      switch ( p0.getVisibility() )
      {
        case 0:
          v3.append('V');
          break;
        case 4:
          v3.append('I');
          break;
        case 8:
          v3.append('G');
          break;
        default:
          v3.append('.');
          break;
      }
      if ( p0.isFocusable() )
        v4 = 70;
      else
        v4 = 46;
      v3.append(v4);
      if ( p0.isEnabled() )
        v5 = 69;
      else
        v5 = 46;
      v3.append(v5);
      if ( p0.willNotDraw() )
        v6 = 46;
      else
        v6 = 68;
      v3.append(v6);
      if ( p0.isHorizontalScrollBarEnabled() )
        v7 = 72;
      else
        v7 = 46;
      v3.append(v7);
      if ( p0.isVerticalScrollBarEnabled() )
        v8 = 86;
      else
        v8 = 46;
      v3.append(v8);
      if ( p0.isClickable() )
        v9 = 67;
      else
        v9 = 46;
      v3.append(v9);
      if ( p0.isLongClickable() )
        v10 = 76;
      else
        v10 = 46;
      v3.append(v10);
      v3.append(' ');
      if ( !p0.isFocused() )
        v1 = 46;
      v3.append(v1);
      if ( p0.isSelected() )
        v11 = 83;
      else
        v11 = 46;
      v3.append(v11);
      if ( p0.isPressed() )
        v2 = 80;
      v3.append(v2);
      v3.append(' ');
      v3.append(p0.getLeft());
      v3.append(',');
      v3.append(p0.getTop());
      v3.append('-');
      v3.append(p0.getRight());
      v3.append(',');
      v3.append(p0.getBottom());
      Id = p0.getId();
      if ( Id != -1 )
      {
        v3.append(" #");
        v3.append(Integer.toHexString(Id));
        Resources = p0.getResources();
        v14 = Resources;
        if ( Id != 0 && Resources != null )
        {
          try
          {
            switch ( Id & 0xFF000000 )
            {
              case 0x1000000:
                ResourcePackageName = "android";
                break;
              case 0x7F000000:
                ResourcePackageName = "app";
                break;
              default:
                ResourcePackageName = Resources.getResourcePackageName(Id);
                break;
            }
            ResourceTypeName = v14.getResourceTypeName(Id);
            ResourceEntryName = v14.getResourceEntryName(Id);
            v3.append(" ");
            v3.append(ResourcePackageName);
            v3.append(":");
            v3.append(ResourceTypeName);
            v3.append("/");
            v3.append(ResourceEntryName);
          }
          catch ( android.content.res.Resources.NotFoundException e )
          {
          }
        }
      }
      v3.append("}");
      return v3.toString();
    }

    final android.support.v4.app.LoaderManagerImpl a(String p0, boolean p1, boolean p2)
    {
      android.support.v4.app.LoaderManagerImpl v4;
      if ( this.o == null )
        this.o = new android.support.v4.util.SimpleArrayMap();
      v4 = (android.support.v4.app.LoaderManagerImpl)this.o.get(p0);
      if ( v4 != null )
      {
        v4.a(this);
      }
      else if ( p2 )
      {
        v4 = new android.support.v4.app.LoaderManagerImpl(p0, this, p1);
        this.o.put(p0, v4);
      }
      return v4;
    }

    public final void a(android.support.v4.app.Fragment p0, android.content.Intent p1, int p2)
    {
      if ( p2 == -1 )
      {
        super.startActivityForResult(p1, -1);
      }
      else
      {
        if ( (p2 & 0xFFFF0000) != 0 )
          throw new IllegalArgumentException("Can only use lower 16 bits for requestCode");
        super.startActivityForResult(p1, ((p0.mIndex + 1) << 16) + (p2 & 0xFFFF));
      }
    }

    final void a(String p0)
    {
      android.support.v4.app.LoaderManagerImpl v2;
      if ( this.o != null )
      {
        v2 = (android.support.v4.app.LoaderManagerImpl)this.o.get(p0);
        if ( v2 != null && !v2.h )
        {
          v2.h();
          this.o.remove(p0);
        }
      }
    }

    final void a(boolean p0)
    {
      if ( !this.j )
      {
        this.j = true;
        this.k = p0;
        this.d.removeMessages(1);
        if ( this.n )
        {
          this.n = false;
          if ( this.p != null )
          {
            if ( this.k )
              this.p.d();
            else
              this.p.c();
          }
        }
        this.e.r();
      }
    }

    protected final void b_()
    {
      this.e.o();
    }

    public final android.support.v4.app.FragmentManager c()
    {
      return this.e;
    }

    public final void c_()
    {
      if ( Build.VERSION.SDK_INT < 11 )
        this.l = true;
      else
        ActivityCompatHoneycomb.invalidateOptionsMenu(this);
    }

    public void dump(String p0, java.io.FileDescriptor p1, java.io.PrintWriter p2, String[] p3)
    {
      String v5; // RETVAL
    
      p2.print(p0);
      p2.print("Local FragmentActivity ");
      p2.print(Integer.toHexString(System.identityHashCode(this)));
      p2.println(" State:");
      v5 = p0 + "  ";
      p2.print(v5);
      p2.print("mCreated=");
      p2.print(this.g);
      p2.print("mResumed=");
      p2.print(this.h);
      p2.print(" mStopped=");
      p2.print(this.i);
      p2.print(" mReallyStopped=");
      p2.println(this.j);
      p2.print(v5);
      p2.print("mLoadersStarted=");
      p2.println(this.n);
      if ( this.p != null )
      {
        p2.print(p0);
        p2.print("Loader Manager ");
        p2.print(Integer.toHexString(System.identityHashCode(this.p)));
        p2.println(":");
        this.p.a(p0 + "  ", p1, p2, p3);
      }
      this.e.a(p0, p1, p2, p3);
      p2.print(p0);
      p2.println("View Hierarchy:");
      this.a(p0 + "  ", p2, this.getWindow().getDecorView());
    }

    protected void onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      int v4;
      android.support.v4.app.Fragment v5;
      this.e.k();
      if ( p0 >> 16 != 0 )
      {
        v4 = (p0 >> 16) - 1;
        if ( this.e.l != null && v4 >= 0 && v4 < this.e.l.size() )
        {
          v5 = (android.support.v4.app.Fragment)this.e.l.get(v4);
          if ( v5 != null )
            v5.onActivityResult(p0 & 0xFFFF, p1, p2);
          else
            Log.w("FragmentActivity", "Activity result no fragment exists for index: 0x" + Integer.toHexString(p0));
        }
        else
        {
          Log.w("FragmentActivity", "Activity result fragment index out of range: 0x" + Integer.toHexString(p0));
        }
      }
      else
      {
        super.onActivityResult(p0, p1, p2);
      }
    }

    public void onBackPressed()
    {
      if ( !this.e.d() )
        this.finish();
    }

    public void onConfigurationChanged(android.content.res.Configuration p0)
    {
      super.onConfigurationChanged(p0);
      this.e.a(p0);
    }

    protected void onCreate(android.os.Bundle p0)
    {
      android.support.v4.app.q v2;
      android.os.Parcelable Parcelable; // RETVAL
      android.support.v4.app.FragmentManagerImpl e;
      java.util.ArrayList d;
      this.e.a(this, this.f, null);
      if ( this.getLayoutInflater().getFactory() == null )
        this.getLayoutInflater().setFactory(this);
      super.onCreate(p0);
      v2 = (android.support.v4.app.q)this.getLastNonConfigurationInstance();
      if ( v2 != null )
        this.o = v2.e;
      if ( p0 != null )
      {
        Parcelable = p0.getParcelable("android:support:fragments");
        e = this.e;
        if ( v2 != null )
          d = v2.d;
        else
          d = null;
        e.a(Parcelable, d);
      }
      this.e.l();
    }

    public boolean onCreatePanelMenu(int p0, android.view.Menu p1)
    {
      boolean v3;
      if ( p0 != 0 )
        return super.onCreatePanelMenu(p0, p1);
      v3 = (com.gameloft.android.DecompRT.b2i(super.onCreatePanelMenu(0, p1)) | com.gameloft.android.DecompRT.b2i(this.e.a(p1, this.getMenuInflater()))) != 0;
      if ( Build.VERSION.SDK_INT < 11 )
        return true;
      return v3;
    }

    public android.view.View onCreateView(
            String p0,
            android.content.Context p1,
            android.util.AttributeSet p2)
    {
      android.support.v4.app.Fragment v4;
      String AttributeValue;
      android.content.res.TypedArray v8; // RETVAL
      android.content.res.TypedArray v9;
      int ResourceId;
      String String;
      android.support.v4.app.Fragment v12; // RETVAL
      int v13;
      v4 = null;
      if ( !"fragment".equals(p0) )
        return super.onCreateView(p0, p1, p2);
      AttributeValue = p2.getAttributeValue(null, "class");
      v8 = p1.obtainStyledAttributes(p2, FragmentActivity$FragmentTag.a);
      v9 = v8;
      if ( AttributeValue == null )
        AttributeValue = v8.getString(0);
      ResourceId = v9.getResourceId(1, -1);
      String = v9.getString(2);
      v9.recycle();
      if ( !Fragment.isSupportFragmentClass(this, AttributeValue) )
        return super.onCreateView(p0, p1, p2);
      if ( ResourceId != -1 )
        v4 = this.e.a(ResourceId);
      if ( v4 == null && String != null )
        v4 = this.e.a(String);
      if ( v4 == null )
        v4 = this.e.a(0);
      if ( FragmentManagerImpl.b )
        Log.v(
          "FragmentActivity",
          "onCreateView: id=0x" + Integer.toHexString(ResourceId) + " fname=" + AttributeValue + " existing=" + v4);
      if ( v4 != null )
      {
        if ( v4.mInLayout )
          throw new IllegalArgumentException(p2.getPositionDescription()
                                           + ": Duplicate id 0x"
                                           + Integer.toHexString(ResourceId)
                                           + ", tag "
                                           + String
                                           + ", or parent id 0x"
                                           + Integer.toHexString(0)
                                           + " with another fragment for "
                                           + AttributeValue);
        v4.mInLayout = true;
        if ( !v4.mRetaining )
          v4.onInflate(this, p2, v4.mSavedFragmentState);
        this.e.c(v4);
      }
      else
      {
        v12 = Fragment.instantiate(this, AttributeValue);
        v12.mFromLayout = true;
        if ( ResourceId != 0 )
          v13 = ResourceId;
        else
          v13 = 0;
        v12.mFragmentId = v13;
        v12.mContainerId = 0;
        v12.mTag = String;
        v12.mInLayout = true;
        v12.mFragmentManager = this.e;
        v12.onInflate(this, p2, v12.mSavedFragmentState);
        this.e.a(v12, true);
        v4 = v12;
      }
      if ( v4.mView == null )
        throw new IllegalStateException("Fragment " + AttributeValue + " did not create a view.");
      if ( ResourceId != 0 )
        v4.mView.setId(ResourceId);
      if ( v4.mView.getTag() == null )
        v4.mView.setTag(String);
      return v4.mView;
    }

    protected void onDestroy()
    {
      super.onDestroy();
      this.a(false);
      this.e.t();
      if ( this.p != null )
        this.p.h();
    }

    public boolean onKeyDown(int p0, android.view.KeyEvent p1)
    {
      if ( Build.VERSION.SDK_INT >= 5 || p0 != 4 || p1.getRepeatCount() != 0 )
        return super.onKeyDown(p0, p1);
      this.onBackPressed();
      return true;
    }

    public void onLowMemory()
    {
      super.onLowMemory();
      this.e.u();
    }

    public boolean onMenuItemSelected(int p0, android.view.MenuItem p1)
    {
      boolean v3;
      if ( super.onMenuItemSelected(p0, p1) )
        return true;
      switch ( p0 )
      {
        case 0:
          v3 = this.e.a(p1);
          break;
        case 6:
          v3 = this.e.b(p1);
          break;
        default:
          v3 = false;
          break;
      }
      return v3;
    }

    protected void onNewIntent(android.content.Intent p0)
    {
      super.onNewIntent(p0);
      this.e.k();
    }

    public void onPanelClosed(int p0, android.view.Menu p1)
    {
      if ( p0 == 0 )
        this.e.b(p1);
      super.onPanelClosed(p0, p1);
    }

    protected void onPause()
    {
      super.onPause();
      this.h = false;
      if ( this.d.hasMessages(2) )
      {
        this.d.removeMessages(2);
        this.e.o();
      }
      this.e.p();
    }

    protected void onPostResume()
    {
      super.onPostResume();
      this.d.removeMessages(2);
      this.e.o();
      this.e.h();
    }

    public boolean onPreparePanel(int p0, android.view.View p1, android.view.Menu p2)
    {
      if ( p0 != 0 || p2 == null )
        return super.onPreparePanel(p0, p1, p2);
      if ( this.l )
      {
        this.l = false;
        p2.clear();
        this.onCreatePanelMenu(0, p2);
      }
      return (com.gameloft.android.DecompRT.b2i(super.onPreparePanel(0, p1, p2)) | com.gameloft.android.DecompRT.b2i(this.e.a(p2))) != 0;
    }

    protected void onResume()
    {
      super.onResume();
      this.d.sendEmptyMessage(2);
      this.h = true;
      this.e.h();
    }

    public final Object onRetainNonConfigurationInstance()
    {
      int v1;
      java.util.ArrayList v2;
      int v3;
      android.support.v4.app.LoaderManagerImpl[] v4;
      int i;
      int v6;
      android.support.v4.app.LoaderManagerImpl v7;
      android.support.v4.app.q v8;
      v1 = 0;
      if ( this.i )
        this.a(true);
      v2 = this.e.i();
      if ( this.o != null )
      {
        v3 = this.o.size();
        v4 = new android.support.v4.app.LoaderManagerImpl[v3];
        for ( i = v3 - 1; i >= 0; --i )
          v4[i] = (android.support.v4.app.LoaderManagerImpl)this.o.b(i);
        v6 = 0;
        while ( v1 < v3 )
        {
          v7 = v4[v1];
          if ( v7.h )
          {
            v6 = 1;
          }
          else
          {
            v7.h();
            this.o.remove(v7.e);
          }
          ++v1;
        }
      }
      else
      {
        v6 = 0;
      }
      if ( v2 == null && v6 == 0 )
        return null;
      v8 = new android.support.v4.app.q();
      v8.a = null;
      v8.b = null;
      v8.c = null;
      v8.d = v2;
      v8.e = this.o;
      return v8;
    }

    protected void onSaveInstanceState(android.os.Bundle p0)
    {
      android.os.Parcelable v2; // RETVAL
    
      super.onSaveInstanceState(p0);
      v2 = this.e.j();
      if ( v2 != null )
        p0.putParcelable("android:support:fragments", v2);
    }

    protected void onStart()
    {
      int v1;
      android.support.v4.app.LoaderManagerImpl[] v2;
      int i;
      int j;
      android.support.v4.app.LoaderManagerImpl v5;
      super.onStart();
      this.i = false;
      this.j = false;
      this.d.removeMessages(1);
      if ( !this.g )
      {
        this.g = true;
        this.e.m();
      }
      this.e.k();
      this.e.h();
      if ( !this.n )
      {
        this.n = true;
        if ( this.p != null || !this.m && (com.gameloft.android.DecompRT.comma((this.p = this.a("(root)", this.n, false)), (this.p != null))) && !this.p.g )
          this.p.b();
        this.m = true;
      }
      this.e.n();
      if ( this.o != null )
      {
        v1 = this.o.size();
        v2 = new android.support.v4.app.LoaderManagerImpl[v1];
        for ( i = v1 - 1; i >= 0; --i )
          v2[i] = (android.support.v4.app.LoaderManagerImpl)this.o.b(i);
        for ( j = 0; j < v1; ++j )
        {
          v5 = v2[j];
          v5.e();
          v5.g();
        }
      }
    }

    protected void onStop()
    {
      super.onStop();
      this.i = true;
      this.d.sendEmptyMessage(1);
      this.e.q();
    }

    public void startActivityForResult(android.content.Intent p0, int p1)
    {
      if ( p1 != -1 && (p1 & 0xFFFF0000) != 0 )
        throw new IllegalArgumentException("Can only use lower 16 bits for requestCode");
      super.startActivityForResult(p0, p1);
    }

}
