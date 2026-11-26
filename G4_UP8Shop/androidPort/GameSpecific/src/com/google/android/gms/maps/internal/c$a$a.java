// Decompiled from classes.dex (SourceFile: c$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Parcel;
class c$a$a implements com.google.android.gms.maps.internal.c {
    // Fields
    private android.os.IBinder a;

    // Methods
    c$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate a()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.internal.ICreator");
        this.a.transact(4, v1, v2, 0);
        v3.readException();
        result = ICameraUpdateFactoryDelegate$a.av(v3.readStrongBinder());
      }
      catch ( Throwable v5 )
      {
        v2.recycle();
        v1.recycle();
        throw v5;
      }
      v3.recycle();
      v1.recycle();
      return result;
    }

    public final com.google.android.gms.maps.internal.IMapViewDelegate a(
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.maps.GoogleMapOptions p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      com.google.android.gms.maps.internal.IMapViewDelegate result; // RETVAL
    
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.maps.internal.ICreator");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        if ( p1 != null )
        {
          v3.writeInt(1);
          p1.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        this.a.transact(3, v3, v5, 0);
        v5.readException();
        result = IMapViewDelegate$a.aC(v5.readStrongBinder());
        v5.recycle();
        v3.recycle();
        return result;
      }
      catch ( Throwable v8 )
      {
        v4.recycle();
        v3.recycle();
        throw v8;
      }
    }

    public final com.google.android.gms.maps.internal.IStreetViewPanoramaViewDelegate a(
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.maps.StreetViewPanoramaOptions p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      com.google.android.gms.maps.internal.IStreetViewPanoramaViewDelegate result; // RETVAL
    
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.maps.internal.ICreator");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        if ( p1 != null )
        {
          v3.writeInt(1);
          p1.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        this.a.transact(7, v3, v5, 0);
        v5.readException();
        result = IStreetViewPanoramaViewDelegate$a.aV(v5.readStrongBinder());
        v5.recycle();
        v3.recycle();
        return result;
      }
      catch ( Throwable v8 )
      {
        v4.recycle();
        v3.recycle();
        throw v8;
      }
    }

    public final void a(com.google.android.gms.dynamic.d p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.ICreator");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(1, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void a(com.google.android.gms.dynamic.d p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.maps.internal.ICreator");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeInt(p1);
        this.a.transact(6, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final com.google.android.gms.maps.internal.IMapFragmentDelegate b(com.google.android.gms.dynamic.d p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      com.google.android.gms.maps.internal.IMapFragmentDelegate result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.ICreator");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(2, v2, v4, 0);
        v4.readException();
        result = IMapFragmentDelegate$a.aB(v4.readStrongBinder());
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      v4.recycle();
      v2.recycle();
      return result;
    }

    public final com.google.android.gms.maps.model.internal.a b()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      com.google.android.gms.maps.model.internal.a result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.internal.ICreator");
        this.a.transact(5, v1, v2, 0);
        v3.readException();
        result = com.google.android.gms.maps.model.internal.a$a.aX(v3.readStrongBinder());
      }
      catch ( Throwable v5 )
      {
        v2.recycle();
        v1.recycle();
        throw v5;
      }
      v3.recycle();
      v1.recycle();
      return result;
    }

    public final com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate c(
            com.google.android.gms.dynamic.d p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.ICreator");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(8, v2, v4, 0);
        v4.readException();
        result = IStreetViewPanoramaFragmentDelegate$a.aU(v4.readStrongBinder());
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      v4.recycle();
      v2.recycle();
      return result;
    }

}
