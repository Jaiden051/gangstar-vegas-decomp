// Decompiled from classes.dex (SourceFile: t$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class t$a$a implements com.google.android.gms.internal.t {
    // Fields
    private android.os.IBinder a;

    // Methods
    t$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final String a()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      String result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
        this.a.transact(1, v1, v2, 0);
        v3.readException();
        result = v3.readString();
      }
      catch ( Throwable v5 )
      {
        v2.recycle();
        v1.recycle();
        throw v5;
      }
      v3.recycle();
      v1.recycle();
      return result;
    }

    public final String a(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      String result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
        v2.writeString(p0);
        this.a.transact(3, v2, v3, 0);
        v4.readException();
        result = v4.readString();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
      return result;
    }

    public final void a(String p0, boolean p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
        v3.writeString(p0);
        v3.writeInt(com.gameloft.android.DecompRT.b2i(p1));
        this.a.transact(4, v3, v4, 0);
        v5.readException();
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
      v5.recycle();
      v3.recycle();
    }

    public final boolean a(boolean p0)
 throws android.os.RemoteException {
      boolean v2;
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      int Int; // RETVAL
    
      v2 = true;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
        v3.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(2, v3, v4, 0);
        v5.readException();
        Int = v5.readInt();
      }
      catch ( Throwable v8 )
      {
        v4.recycle();
        v3.recycle();
        throw v8;
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
