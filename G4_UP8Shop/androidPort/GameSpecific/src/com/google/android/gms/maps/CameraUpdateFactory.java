// Decompiled from classes.dex (SourceFile: CameraUpdateFactory.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

import com.google.android.gms.internal.hn;
public final class CameraUpdateFactory {
    // Fields
    private static com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate a;

    // Methods
    private CameraUpdateFactory()
    {
      super();
    }

    static void a(com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate p0)
    {
      if ( a == null )
        a = (com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate)hn.f(p0);
    }

    private static com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate jj()
    {
      return (com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate)hn.b(
                                                                                  a,
                                                                                  "CameraUpdateFactory is not initialized");
    }

    public static com.google.android.gms.maps.CameraUpdate newCameraPosition(
            com.google.android.gms.maps.model.CameraPosition p0)
    {
      try
      {
        return new com.google.android.gms.maps.CameraUpdate(jj().a(p0));
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    public static com.google.android.gms.maps.CameraUpdate newLatLng(
            com.google.android.gms.maps.model.LatLng p0)
    {
      try
      {
        return new com.google.android.gms.maps.CameraUpdate(jj().a(p0));
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    public static com.google.android.gms.maps.CameraUpdate newLatLngBounds(
            com.google.android.gms.maps.model.LatLngBounds p0,
            int p1)
    {
      try
      {
        return new com.google.android.gms.maps.CameraUpdate(jj().a(p0, p1));
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    public static com.google.android.gms.maps.CameraUpdate newLatLngBounds(
            com.google.android.gms.maps.model.LatLngBounds p0,
            int p1,
            int p2,
            int p3)
    {
      try
      {
        return new com.google.android.gms.maps.CameraUpdate(jj().a(p0, p1, p2, p3));
      }
      catch ( android.os.RemoteException v6 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v6);
      }
    }

    public static com.google.android.gms.maps.CameraUpdate newLatLngZoom(
            com.google.android.gms.maps.model.LatLng p0,
            float p1)
    {
      try
      {
        return new com.google.android.gms.maps.CameraUpdate(jj().a(p0, p1));
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    public static com.google.android.gms.maps.CameraUpdate scrollBy(float p0, float p1)
    {
      try
      {
        return new com.google.android.gms.maps.CameraUpdate(jj().a(p0, p1));
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    public static com.google.android.gms.maps.CameraUpdate zoomBy(float p0)
    {
      try
      {
        return new com.google.android.gms.maps.CameraUpdate(jj().b(p0));
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    public static com.google.android.gms.maps.CameraUpdate zoomBy(float p0, android.graphics.Point p1)
    {
      try
      {
        return new com.google.android.gms.maps.CameraUpdate(jj().a(p0, p1.x, p1.y));
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    public static com.google.android.gms.maps.CameraUpdate zoomIn()
    {
      try
      {
        return new com.google.android.gms.maps.CameraUpdate(jj().a());
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    public static com.google.android.gms.maps.CameraUpdate zoomOut()
    {
      try
      {
        return new com.google.android.gms.maps.CameraUpdate(jj().b());
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    public static com.google.android.gms.maps.CameraUpdate zoomTo(float p0)
    {
      try
      {
        return new com.google.android.gms.maps.CameraUpdate(jj().a(p0));
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

}
