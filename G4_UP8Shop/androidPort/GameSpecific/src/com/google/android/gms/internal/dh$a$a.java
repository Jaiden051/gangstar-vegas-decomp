// Decompiled from classes.dex (SourceFile: dh$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class dh$a$a implements com.google.android.gms.internal.dh {
    // Fields
    private android.os.IBinder a;

    // Methods
    dh$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.internal.dg p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.ads.internal.purchase.client.IPlayStorePurchaseListener");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(2, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final boolean a(String p0)
 throws android.os.RemoteException {
      boolean v2;
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      int Int; // RETVAL
    
      v2 = true;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.ads.internal.purchase.client.IPlayStorePurchaseListener");
        v3.writeString(p0);
        this.a.transact(1, v3, v4, 0);
        v5.readException();
        Int = v5.readInt();
      }
      catch ( Throwable v8 )
      {
        v4.recycle();
        v3.recycle();
        throw v8;
      }
      if ( Int == 0 )
        v2 = false;
      v5.recycle();
      v3.recycle();
      return v2;
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
