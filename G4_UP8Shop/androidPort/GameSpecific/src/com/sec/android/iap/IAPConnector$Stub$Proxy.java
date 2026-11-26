// Decompiled from classes.dex (SourceFile: IAPConnector$Stub$Proxy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.sec.android.iap;

import android.os.Bundle;
import android.os.Parcel;
final class IAPConnector$Stub$Proxy implements com.sec.android.iap.IAPConnector {
    // Fields
    private android.os.IBinder a;

    // Methods
    IAPConnector$Stub$Proxy(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    private static String getInterfaceDescriptor()
    {
      return "com.sec.android.iap.IAPConnector";
    }

    public final android.os.Bundle a(int p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.Bundle v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.sec.android.iap.IAPConnector");
        v2.writeInt(p0);
        this.a.transact(3, v2, v3, 0);
        v4.readException();
        if ( v4.readInt() != 0 )
          v5 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(v4);
        else
          v5 = null;
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      v4.recycle();
      v2.recycle();
      return v5;
    }

    public final android.os.Bundle a(int p0, String p1, String p2, int p3, int p4, String p5)
 throws android.os.RemoteException {
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.Bundle v10;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.sec.android.iap.IAPConnector");
        v7.writeInt(p0);
        v7.writeString(p1);
        v7.writeString(p2);
        v7.writeInt(p3);
        v7.writeInt(p4);
        v7.writeString(p5);
        this.a.transact(4, v7, v8, 0);
        v9.readException();
        if ( v9.readInt() != 0 )
          v10 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(v9);
        else
          v10 = null;
      }
      catch ( Throwable v12 )
      {
        v8.recycle();
        v7.recycle();
        throw v12;
      }
      v9.recycle();
      v7.recycle();
      return v10;
    }

    public final android.os.Bundle a(String p0, String p1, int p2, int p3, String p4, String p5)
 throws android.os.RemoteException {
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.Bundle v10;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.sec.android.iap.IAPConnector");
        v7.writeString(p0);
        v7.writeString(p1);
        v7.writeInt(p2);
        v7.writeInt(p3);
        v7.writeString(p4);
        v7.writeString(p5);
        this.a.transact(5, v7, v8, 0);
        v9.readException();
        if ( v9.readInt() != 0 )
          v10 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(v9);
        else
          v10 = null;
      }
      catch ( Throwable v12 )
      {
        v8.recycle();
        v7.recycle();
        throw v12;
      }
      v9.recycle();
      v7.recycle();
      return v10;
    }

    public final boolean a(com.sec.android.iap.IAPServiceCallback p0)
 throws android.os.RemoteException {
      boolean v2;
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      int Int; // RETVAL
    
      v2 = false;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.sec.android.iap.IAPConnector");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(2, v3, v5, 0);
        v5.readException();
        Int = v5.readInt();
      }
      catch ( Throwable v9 )
      {
        v4.recycle();
        v3.recycle();
        throw v9;
      }
      if ( Int != 0 )
        v2 = true;
      v5.recycle();
      v3.recycle();
      return v2;
    }

    public final boolean a(com.sec.android.iap.IAPServiceCallback p0, android.os.Bundle p1)
 throws android.os.RemoteException {
      boolean v3;
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v3 = true;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.sec.android.iap.IAPConnector");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        if ( p1 != null )
        {
          v4.writeInt(1);
          p1.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        this.a.transact(1, v4, v6, 0);
        v6.readException();
        if ( v6.readInt() == 0 )
          v3 = false;
        v6.recycle();
        v4.recycle();
        return v3;
      }
      catch ( Throwable v9 )
      {
        v5.recycle();
        v4.recycle();
        throw v9;
      }
    }

    public final android.os.IBinder asBinder()
    {
      return this.a;
    }

}
