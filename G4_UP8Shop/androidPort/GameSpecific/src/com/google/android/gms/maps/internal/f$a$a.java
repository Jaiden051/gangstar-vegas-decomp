// Decompiled from classes.dex (SourceFile: f$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Parcel;
class f$a$a implements com.google.android.gms.maps.internal.f {
    // Fields
    private android.os.IBinder a;

    // Methods
    f$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.maps.internal.IOnIndoorStateChangeListener");
        this.a.transact(1, v1, v2, 0);
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

    public final void a(com.google.android.gms.maps.model.internal.d p0)
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
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IOnIndoorStateChangeListener");
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

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
