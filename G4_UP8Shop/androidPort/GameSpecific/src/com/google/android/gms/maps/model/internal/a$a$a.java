// Decompiled from classes.dex (SourceFile: a$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

import android.os.Parcel;
class a$a$a implements com.google.android.gms.maps.model.internal.a {
    // Fields
    private android.os.IBinder a;

    // Methods
    a$a$a(android.os.IBinder p0)
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
        v1.writeInterfaceToken("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
        this.a.transact(4, v1, v2, 0);
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
        v2.writeInterfaceToken("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
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

    public final com.google.android.gms.dynamic.d a(int p0)
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
        v2.writeInterfaceToken("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
        v2.writeInt(p0);
        this.a.transact(1, v2, v3, 0);
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

    public final com.google.android.gms.dynamic.d a(android.graphics.Bitmap p0)
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
        v2.writeInterfaceToken("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(6, v2, v3, 0);
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

    public final com.google.android.gms.dynamic.d a(String p0)
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
        v2.writeInterfaceToken("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
        v2.writeString(p0);
        this.a.transact(2, v2, v3, 0);
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

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final com.google.android.gms.dynamic.d b(String p0)
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
        v2.writeInterfaceToken("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
        v2.writeString(p0);
        this.a.transact(3, v2, v3, 0);
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

    public final com.google.android.gms.dynamic.d c(String p0)
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
        v2.writeInterfaceToken("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
        v2.writeString(p0);
        this.a.transact(7, v2, v3, 0);
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
