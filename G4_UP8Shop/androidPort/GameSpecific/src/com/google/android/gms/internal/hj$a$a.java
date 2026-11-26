// Decompiled from classes.dex (SourceFile: hj$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class hj$a$a implements com.google.android.gms.internal.hj {
    // Fields
    private android.os.IBinder a;

    // Methods
    hj$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.internal.hi p0, int p1)
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
        v3.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
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

    public final void a(com.google.android.gms.internal.hi p0, int p1, String p2)
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
        v4.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeInt(p1);
        v4.writeString(p2);
        this.a.transact(3, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void a(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(2, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void a(
            com.google.android.gms.internal.hi p0,
            int p1,
            String p2,
            android.os.IBinder p3,
            android.os.Bundle p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeInt(p1);
        v6.writeString(p2);
        v6.writeStrongBinder(p3);
        if ( p4 != null )
        {
          v6.writeInt(1);
          p4.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        this.a.transact(19, v6, v8, 0);
        v8.readException();
        v8.recycle();
        v6.recycle();
        return;
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
    }

    public final void a(com.google.android.gms.internal.hi p0, int p1, String p2, String p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        v5.writeString(p3);
        this.a.transact(34, v5, v7, 0);
        v7.readException();
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
      v7.recycle();
      v5.recycle();
    }

    public final void a(com.google.android.gms.internal.hi p0, int p1, String p2, String p3, String p4, String[] p5)
 throws android.os.RemoteException {
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeInt(p1);
        v7.writeString(p2);
        v7.writeString(p3);
        v7.writeString(p4);
        v7.writeStringArray(p5);
        this.a.transact(33, v7, v9, 0);
        v9.readException();
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
      v9.recycle();
      v7.recycle();
    }

    public final void a(com.google.android.gms.internal.hi p0, int p1, String p2, String p3, String[] p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeInt(p1);
        v6.writeString(p2);
        v6.writeString(p3);
        v6.writeStringArray(p4);
        this.a.transact(10, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void a(
            com.google.android.gms.internal.hi p0,
            int p1,
            String p2,
            String p3,
            String[] p4,
            android.os.Bundle p5)
 throws android.os.RemoteException {
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeInt(p1);
        v7.writeString(p2);
        v7.writeString(p3);
        v7.writeStringArray(p4);
        if ( p5 != null )
        {
          v7.writeInt(1);
          p5.writeToParcel(v7, 0);
        }
        else
        {
          v7.writeInt(0);
        }
        this.a.transact(30, v7, v9, 0);
        v9.readException();
        v9.recycle();
        v7.recycle();
        return;
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
    }

    public final void a(
            com.google.android.gms.internal.hi p0,
            int p1,
            String p2,
            String p3,
            String[] p4,
            String p5,
            android.os.Bundle p6)
 throws android.os.RemoteException {
      android.os.Parcel v8;
      android.os.Parcel v9; // RETVAL
      android.os.Parcel v10;
      android.os.IBinder v11;
      v8 = Parcel.obtain();
      v9 = Parcel.obtain();
      v10 = v9;
      try
      {
        v8.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v11 = p0.asBinder();
        else
          v11 = null;
        v8.writeStrongBinder(v11);
        v8.writeInt(p1);
        v8.writeString(p2);
        v8.writeString(p3);
        v8.writeStringArray(p4);
        v8.writeString(p5);
        if ( p6 != null )
        {
          v8.writeInt(1);
          p6.writeToParcel(v8, 0);
        }
        else
        {
          v8.writeInt(0);
        }
        this.a.transact(1, v8, v10, 0);
        v10.readException();
        v10.recycle();
        v8.recycle();
        return;
      }
      catch ( Throwable v12 )
      {
        v9.recycle();
        v8.recycle();
        throw v12;
      }
    }

    public final void a(
            com.google.android.gms.internal.hi p0,
            int p1,
            String p2,
            String p3,
            String[] p4,
            String p5,
            android.os.IBinder p6,
            String p7,
            android.os.Bundle p8)
 throws android.os.RemoteException {
      android.os.Parcel v10;
      android.os.Parcel v11; // RETVAL
      android.os.Parcel v12;
      android.os.IBinder v13;
      v10 = Parcel.obtain();
      v11 = Parcel.obtain();
      v12 = v11;
      try
      {
        v10.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v13 = p0.asBinder();
        else
          v13 = null;
        v10.writeStrongBinder(v13);
        v10.writeInt(p1);
        v10.writeString(p2);
        v10.writeString(p3);
        v10.writeStringArray(p4);
        v10.writeString(p5);
        v10.writeStrongBinder(p6);
        v10.writeString(p7);
        if ( p8 != null )
        {
          v10.writeInt(1);
          p8.writeToParcel(v10, 0);
        }
        else
        {
          v10.writeInt(0);
        }
        this.a.transact(9, v10, v12, 0);
        v12.readException();
        v12.recycle();
        v10.recycle();
        return;
      }
      catch ( Throwable v14 )
      {
        v11.recycle();
        v10.recycle();
        throw v14;
      }
    }

    public final void a(
            com.google.android.gms.internal.hi p0,
            int p1,
            String p2,
            String[] p3,
            String p4,
            android.os.Bundle p5)
 throws android.os.RemoteException {
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        v7.writeInt(p1);
        v7.writeString(p2);
        v7.writeStringArray(p3);
        v7.writeString(p4);
        if ( p5 != null )
        {
          v7.writeInt(1);
          p5.writeToParcel(v7, 0);
        }
        else
        {
          v7.writeInt(0);
        }
        this.a.transact(20, v7, v9, 0);
        v9.readException();
        v9.recycle();
        v7.recycle();
        return;
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final void b(com.google.android.gms.internal.hi p0, int p1, String p2)
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
        v4.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeInt(p1);
        v4.writeString(p2);
        this.a.transact(21, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void b(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(5, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void b(com.google.android.gms.internal.hi p0, int p1, String p2, String p3, String[] p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeInt(p1);
        v6.writeString(p2);
        v6.writeString(p3);
        v6.writeStringArray(p4);
        this.a.transact(28, v6, v8, 0);
        v8.readException();
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
      v8.recycle();
      v6.recycle();
    }

    public final void c(com.google.android.gms.internal.hi p0, int p1, String p2)
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
        v4.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeInt(p1);
        v4.writeString(p2);
        this.a.transact(22, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void c(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(6, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void d(com.google.android.gms.internal.hi p0, int p1, String p2)
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
        v4.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeInt(p1);
        v4.writeString(p2);
        this.a.transact(24, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void d(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(7, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void e(com.google.android.gms.internal.hi p0, int p1, String p2)
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
        v4.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeInt(p1);
        v4.writeString(p2);
        this.a.transact(26, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void e(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(8, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void f(com.google.android.gms.internal.hi p0, int p1, String p2)
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
        v4.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeInt(p1);
        v4.writeString(p2);
        this.a.transact(31, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void f(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(11, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void g(com.google.android.gms.internal.hi p0, int p1, String p2)
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
        v4.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeInt(p1);
        v4.writeString(p2);
        this.a.transact(32, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void g(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(12, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void h(com.google.android.gms.internal.hi p0, int p1, String p2)
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
        v4.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeInt(p1);
        v4.writeString(p2);
        this.a.transact(35, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void h(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(13, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void i(com.google.android.gms.internal.hi p0, int p1, String p2)
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
        v4.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeInt(p1);
        v4.writeString(p2);
        this.a.transact(36, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public final void i(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(14, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void j(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(15, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void k(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(16, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void l(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(17, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void m(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(18, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void n(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(23, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void o(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(25, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void p(com.google.android.gms.internal.hi p0, int p1, String p2, android.os.Bundle p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.common.internal.IGmsServiceBroker");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(27, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

}
