// Decompiled from classes.dex (SourceFile: ln$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class ln$a$a implements com.google.android.gms.internal.ln {
    // Fields
    private android.os.IBinder a;

    // Methods
    ln$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(android.os.Bundle p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.wallet.internal.IOwService");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(9, v2, null, 1);
        v3.recycle();
        return;
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
    }

    public final void a(android.os.Bundle p0, com.google.android.gms.internal.lq p1)
 throws android.os.RemoteException {
      android.os.IBinder v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = null;
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.wallet.internal.IOwService");
        if ( p0 != null )
        {
          v4.writeInt(1);
          p0.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p1 != null )
          v3 = p1.asBinder();
        v5.writeStrongBinder(v3);
        this.a.transact(5, v5, null, 1);
        v5.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        throw v6;
      }
    }

    public final void a(
            com.google.android.gms.internal.lh p0,
            android.os.Bundle p1,
            com.google.android.gms.internal.lq p2)
 throws android.os.RemoteException {
      android.os.IBinder v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = null;
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.wallet.internal.IOwService");
        if ( p0 != null )
        {
          v5.writeInt(1);
          p0.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p1 != null )
        {
          v5.writeInt(1);
          p1.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p2 != null )
          v4 = p2.asBinder();
        v6.writeStrongBinder(v4);
        this.a.transact(8, v6, null, 1);
        v6.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        throw v7;
      }
    }

    public final void a(
            com.google.android.gms.wallet.FullWalletRequest p0,
            android.os.Bundle p1,
            com.google.android.gms.internal.lq p2)
 throws android.os.RemoteException {
      android.os.IBinder v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = null;
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.wallet.internal.IOwService");
        if ( p0 != null )
        {
          v5.writeInt(1);
          p0.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p1 != null )
        {
          v5.writeInt(1);
          p1.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p2 != null )
          v4 = p2.asBinder();
        v6.writeStrongBinder(v4);
        this.a.transact(2, v6, null, 1);
        v6.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        throw v7;
      }
    }

    public final void a(
            com.google.android.gms.wallet.MaskedWalletRequest p0,
            android.os.Bundle p1,
            com.google.android.gms.internal.lp p2)
 throws android.os.RemoteException {
      android.os.IBinder v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = null;
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.wallet.internal.IOwService");
        if ( p0 != null )
        {
          v5.writeInt(1);
          p0.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p1 != null )
        {
          v5.writeInt(1);
          p1.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p2 != null )
          v4 = p2.asBinder();
        v6.writeStrongBinder(v4);
        this.a.transact(7, v6, null, 1);
        v6.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        throw v7;
      }
    }

    public final void a(
            com.google.android.gms.wallet.MaskedWalletRequest p0,
            android.os.Bundle p1,
            com.google.android.gms.internal.lq p2)
 throws android.os.RemoteException {
      android.os.IBinder v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = null;
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.wallet.internal.IOwService");
        if ( p0 != null )
        {
          v5.writeInt(1);
          p0.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p1 != null )
        {
          v5.writeInt(1);
          p1.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p2 != null )
          v4 = p2.asBinder();
        v6.writeStrongBinder(v4);
        this.a.transact(1, v6, null, 1);
        v6.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        throw v7;
      }
    }

    public final void a(com.google.android.gms.wallet.NotifyTransactionStatusRequest p0, android.os.Bundle p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.wallet.internal.IOwService");
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
        {
          v3.writeInt(1);
          p1.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        this.a.transact(4, v3, null, 1);
        v4.recycle();
        return;
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
    }

    public final void a(
            com.google.android.gms.wallet.d p0,
            android.os.Bundle p1,
            com.google.android.gms.internal.lq p2)
 throws android.os.RemoteException {
      android.os.IBinder v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = null;
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.wallet.internal.IOwService");
        if ( p0 != null )
        {
          v5.writeInt(1);
          p0.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p1 != null )
        {
          v5.writeInt(1);
          p1.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p2 != null )
          v4 = p2.asBinder();
        v6.writeStrongBinder(v4);
        this.a.transact(6, v6, null, 1);
        v6.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        throw v7;
      }
    }

    public final void a(String p0, String p1, android.os.Bundle p2, com.google.android.gms.internal.lq p3)
 throws android.os.RemoteException {
      android.os.IBinder v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      v5 = null;
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.wallet.internal.IOwService");
        v6.writeString(p0);
        v6.writeString(p1);
        if ( p2 != null )
        {
          v6.writeInt(1);
          p2.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        if ( p3 != null )
          v5 = p3.asBinder();
        v7.writeStrongBinder(v5);
        this.a.transact(3, v7, null, 1);
        v7.recycle();
        return;
      }
      catch ( Throwable v8 )
      {
        v6.recycle();
        throw v8;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
