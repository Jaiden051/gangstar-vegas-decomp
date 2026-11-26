// Decompiled from classes.dex (SourceFile: cp$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class cp$a$a implements com.google.android.gms.internal.cp {
    // Fields
    private android.os.IBinder a;

    // Methods
    cp$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final android.os.IBinder a(com.google.android.gms.dynamic.d p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      android.os.IBinder result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.ads.internal.overlay.client.IAdOverlayCreator");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(1, v2, v4, 0);
        v4.readException();
        result = v4.readStrongBinder();
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
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
