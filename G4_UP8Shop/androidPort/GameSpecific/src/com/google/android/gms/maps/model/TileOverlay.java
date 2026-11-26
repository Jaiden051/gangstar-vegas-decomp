// Decompiled from classes.dex (SourceFile: TileOverlay.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.internal.hn;
public final class TileOverlay {
    // Fields
    private final com.google.android.gms.maps.model.internal.h a;

    // Methods
    public TileOverlay(com.google.android.gms.maps.model.internal.h p0)
    {
      super();
      this.a = (com.google.android.gms.maps.model.internal.h)hn.f(p0);
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

    private void b()
    {
      try
      {
        this.a.b();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
      }
    }

    private void b(boolean p0)
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

    private String c()
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

    private float d()
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

    private boolean e()
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

    private boolean f()
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

    public final boolean equals(Object p0)
    {
      if ( !(p0 instanceof com.google.android.gms.maps.model.TileOverlay) )
        return false;
      try
      {
        return this.a.a(((com.google.android.gms.maps.model.TileOverlay)p0).a);
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
        return this.a.f();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

}
