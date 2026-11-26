// Decompiled from classes.dex (SourceFile: i$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Parcel;
class i$a$a implements com.google.android.gms.maps.internal.i {
    // Fields
    private android.os.IBinder a;

    // Methods
    i$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.maps.model.LatLng p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IOnMapClickListener");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(1, v2, v3, 0);
        v4.readException();
        v4.recycle();
        v2.recycle();
        return;
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
