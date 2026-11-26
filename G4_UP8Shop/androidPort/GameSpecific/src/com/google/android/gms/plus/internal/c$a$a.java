// Decompiled from classes.dex (SourceFile: c$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

import android.os.Parcel;
class c$a$a implements com.google.android.gms.plus.internal.c {
    // Fields
    private android.os.IBinder a;

    // Methods
    c$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.dynamic.d a(
            com.google.android.gms.dynamic.d p0,
            int p1,
            int p2,
            String p3,
            int p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.plus.internal.IPlusOneButtonCreator");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeInt(p1);
        v6.writeInt(p2);
        v6.writeString(p3);
        v6.writeInt(p4);
        this.a.transact(1, v6, v8, 0);
        v8.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v8.readStrongBinder());
      }
      catch ( Throwable v11 )
      {
        v7.recycle();
        v6.recycle();
        throw v11;
      }
      v8.recycle();
      v6.recycle();
      return result;
    }

    public final com.google.android.gms.dynamic.d a(
            com.google.android.gms.dynamic.d p0,
            int p1,
            int p2,
            String p3,
            String p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.plus.internal.IPlusOneButtonCreator");
        if ( p0 != null )
          v9 = p0.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        v6.writeInt(p1);
        v6.writeInt(p2);
        v6.writeString(p3);
        v6.writeString(p4);
        this.a.transact(2, v6, v8, 0);
        v8.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v8.readStrongBinder());
      }
      catch ( Throwable v11 )
      {
        v7.recycle();
        v6.recycle();
        throw v11;
      }
      v8.recycle();
      v6.recycle();
      return result;
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
