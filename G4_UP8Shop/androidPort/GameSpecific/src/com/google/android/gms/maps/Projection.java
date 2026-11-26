// Decompiled from classes.dex (SourceFile: Projection.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

public final class Projection {
    // Fields
    private final com.google.android.gms.maps.internal.IProjectionDelegate a;

    // Methods
    Projection(com.google.android.gms.maps.internal.IProjectionDelegate p0)
    {
      super();
      this.a = p0;
    }

    private android.graphics.Point a(com.google.android.gms.maps.model.LatLng p0)
    {
      try
      {
        return (android.graphics.Point)com.google.android.gms.dynamic.e.e(this.a.a(p0));
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    private com.google.android.gms.maps.model.LatLng a(android.graphics.Point p0)
    {
      try
      {
        return this.a.a(com.google.android.gms.dynamic.e.h(p0));
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    private com.google.android.gms.maps.model.VisibleRegion a()
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

}
