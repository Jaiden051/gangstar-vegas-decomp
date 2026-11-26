// Decompiled from classes.dex (SourceFile: gm$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class gm$a$a implements com.google.android.gms.internal.gm {
    // Fields
    private android.os.IBinder a;

    // Methods
    gm$a$a(android.os.IBinder p0)
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
        v1.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        this.a.transact(1, v1, null, 1);
      }
      catch ( Throwable v3 )
      {
        v1.recycle();
        throw v3;
      }
      v2.recycle();
    }

    public final void a(double p0, double p2, boolean p4)
 throws android.os.RemoteException {
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        v4.writeDouble(p0);
        v4.writeDouble(p2);
        v4.writeInt(com.gameloft.android.DecompRT.b2i(p4));
        this.a.transact(7, v4, null, 1);
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        throw v6;
      }
      v5.recycle();
    }

    public final void a(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        v2.writeString(p0);
        this.a.transact(5, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void a(String p0, com.google.android.gms.cast.LaunchOptions p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        v3.writeString(p0);
        if ( p1 != null )
        {
          v3.writeInt(1);
          p1.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        this.a.transact(13, v3, null, 1);
        v4.recycle();
        return;
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
    }

    public final void a(String p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        v3.writeString(p0);
        v3.writeString(p1);
        this.a.transact(3, v3, null, 1);
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
      v4.recycle();
    }

    public final void a(String p0, String p1, long p2)
 throws android.os.RemoteException {
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        v4.writeString(p0);
        v4.writeString(p1);
        v4.writeLong(p2);
        this.a.transact(9, v4, null, 1);
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        throw v6;
      }
      v5.recycle();
    }

    public final void a(String p0, boolean p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        v3.writeString(p0);
        v3.writeInt(com.gameloft.android.DecompRT.b2i(p1));
        this.a.transact(2, v3, null, 1);
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
      v4.recycle();
    }

    public final void a(String p0, byte[] p1, long p2)
 throws android.os.RemoteException {
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        v4.writeString(p0);
        v4.writeByteArray(p1);
        v4.writeLong(p2);
        this.a.transact(10, v4, null, 1);
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        throw v6;
      }
      v5.recycle();
    }

    public final void a(boolean p0, double p1, boolean p3)
 throws android.os.RemoteException {
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        v4.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        v4.writeDouble(p1);
        v4.writeInt(com.gameloft.android.DecompRT.b2i(p3));
        this.a.transact(8, v4, null, 1);
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        throw v6;
      }
      v5.recycle();
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
        v1.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        this.a.transact(4, v1, null, 1);
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
        v2.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        v2.writeString(p0);
        this.a.transact(11, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

    public final void c()
 throws android.os.RemoteException {
      android.os.Parcel v1; // RETVAL
      android.os.Parcel v2;
      v1 = Parcel.obtain();
      v2 = v1;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        this.a.transact(6, v1, null, 1);
      }
      catch ( Throwable v3 )
      {
        v1.recycle();
        throw v3;
      }
      v2.recycle();
    }

    public final void c(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.cast.internal.ICastDeviceController");
        v2.writeString(p0);
        this.a.transact(12, v2, null, 1);
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
      v3.recycle();
    }

}
