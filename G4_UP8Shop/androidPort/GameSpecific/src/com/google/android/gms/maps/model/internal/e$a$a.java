// Decompiled from classes.dex (SourceFile: e$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

import android.os.Parcel;
class e$a$a implements com.google.android.gms.maps.model.internal.e {
    // Fields
    private android.os.IBinder a;

    // Methods
    e$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final String a()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      String result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.model.internal.IIndoorLevelDelegate");
        this.a.transact(1, v1, v2, 0);
        v3.readException();
        result = v3.readString();
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

    public final boolean a(com.google.android.gms.maps.model.internal.e p0)
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
        v3.writeInterfaceToken("com.google.android.gms.maps.model.internal.IIndoorLevelDelegate");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(4, v3, v5, 0);
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

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final String b()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      String result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.model.internal.IIndoorLevelDelegate");
        this.a.transact(2, v1, v2, 0);
        v3.readException();
        result = v3.readString();
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
        v1.writeInterfaceToken("com.google.android.gms.maps.model.internal.IIndoorLevelDelegate");
        this.a.transact(3, v1, v2, 0);
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

    public final int d()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      int result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.model.internal.IIndoorLevelDelegate");
        this.a.transact(5, v1, v2, 0);
        v3.readException();
        result = v3.readInt();
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

}
