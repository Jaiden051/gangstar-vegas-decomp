// Decompiled from classes.dex (SourceFile: IGamesSignInService$Stub$Proxy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import android.os.Parcel;
class IGamesSignInService$Stub$Proxy implements com.google.android.gms.games.internal.IGamesSignInService {
    // Fields
    private android.os.IBinder a;

    // Methods
    public final String a(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      String result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesSignInService");
        v2.writeString(p0);
        this.a.transact(5001, v2, v3, 0);
        v4.readException();
        result = v4.readString();
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

    public final String a(String p0, boolean p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      String result; // RETVAL
    
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesSignInService");
        v3.writeString(p0);
        v3.writeInt(com.gameloft.android.DecompRT.b2i(p1));
        this.a.transact(5009, v3, v4, 0);
        v5.readException();
        result = v5.readString();
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

    public final void a(
            com.google.android.gms.games.internal.IGamesSignInCallbacks p0,
            String p1,
            String p2)
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
        v4.writeInterfaceToken("com.google.android.gms.games.internal.IGamesSignInService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p1);
        v4.writeString(p2);
        this.a.transact(5006, v4, v6, 0);
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

    public final void a(
            com.google.android.gms.games.internal.IGamesSignInCallbacks p0,
            String p1,
            String p2,
            String p3)
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
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesSignInService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        v5.writeString(p2);
        v5.writeString(p3);
        this.a.transact(5005, v5, v7, 0);
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
            com.google.android.gms.games.internal.IGamesSignInCallbacks p0,
            String p1,
            String p2,
            String[] p3)
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
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesSignInService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        v5.writeString(p2);
        v5.writeStringArray(p3);
        this.a.transact(5004, v5, v7, 0);
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
            com.google.android.gms.games.internal.IGamesSignInCallbacks p0,
            String p1,
            String p2,
            String[] p3,
            String p4)
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
        v6.writeInterfaceToken("com.google.android.gms.games.internal.IGamesSignInService");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeString(p1);
        v6.writeString(p2);
        v6.writeStringArray(p3);
        v6.writeString(p4);
        this.a.transact(5003, v6, v8, 0);
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

    public final void a(String p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.games.internal.IGamesSignInService");
        v3.writeString(p0);
        v3.writeString(p1);
        this.a.transact(9001, v3, v4, 0);
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

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final String b(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      String result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.games.internal.IGamesSignInService");
        v2.writeString(p0);
        this.a.transact(5002, v2, v3, 0);
        v4.readException();
        result = v4.readString();
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

    public final void b(
            com.google.android.gms.games.internal.IGamesSignInCallbacks p0,
            String p1,
            String p2,
            String p3)
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
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesSignInService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        v5.writeString(p2);
        v5.writeString(p3);
        this.a.transact(5007, v5, v7, 0);
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

    public final void b(
            com.google.android.gms.games.internal.IGamesSignInCallbacks p0,
            String p1,
            String p2,
            String[] p3)
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
        v5.writeInterfaceToken("com.google.android.gms.games.internal.IGamesSignInService");
        if ( p0 != null )
          v8 = p0.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p1);
        v5.writeString(p2);
        v5.writeStringArray(p3);
        this.a.transact(5008, v5, v7, 0);
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

}
