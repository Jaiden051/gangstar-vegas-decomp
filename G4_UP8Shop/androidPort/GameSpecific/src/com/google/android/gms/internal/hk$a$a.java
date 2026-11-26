// Decompiled from classes.dex (SourceFile: hk$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class hk$a$a implements com.google.android.gms.internal.hk {
    // Fields
    private android.os.IBinder a;

    // Methods
    hk$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.dynamic.d a(com.google.android.gms.dynamic.d p0, int p1, int p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.common.internal.ISignInButtonCreator");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeInt(p1);
        v4.writeInt(p2);
        this.a.transact(1, v4, v6, 0);
        v6.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v6.readStrongBinder());
      }
      catch ( Throwable v9 )
      {
        v5.recycle();
        v4.recycle();
        throw v9;
      }
      v6.recycle();
      v4.recycle();
      return result;
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
