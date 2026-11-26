// Decompiled from classes.dex (SourceFile: s$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
import android.os.Parcel;
class s$a$a implements com.google.android.gms.internal.s {
    // Fields
    private android.os.IBinder a;

    // Methods
    s$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final android.os.Bundle a(String p0, android.os.Bundle p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.Bundle v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.auth.IAuthManagerService");
        v3.writeString(p0);
        if ( p1 != null )
        {
          v3.writeInt(1);
          p1.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        this.a.transact(2, v3, v4, 0);
        v5.readException();
        if ( v5.readInt() != 0 )
          v6 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(v5);
        else
          v6 = null;
        v5.recycle();
        v3.recycle();
        return v6;
      }
      catch ( Throwable v8 )
      {
        v4.recycle();
        v3.recycle();
        throw v8;
      }
    }

    public final android.os.Bundle a(String p0, String p1, android.os.Bundle p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.Bundle v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.auth.IAuthManagerService");
        v4.writeString(p0);
        v4.writeString(p1);
        if ( p2 != null )
        {
          v4.writeInt(1);
          p2.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        this.a.transact(1, v4, v5, 0);
        v6.readException();
        if ( v6.readInt() != 0 )
          v7 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(v6);
        else
          v7 = null;
        v6.recycle();
        v4.recycle();
        return v7;
      }
      catch ( Throwable v9 )
      {
        v5.recycle();
        v4.recycle();
        throw v9;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
