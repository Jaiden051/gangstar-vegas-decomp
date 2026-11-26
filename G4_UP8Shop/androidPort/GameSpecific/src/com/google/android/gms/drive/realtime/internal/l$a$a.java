// Decompiled from classes.dex (SourceFile: l$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

import android.os.Parcel;
class l$a$a implements com.google.android.gms.drive.realtime.internal.l {
    // Fields
    private android.os.IBinder a;

    // Methods
    l$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(int p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IIntCallback");
        v2.writeInt(p0);
        this.a.transact(1, v2, v3, 0);
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
        v2.writeInterfaceToken("com.google.android.gms.drive.realtime.internal.IIntCallback");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(2, v2, v3, 0);
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

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
