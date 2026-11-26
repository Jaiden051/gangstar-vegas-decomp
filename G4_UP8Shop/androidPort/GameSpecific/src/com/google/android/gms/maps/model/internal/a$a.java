// Decompiled from classes.dex (SourceFile: a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

import android.graphics.Bitmap;
public abstract class a$a extends android.os.Binder implements com.google.android.gms.maps.model.internal.a {
    // Methods
    public static com.google.android.gms.maps.model.internal.a aX(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.model.internal.a )
        return (com.google.android.gms.maps.model.internal.a)LocalInterface;
      else
        return (com.google.android.gms.maps.model.internal.a)new com.google.android.gms.maps.model.internal.a$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      android.os.IBinder v5 = null;
      boolean v6 = false;
      com.google.android.gms.dynamic.d v8 = null; // RETVAL
      android.os.IBinder v9 = null;
      com.google.android.gms.dynamic.d v10 = null; // RETVAL
      com.google.android.gms.dynamic.d v11 = null; // RETVAL
      com.google.android.gms.dynamic.d v12 = null; // RETVAL
      com.google.android.gms.dynamic.d v13 = null; // RETVAL
      android.graphics.Bitmap v14 = null;
      com.google.android.gms.dynamic.d v15 = null; // RETVAL
      com.google.android.gms.dynamic.d v16 = null; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v5 = null;
            _sw_1 = (p0);
            if ( (_sw_1 == (1)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (4)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (6)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (7)) ) { _pc = 7; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 9; continue _sm; }
            _pc = 10;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
            v8 = this.a(p1.readInt());
            p2.writeNoException();
            if ( v8 != null )
            v9 = v8.asBinder();
            else
            v9 = null;
            p2.writeStrongBinder(v9);
            return true;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
            v10 = this.a(p1.readString());
            p2.writeNoException();
            if ( v10 != null )
            v5 = v10.asBinder();
            _pc = 8;
            continue _sm;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
            v11 = this.b(p1.readString());
            p2.writeNoException();
            if ( v11 != null )
            v5 = v11.asBinder();
            _pc = 8;
            continue _sm;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
            v12 = this.a();
            p2.writeNoException();
            if ( v12 != null )
            v5 = v12.asBinder();
            _pc = 8;
            continue _sm;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
            v13 = this.a(p1.readFloat());
            p2.writeNoException();
            if ( v13 != null )
            v5 = v13.asBinder();
            _pc = 8;
            continue _sm;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
            if ( p1.readInt() != 0 )
            v14 = (android.graphics.Bitmap)android.graphics.Bitmap.CREATOR.createFromParcel(p1);
            else
            v14 = null;
            v15 = this.a(v14);
            p2.writeNoException();
            if ( v15 != null )
            v5 = v15.asBinder();
            _pc = 8;
            continue _sm;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
            v16 = this.c(p1.readString());
            p2.writeNoException();
            if ( v16 != null )
            v5 = v16.asBinder();
            _pc = 8;
            continue _sm;
          case 8:
            p2.writeStrongBinder(v5);
            v6 = true;
            _pc = 11;
            continue _sm;
          case 9:
            p2.writeString("com.google.android.gms.maps.model.internal.IBitmapDescriptorFactoryDelegate");
            v6 = true;
            _pc = 11;
            continue _sm;
          case 10:
            v6 = super.onTransact(p0, p1, p2, p3);
            _pc = 11;
            continue _sm;
          case 11:
            return v6;
        }
      }
}

}
