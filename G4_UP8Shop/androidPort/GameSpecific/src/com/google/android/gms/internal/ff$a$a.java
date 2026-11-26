// Decompiled from classes.dex (SourceFile: ff$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
class ff$a$a implements com.google.android.gms.internal.ff {
    // Fields
    private android.os.IBinder a;

    // Methods
    ff$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final void a()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.analytics.internal.IAnalyticsService");
        this.a.transact(2, v1, v2, 0);
        v3.readException();
      }
      catch ( Throwable v4 )
      {
        v2.recycle();
        v1.recycle();
        throw v4;
      }
      v3.recycle();
      v1.recycle();
    }

    public final void a(java.util.Map p0, long p1, String p3, java.util.List<com.google.android.gms.internal.fe> p4)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.analytics.internal.IAnalyticsService");
        v5.writeMap(p0);
        v5.writeLong(p1);
        v5.writeString(p3);
        v5.writeTypedList(p4);
        this.a.transact(1, v5, v6, 0);
        v7.readException();
      }
      catch ( Throwable v8 )
      {
        v6.recycle();
        v5.recycle();
        throw v8;
      }
      v7.recycle();
      v5.recycle();
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final String b()
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
        v1.writeInterfaceToken("com.google.android.gms.analytics.internal.IAnalyticsService");
        this.a.transact(3, v1, v2, 0);
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

}
