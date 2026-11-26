// Decompiled from classes.dex (SourceFile: Circle.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.internal.hn;
public final class Circle {
    // Fields
    private final com.google.android.gms.maps.model.internal.b a;

    // Methods
    public Circle(com.google.android.gms.maps.model.internal.b p0)
    {
      super();
      this.a = (com.google.android.gms.maps.model.internal.b)hn.f(p0);
    }

    private void a()
    {
      try
      {
        this.a.a();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
      }
    }

    private void a(double p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(float p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(int p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.model.LatLng p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(boolean p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private String b()
    {
      try
      {
        return this.a.b();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void b(float p0)
    {
      try
      {
        this.a.b(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void b(int p0)
    {
      try
      {
        this.a.b(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private com.google.android.gms.maps.model.LatLng c()
    {
      try
      {
        return this.a.c();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private double d()
    {
      try
      {
        return this.a.d();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private float e()
    {
      try
      {
        return this.a.e();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private int f()
    {
      try
      {
        return this.a.f();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private int g()
    {
      try
      {
        return this.a.g();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private float h()
    {
      try
      {
        return this.a.h();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private boolean i()
    {
      try
      {
        return this.a.i();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    public final boolean equals(Object p0)
    {
      if ( !(p0 instanceof com.google.android.gms.maps.model.Circle) )
        return false;
      try
      {
        return this.a.a(((com.google.android.gms.maps.model.Circle)p0).a);
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    public final int hashCode()
    {
      try
      {
        return this.a.j();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

}
