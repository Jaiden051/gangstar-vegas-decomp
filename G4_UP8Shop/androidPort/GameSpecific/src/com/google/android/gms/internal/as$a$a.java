// Decompiled from classes.dex (SourceFile: as$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class as$a$a implements com.google.android.gms.internal.as {
    // Fields
    private android.os.IBinder a;

    // Methods
    as$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final android.os.IBinder a(
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.internal.am p1,
            String p2,
            com.google.android.gms.internal.bu p3,
            int p4)
 throws android.os.RemoteException {
      android.os.IBinder v6;
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      android.os.IBinder result; // RETVAL
    
      v6 = null;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.ads.internal.client.IAdManagerCreator");
        if ( p0 != null )
          v10 = p0.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        if ( p1 != null )
        {
          v7.writeInt(1);
          p1.writeToParcel(v7, 0);
        }
        else
        {
          v7.writeInt(0);
        }
        v7.writeString(p2);
        if ( p3 != null )
          v6 = p3.asBinder();
        v7.writeStrongBinder(v6);
        v7.writeInt(p4);
        this.a.transact(1, v7, v9, 0);
        v9.readException();
        result = v9.readStrongBinder();
        v9.recycle();
        v7.recycle();
        return result;
      }
      catch ( Throwable v12 )
      {
        v8.recycle();
        v7.recycle();
        throw v12;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
