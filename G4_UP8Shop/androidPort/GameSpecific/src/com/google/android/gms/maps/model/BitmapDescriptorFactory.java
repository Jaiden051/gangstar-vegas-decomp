// Decompiled from classes.dex (SourceFile: BitmapDescriptorFactory.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.internal.hn;
public final class BitmapDescriptorFactory {
    // Fields
    public static float a;
    public static float b;
    public static float c;
    public static float d;
    public static float e;
    public static float f;
    public static float g;
    public static float h;
    public static float i;
    public static float j;
    private static com.google.android.gms.maps.model.internal.a k;

    // Methods
    private BitmapDescriptorFactory()
    {
      super();
    }

    public static void a(com.google.android.gms.maps.model.internal.a p0)
    {
      if ( k == null )
        k = (com.google.android.gms.maps.model.internal.a)hn.f(p0);
    }

    public static com.google.android.gms.maps.model.BitmapDescriptor defaultMarker()
    {
      try
      {
        return new com.google.android.gms.maps.model.BitmapDescriptor(jH().a());
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    public static com.google.android.gms.maps.model.BitmapDescriptor defaultMarker(float p0)
    {
      try
      {
        return new com.google.android.gms.maps.model.BitmapDescriptor(jH().a(p0));
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    public static com.google.android.gms.maps.model.BitmapDescriptor fromAsset(String p0)
    {
      try
      {
        return new com.google.android.gms.maps.model.BitmapDescriptor(jH().a(p0));
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    public static com.google.android.gms.maps.model.BitmapDescriptor fromBitmap(
            android.graphics.Bitmap p0)
    {
      try
      {
        return new com.google.android.gms.maps.model.BitmapDescriptor(jH().a(p0));
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    public static com.google.android.gms.maps.model.BitmapDescriptor fromFile(String p0)
    {
      try
      {
        return new com.google.android.gms.maps.model.BitmapDescriptor(jH().b(p0));
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    public static com.google.android.gms.maps.model.BitmapDescriptor fromPath(String p0)
    {
      try
      {
        return new com.google.android.gms.maps.model.BitmapDescriptor(jH().c(p0));
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    public static com.google.android.gms.maps.model.BitmapDescriptor fromResource(int p0)
    {
      try
      {
        return new com.google.android.gms.maps.model.BitmapDescriptor(jH().a(p0));
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    private static com.google.android.gms.maps.model.internal.a jH()
    {
      return (com.google.android.gms.maps.model.internal.a)hn.b(k, "IBitmapDescriptorFactory is not initialized");
    }

}
