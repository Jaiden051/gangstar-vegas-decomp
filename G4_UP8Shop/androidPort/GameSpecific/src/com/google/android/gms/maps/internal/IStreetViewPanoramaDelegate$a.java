// Decompiled from classes.dex (SourceFile: IStreetViewPanoramaDelegate$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import com.google.android.gms.maps.model.LatLngCreator;
import com.google.android.gms.maps.model.StreetViewPanoramaCameraCreator;
import com.google.android.gms.maps.model.StreetViewPanoramaOrientationCreator;
public abstract class IStreetViewPanoramaDelegate$a extends android.os.Binder implements com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate {
    // Methods
    public static com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate aT(
            android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
      if ( LocalInterface != null
        && LocalInterface instanceof com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate )
      {
        return (com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate)LocalInterface;
      }
      else
      {
        return (com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate)new com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate$a$a(p0);
      }
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5 = null;
      boolean v6 = false;
      boolean v8 = false; // RETVAL
      int v9 = 0;
      boolean v10 = false; // RETVAL
      boolean v11 = false; // RETVAL
      boolean v12 = false; // RETVAL
      com.google.android.gms.maps.model.StreetViewPanoramaCamera v13 = null;
      com.google.android.gms.maps.model.StreetViewPanoramaCamera v14 = null; // RETVAL
      com.google.android.gms.maps.model.StreetViewPanoramaLocation v15 = null; // RETVAL
      com.google.android.gms.maps.model.StreetViewPanoramaOrientation v16 = null; // RETVAL
      com.google.android.gms.maps.model.StreetViewPanoramaOrientation v17 = null;
      com.google.android.gms.dynamic.d v18 = null; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v5 = null;
            v6 = true;
            _sw_1 = (p0);
            if ( (_sw_1 == (1)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (4)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (6)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (7)) ) { _pc = 7; continue _sm; }
            if ( (_sw_1 == (8)) ) { _pc = 8; continue _sm; }
            if ( (_sw_1 == (9)) ) { _pc = 10; continue _sm; }
            if ( (_sw_1 == (10)) ) { _pc = 11; continue _sm; }
            if ( (_sw_1 == (11)) ) { _pc = 12; continue _sm; }
            if ( (_sw_1 == (12)) ) { _pc = 13; continue _sm; }
            if ( (_sw_1 == (13)) ) { _pc = 14; continue _sm; }
            if ( (_sw_1 == (14)) ) { _pc = 15; continue _sm; }
            if ( (_sw_1 == (15)) ) { _pc = 16; continue _sm; }
            if ( (_sw_1 == (16)) ) { _pc = 17; continue _sm; }
            if ( (_sw_1 == (17)) ) { _pc = 18; continue _sm; }
            if ( (_sw_1 == (18)) ) { _pc = 19; continue _sm; }
            if ( (_sw_1 == (19)) ) { _pc = 22; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 23; continue _sm; }
            _pc = 24;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            this.a(p1.readInt() != 0);
            p2.writeNoException();
            return v6;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            this.b(p1.readInt() != 0);
            p2.writeNoException();
            return v6;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            this.c(p1.readInt() != 0);
            p2.writeNoException();
            return v6;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            this.d(p1.readInt() != 0);
            p2.writeNoException();
            return v6;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            v8 = this.a();
            p2.writeNoException();
            v9 = v8 ? 1 : 0;
            _pc = 9;
            continue _sm;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            v10 = this.b();
            p2.writeNoException();
            v9 = v10 ? 1 : 0;
            _pc = 9;
            continue _sm;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            v11 = this.c();
            p2.writeNoException();
            v9 = v11 ? 1 : 0;
            _pc = 9;
            continue _sm;
          case 8:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            v12 = this.d();
            p2.writeNoException();
            v9 = v12 ? 1 : 0;
            _pc = 9;
            continue _sm;
          case 9:
            p2.writeInt(v9);
            return v6;
          case 10:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            if ( p1.readInt() != 0 )
            v13 = StreetViewPanoramaCameraCreator._typed_createFromParcel(p1);
            else
            v13 = null;
            this.a(v13, p1.readLong());
            p2.writeNoException();
            return v6;
          case 11:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            v14 = this.e();
            p2.writeNoException();
            if ( v14 == null )
            { _pc = 20; continue _sm; }
            p2.writeInt(1);
            v14.writeToParcel(p2, 1);
            _pc = 25;
            continue _sm;
          case 12:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            this.a(p1.readString());
            p2.writeNoException();
            return v6;
          case 13:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            if ( p1.readInt() != 0 )
            v5 = LatLngCreator._typed_createFromParcel(p1);
            this.a((com.google.android.gms.maps.model.LatLng)v5);
            p2.writeNoException();
            return v6;
          case 14:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            if ( p1.readInt() != 0 )
            v5 = LatLngCreator._typed_createFromParcel(p1);
            this.a((com.google.android.gms.maps.model.LatLng)v5, p1.readInt());
            p2.writeNoException();
            return v6;
          case 15:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            v15 = this.f();
            p2.writeNoException();
            if ( v15 == null )
            { _pc = 20; continue _sm; }
            p2.writeInt(1);
            v15.writeToParcel(p2, 1);
            _pc = 25;
            continue _sm;
          case 16:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            this.a(q$a.aP(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 17:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            this.a(p$a.aO(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 18:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            this.a(r$a.aQ(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 19:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            v16 = this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
            p2.writeNoException();
            if ( !(v16 != null) ) { _pc = 20; continue _sm; }
            {
            p2.writeInt(1);
            v16.writeToParcel(p2, 1);
            }
            _pc = 21;
            continue _sm;
          case 20:
            p2.writeInt(0);
            _pc = 21;
            continue _sm;
          case 21:
            _pc = 25;
            continue _sm;
          case 22:
            p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            if ( p1.readInt() != 0 )
            v17 = StreetViewPanoramaOrientationCreator._typed_createFromParcel(p1);
            else
            v17 = null;
            v18 = this.a(v17);
            p2.writeNoException();
            if ( v18 != null )
            v5 = v18.asBinder();
            p2.writeStrongBinder((android.os.IBinder)v5);
            _pc = 25;
            continue _sm;
          case 23:
            p2.writeString("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            _pc = 25;
            continue _sm;
          case 24:
            v6 = super.onTransact(p0, p1, p2, p3);
            _pc = 25;
            continue _sm;
          case 25:
            return v6;
        }
      }
}

}
