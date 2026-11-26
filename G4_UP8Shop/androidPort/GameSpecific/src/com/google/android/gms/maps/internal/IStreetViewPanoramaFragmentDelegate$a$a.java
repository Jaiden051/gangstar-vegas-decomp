// Decompiled from classes.dex (SourceFile: IStreetViewPanoramaFragmentDelegate$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Parcel;
class IStreetViewPanoramaFragmentDelegate$a$a implements com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate {
    // Fields
    private android.os.IBinder a;

    // Methods
    IStreetViewPanoramaFragmentDelegate$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.dynamic.d a(
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.dynamic.d p1,
            android.os.Bundle p2)
 throws android.os.RemoteException {
      android.os.IBinder v4;
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v4 = null;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        if ( p1 != null )
          v4 = p1.asBinder();
        v5.writeStrongBinder(v4);
        if ( p2 != null )
        {
          v5.writeInt(1);
          p2.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(4, v5, v7, 0);
        v7.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v7.readStrongBinder());
        v7.recycle();
        v5.recycle();
        return result;
      }
      catch ( Throwable v10 )
      {
        v6.recycle();
        v5.recycle();
        throw v10;
      }
    }

    public final com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate a()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
        this.a.transact(1, v1, v2, 0);
        v3.readException();
        result = IStreetViewPanoramaDelegate$a.aT(v3.readStrongBinder());
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

    public final void a(android.os.Bundle p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(3, v2, v3, 0);
        v4.readException();
        v4.recycle();
        v2.recycle();
        return;
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
    }

    public final void a(
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.maps.StreetViewPanoramaOptions p1,
            android.os.Bundle p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        if ( p1 != null )
        {
          v4.writeInt(1);
          p1.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p2 != null )
        {
          v4.writeInt(1);
          p2.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        this.a.transact(2, v4, v6, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final void b()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
        this.a.transact(5, v1, v2, 0);
        v3.readException();
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        v1.recycle();
        throw v4;
      }
      v3.recycle();
      v1.recycle();
    }

    public final void b(android.os.Bundle p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(10, v2, v3, 0);
        v4.readException();
        if ( v4.readInt() != 0 )
          p0.readFromParcel(v4);
        v4.recycle();
        v2.recycle();
        return;
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
    }

    public final void c()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
        this.a.transact(6, v1, v2, 0);
        v3.readException();
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        v1.recycle();
        throw v4;
      }
      v3.recycle();
      v1.recycle();
    }

    public final void d()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
        this.a.transact(7, v1, v2, 0);
        v3.readException();
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        v1.recycle();
        throw v4;
      }
      v3.recycle();
      v1.recycle();
    }

    public final void e()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
        this.a.transact(8, v1, v2, 0);
        v3.readException();
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        v1.recycle();
        throw v4;
      }
      v3.recycle();
      v1.recycle();
    }

    public final void f()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
        this.a.transact(9, v1, v2, 0);
        v3.readException();
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        v1.recycle();
        throw v4;
      }
      v3.recycle();
      v1.recycle();
    }

    public final boolean g()
 throws android.os.RemoteException {
      boolean v1;
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      int Int; // RETVAL
    
      v1 = false;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
        this.a.transact(11, v2, v3, 0);
        v4.readException();
        Int = v4.readInt();
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      if ( Int != 0 )
        v1 = true;
      v4.recycle();
      v2.recycle();
      return v1;
    }

}
