// Decompiled from classes.dex (SourceFile: ICameraUpdateFactoryDelegate$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Parcel;
class ICameraUpdateFactoryDelegate$a$a implements com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate {
    // Fields
    private android.os.IBinder a;

    // Methods
    ICameraUpdateFactoryDelegate$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.dynamic.d a()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
        this.a.transact(1, v1, v2, 0);
        v3.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v3.readStrongBinder());
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

    public final com.google.android.gms.dynamic.d a(float p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
        v2.writeFloat(p0);
        this.a.transact(4, v2, v3, 0);
        v4.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v4.readStrongBinder());
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
      return result;
    }

    public final com.google.android.gms.dynamic.d a(float p0, float p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
        v3.writeFloat(p0);
        v3.writeFloat(p1);
        this.a.transact(3, v3, v4, 0);
        v5.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v5.readStrongBinder());
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
      return result;
    }

    public final com.google.android.gms.dynamic.d a(float p0, int p1, int p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
        v4.writeFloat(p0);
        v4.writeInt(p1);
        v4.writeInt(p2);
        this.a.transact(6, v4, v5, 0);
        v6.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v6.readStrongBinder());
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
      return result;
    }

    public final com.google.android.gms.dynamic.d a(
            com.google.android.gms.maps.model.CameraPosition p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(7, v2, v3, 0);
        v4.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v4.readStrongBinder());
        v4.recycle();
        v2.recycle();
        return result;
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
    }

    public final com.google.android.gms.dynamic.d a(
            com.google.android.gms.maps.model.LatLng p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(8, v2, v3, 0);
        v4.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v4.readStrongBinder());
        v4.recycle();
        v2.recycle();
        return result;
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
    }

    public final com.google.android.gms.dynamic.d a(
            com.google.android.gms.maps.model.LatLng p0,
            float p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
        if ( p0 != null )
        {
          v3.writeInt(1);
          p0.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        v3.writeFloat(p1);
        this.a.transact(9, v3, v4, 0);
        v5.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v5.readStrongBinder());
        v5.recycle();
        v3.recycle();
        return result;
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
    }

    public final com.google.android.gms.dynamic.d a(
            com.google.android.gms.maps.model.LatLngBounds p0,
            int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
        if ( p0 != null )
        {
          v3.writeInt(1);
          p0.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        v3.writeInt(p1);
        this.a.transact(10, v3, v4, 0);
        v5.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v5.readStrongBinder());
        v5.recycle();
        v3.recycle();
        return result;
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
    }

    public final com.google.android.gms.dynamic.d a(
            com.google.android.gms.maps.model.LatLngBounds p0,
            int p1,
            int p2,
            int p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
        if ( p0 != null )
        {
          v5.writeInt(1);
          p0.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        v5.writeInt(p1);
        v5.writeInt(p2);
        v5.writeInt(p3);
        this.a.transact(11, v5, v6, 0);
        v7.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v7.readStrongBinder());
        v7.recycle();
        v5.recycle();
        return result;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final com.google.android.gms.dynamic.d b()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
        this.a.transact(2, v1, v2, 0);
        v3.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v3.readStrongBinder());
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

    public final com.google.android.gms.dynamic.d b(float p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
        v2.writeFloat(p0);
        this.a.transact(5, v2, v3, 0);
        v4.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v4.readStrongBinder());
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
      return result;
    }

}
