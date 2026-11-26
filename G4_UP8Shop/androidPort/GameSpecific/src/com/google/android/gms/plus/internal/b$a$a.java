// Decompiled from classes.dex (SourceFile: b$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

import android.os.Parcel;
class b$a$a implements com.google.android.gms.plus.internal.b {
    // Fields
    private android.os.IBinder a;

    // Methods
    b$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(int p0, android.os.Bundle p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.plus.internal.IPlusCallbacks");
        v3.writeInt(p0);
        if ( p1 != null )
        {
          v3.writeInt(1);
          p1.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        this.a.transact(7, v3, v4, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
    }

    public final void a(int p0, android.os.Bundle p1, android.os.Bundle p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.plus.internal.IPlusCallbacks");
        v4.writeInt(p0);
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
        this.a.transact(1, v4, v5, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        v4.recycle();
        throw v7;
      }
    }

    public final void a(int p0, android.os.Bundle p1, android.os.ParcelFileDescriptor p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.plus.internal.IPlusCallbacks");
        v4.writeInt(p0);
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
        this.a.transact(2, v4, v5, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        v4.recycle();
        throw v7;
      }
    }

    public final void a(int p0, android.os.Bundle p1, com.google.android.gms.internal.Decomp_if p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.plus.internal.IPlusCallbacks");
        v4.writeInt(p0);
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
        this.a.transact(5, v4, v5, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        v4.recycle();
        throw v7;
      }
    }

    public final void a(int p0, com.google.android.gms.internal.kt p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.plus.internal.IPlusCallbacks");
        v3.writeInt(p0);
        if ( p1 != null )
        {
          v3.writeInt(1);
          p1.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        this.a.transact(9, v3, v4, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
    }

    public final void a(com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.plus.internal.IPlusCallbacks");
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

    public final void a(com.google.android.gms.common.data.DataHolder p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.plus.internal.IPlusCallbacks");
        if ( p0 != null )
        {
          v3.writeInt(1);
          p0.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        v3.writeString(p1);
        this.a.transact(4, v3, v4, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
    }

    public final void a(com.google.android.gms.common.data.DataHolder p0, String p1, String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.plus.internal.IPlusCallbacks");
        if ( p0 != null )
        {
          v4.writeInt(1);
          p0.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        v4.writeString(p1);
        v4.writeString(p2);
        this.a.transact(6, v4, v5, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        v4.recycle();
        throw v7;
      }
    }

    public final void a(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.plus.internal.IPlusCallbacks");
        v2.writeString(p0);
        this.a.transact(3, v2, v3, 0);
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

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final void b(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.plus.internal.IPlusCallbacks");
        v2.writeString(p0);
        this.a.transact(8, v2, v3, 0);
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

}
