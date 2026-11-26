// Decompiled from classes.dex (SourceFile: l$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Parcel;
class l$a$a implements com.google.android.gms.maps.internal.l {
    // Fields
    private android.os.IBinder a;

    // Methods
    l$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final boolean a(com.google.android.gms.maps.model.internal.f p0)
 throws android.os.RemoteException {
      boolean v2;
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      int Int; // RETVAL
    
      v2 = true;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.maps.internal.IOnMarkerClickListener");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(1, v3, v5, 0);
        v5.readException();
        Int = v5.readInt();
      }
      catch ( Throwable v9 )
      {
        v4.recycle();
        v3.recycle();
        throw v9;
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
