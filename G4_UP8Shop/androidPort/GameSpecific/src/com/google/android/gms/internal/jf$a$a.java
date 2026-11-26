// Decompiled from classes.dex (SourceFile: jf$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.location.Location;
import android.os.Parcel;
class jf$a$a implements com.google.android.gms.internal.jf {
    // Fields
    private android.os.IBinder a;

    // Methods
    jf$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final android.location.Location a()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      android.location.Location v4;
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        this.a.transact(7, v1, v2, 0);
        v3.readException();
        if ( v3.readInt() != 0 )
          v4 = (android.location.Location)android.location.Location.CREATOR.createFromParcel(v3);
        else
          v4 = null;
      }
      catch ( Throwable v6 )
      {
        v2.recycle();
        v1.recycle();
        throw v6;
      }
      v3.recycle();
      v1.recycle();
      return v4;
    }

    public final android.location.Location a(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.location.Location v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        v2.writeString(p0);
        this.a.transact(21, v2, v3, 0);
        v4.readException();
        if ( v4.readInt() != 0 )
          v5 = (android.location.Location)android.location.Location.CREATOR.createFromParcel(v4);
        else
          v5 = null;
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      v4.recycle();
      v2.recycle();
      return v5;
    }

    public final void a(long p0, boolean p2, android.app.PendingIntent p3)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        v4.writeLong(p0);
        v4.writeInt(com.gameloft.android.DecompRT.b2i(p2));
        if ( p3 != null )
        {
          v4.writeInt(1);
          p3.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        this.a.transact(5, v4, v5, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        v4.recycle();
        throw v7;
      }
    }

    public final void a(android.app.PendingIntent p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(6, v2, v3, 0);
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

    public final void a(android.app.PendingIntent p0, com.google.android.gms.internal.je p1, String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v4.writeInt(1);
          p0.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p1 != null )
          v7 = p1.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p2);
        this.a.transact(2, v4, v6, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
    }

    public final void a(android.location.Location p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(13, v2, v3, 0);
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

    public final void a(android.location.Location p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v3.writeInt(1);
          p0.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        v3.writeInt(p1);
        this.a.transact(26, v3, v4, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
    }

    public final void a(com.google.android.gms.internal.je p0, String p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
          v6 = p0.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        v3.writeString(p1);
        this.a.transact(4, v3, v5, 0);
        v5.readException();
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
      v5.recycle();
      v3.recycle();
    }

    public final void a(
            com.google.android.gms.internal.jl p0,
            com.google.android.gms.internal.kb p1,
            android.app.PendingIntent p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v4.writeInt(1);
          p0.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p1 != null )
        {
          v4.writeInt(1);
          p1.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p2 != null )
        {
          v4.writeInt(1);
          p2.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        this.a.transact(48, v4, v5, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        v4.recycle();
        throw v7;
      }
    }

    public final void a(
            com.google.android.gms.internal.jn p0,
            com.google.android.gms.internal.kb p1,
            com.google.android.gms.internal.jz p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v4.writeInt(1);
          p0.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p1 != null )
        {
          v4.writeInt(1);
          p1.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p2 != null )
          v7 = p2.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        this.a.transact(17, v4, v6, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
    }

    public final void a(com.google.android.gms.internal.jp p0, com.google.android.gms.internal.kb p1)
 throws android.os.RemoteException {
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
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
        this.a.transact(25, v3, null, 1);
        v4.recycle();
        return;
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        throw v5;
      }
    }

    public final void a(
            com.google.android.gms.internal.jr p0,
            com.google.android.gms.internal.kb p1,
            android.app.PendingIntent p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v4.writeInt(1);
          p0.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p1 != null )
        {
          v4.writeInt(1);
          p1.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p2 != null )
        {
          v4.writeInt(1);
          p2.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        this.a.transact(18, v4, v5, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v5.recycle();
        v4.recycle();
        throw v7;
      }
    }

    public final void a(
            com.google.android.gms.internal.jv p0,
            com.google.android.gms.internal.kb p1,
            com.google.android.gms.internal.jz p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v4.writeInt(1);
          p0.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p1 != null )
        {
          v4.writeInt(1);
          p1.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p2 != null )
          v7 = p2.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        this.a.transact(46, v4, v6, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
    }

    public final void a(com.google.android.gms.internal.kb p0, android.app.PendingIntent p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
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
        this.a.transact(19, v3, v4, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
    }

    public final void a(com.google.android.gms.location.LocationRequest p0, android.app.PendingIntent p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
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
        this.a.transact(9, v3, v4, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
    }

    public final void a(com.google.android.gms.location.LocationRequest p0, com.google.android.gms.location.a p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      android.os.IBinder v6;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
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
          v6 = p1.asBinder();
        else
          v6 = null;
        v3.writeStrongBinder(v6);
        this.a.transact(8, v3, v5, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v7 )
      {
        v4.recycle();
        v3.recycle();
        throw v7;
      }
    }

    public final void a(
            com.google.android.gms.location.LocationRequest p0,
            com.google.android.gms.location.a p1,
            String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v4.writeInt(1);
          p0.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p1 != null )
          v7 = p1.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p2);
        this.a.transact(20, v4, v6, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
    }

    public final void a(com.google.android.gms.location.a p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(10, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void a(
            com.google.android.gms.maps.model.LatLng p0,
            com.google.android.gms.internal.jn p1,
            com.google.android.gms.internal.kb p2,
            com.google.android.gms.internal.jz p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v5.writeInt(1);
          p0.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p1 != null )
        {
          v5.writeInt(1);
          p1.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p2 != null )
        {
          v5.writeInt(1);
          p2.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p3 != null )
          v8 = p3.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        this.a.transact(16, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void a(
            com.google.android.gms.maps.model.LatLngBounds p0,
            int p1,
            com.google.android.gms.internal.jn p2,
            com.google.android.gms.internal.kb p3,
            com.google.android.gms.internal.jz p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v6.writeInt(1);
          p0.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        v6.writeInt(p1);
        if ( p2 != null )
        {
          v6.writeInt(1);
          p2.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        if ( p3 != null )
        {
          v6.writeInt(1);
          p3.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        if ( p4 != null )
          v9 = p4.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        this.a.transact(14, v6, v8, 0);
        v8.readException();
        v8.recycle();
        v6.recycle();
        return;
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
    }

    public final void a(
            com.google.android.gms.maps.model.LatLngBounds p0,
            int p1,
            String p2,
            com.google.android.gms.internal.jn p3,
            com.google.android.gms.internal.kb p4,
            com.google.android.gms.internal.jz p5)
 throws android.os.RemoteException {
      android.os.Parcel v7;
      android.os.Parcel v8; // RETVAL
      android.os.Parcel v9;
      android.os.IBinder v10;
      v7 = Parcel.obtain();
      v8 = Parcel.obtain();
      v9 = v8;
      try
      {
        v7.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v7.writeInt(1);
          p0.writeToParcel(v7, 0);
        }
        else
        {
          v7.writeInt(0);
        }
        v7.writeInt(p1);
        v7.writeString(p2);
        if ( p3 != null )
        {
          v7.writeInt(1);
          p3.writeToParcel(v7, 0);
        }
        else
        {
          v7.writeInt(0);
        }
        if ( p4 != null )
        {
          v7.writeInt(1);
          p4.writeToParcel(v7, 0);
        }
        else
        {
          v7.writeInt(0);
        }
        if ( p5 != null )
          v10 = p5.asBinder();
        else
          v10 = null;
        v7.writeStrongBinder(v10);
        this.a.transact(47, v7, v9, 0);
        v9.readException();
        v9.recycle();
        v7.recycle();
        return;
      }
      catch ( Throwable v11 )
      {
        v8.recycle();
        v7.recycle();
        throw v11;
      }
    }

    public final void a(String p0, com.google.android.gms.internal.kb p1, com.google.android.gms.internal.jz p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        v4.writeString(p0);
        if ( p1 != null )
        {
          v4.writeInt(1);
          p1.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p2 != null )
          v7 = p2.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        this.a.transact(15, v4, v6, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
    }

    public final void a(
            String p0,
            com.google.android.gms.maps.model.LatLngBounds p1,
            com.google.android.gms.internal.jn p2,
            com.google.android.gms.internal.kb p3,
            com.google.android.gms.internal.jz p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        v6.writeString(p0);
        if ( p1 != null )
        {
          v6.writeInt(1);
          p1.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        if ( p2 != null )
        {
          v6.writeInt(1);
          p2.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        if ( p3 != null )
        {
          v6.writeInt(1);
          p3.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        if ( p4 != null )
          v9 = p4.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        this.a.transact(45, v6, v8, 0);
        v8.readException();
        v8.recycle();
        v6.recycle();
        return;
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
    }

    public final void a(
            String p0,
            java.util.List<String> p1,
            java.util.List<com.google.android.gms.internal.jx> p2,
            com.google.android.gms.internal.kb p3,
            com.google.android.gms.internal.jz p4)
 throws android.os.RemoteException {
      android.os.Parcel v6;
      android.os.Parcel v7; // RETVAL
      android.os.Parcel v8;
      android.os.IBinder v9;
      v6 = Parcel.obtain();
      v7 = Parcel.obtain();
      v8 = v7;
      try
      {
        v6.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        v6.writeString(p0);
        v6.writeStringList(p1);
        v6.writeTypedList(p2);
        if ( p3 != null )
        {
          v6.writeInt(1);
          p3.writeToParcel(v6, 0);
        }
        else
        {
          v6.writeInt(0);
        }
        if ( p4 != null )
          v9 = p4.asBinder();
        else
          v9 = null;
        v6.writeStrongBinder(v9);
        this.a.transact(50, v6, v8, 0);
        v8.readException();
        v8.recycle();
        v6.recycle();
        return;
      }
      catch ( Throwable v10 )
      {
        v7.recycle();
        v6.recycle();
        throw v10;
      }
    }

    public final void a(
            java.util.List<com.google.android.gms.internal.ji> p0,
            android.app.PendingIntent p1,
            com.google.android.gms.internal.je p2,
            String p3)
 throws android.os.RemoteException {
      android.os.Parcel v5;
      android.os.Parcel v6; // RETVAL
      android.os.Parcel v7;
      android.os.IBinder v8;
      v5 = Parcel.obtain();
      v6 = Parcel.obtain();
      v7 = v6;
      try
      {
        v5.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        v5.writeTypedList(p0);
        if ( p1 != null )
        {
          v5.writeInt(1);
          p1.writeToParcel(v5, 0);
        }
        else
        {
          v5.writeInt(0);
        }
        if ( p2 != null )
          v8 = p2.asBinder();
        else
          v8 = null;
        v5.writeStrongBinder(v8);
        v5.writeString(p3);
        this.a.transact(1, v5, v7, 0);
        v7.readException();
        v7.recycle();
        v5.recycle();
        return;
      }
      catch ( Throwable v9 )
      {
        v6.recycle();
        v5.recycle();
        throw v9;
      }
    }

    public final void a(boolean p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(12, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void a(String[] p0, com.google.android.gms.internal.je p1, String p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        v4.writeStringArray(p0);
        if ( p1 != null )
          v7 = p1.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        v4.writeString(p2);
        this.a.transact(3, v4, v6, 0);
        v6.readException();
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
      v6.recycle();
      v4.recycle();
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final android.os.IBinder b()
 throws android.os.RemoteException {
      android.os.Parcel v1;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3;
      android.os.IBinder result; // RETVAL
    
      v1 = Parcel.obtain();
      v2 = Parcel.obtain();
      v3 = v2;
      try
      {
        v1.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        this.a.transact(51, v1, v2, 0);
        v3.readException();
        result = v3.readStrongBinder();
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

    public final com.google.android.gms.location.b b(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2 = null;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4 = null;
      com.google.android.gms.location.b v5; // RETVAL
      com.google.android.gms.location.b v6 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v2 = Parcel.obtain();
            v3 = Parcel.obtain();
            v4 = v3;
            try
            {
            v2.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
            v2.writeString(p0);
            this.a.transact(34, v2, v3, 0);
            v4.readException();
            if ( v4.readInt() == 0 )
            {
            v6 = null;
            { _pc = 1; continue _sm; }
            }
            v5 = com.google.android.gms.location.c.bs(v4);
            }
            catch ( Throwable v8 )
            {
            v3.recycle();
            v2.recycle();
            throw v8;
            }
            v6 = v5;
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v4.recycle();
            v2.recycle();
            return v6;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    public final void b(android.app.PendingIntent p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(11, v2, v3, 0);
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

    public final void b(com.google.android.gms.internal.kb p0, android.app.PendingIntent p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
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
        this.a.transact(49, v3, v4, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
    }

    public final void b(String p0, com.google.android.gms.internal.kb p1, com.google.android.gms.internal.jz p2)
 throws android.os.RemoteException {
      android.os.Parcel v4;
      android.os.Parcel v5; // RETVAL
      android.os.Parcel v6;
      android.os.IBinder v7;
      v4 = Parcel.obtain();
      v5 = Parcel.obtain();
      v6 = v5;
      try
      {
        v4.writeInterfaceToken("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        v4.writeString(p0);
        if ( p1 != null )
        {
          v4.writeInt(1);
          p1.writeToParcel(v4, 0);
        }
        else
        {
          v4.writeInt(0);
        }
        if ( p2 != null )
          v7 = p2.asBinder();
        else
          v7 = null;
        v4.writeStrongBinder(v7);
        this.a.transact(42, v4, v6, 0);
        v6.readException();
        v6.recycle();
        v4.recycle();
        return;
      }
      catch ( Throwable v8 )
      {
        v5.recycle();
        v4.recycle();
        throw v8;
      }
    }

}
