// Decompiled from classes.dex (SourceFile: bu$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class bu$a$a implements com.google.android.gms.internal.bu {
    // Fields
    private android.os.IBinder a;

    // Methods
    bu$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.internal.bv a(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      com.google.android.gms.internal.bv result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IAdapterCreator");
        v2.writeString(p0);
        this.a.transact(1, v2, v3, 0);
        v4.readException();
        result = bv$a.j(v4.readStrongBinder());
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

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
