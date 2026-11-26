// Decompiled from classes.dex (SourceFile: iy$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class iy$a$a implements com.google.android.gms.internal.iy {
    // Fields
    private android.os.IBinder a;

    // Methods
    iy$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(int p0, android.os.Bundle p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.identity.intents.internal.IAddressCallbacks");
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
        this.a.transact(2, v3, v4, 0);
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

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
