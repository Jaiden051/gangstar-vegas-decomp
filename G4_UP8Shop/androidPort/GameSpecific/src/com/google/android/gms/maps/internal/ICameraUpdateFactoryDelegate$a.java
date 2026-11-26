// Decompiled from classes.dex (SourceFile: ICameraUpdateFactoryDelegate$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import com.google.android.gms.maps.model.CameraPositionCreator;
import com.google.android.gms.maps.model.LatLngBoundsCreator;
import com.google.android.gms.maps.model.LatLngCreator;
public abstract class ICameraUpdateFactoryDelegate$a extends android.os.Binder implements com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate {
    // Methods
    public static com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate av(
            android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
      if ( LocalInterface != null
        && LocalInterface instanceof com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate )
      {
        return (com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate)LocalInterface;
      }
      else
      {
        return (com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate)new com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate$a$a(p0);
      }
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      android.os.IBinder v5 = null;
      boolean v6 = false;
      com.google.android.gms.dynamic.d v8 = null; // RETVAL
      com.google.android.gms.dynamic.d v9 = null; // RETVAL
      com.google.android.gms.dynamic.d v10 = null; // RETVAL
      com.google.android.gms.dynamic.d v11 = null; // RETVAL
      com.google.android.gms.dynamic.d v12 = null; // RETVAL
      com.google.android.gms.dynamic.d v13 = null; // RETVAL
      com.google.android.gms.maps.model.CameraPosition v14 = null;
      com.google.android.gms.dynamic.d v15 = null; // RETVAL
      com.google.android.gms.maps.model.LatLng v16 = null;
      com.google.android.gms.dynamic.d v17 = null; // RETVAL
      com.google.android.gms.maps.model.LatLng v18 = null;
      com.google.android.gms.dynamic.d v19 = null; // RETVAL
      com.google.android.gms.maps.model.LatLngBounds v20 = null;
      com.google.android.gms.dynamic.d v21 = null; // RETVAL
      com.google.android.gms.maps.model.LatLngBounds v22 = null;
      com.google.android.gms.dynamic.d v23 = null; // RETVAL
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
            if ( (_sw_1 == (8)) ) { _pc = 8; continue _sm; }
            if ( (_sw_1 == (9)) ) { _pc = 9; continue _sm; }
            if ( (_sw_1 == (10)) ) { _pc = 10; continue _sm; }
            if ( (_sw_1 == (11)) ) { _pc = 11; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 13; continue _sm; }
            _pc = 14;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
            v8 = this.a();
            p2.writeNoException();
            if ( v8 != null )
            v5 = v8.asBinder();
            _pc = 12;
            continue _sm;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
            v9 = this.b();
            p2.writeNoException();
            if ( v9 != null )
            v5 = v9.asBinder();
            _pc = 12;
            continue _sm;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
            v10 = this.a(p1.readFloat(), p1.readFloat());
            p2.writeNoException();
            if ( v10 != null )
            v5 = v10.asBinder();
            _pc = 12;
            continue _sm;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
            v11 = this.a(p1.readFloat());
            p2.writeNoException();
            if ( v11 != null )
            v5 = v11.asBinder();
            _pc = 12;
            continue _sm;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
            v12 = this.b(p1.readFloat());
            p2.writeNoException();
            if ( v12 != null )
            v5 = v12.asBinder();
            _pc = 12;
            continue _sm;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
            v13 = this.a(p1.readFloat(), p1.readInt(), p1.readInt());
            p2.writeNoException();
            if ( v13 != null )
            v5 = v13.asBinder();
            _pc = 12;
            continue _sm;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
            if ( p1.readInt() != 0 )
            v14 = CameraPositionCreator._typed_createFromParcel(p1);
            else
            v14 = null;
            v15 = this.a(v14);
            p2.writeNoException();
            if ( v15 != null )
            v5 = v15.asBinder();
            _pc = 12;
            continue _sm;
          case 8:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
            if ( p1.readInt() != 0 )
            v16 = LatLngCreator._typed_createFromParcel(p1);
            else
            v16 = null;
            v17 = this.a(v16);
            p2.writeNoException();
            if ( v17 != null )
            v5 = v17.asBinder();
            _pc = 12;
            continue _sm;
          case 9:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
            if ( p1.readInt() != 0 )
            v18 = LatLngCreator._typed_createFromParcel(p1);
            else
            v18 = null;
            v19 = this.a(v18, p1.readFloat());
            p2.writeNoException();
            if ( v19 != null )
            v5 = v19.asBinder();
            _pc = 12;
            continue _sm;
          case 10:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
            if ( p1.readInt() != 0 )
            v20 = LatLngBoundsCreator._typed_createFromParcel(p1);
            else
            v20 = null;
            v21 = this.a(v20, p1.readInt());
            p2.writeNoException();
            if ( v21 != null )
            v5 = v21.asBinder();
            _pc = 12;
            continue _sm;
          case 11:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
            if ( p1.readInt() != 0 )
            v22 = LatLngBoundsCreator._typed_createFromParcel(p1);
            else
            v22 = null;
            v23 = this.a(v22, p1.readInt(), p1.readInt(), p1.readInt());
            p2.writeNoException();
            if ( v23 != null )
            v5 = v23.asBinder();
            _pc = 12;
            continue _sm;
          case 12:
            p2.writeStrongBinder(v5);
            v6 = true;
            _pc = 15;
            continue _sm;
          case 13:
            p2.writeString("com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate");
            v6 = true;
            _pc = 15;
            continue _sm;
          case 14:
            v6 = super.onTransact(p0, p1, p2, p3);
            _pc = 15;
            continue _sm;
          case 15:
            return v6;
        }
      }
}

}
