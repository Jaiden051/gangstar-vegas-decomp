// Decompiled from classes.dex (SourceFile: IndoorLevel.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.internal.hn;
public final class IndoorLevel {
    // Fields
    private final com.google.android.gms.maps.model.internal.e a;

    // Methods
    public IndoorLevel(com.google.android.gms.maps.model.internal.e p0)
    {
      super();
      this.a = (com.google.android.gms.maps.model.internal.e)hn.f(p0);
    }

    private String a()
    {
      try
      {
        return this.a.a();
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

    private void c()
    {
      try
      {
        this.a.c();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
      }
    }

    public final boolean equals(Object p0)
    {
      if ( !(p0 instanceof com.google.android.gms.maps.model.IndoorLevel) )
        return false;
      try
      {
        return this.a.a(((com.google.android.gms.maps.model.IndoorLevel)p0).a);
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
        return this.a.d();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

}
