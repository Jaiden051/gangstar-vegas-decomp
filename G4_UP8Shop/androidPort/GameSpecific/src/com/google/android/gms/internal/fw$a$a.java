// Decompiled from classes.dex (SourceFile: fw$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class fw$a$a implements com.google.android.gms.internal.fw {
    // Fields
    private android.os.IBinder a;

    // Methods
    fw$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearchCallbacks");
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

    public final void a(com.google.android.gms.common.api.Status p0, android.os.ParcelFileDescriptor p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearchCallbacks");
        if ( p0 != null )
        {
          v3.writeInt(1);
          p0.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        if ( p1 != null )
        {
          v3.writeInt(1);
          p1.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        this.a.transact(2, v3, null, 1);
        v4.recycle();
        return;
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
    }

    public final void a(com.google.android.gms.common.api.Status p0, boolean p1)
 throws android.os.RemoteException {
      int v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = 1;
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearchCallbacks");
        if ( p0 != null )
        {
          v4.writeInt(1);
          p0.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( !p1 )
          v3 = 0;
        v4.writeInt(v3);
        this.a.transact(3, v4, null, 1);
        v5.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        throw v6;
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
