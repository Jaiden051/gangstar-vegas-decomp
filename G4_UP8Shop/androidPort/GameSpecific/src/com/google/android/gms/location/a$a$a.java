// Decompiled from classes.dex (SourceFile: a$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

import android.os.Parcel;
class a$a$a implements com.google.android.gms.location.a {
    // Fields
    private android.os.IBinder a;

    // Methods
    a$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(android.location.Location p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.location.ILocationListener");
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

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
