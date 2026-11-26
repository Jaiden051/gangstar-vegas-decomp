// Decompiled from classes.dex (SourceFile: m$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

import android.os.Parcel;
class m$a$a implements com.google.android.gms.drive.realtime.internal.m {
    // Fields
    private android.os.IBinder a;

    // Methods
    m$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(int p0, com.google.android.gms.drive.realtime.internal.j p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v3.writeInt(p0);
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(30, v3, v5, 0);
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

    public final void a(
            com.google.android.gms.drive.realtime.internal.BeginCompoundOperationRequest p0,
            com.google.android.gms.drive.realtime.internal.o p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
        {
          v3.writeInt(1);
          p0.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(18, v3, v5, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
    }

    public final void a(
            com.google.android.gms.drive.realtime.internal.EndCompoundOperationRequest p0,
            com.google.android.gms.drive.realtime.internal.o p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
        {
          v3.writeInt(1);
          p0.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(19, v3, v5, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
    }

    public final void a(
            com.google.android.gms.drive.realtime.internal.ParcelableIndexReference p0,
            com.google.android.gms.drive.realtime.internal.n p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
        {
          v3.writeInt(1);
          p0.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(26, v3, v5, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
    }

    public final void a(com.google.android.gms.drive.realtime.internal.c p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(2, v2, v4, 0);
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

    public final void a(com.google.android.gms.drive.realtime.internal.d p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(32, v2, v4, 0);
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

    public final void a(com.google.android.gms.drive.realtime.internal.e p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(31, v2, v4, 0);
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

    public final void a(com.google.android.gms.drive.realtime.internal.h p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(36, v2, v4, 0);
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

    public final void a(com.google.android.gms.drive.realtime.internal.i p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(34, v2, v4, 0);
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

    public final void a(com.google.android.gms.drive.realtime.internal.j p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(22, v2, v4, 0);
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

    public final void a(com.google.android.gms.drive.realtime.internal.l p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(29, v2, v4, 0);
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

    public final void a(com.google.android.gms.drive.realtime.internal.o p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(3, v2, v4, 0);
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

    public final void a(String p0, int p1, int p2, com.google.android.gms.drive.realtime.internal.g p3)
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
        v5.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v5.writeString(p0);
        v5.writeInt(p1);
        v5.writeInt(p2);
        if ( p3 != null )
          v8 = p3.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        this.a.transact(17, v5, v7, 0);
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

    public final void a(String p0, int p1, int p2, com.google.android.gms.drive.realtime.internal.j p3)
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
        v5.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v5.writeString(p0);
        v5.writeInt(p1);
        v5.writeInt(p2);
        if ( p3 != null )
          v8 = p3.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        this.a.transact(11, v5, v7, 0);
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

    public final void a(
            String p0,
            int p1,
            com.google.android.gms.common.data.DataHolder p2,
            com.google.android.gms.drive.realtime.internal.g p3)
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
        v5.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v5.writeString(p0);
        v5.writeInt(p1);
        if ( p2 != null )
        {
          v5.writeInt(1);
          p2.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p3 != null )
          v8 = p3.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
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

    public final void a(
            String p0,
            int p1,
            com.google.android.gms.common.data.DataHolder p2,
            com.google.android.gms.drive.realtime.internal.j p3)
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
        v5.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v5.writeString(p0);
        v5.writeInt(p1);
        if ( p2 != null )
        {
          v5.writeInt(1);
          p2.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p3 != null )
          v8 = p3.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
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

    public final void a(String p0, int p1, com.google.android.gms.drive.realtime.internal.o p2)
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
        v4.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v4.writeString(p0);
        v4.writeInt(p1);
        if ( p2 != null )
          v7 = p2.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        this.a.transact(28, v4, v6, 0);
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

    public final void a(String p0, int p1, String p2, int p3, com.google.android.gms.drive.realtime.internal.j p4)
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
        v6.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v6.writeString(p0);
        v6.writeInt(p1);
        v6.writeString(p2);
        v6.writeInt(p3);
        if ( p4 != null )
          v9 = p4.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        this.a.transact(37, v6, v8, 0);
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

    public final void a(String p0, int p1, String p2, com.google.android.gms.drive.realtime.internal.j p3)
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
        v5.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v5.writeString(p0);
        v5.writeInt(p1);
        v5.writeString(p2);
        if ( p3 != null )
          v8 = p3.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        this.a.transact(10, v5, v7, 0);
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

    public final void a(
            String p0,
            com.google.android.gms.common.data.DataHolder p1,
            com.google.android.gms.drive.realtime.internal.j p2)
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
        v4.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v4.writeString(p0);
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
          v7 = p2.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        this.a.transact(6, v4, v6, 0);
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

    public final void a(String p0, com.google.android.gms.drive.realtime.internal.f p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v3.writeString(p0);
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(20, v3, v5, 0);
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

    public final void a(String p0, com.google.android.gms.drive.realtime.internal.j p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v3.writeString(p0);
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(7, v3, v5, 0);
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

    public final void a(String p0, com.google.android.gms.drive.realtime.internal.k p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v3.writeString(p0);
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(27, v3, v5, 0);
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

    public final void a(String p0, com.google.android.gms.drive.realtime.internal.l p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v3.writeString(p0);
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(5, v3, v5, 0);
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

    public final void a(String p0, com.google.android.gms.drive.realtime.internal.n p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v3.writeString(p0);
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
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

    public final void a(String p0, com.google.android.gms.drive.realtime.internal.o p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v3.writeString(p0);
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(38, v3, v5, 0);
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

    public final void a(String p0, String p1, com.google.android.gms.drive.realtime.internal.f p2)
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
        v4.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v4.writeString(p0);
        v4.writeString(p1);
        if ( p2 != null )
          v7 = p2.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        this.a.transact(4, v4, v6, 0);
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

    public final void a(String p0, String p1, com.google.android.gms.drive.realtime.internal.g p2)
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
        v4.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v4.writeString(p0);
        v4.writeString(p1);
        if ( p2 != null )
          v7 = p2.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
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

    public final void a(String p0, String p1, com.google.android.gms.drive.realtime.internal.j p2)
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
        v4.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v4.writeString(p0);
        v4.writeString(p1);
        if ( p2 != null )
          v7 = p2.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        this.a.transact(12, v4, v6, 0);
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

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final void b(com.google.android.gms.drive.realtime.internal.c p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(33, v2, v4, 0);
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

    public final void b(com.google.android.gms.drive.realtime.internal.j p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(23, v2, v4, 0);
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

    public final void b(com.google.android.gms.drive.realtime.internal.o p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(35, v2, v4, 0);
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

    public final void b(String p0, com.google.android.gms.drive.realtime.internal.f p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v3.writeString(p0);
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(13, v3, v5, 0);
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

    public final void b(String p0, com.google.android.gms.drive.realtime.internal.l p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v3.writeString(p0);
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(8, v3, v5, 0);
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

    public final void b(String p0, com.google.android.gms.drive.realtime.internal.n p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v3.writeString(p0);
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(9, v3, v5, 0);
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

    public final void b(String p0, com.google.android.gms.drive.realtime.internal.o p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v3.writeString(p0);
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(39, v3, v5, 0);
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

    public final void c(com.google.android.gms.drive.realtime.internal.c p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(24, v2, v4, 0);
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

    public final void c(String p0, com.google.android.gms.drive.realtime.internal.l p1)
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
        v3.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        v3.writeString(p0);
        if ( p1 != null )
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(14, v3, v5, 0);
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

    public final void d(com.google.android.gms.drive.realtime.internal.c p0)
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IRealtimeService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(25, v2, v4, 0);
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

}
