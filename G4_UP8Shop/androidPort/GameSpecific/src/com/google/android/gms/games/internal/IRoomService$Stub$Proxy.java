// Decompiled from classes.dex (SourceFile: IRoomService$Stub$Proxy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import android.os.Parcel;
class IRoomService$Stub$Proxy implements com.google.android.gms.games.internal.IRoomService {
    // Fields
    private android.os.IBinder a;

    // Methods
    public final void a()
 throws android.os.RemoteException {
      android.os.Parcel v1; // RETVAL
      android.os.Parcel v2;
      v1 = Parcel.obtain();
      v2 = v1;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        this.a.transact(1002, v1, null, 1);
      }
      catch ( Throwable v3 )
      {
        v1.recycle();
        throw v3;
      }
      v2.recycle();
    }

    public final void a(
            android.os.IBinder p0,
            com.google.android.gms.games.internal.IRoomServiceCallbacks p1)
 throws android.os.RemoteException {
      android.os.IBinder v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = null;
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        v4.writeStrongBinder(p0);
        if ( p1 != null )
          v3 = p1.asBinder();
        v5.writeStrongBinder(v3);
        this.a.transact(1001, v5, null, 1);
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        throw v6;
      }
      v5.recycle();
    }

    public final void a(com.google.android.gms.common.data.DataHolder p0, boolean p1)
 throws android.os.RemoteException {
      int v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = 1;
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        if ( p0 != null )
        {
          v4.writeInt(1);
          p0.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( !p1 )
          v3 = 0;
        v4.writeInt(v3);
        this.a.transact(1006, v4, null, 1);
        v5.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        throw v6;
      }
    }

    public final void a(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        v2.writeString(p0);
        this.a.transact(1013, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void a(String p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        v3.writeString(p0);
        v3.writeInt(p1);
        this.a.transact(1011, v3, null, 1);
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
      v4.recycle();
    }

    public final void a(String p0, String p1, String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        v4.writeString(p0);
        v4.writeString(p1);
        v4.writeString(p2);
        this.a.transact(1004, v4, null, 1);
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        throw v6;
      }
      v5.recycle();
    }

    public final void a(boolean p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(1008, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void a(byte[] p0, String p1, int p2)
 throws android.os.RemoteException {
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        v4.writeByteArray(p0);
        v4.writeString(p1);
        v4.writeInt(p2);
        this.a.transact(1009, v4, null, 1);
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        throw v6;
      }
      v5.recycle();
    }

    public final void a(byte[] p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        v3.writeByteArray(p0);
        v3.writeStringArray(p1);
        this.a.transact(1010, v3, null, 1);
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
      v4.recycle();
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final void b()
 throws android.os.RemoteException {
      android.os.Parcel v1; // RETVAL
      android.os.Parcel v2;
      v1 = Parcel.obtain();
      v2 = v1;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        this.a.transact(1003, v1, null, 1);
      }
      catch ( Throwable v3 )
      {
        v1.recycle();
        throw v3;
      }
      v2.recycle();
    }

    public final void b(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        v2.writeString(p0);
        this.a.transact(1014, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void b(String p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        v3.writeString(p0);
        v3.writeInt(p1);
        this.a.transact(1012, v3, null, 1);
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
      v4.recycle();
    }

    public final void c()
 throws android.os.RemoteException {
      android.os.Parcel v1; // RETVAL
      android.os.Parcel v2;
      v1 = Parcel.obtain();
      v2 = v1;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        this.a.transact(1005, v1, null, 1);
      }
      catch ( Throwable v3 )
      {
        v1.recycle();
        throw v3;
      }
      v2.recycle();
    }

    public final void d()
 throws android.os.RemoteException {
      android.os.Parcel v1; // RETVAL
      android.os.Parcel v2;
      v1 = Parcel.obtain();
      v2 = v1;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IRoomService");
        this.a.transact(1007, v1, null, 1);
      }
      catch ( Throwable v3 )
      {
        v1.recycle();
        throw v3;
      }
      v2.recycle();
    }

}
