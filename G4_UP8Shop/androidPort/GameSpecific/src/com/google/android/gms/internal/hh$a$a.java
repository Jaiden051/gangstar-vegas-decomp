// Decompiled from classes.dex (SourceFile: hh$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class hh$a$a implements com.google.android.gms.internal.hh {
    // Fields
    private android.os.IBinder a;

    // Methods
    hh$a$a(android.os.IBinder p0)
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
        v1.writeInterfaceToken("com.google.android.gms.common.internal.ICancelToken");
        this.a.transact(2, v1, v2, 0);
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

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
