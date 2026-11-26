// Decompiled from classes.dex (SourceFile: lm$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class lm$a$a implements com.google.android.gms.internal.lm {
    // Fields
    private android.os.IBinder a;

    // Methods
    lm$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(int p0, int p1, android.os.Bundle p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.wallet.fragment.internal.IWalletFragmentStateListener");
        v4.writeInt(p0);
        v4.writeInt(p1);
        if ( p2 != null )
        {
          v4.writeInt(1);
          p2.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        this.a.transact(2, v4, v5, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        v4.recycle();
        throw v7;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
