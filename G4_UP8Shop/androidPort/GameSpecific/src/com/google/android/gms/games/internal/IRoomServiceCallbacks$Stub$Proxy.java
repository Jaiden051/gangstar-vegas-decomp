// Decompiled from classes.dex (SourceFile: IRoomServiceCallbacks$Stub$Proxy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import android.os.Parcel;
class IRoomServiceCallbacks$Stub$Proxy implements com.google.android.gms.games.internal.IRoomServiceCallbacks {
    // Fields
    private android.os.IBinder a;

    // Methods
    IRoomServiceCallbacks$Stub$Proxy(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a()
 throws android.os.RemoteException {
      android.os.Parcel v1; // RETVAL
      android.os.Parcel v2;
      v1 = Parcel.obtain();
      v2 = v1;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        this.a.transact(1016, v1, null, 1);
      }
      catch ( Throwable v3 )
      {
        v1.recycle();
        throw v3;
      }
      v2.recycle();
    }

    public final void a(int p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v2.writeInt(p0);
        this.a.transact(1020, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void a(int p0, int p1, String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v4.writeInt(p0);
        v4.writeInt(p1);
        v4.writeString(p2);
        this.a.transact(1001, v4, null, 1);
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        throw v6;
      }
      v5.recycle();
    }

    public final void a(android.os.IBinder p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v2.writeStrongBinder(p0);
        this.a.transact(1021, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void a(android.os.ParcelFileDescriptor p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
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
        this.a.transact(1024, v3, null, 1);
        v4.recycle();
        return;
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
    }

    public final void a(com.google.android.gms.games.internal.ConnectionInfo p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(1022, v2, null, 1);
        v3.recycle();
        return;
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
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
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v2.writeString(p0);
        this.a.transact(1003, v2, null, 1);
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
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v3.writeString(p0);
        v3.writeInt(p1);
        this.a.transact(1025, v3, null, 1);
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
      v4.recycle();
    }

    public final void a(String p0, byte[] p1, int p2)
 throws android.os.RemoteException {
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v4.writeString(p0);
        v4.writeByteArray(p1);
        v4.writeInt(p2);
        this.a.transact(1002, v4, null, 1);
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        throw v6;
      }
      v5.recycle();
    }

    public final void a(String p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v3.writeString(p0);
        v3.writeStringArray(p1);
        this.a.transact(1008, v3, null, 1);
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
        v1.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        this.a.transact(1023, v1, null, 1);
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
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v2.writeString(p0);
        this.a.transact(1004, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void b(String p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v3.writeString(p0);
        v3.writeStringArray(p1);
        this.a.transact(1009, v3, null, 1);
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
      v4.recycle();
    }

    public final void c(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v2.writeString(p0);
        this.a.transact(1005, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void c(String p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v3.writeString(p0);
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

    public final void d(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v2.writeString(p0);
        this.a.transact(1006, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void d(String p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v3.writeString(p0);
        v3.writeStringArray(p1);
        this.a.transact(1011, v3, null, 1);
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
      v4.recycle();
    }

    public final void e(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v2.writeString(p0);
        this.a.transact(1007, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void e(String p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v3.writeString(p0);
        v3.writeStringArray(p1);
        this.a.transact(1012, v3, null, 1);
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
      v4.recycle();
    }

    public final void f(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
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

    public final void f(String p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v3.writeString(p0);
        v3.writeStringArray(p1);
        this.a.transact(1013, v3, null, 1);
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
      v4.recycle();
    }

    public final void g(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v2.writeString(p0);
        this.a.transact(1015, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void g(String p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v3.writeString(p0);
        v3.writeStringArray(p1);
        this.a.transact(1017, v3, null, 1);
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
      v4.recycle();
    }

    public final void h(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v2.writeString(p0);
        this.a.transact(1018, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void i(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IRoomServiceCallbacks");
        v2.writeString(p0);
        this.a.transact(1019, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

}
