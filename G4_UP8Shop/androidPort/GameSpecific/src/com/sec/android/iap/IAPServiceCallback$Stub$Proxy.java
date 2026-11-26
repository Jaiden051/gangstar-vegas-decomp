// Decompiled from classes.dex (SourceFile: IAPServiceCallback$Stub$Proxy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.sec.android.iap;

import android.os.Parcel;
final class IAPServiceCallback$Stub$Proxy implements com.sec.android.iap.IAPServiceCallback {
    // Fields
    private android.os.IBinder a;

    // Methods
    IAPServiceCallback$Stub$Proxy(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    private static String getInterfaceDescriptor()
    {
      return "com.sec.android.iap.IAPServiceCallback";
    }

    public final void a(android.os.Bundle p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.sec.android.iap.IAPServiceCallback");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(1, v2, null, 1);
        v3.recycle();
        return;
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        throw v4;
      }
    }

    public final android.os.IBinder asBinder()
    {
      return this.a;
    }

}
