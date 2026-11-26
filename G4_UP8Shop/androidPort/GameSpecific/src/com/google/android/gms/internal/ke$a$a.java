// Decompiled from classes.dex (SourceFile: ke$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class ke$a$a implements com.google.android.gms.internal.ke {
    // Fields
    private android.os.IBinder a;

    // Methods
    ke$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(int p0, android.os.Bundle p1, int p2, android.content.Intent p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.panorama.internal.IPanoramaCallbacks");
        v5.writeInt(p0);
        if ( p1 != null )
        {
          v5.writeInt(1);
          p1.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        v5.writeInt(p2);
        if ( p3 != null )
        {
          v5.writeInt(1);
          p3.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        this.a.transact(1, v5, v6, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v8 )
      {
        v6.recycle();
        v5.recycle();
        throw v8;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
