// Decompiled from classes.dex (SourceFile: IControllerService$Stub$Proxy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

import android.os.Parcel;
final class IControllerService$Stub$Proxy implements com.bda.controller.IControllerService {
    // Fields
    private android.os.IBinder a;

    // Methods
    IControllerService$Stub$Proxy(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    private static String getInterfaceDescriptor()
    {
      return "com.bda.controller.IControllerService";
    }

    public final int a(int p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      int result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.bda.controller.IControllerService");
        v2.writeInt(p0);
        this.a.transact(5, v2, v3, 0);
        v4.readException();
        result = v4.readInt();
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

    public final int a(int p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      int result; // RETVAL
    
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.bda.controller.IControllerService");
        v3.writeInt(p0);
        v3.writeInt(p1);
        this.a.transact(6, v3, v4, 0);
        v5.readException();
        result = v5.readInt();
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
        v1.writeInterfaceToken("com.bda.controller.IControllerService");
        this.a.transact(12, v1, v2, 0);
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

    public final void a(com.bda.controller.IControllerListener p0, int p1)
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
        v3.writeInterfaceToken("com.bda.controller.IControllerService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeInt(p1);
        this.a.transact(1, v3, v5, 0);
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

    public final void a(com.bda.controller.IControllerMonitor p0, int p1)
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
        v3.writeInterfaceToken("com.bda.controller.IControllerService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeInt(p1);
        this.a.transact(3, v3, v5, 0);
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

    public final android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final float b(int p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      float result; // RETVAL
    
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.bda.controller.IControllerService");
        v3.writeInt(p0);
        v3.writeInt(p1);
        this.a.transact(7, v3, v4, 0);
        v5.readException();
        result = v5.readFloat();
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
        v1.writeInterfaceToken("com.bda.controller.IControllerService");
        this.a.transact(13, v1, v2, 0);
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

    public final void b(com.bda.controller.IControllerListener p0, int p1)
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
        v3.writeInterfaceToken("com.bda.controller.IControllerService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeInt(p1);
        this.a.transact(2, v3, v5, 0);
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

    public final void b(com.bda.controller.IControllerMonitor p0, int p1)
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
        v3.writeInterfaceToken("com.bda.controller.IControllerService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeInt(p1);
        this.a.transact(4, v3, v5, 0);
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

    public final int c(int p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      int result; // RETVAL
    
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.bda.controller.IControllerService");
        v3.writeInt(p0);
        v3.writeInt(p1);
        this.a.transact(8, v3, v4, 0);
        v5.readException();
        result = v5.readInt();
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

    public final void c(com.bda.controller.IControllerListener p0, int p1)
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
        v3.writeInterfaceToken("com.bda.controller.IControllerService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeInt(p1);
        this.a.transact(10, v3, v5, 0);
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

    public final boolean c()
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
        v2.writeInterfaceToken("com.bda.controller.IControllerService");
        this.a.transact(14, v2, v3, 0);
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

    public final void d(int p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.bda.controller.IControllerService");
        v3.writeInt(p0);
        v3.writeInt(p1);
        this.a.transact(9, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final int e(int p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      int result; // RETVAL
    
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.bda.controller.IControllerService");
        v3.writeInt(p0);
        v3.writeInt(p1);
        this.a.transact(11, v3, v4, 0);
        v5.readException();
        result = v5.readInt();
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

}
