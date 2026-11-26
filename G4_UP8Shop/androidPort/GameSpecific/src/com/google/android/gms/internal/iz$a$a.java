// Decompiled from classes.dex (SourceFile: iz$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class iz$a$a implements com.google.android.gms.internal.iz {
    // Fields
    private android.os.IBinder a;

    // Methods
    iz$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(
            com.google.android.gms.internal.iy p0,
            com.google.android.gms.identity.intents.UserAddressRequest p1,
            android.os.Bundle p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.identity.intents.internal.IAddressService");
        if ( p0 != null )
          v7 = p0.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        if ( p1 != null )
        {
          v4.writeInt(1);
          p1.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p2 != null )
        {
          v4.writeInt(1);
          p2.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        this.a.transact(2, v4, v6, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
