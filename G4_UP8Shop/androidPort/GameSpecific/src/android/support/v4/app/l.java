// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.os.Bundle;
import android.view.View;
public class l extends android.support.v4.app.Fragment implements android.content.DialogInterface.OnCancelListener, android.content.DialogInterface.OnDismissListener {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    private static java.lang.String n;
    private static java.lang.String o;
    private static java.lang.String p;
    private static java.lang.String q;
    private static java.lang.String r;
    private static java.lang.String s;
    int e;
    int f;
    boolean g;
    boolean h;
    int i;
    android.app.Dialog j;
    boolean k;
    boolean l;
    boolean m;

    // Methods
    public l()
    {
      super();
      this.e = 0;
      this.f = 0;
      this.g = true;
      this.h = true;
      this.i = -1;
    }

    private int a(android.support.v4.app.ac p0, String p1)
    {
      this.l = false;
      this.m = true;
      p0.a(this, p1);
      this.k = false;
      this.i = p0.h();
      return this.i;
    }

    private void a(int p0, int p1)
    {
      this.e = p0;
      if ( this.e == 2 || this.e == 3 )
        this.f = 16973913;
      if ( p1 != 0 )
        this.f = p1;
    }

    private void b()
    {
      this.b(false);
    }

    private void b(boolean p0)
    {
      android.support.v4.app.ac v2;
      if ( !this.l )
      {
        this.l = true;
        this.m = false;
        if ( this.j != null )
        {
          this.j.dismiss();
          this.j = null;
        }
        this.k = true;
        if ( this.i < 0 )
        {
          v2 = this.getFragmentManager().a();
          v2.a(this);
          if ( p0 )
            v2.i();
          else
            v2.h();
        }
        else
        {
          this.getFragmentManager().a(this.i, 1);
          this.i = -1;
        }
      }
    }

    private void c()
    {
      this.b(true);
    }

    private void c(boolean p0)
    {
      this.g = p0;
      if ( this.j != null )
        this.j.setCancelable(p0);
    }

    private android.app.Dialog d()
    {
      return this.j;
    }

    private int e()
    {
      return this.f;
    }

    private boolean f()
    {
      return this.g;
    }

    private boolean g()
    {
      return this.h;
    }

    public android.app.Dialog a()
    {
      return new android.app.Dialog(this.getActivity(), this.f);
    }

    public void a(android.support.v4.app.FragmentManager p0, String p1)
    {
      android.support.v4.app.ac v3;
      this.l = false;
      this.m = true;
      v3 = p0.a();
      v3.a(this, p1);
      v3.h();
    }

    public final void a(boolean p0)
    {
      this.h = false;
    }

    public android.view.LayoutInflater getLayoutInflater(android.os.Bundle p0)
    {
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( !this.h )
            return super.getLayoutInflater(p0);
            this.j = this.a();
            _sw_1 = (this.e);
            if ( (_sw_1 == (1)) || (_sw_1 == (2)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 2; continue _sm; }
            _pc = 4;
            continue _sm;
          case 1:
            _pc = 3;
            continue _sm;
          case 2:
            this.j.getWindow().addFlags(24);
            _pc = 3;
            continue _sm;
          case 3:
            this.j.requestWindowFeature(1);
            _pc = 5;
            continue _sm;
          case 4:
            _pc = 5;
            continue _sm;
          case 5:
            if ( this.j != null )
            return (android.view.LayoutInflater)this.j.getContext().getSystemService("layout_inflater");
            else
            return (android.view.LayoutInflater)this.mActivity.getSystemService("layout_inflater");
        }
      }
}

    public void onActivityCreated(android.os.Bundle p0)
    {
      android.view.View View; // RETVAL
      android.view.View v3;
      android.os.Bundle Bundle; // RETVAL
    
      super.onActivityCreated(p0);
      if ( this.h )
      {
        View = this.getView();
        v3 = View;
        if ( View != null )
        {
          if ( View.getParent() != null )
            throw new IllegalStateException("DialogFragment can not be attached to a container view");
          this.j.setContentView(v3);
        }
        this.j.setOwnerActivity(this.getActivity());
        this.j.setCancelable(this.g);
        this.j.setOnCancelListener((android.content.DialogInterface.OnCancelListener)this);
        this.j.setOnDismissListener((android.content.DialogInterface.OnDismissListener)this);
        if ( p0 != null )
        {
          Bundle = p0.getBundle("android:savedDialogState");
          if ( Bundle != null )
            this.j.onRestoreInstanceState(Bundle);
        }
      }
    }

    public void onAttach(android.app.Activity p0)
    {
      super.onAttach(p0);
      if ( !this.m )
        this.l = false;
    }

    public void onCancel(android.content.DialogInterface p0)
    {
      ;
    }

    public void onCreate(android.os.Bundle p0)
    {
      super.onCreate(p0);
      this.h = this.mContainerId == 0;
      if ( p0 != null )
      {
        this.e = p0.getInt("android:style", 0);
        this.f = p0.getInt("android:theme", 0);
        this.g = p0.getBoolean("android:cancelable", true);
        this.h = p0.getBoolean("android:showsDialog", this.h);
        this.i = p0.getInt("android:backStackId", -1);
      }
    }

    public void onDestroyView()
    {
      super.onDestroyView();
      if ( this.j != null )
      {
        this.k = true;
        this.j.dismiss();
        this.j = null;
      }
    }

    public void onDetach()
    {
      super.onDetach();
      if ( !this.m && !this.l )
        this.l = true;
    }

    public void onDismiss(android.content.DialogInterface p0)
    {
      if ( !this.k )
        this.b(true);
    }

    public void onSaveInstanceState(android.os.Bundle p0)
    {
      android.os.Bundle v2; // RETVAL
    
      super.onSaveInstanceState(p0);
      if ( this.j != null )
      {
        v2 = this.j.onSaveInstanceState();
        if ( v2 != null )
          p0.putBundle("android:savedDialogState", v2);
      }
      if ( this.e != 0 )
        p0.putInt("android:style", this.e);
      if ( this.f != 0 )
        p0.putInt("android:theme", this.f);
      if ( !this.g )
        p0.putBoolean("android:cancelable", this.g);
      if ( !this.h )
        p0.putBoolean("android:showsDialog", this.h);
      if ( this.i != -1 )
        p0.putInt("android:backStackId", this.i);
    }

    public void onStart()
    {
      super.onStart();
      if ( this.j != null )
      {
        this.k = false;
        this.j.show();
      }
    }

    public void onStop()
    {
      super.onStop();
      if ( this.j != null )
        this.j.hide();
    }

}
