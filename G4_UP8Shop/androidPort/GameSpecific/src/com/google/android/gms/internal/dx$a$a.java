// Decompiled from classes.dex (SourceFile: dx$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class dx$a$a implements com.google.android.gms.internal.dx {
    // Fields
    private android.os.IBinder a;

    // Methods
    dx$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.internal.dv a(com.google.android.gms.internal.dt p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      com.google.android.gms.internal.dv v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.ads.internal.request.IAdRequestService");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(1, v2, v3, 0);
        v4.readException();
        if ( v4.readInt() != 0 )
          v5 = dw.i(v4);
        else
          v5 = null;
        v4.recycle();
        v2.recycle();
        return v5;
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
