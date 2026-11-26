// Decompiled from classes.dex (SourceFile: c$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import com.google.android.gms.maps.GoogleMapOptionsCreator;
import com.google.android.gms.maps.StreetViewPanoramaOptionsCreator;
public abstract class c$a extends android.os.Binder implements com.google.android.gms.maps.internal.c {
    // Methods
    public static com.google.android.gms.maps.internal.c ax(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.ICreator");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.internal.c )
        return (com.google.android.gms.maps.internal.c)LocalInterface;
      else
        return (com.google.android.gms.maps.internal.c)new com.google.android.gms.maps.internal.c$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      android.os.IBinder v5 = null;
      boolean v6 = false;
      com.google.android.gms.maps.internal.IMapFragmentDelegate v8 = null; // RETVAL
      com.google.android.gms.dynamic.d v9 = null;
      com.google.android.gms.maps.GoogleMapOptions v10 = null;
      com.google.android.gms.maps.internal.IMapViewDelegate v11 = null; // RETVAL
      com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate v12 = null; // RETVAL
      com.google.android.gms.maps.model.internal.a v13 = null; // RETVAL
      com.google.android.gms.dynamic.d v14 = null;
      com.google.android.gms.maps.StreetViewPanoramaOptions v15 = null;
      com.google.android.gms.maps.internal.IStreetViewPanoramaViewDelegate v16 = null; // RETVAL
      com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate v17 = null; // RETVAL
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
            if ( (_sw_1 == (1598968902)) ) { _pc = 10; continue _sm; }
            _pc = 11;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICreator");
            this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
            p2.writeNoException();
            return true;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICreator");
            v8 = this.b(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
            p2.writeNoException();
            if ( v8 != null )
            v5 = v8.asBinder();
            _pc = 9;
            continue _sm;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICreator");
            v9 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
            if ( p1.readInt() != 0 )
            v10 = GoogleMapOptionsCreator._typed_createFromParcel(p1);
            else
            v10 = null;
            v11 = this.a(v9, v10);
            p2.writeNoException();
            if ( v11 != null )
            v5 = v11.asBinder();
            _pc = 9;
            continue _sm;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICreator");
            v12 = this.a();
            p2.writeNoException();
            if ( v12 != null )
            v5 = v12.asBinder();
            _pc = 9;
            continue _sm;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICreator");
            v13 = this.b();
            p2.writeNoException();
            if ( v13 != null )
            v5 = v13.asBinder();
            _pc = 9;
            continue _sm;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICreator");
            this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()), p1.readInt());
            p2.writeNoException();
            return true;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICreator");
            v14 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
            if ( p1.readInt() != 0 )
            v15 = StreetViewPanoramaOptionsCreator._typed_createFromParcel(p1);
            else
            v15 = null;
            v16 = this.a(v14, v15);
            p2.writeNoException();
            if ( v16 != null )
            v5 = v16.asBinder();
            _pc = 9;
            continue _sm;
          case 8:
            p1.enforceInterface("com.google.android.gms.maps.internal.ICreator");
            v17 = this.c(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
            p2.writeNoException();
            if ( v17 != null )
            v5 = v17.asBinder();
            _pc = 9;
            continue _sm;
          case 9:
            p2.writeStrongBinder(v5);
            v6 = true;
            _pc = 12;
            continue _sm;
          case 10:
            p2.writeString("com.google.android.gms.maps.internal.ICreator");
            v6 = true;
            _pc = 12;
            continue _sm;
          case 11:
            v6 = super.onTransact(p0, p1, p2, p3);
            _pc = 12;
            continue _sm;
          case 12:
            return v6;
        }
      }
}

}
