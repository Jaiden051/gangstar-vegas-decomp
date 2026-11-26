// Decompiled from classes.dex (SourceFile: IControllerMonitor$Stub$Proxy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

import android.os.Parcel;
final class IControllerMonitor$Stub$Proxy implements com.bda.controller.IControllerMonitor {
    // Fields
    private android.os.IBinder a;

    // Methods
    IControllerMonitor$Stub$Proxy(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    private static String getInterfaceDescriptor()
    {
      return "com.bda.controller.IControllerMonitor";
    }

    public final void a(int p0, int p1, String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.bda.controller.IControllerMonitor");
        v4.writeInt(p0);
        v4.writeInt(p1);
        v4.writeString(p2);
        this.a.transact(1, v4, v5, 0);
        v6.readException();
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        v4.recycle();
        throw v7;
      }
      v6.recycle();
      v4.recycle();
    }

    public final android.os.IBinder asBinder()
    {
      return this.a;
    }

}
