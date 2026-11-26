// Decompiled from classes.dex (SourceFile: n.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.os.Looper;
import com.google.android.gms.common.api.Status;
class n implements com.google.android.gms.tagmanager.ContainerHolder {
    // Fields
    private final android.os.Looper a;
    private com.google.android.gms.tagmanager.Container b;
    private com.google.android.gms.tagmanager.Container c;
    private com.google.android.gms.common.api.Status d;
    private com.google.android.gms.tagmanager.n$b e;
    private com.google.android.gms.tagmanager.n$a f;
    private boolean g;
    private com.google.android.gms.tagmanager.TagManager h;

    // Methods
    public n(com.google.android.gms.common.api.Status p0)
    {
      super();
      this.d = p0;
      this.a = null;
    }

    public n(
            com.google.android.gms.tagmanager.TagManager p0,
            android.os.Looper p1,
            com.google.android.gms.tagmanager.Container p2,
            com.google.android.gms.tagmanager.n$a p3)
    {
      super();
      this.h = p0;
      if ( p1 == null )
        p1 = Looper.getMainLooper();
      this.a = p1;
      this.b = p2;
      this.f = p3;
      this.d = Status.a;
      p0.a(this);
    }

    private void g()
    {
      if ( this.e != null )
        this.e.a(this.c.d());
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.d;
    }

    public final synchronized void a(com.google.android.gms.tagmanager.Container p0)
    {
      if ( !this.g )
      {
        try
        {
          if ( p0 == null )
          {
            bh.A("Unexpected null container.");
            return;
          }
          this.c = p0;
          this.g();
        }
        finally
        {
        }
      }
    }

    public final synchronized void a(com.google.android.gms.tagmanager.ContainerHolder$ContainerAvailableListener p0)
    {
      if ( this.g )
      {
        bh.A("ContainerHolder is released.");
        return;
      }
      try
      {
        if ( p0 == null )
        {
          this.e = null;
          return;
        }
        this.e = new com.google.android.gms.tagmanager.n$b(this, p0, this.a);
        if ( this.c != null )
          this.g();
      }
      finally
      {
      }
    }

    public final synchronized void a(String p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      if ( !this.g )
      {
        try
        {
          this.b.c(p0);
        }
        finally
        {
        }
      }
    }

    public final synchronized com.google.android.gms.tagmanager.Container b()
    {
      com.google.android.gms.tagmanager.Container b;
      b = null;
      if ( this.g )
      {
        bh.A("ContainerHolder is released.");
      }
      else
      {
        try
        {
          if ( this.c != null )
          {
            this.b = this.c;
            this.c = null;
          }
          b = this.b;
        }
        finally
        {
        }
      }
      return b;
    }

    final void b(String p0)
    {
      if ( this.g )
        bh.A("setCtfeUrlPathAndQuery called on a released ContainerHolder.");
      else
        this.f.a(p0);
    }

    public final synchronized void c()
    {
      if ( this.g )
      {
        bh.A("Refreshing a released ContainerHolder.");
      }
      else
      {
        try
        {
          this.f.a();
        }
        finally
        {
        }
      }
    }

    public final synchronized void d()
    {
      if ( this.g )
      {
        bh.A("Releasing a released ContainerHolder.");
      }
      else
      {
        try
        {
          this.g = true;
          this.h.b(this);
          this.b.e();
          this.b = null;
          this.c = null;
          this.f = null;
          this.e = null;
        }
        finally
        {
        }
      }
    }

    final String e()
    {
      if ( !this.g )
        return this.b.a();
      bh.A("getContainerId called on a released ContainerHolder.");
      return "";
    }

    final String f()
    {
      if ( !this.g )
        return this.f.b();
      bh.A("setCtfeUrlPathAndQuery called on a released ContainerHolder.");
      return "";
    }

}
