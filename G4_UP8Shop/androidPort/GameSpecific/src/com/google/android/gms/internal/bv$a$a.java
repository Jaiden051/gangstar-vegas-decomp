// Decompiled from classes.dex (SourceFile: bv$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class bv$a$a implements com.google.android.gms.internal.bv {
    // Fields
    private android.os.IBinder a;

    // Methods
    bv$a$a(android.os.IBinder p0)
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
        v1.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
        this.a.transact(2, v1, v2, 0);
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

    public final void a(
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.internal.aj p1,
            String p2,
            com.google.android.gms.internal.bw p3)
 throws android.os.RemoteException {
      android.os.IBinder v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v5 = null;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        if ( p1 != null )
        {
          v6.writeInt(1);
          p1.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        v6.writeString(p2);
        if ( p3 != null )
          v5 = p3.asBinder();
        v6.writeStrongBinder(v5);
        this.a.transact(3, v6, v8, 0);
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

    public final void a(
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.internal.aj p1,
            String p2,
            String p3,
            com.google.android.gms.internal.bw p4)
 throws android.os.RemoteException {
      android.os.IBinder v6;
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v6 = null;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        if ( p1 != null )
        {
          v7.writeInt(1);
          p1.writeToParcel(v7, 0);
        }
        else
        {
          v7.writeInt(0);
        }
        v7.writeString(p2);
        v7.writeString(p3);
        if ( p4 != null )
          v6 = p4.asBinder();
        v7.writeStrongBinder(v6);
        this.a.transact(7, v7, v9, 0);
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
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.internal.am p1,
            com.google.android.gms.internal.aj p2,
            String p3,
            com.google.android.gms.internal.bw p4)
 throws android.os.RemoteException {
      android.os.IBinder v6;
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v6 = null;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        if ( p1 != null )
        {
          v7.writeInt(1);
          p1.writeToParcel(v7, 0);
        }
        else
        {
          v7.writeInt(0);
        }
        if ( p2 != null )
        {
          v7.writeInt(1);
          p2.writeToParcel(v7, 0);
        }
        else
        {
          v7.writeInt(0);
        }
        v7.writeString(p3);
        if ( p4 != null )
          v6 = p4.asBinder();
        v7.writeStrongBinder(v6);
        this.a.transact(1, v7, v9, 0);
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
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.internal.am p1,
            com.google.android.gms.internal.aj p2,
            String p3,
            String p4,
            com.google.android.gms.internal.bw p5)
 throws android.os.RemoteException {
      android.os.IBinder v7;
      android.os.Parcel v8;
      android.os.Parcel v9; // RETVAL
      android.os.Parcel v10;
      android.os.IBinder v11;
      v7 = null;
      v8 = Parcel.obtain();
      v9 = Parcel.obtain();
      v10 = v9;
      try
      {
        v8.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
        if ( p0 != null )
          v11 = p0.asBinder();
        else
          v11 = null;
        v8.writeStrongBinder(v11);
        if ( p1 != null )
        {
          v8.writeInt(1);
          p1.writeToParcel(v8, 0);
        }
        else
        {
          v8.writeInt(0);
        }
        if ( p2 != null )
        {
          v8.writeInt(1);
          p2.writeToParcel(v8, 0);
        }
        else
        {
          v8.writeInt(0);
        }
        v8.writeString(p3);
        v8.writeString(p4);
        if ( p5 != null )
          v7 = p5.asBinder();
        v8.writeStrongBinder(v7);
        this.a.transact(6, v8, v10, 0);
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
        v1.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
        this.a.transact(4, v1, v2, 0);
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

    public final void c()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
        this.a.transact(5, v1, v2, 0);
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

    public final void d()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
        this.a.transact(8, v1, v2, 0);
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

    public final void e()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
        this.a.transact(9, v1, v2, 0);
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

}
