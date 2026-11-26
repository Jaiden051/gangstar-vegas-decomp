// Decompiled from classes.dex (SourceFile: c$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

import com.google.android.gms.maps.model.LatLngBoundsCreator;
import com.google.android.gms.maps.model.LatLngCreator;
public abstract class c$a extends android.os.Binder implements com.google.android.gms.maps.model.internal.c {
    // Methods
    public static com.google.android.gms.maps.model.internal.c aZ(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.model.internal.c )
        return (com.google.android.gms.maps.model.internal.c)LocalInterface;
      else
        return (com.google.android.gms.maps.model.internal.c)new com.google.android.gms.maps.model.internal.c$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5 = null;
      boolean v6 = false;
      String v8 = null; // RETVAL
      com.google.android.gms.maps.model.LatLng v9 = null; // RETVAL
      float v10 = 0.0f; // RETVAL
      float v11 = 0.0f; // RETVAL
      com.google.android.gms.maps.model.LatLngBounds v12 = null; // RETVAL
      float v13 = 0.0f; // RETVAL
      float v14 = 0.0f; // RETVAL
      boolean v15 = false; // RETVAL
      int v16 = 0;
      float v17 = 0.0f; // RETVAL
      boolean v18 = false; // RETVAL
      int v19 = 0; // RETVAL
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
            if ( (_sw_1 == (9)) ) { _pc = 9; continue _sm; }
            if ( (_sw_1 == (10)) ) { _pc = 10; continue _sm; }
            if ( (_sw_1 == (11)) ) { _pc = 13; continue _sm; }
            if ( (_sw_1 == (12)) ) { _pc = 14; continue _sm; }
            if ( (_sw_1 == (13)) ) { _pc = 15; continue _sm; }
            if ( (_sw_1 == (14)) ) { _pc = 16; continue _sm; }
            if ( (_sw_1 == (15)) ) { _pc = 17; continue _sm; }
            if ( (_sw_1 == (16)) ) { _pc = 18; continue _sm; }
            if ( (_sw_1 == (17)) ) { _pc = 19; continue _sm; }
            if ( (_sw_1 == (18)) ) { _pc = 20; continue _sm; }
            if ( (_sw_1 == (19)) ) { _pc = 21; continue _sm; }
            if ( (_sw_1 == (20)) ) { _pc = 23; continue _sm; }
            if ( (_sw_1 == (21)) ) { _pc = 24; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 25; continue _sm; }
            _pc = 26;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            this.a();
            p2.writeNoException();
            _pc = 27;
            continue _sm;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            v8 = this.b();
            p2.writeNoException();
            p2.writeString(v8);
            _pc = 27;
            continue _sm;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            if ( p1.readInt() != 0 )
            v5 = LatLngCreator._typed_createFromParcel(p1);
            this.a((com.google.android.gms.maps.model.LatLng)v5);
            p2.writeNoException();
            _pc = 27;
            continue _sm;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            v9 = this.c();
            p2.writeNoException();
            if ( v9 == null )
            { _pc = 11; continue _sm; }
            p2.writeInt(1);
            v9.writeToParcel(p2, 1);
            _pc = 27;
            continue _sm;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            this.a(p1.readFloat());
            p2.writeNoException();
            _pc = 27;
            continue _sm;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            this.a(p1.readFloat(), p1.readFloat());
            p2.writeNoException();
            _pc = 27;
            continue _sm;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            v10 = this.d();
            p2.writeNoException();
            p2.writeFloat(v10);
            _pc = 27;
            continue _sm;
          case 8:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            v11 = this.e();
            p2.writeNoException();
            p2.writeFloat(v11);
            _pc = 27;
            continue _sm;
          case 9:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            if ( p1.readInt() != 0 )
            v5 = LatLngBoundsCreator._typed_createFromParcel(p1);
            this.a((com.google.android.gms.maps.model.LatLngBounds)v5);
            p2.writeNoException();
            _pc = 27;
            continue _sm;
          case 10:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            v12 = this.f();
            p2.writeNoException();
            if ( !(v12 != null) ) { _pc = 11; continue _sm; }
            {
            p2.writeInt(1);
            v12.writeToParcel(p2, 1);
            }
            _pc = 12;
            continue _sm;
          case 11:
            p2.writeInt(0);
            _pc = 12;
            continue _sm;
          case 12:
            _pc = 27;
            continue _sm;
          case 13:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            this.b(p1.readFloat());
            p2.writeNoException();
            _pc = 27;
            continue _sm;
          case 14:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            v13 = this.g();
            p2.writeNoException();
            p2.writeFloat(v13);
            _pc = 27;
            continue _sm;
          case 15:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            this.c(p1.readFloat());
            p2.writeNoException();
            _pc = 27;
            continue _sm;
          case 16:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            v14 = this.h();
            p2.writeNoException();
            p2.writeFloat(v14);
            _pc = 27;
            continue _sm;
          case 17:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            this.a(p1.readInt() != 0);
            p2.writeNoException();
            _pc = 27;
            continue _sm;
          case 18:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            v15 = this.i();
            p2.writeNoException();
            v16 = v15 ? 1 : 0;
            _pc = 22;
            continue _sm;
          case 19:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            this.d(p1.readFloat());
            p2.writeNoException();
            _pc = 27;
            continue _sm;
          case 20:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            v17 = this.j();
            p2.writeNoException();
            p2.writeFloat(v17);
            _pc = 27;
            continue _sm;
          case 21:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            v18 = this.a(aZ(p1.readStrongBinder()));
            p2.writeNoException();
            v16 = v18 ? 1 : 0;
            _pc = 22;
            continue _sm;
          case 22:
            p2.writeInt(v16);
            _pc = 27;
            continue _sm;
          case 23:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            v19 = this.k();
            p2.writeNoException();
            p2.writeInt(v19);
            _pc = 27;
            continue _sm;
          case 24:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
            p2.writeNoException();
            _pc = 27;
            continue _sm;
          case 25:
            p2.writeString("com.google.android.gms.maps.model.internal.IGroundOverlayDelegate");
            _pc = 27;
            continue _sm;
          case 26:
            v6 = super.onTransact(p0, p1, p2, p3);
            _pc = 27;
            continue _sm;
          case 27:
            return v6;
        }
      }
}

}
