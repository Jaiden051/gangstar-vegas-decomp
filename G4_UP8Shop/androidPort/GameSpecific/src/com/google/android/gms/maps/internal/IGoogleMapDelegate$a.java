// Decompiled from classes.dex (SourceFile: IGoogleMapDelegate$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import com.google.android.gms.maps.model.CircleOptionsCreator;
import com.google.android.gms.maps.model.GroundOverlayOptionsCreator;
import com.google.android.gms.maps.model.MarkerOptionsCreator;
import com.google.android.gms.maps.model.PolylineOptionsCreator;
import com.google.android.gms.maps.model.TileOverlayOptionsCreator;
public abstract class IGoogleMapDelegate$a extends android.os.Binder implements com.google.android.gms.maps.internal.IGoogleMapDelegate {
    // Methods
    public static com.google.android.gms.maps.internal.IGoogleMapDelegate ay(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.internal.IGoogleMapDelegate )
        return (com.google.android.gms.maps.internal.IGoogleMapDelegate)LocalInterface;
      else
        return (com.google.android.gms.maps.internal.IGoogleMapDelegate)new com.google.android.gms.maps.internal.IGoogleMapDelegate$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      android.os.IBinder v5 = null;
      boolean v6 = false;
      com.google.android.gms.maps.model.CameraPosition v8 = null; // RETVAL
      float v9 = 0.0f; // RETVAL
      float v10 = 0.0f; // RETVAL
      com.google.android.gms.maps.model.PolylineOptions v11 = null;
      com.google.android.gms.maps.model.internal.IPolylineDelegate v12 = null; // RETVAL
      com.google.android.gms.maps.model.PolygonOptions v13 = null;
      com.google.android.gms.maps.model.internal.g v14 = null; // RETVAL
      com.google.android.gms.maps.model.MarkerOptions v15 = null;
      com.google.android.gms.maps.model.internal.f v16 = null; // RETVAL
      com.google.android.gms.maps.model.GroundOverlayOptions v17 = null;
      com.google.android.gms.maps.model.internal.c v18 = null; // RETVAL
      com.google.android.gms.maps.model.TileOverlayOptions v19 = null;
      com.google.android.gms.maps.model.internal.h v20 = null; // RETVAL
      int v21 = 0; // RETVAL
      boolean v22 = false; // RETVAL
      int v23 = 0;
      boolean v24 = false; // RETVAL
      boolean v25 = false; // RETVAL
      boolean v26 = false; // RETVAL
      android.location.Location v27 = null; // RETVAL
      com.google.android.gms.maps.internal.IUiSettingsDelegate v28 = null; // RETVAL
      com.google.android.gms.maps.internal.IProjectionDelegate v29 = null; // RETVAL
      com.google.android.gms.dynamic.d v30 = null; // RETVAL
      com.google.android.gms.maps.model.CircleOptions v31 = null;
      com.google.android.gms.maps.model.internal.b v32 = null; // RETVAL
      boolean v33 = false; // RETVAL
      com.google.android.gms.maps.model.internal.d v34 = null; // RETVAL
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
            if ( (_sw_1 == (11)) ) { _pc = 11; continue _sm; }
            if ( (_sw_1 == (12)) ) { _pc = 12; continue _sm; }
            if ( (_sw_1 == (13)) ) { _pc = 13; continue _sm; }
            if ( (_sw_1 == (14)) ) { _pc = 14; continue _sm; }
            if ( (_sw_1 == (15)) ) { _pc = 15; continue _sm; }
            if ( (_sw_1 == (16)) ) { _pc = 16; continue _sm; }
            if ( (_sw_1 == (17)) ) { _pc = 17; continue _sm; }
            if ( (_sw_1 == (18)) ) { _pc = 18; continue _sm; }
            if ( (_sw_1 == (19)) ) { _pc = 19; continue _sm; }
            if ( (_sw_1 == (20)) ) { _pc = 20; continue _sm; }
            if ( (_sw_1 == (21)) ) { _pc = 21; continue _sm; }
            if ( (_sw_1 == (22)) ) { _pc = 22; continue _sm; }
            if ( (_sw_1 == (23)) ) { _pc = 23; continue _sm; }
            if ( (_sw_1 == (24)) ) { _pc = 26; continue _sm; }
            if ( (_sw_1 == (25)) ) { _pc = 27; continue _sm; }
            if ( (_sw_1 == (26)) ) { _pc = 28; continue _sm; }
            if ( (_sw_1 == (27)) ) { _pc = 29; continue _sm; }
            if ( (_sw_1 == (28)) ) { _pc = 30; continue _sm; }
            if ( (_sw_1 == (29)) ) { _pc = 31; continue _sm; }
            if ( (_sw_1 == (30)) ) { _pc = 32; continue _sm; }
            if ( (_sw_1 == (31)) ) { _pc = 33; continue _sm; }
            if ( (_sw_1 == (32)) ) { _pc = 34; continue _sm; }
            if ( (_sw_1 == (33)) ) { _pc = 35; continue _sm; }
            if ( (_sw_1 == (34)) ) { _pc = 36; continue _sm; }
            if ( (_sw_1 == (35)) ) { _pc = 37; continue _sm; }
            if ( (_sw_1 == (36)) ) { _pc = 38; continue _sm; }
            if ( (_sw_1 == (37)) ) { _pc = 39; continue _sm; }
            if ( (_sw_1 == (38)) ) { _pc = 40; continue _sm; }
            if ( (_sw_1 == (39)) ) { _pc = 41; continue _sm; }
            if ( (_sw_1 == (40)) ) { _pc = 42; continue _sm; }
            if ( (_sw_1 == (41)) ) { _pc = 44; continue _sm; }
            if ( (_sw_1 == (42)) ) { _pc = 45; continue _sm; }
            if ( (_sw_1 == (44)) ) { _pc = 46; continue _sm; }
            if ( (_sw_1 == (45)) ) { _pc = 48; continue _sm; }
            if ( (_sw_1 == (51)) ) { _pc = 49; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 50; continue _sm; }
            _pc = 51;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v8 = this.a();
            p2.writeNoException();
            if ( v8 == null )
            { _pc = 24; continue _sm; }
            p2.writeInt(1);
            v8.writeToParcel(p2, 1);
            return v6;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v9 = this.b();
            p2.writeNoException();
            p2.writeFloat(v9);
            return v6;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v10 = this.c();
            p2.writeNoException();
            p2.writeFloat(v10);
            return v6;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.b(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()), b$a.aw(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()), p1.readInt(), b$a.aw(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 8:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.d();
            p2.writeNoException();
            return v6;
          case 9:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            if ( p1.readInt() != 0 )
            v11 = PolylineOptionsCreator._typed_createFromParcel(p1);
            else
            v11 = null;
            v12 = this.a(v11);
            p2.writeNoException();
            if ( v12 != null )
            v5 = v12.asBinder();
            _pc = 47;
            continue _sm;
          case 10:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            if ( p1.readInt() != 0 )
            v13 = com.google.android.gms.maps.model.PolygonOptions.CREATOR.a(p1);
            else
            v13 = null;
            v14 = this.a(v13);
            p2.writeNoException();
            if ( v14 != null )
            v5 = v14.asBinder();
            _pc = 47;
            continue _sm;
          case 11:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            if ( p1.readInt() != 0 )
            v15 = MarkerOptionsCreator._typed_createFromParcel(p1);
            else
            v15 = null;
            v16 = this.a(v15);
            p2.writeNoException();
            if ( v16 != null )
            v5 = v16.asBinder();
            _pc = 47;
            continue _sm;
          case 12:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            if ( p1.readInt() != 0 )
            v17 = GroundOverlayOptionsCreator._typed_createFromParcel(p1);
            else
            v17 = null;
            v18 = this.a(v17);
            p2.writeNoException();
            if ( v18 != null )
            v5 = v18.asBinder();
            _pc = 47;
            continue _sm;
          case 13:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            if ( p1.readInt() != 0 )
            v19 = TileOverlayOptionsCreator._typed_createFromParcel(p1);
            else
            v19 = null;
            v20 = this.a(v19);
            p2.writeNoException();
            if ( v20 != null )
            v5 = v20.asBinder();
            _pc = 47;
            continue _sm;
          case 14:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.e();
            p2.writeNoException();
            return v6;
          case 15:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v21 = this.f();
            p2.writeNoException();
            p2.writeInt(v21);
            return v6;
          case 16:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(p1.readInt());
            p2.writeNoException();
            return v6;
          case 17:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v22 = this.g();
            p2.writeNoException();
            v23 = v22 ? 1 : 0;
            _pc = 43;
            continue _sm;
          case 18:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(p1.readInt() != 0);
            p2.writeNoException();
            return v6;
          case 19:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v24 = this.h();
            p2.writeNoException();
            v23 = v24 ? 1 : 0;
            _pc = 43;
            continue _sm;
          case 20:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v25 = this.b(p1.readInt() != 0);
            p2.writeNoException();
            v23 = v25 ? 1 : 0;
            _pc = 43;
            continue _sm;
          case 21:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v26 = this.i();
            p2.writeNoException();
            v23 = v26 ? 1 : 0;
            _pc = 43;
            continue _sm;
          case 22:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.c(p1.readInt() != 0);
            p2.writeNoException();
            return v6;
          case 23:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v27 = this.j();
            p2.writeNoException();
            if ( !(v27 != null) ) { _pc = 24; continue _sm; }
            {
            p2.writeInt(1);
            v27.writeToParcel(p2, 1);
            }
            _pc = 25;
            continue _sm;
          case 24:
            p2.writeInt(0);
            _pc = 25;
            continue _sm;
          case 25:
            return v6;
          case 26:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(ILocationSourceDelegate$a.aA(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 27:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v28 = this.k();
            p2.writeNoException();
            if ( v28 != null )
            v5 = v28.asBinder();
            _pc = 47;
            continue _sm;
          case 28:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v29 = this.l();
            p2.writeNoException();
            if ( v29 != null )
            v5 = v29.asBinder();
            _pc = 47;
            continue _sm;
          case 29:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(e$a.aD(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 30:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(i$a.aH(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 31:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(k$a.aJ(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 32:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(l$a.aK(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 33:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(m$a.aL(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 34:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(g$a.aF(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 35:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(d$a.az(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 36:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v30 = this.m();
            p2.writeNoException();
            if ( v30 != null )
            v5 = v30.asBinder();
            _pc = 47;
            continue _sm;
          case 37:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            if ( p1.readInt() != 0 )
            v31 = CircleOptionsCreator._typed_createFromParcel(p1);
            else
            v31 = null;
            v32 = this.a(v31);
            p2.writeNoException();
            if ( v32 != null )
            v5 = v32.asBinder();
            _pc = 47;
            continue _sm;
          case 38:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(o$a.aN(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 39:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(n$a.aM(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 40:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(s$a.aS(p1.readStrongBinder()), com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
            p2.writeNoException();
            return v6;
          case 41:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(p1.readInt(), p1.readInt(), p1.readInt(), p1.readInt());
            p2.writeNoException();
            return v6;
          case 42:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v33 = this.n();
            p2.writeNoException();
            v23 = v33 ? 1 : 0;
            _pc = 43;
            continue _sm;
          case 43:
            p2.writeInt(v23);
            _pc = 52;
            continue _sm;
          case 44:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.d(p1.readInt() != 0);
            p2.writeNoException();
            _pc = 52;
            continue _sm;
          case 45:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(j$a.aI(p1.readStrongBinder()));
            p2.writeNoException();
            _pc = 52;
            continue _sm;
          case 46:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            v34 = this.o();
            p2.writeNoException();
            if ( v34 != null )
            v5 = v34.asBinder();
            _pc = 47;
            continue _sm;
          case 47:
            p2.writeStrongBinder(v5);
            _pc = 52;
            continue _sm;
          case 48:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.a(f$a.aE(p1.readStrongBinder()));
            p2.writeNoException();
            _pc = 52;
            continue _sm;
          case 49:
            p1.enforceInterface("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            this.e(p1.readInt() != 0);
            p2.writeNoException();
            _pc = 52;
            continue _sm;
          case 50:
            p2.writeString("com.google.android.gms.maps.internal.IGoogleMapDelegate");
            _pc = 52;
            continue _sm;
          case 51:
            v6 = super.onTransact(p0, p1, p2, p3);
            _pc = 52;
            continue _sm;
          case 52:
            return v6;
        }
      }
}

}
