// Decompiled from classes.dex (SourceFile: je$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class je$a$a implements com.google.android.gms.internal.je {
    // Fields
    private android.os.IBinder a;

    // Methods
    je$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(int p0, android.app.PendingIntent p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.location.internal.IGeofencerCallbacks");
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
        this.a.transact(3, v3, v4, 0);
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

    public final void a(int p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.location.internal.IGeofencerCallbacks");
        v3.writeInt(p0);
        v3.writeStringArray(p1);
        this.a.transact(1, v3, v4, 0);
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

    public final void b(int p0, String[] p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.location.internal.IGeofencerCallbacks");
        v3.writeInt(p0);
        v3.writeStringArray(p1);
        this.a.transact(2, v3, v4, 0);
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

}
