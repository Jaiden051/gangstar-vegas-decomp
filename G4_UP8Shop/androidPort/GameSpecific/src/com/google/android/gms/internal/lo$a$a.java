// Decompiled from classes.dex (SourceFile: lo$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class lo$a$a implements com.google.android.gms.internal.lo {
    // Fields
    private android.os.IBinder a;

    // Methods
    lo$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.internal.ll a(
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.dynamic.c p1,
            com.google.android.gms.wallet.fragment.WalletFragmentOptions p2,
            com.google.android.gms.internal.lm p3)
 throws android.os.RemoteException {
      android.os.IBinder v5;
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      android.os.IBinder v10;
      com.google.android.gms.internal.ll result; // RETVAL
    
      v5 = null;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.wallet.internal.IWalletDynamiteCreator");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        if ( p1 != null )
          v10 = p1.asBinder();
        else
          v10 = null;
        v6.writeStrongBinder(v10);
        if ( p2 != null )
        {
          v6.writeInt(1);
          p2.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        if ( p3 != null )
          v5 = p3.asBinder();
        v6.writeStrongBinder(v5);
        this.a.transact(1, v6, v8, 0);
        v8.readException();
        result = ll$a.bo(v8.readStrongBinder());
        v8.recycle();
        v6.recycle();
        return result;
      }
      catch ( Throwable v12 )
      {
        v7.recycle();
        v6.recycle();
        throw v12;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
