// Decompiled from classes.dex (SourceFile: AdActivity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads;

import com.google.android.gms.internal.cn;
import com.google.android.gms.internal.ev;
public final class AdActivity extends android.app.Activity {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    private com.google.android.gms.internal.co c;

    // Methods
    public AdActivity()
    {
      super();
    }

    private void a()
    {
      if ( this.c != null )
      {
        try
        {
          this.c.j();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not forward setContentViewSet to ad overlay:", v1);
        }
      }
    }

    protected final void onCreate(android.os.Bundle p0)
    {
      super.onCreate(p0);
      this.c = cn.a(this);
      if ( this.c != null )
      {
        try
        {
          this.c.a(p0);
        }
        catch ( android.os.RemoteException v2 )
        {
          ev.c("Could not forward onCreate to ad overlay:", v2);
          this.finish();
        }
      }
      else
      {
        ev.D("Could not create ad overlay.");
        this.finish();
      }
    }

    protected final void onDestroy()
    {
      try
      {
        if ( this.c != null )
          this.c.i();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not forward onDestroy to ad overlay:", v1);
      }
      super.onDestroy();
    }

    protected final void onPause()
    {
      try
      {
        if ( this.c != null )
          this.c.g();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not forward onPause to ad overlay:", v1);
        this.finish();
      }
      super.onPause();
    }

    protected final void onRestart()
    {
      super.onRestart();
      try
      {
        if ( this.c != null )
          this.c.d();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not forward onRestart to ad overlay:", v1);
        this.finish();
      }
    }

    protected final void onResume()
    {
      super.onResume();
      try
      {
        if ( this.c != null )
          this.c.f();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not forward onResume to ad overlay:", v1);
        this.finish();
      }
    }

    protected final void onSaveInstanceState(android.os.Bundle p0)
    {
      try
      {
        if ( this.c != null )
          this.c.b(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        ev.c("Could not forward onSaveInstanceState to ad overlay:", v2);
        this.finish();
      }
      super.onSaveInstanceState(p0);
    }

    protected final void onStart()
    {
      super.onStart();
      try
      {
        if ( this.c != null )
          this.c.e();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not forward onStart to ad overlay:", v1);
        this.finish();
      }
    }

    protected final void onStop()
    {
      try
      {
        if ( this.c != null )
          this.c.h();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not forward onStop to ad overlay:", v1);
        this.finish();
      }
      super.onStop();
    }

    public final void setContentView(int p0)
    {
      super.setContentView(p0);
      this.a();
    }

    public final void setContentView(android.view.View p0)
    {
      super.setContentView(p0);
      this.a();
    }

    public final void setContentView(android.view.View p0, android.view.ViewGroup.LayoutParams p1)
    {
      super.setContentView(p0, p1);
      this.a();
    }

}
