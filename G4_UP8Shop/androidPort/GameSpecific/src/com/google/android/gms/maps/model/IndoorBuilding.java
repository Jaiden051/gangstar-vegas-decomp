// Decompiled from classes.dex (SourceFile: IndoorBuilding.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.internal.hn;
public final class IndoorBuilding {
    // Fields
    private final com.google.android.gms.maps.model.internal.d a;

    // Methods
    public IndoorBuilding(com.google.android.gms.maps.model.internal.d p0)
    {
      super();
      this.a = (com.google.android.gms.maps.model.internal.d)hn.f(p0);
    }

    private int a()
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

    private int b()
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

    private java.util.List<com.google.android.gms.maps.model.IndoorLevel> c()
    {
      java.util.List v1;
      java.util.List v2;
      java.util.Iterator i;
      try
      {
        v1 = this.a.c();
        v2 = new java.util.ArrayList(v1.size());
        for ( i = v1.iterator();
              i.hasNext();
              v2.add(new com.google.android.gms.maps.model.IndoorLevel(com.google.android.gms.maps.model.internal.e$a.bb((android.os.IBinder)i.next()))) )
        {
          ;
        }
        return v2;
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    private boolean d()
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

    public final boolean equals(Object p0)
    {
      if ( !(p0 instanceof com.google.android.gms.maps.model.IndoorBuilding) )
        return false;
      try
      {
        return this.a.a(((com.google.android.gms.maps.model.IndoorBuilding)p0).a);
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
        return this.a.e();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

}
