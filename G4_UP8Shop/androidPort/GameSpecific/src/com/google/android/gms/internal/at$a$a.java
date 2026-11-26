// Decompiled from classes.dex (SourceFile: at$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class at$a$a implements com.google.android.gms.internal.at {
    // Fields
    private android.os.IBinder a;

    // Methods
    at$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
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
        v3.writeInterfaceToken("com.google.android.gms.ads.internal.client.IAppEventListener");
        v3.writeString(p0);
        v3.writeString(p1);
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

}
