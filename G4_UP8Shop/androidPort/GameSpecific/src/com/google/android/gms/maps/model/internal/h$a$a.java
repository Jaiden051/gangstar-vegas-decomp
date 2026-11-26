// Decompiled from classes.dex (SourceFile: h$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

import android.os.Parcel;
class h$a$a implements com.google.android.gms.maps.model.internal.h {
    // Fields
    private android.os.IBinder a;

    // Methods
    h$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
        this.a.transact(1, v1, v2, 0);
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

    public final void a(float p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
        v2.writeFloat(p0);
        this.a.transact(4, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void a(boolean p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(6, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final boolean a(com.google.android.gms.maps.model.internal.h p0)
 throws android.os.RemoteException {
      boolean v2;
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      int Int; // RETVAL
    
      v2 = false;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(8, v3, v5, 0);
        v5.readException();
        Int = v5.readInt();
      }
      catch ( Throwable v9 )
      {
        v4.recycle();
        v3.recycle();
        throw v9;
      }
      if ( Int != 0 )
        v2 = true;
      v5.recycle();
      v3.recycle();
      return v2;
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
        v1.writeInterfaceToken("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
        this.a.transact(2, v1, v2, 0);
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

    public final void b(boolean p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(10, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final String c()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      String result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
        this.a.transact(3, v1, v2, 0);
        v3.readException();
        result = v3.readString();
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

    public final float d()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      float result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
        this.a.transact(5, v1, v2, 0);
        v3.readException();
        result = v3.readFloat();
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

    public final boolean e()
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
        v2.writeInterfaceToken("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
        this.a.transact(7, v2, v3, 0);
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

    public final int f()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      int result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
        this.a.transact(9, v1, v2, 0);
        v3.readException();
        result = v3.readInt();
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
        v2.writeInterfaceToken("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
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
