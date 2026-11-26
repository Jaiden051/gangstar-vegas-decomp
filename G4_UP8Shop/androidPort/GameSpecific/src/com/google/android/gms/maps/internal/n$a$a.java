// Decompiled from classes.dex (SourceFile: n$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Parcel;
class n$a$a implements com.google.android.gms.maps.internal.n {
    // Fields
    private android.os.IBinder a;

    // Methods
    n$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final boolean a()
 throws android.os.RemoteException {
      boolean v1;
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      int Int; // RETVAL
    
      v1 = true;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IOnMyLocationButtonClickListener");
        this.a.transact(1, v2, v3, 0);
        v4.readException();
        Int = v4.readInt();
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      if ( Int == 0 )
        v1 = false;
      v4.recycle();
      v2.recycle();
      return v1;
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
