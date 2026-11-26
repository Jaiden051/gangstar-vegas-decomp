// Decompiled from classes.dex (SourceFile: kf$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class kf$a$a implements com.google.android.gms.internal.kf {
    // Fields
    private android.os.IBinder a;

    // Methods
    kf$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.internal.ke p0, android.net.Uri p1, android.os.Bundle p2, boolean p3)
 throws android.os.RemoteException {
      android.os.IBinder v5;
      int v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      v5 = null;
      v6 = 1;
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.panorama.internal.IPanoramaService");
        if ( p0 != null )
          v5 = p0.asBinder();
        v8.writeStrongBinder(v5);
        if ( p1 != null )
        {
          v8.writeInt(1);
          p1.writeToParcel(v8, 0);
        }
        else
        {
          v8.writeInt(0);
        }
        if ( p2 != null )
        {
          v8.writeInt(1);
          p2.writeToParcel(v8, 0);
        }
        else
        {
          v8.writeInt(0);
        }
        if ( !p3 )
          v6 = 0;
        v8.writeInt(v6);
        this.a.transact(1, v8, null, 1);
        v8.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v7.recycle();
        throw v9;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
