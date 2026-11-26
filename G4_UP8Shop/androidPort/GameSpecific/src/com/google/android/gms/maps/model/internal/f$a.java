// Decompiled from classes.dex (SourceFile: f$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

import com.google.android.gms.maps.model.LatLngCreator;
public abstract class f$a extends android.os.Binder implements com.google.android.gms.maps.model.internal.f {
    // Methods
    public static com.google.android.gms.maps.model.internal.f bc(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.model.internal.f )
        return (com.google.android.gms.maps.model.internal.f)LocalInterface;
      else
        return (com.google.android.gms.maps.model.internal.f)new com.google.android.gms.maps.model.internal.f$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5 = false;
      String v7 = null; // RETVAL
      com.google.android.gms.maps.model.LatLng v8 = null;
      com.google.android.gms.maps.model.LatLng v9 = null; // RETVAL
      String v10 = null; // RETVAL
      String v11 = null; // RETVAL
      boolean v12 = false; // RETVAL
      int v13 = 0;
      boolean v14 = false; // RETVAL
      boolean v15 = false; // RETVAL
      boolean v16 = false; // RETVAL
      int v17 = 0; // RETVAL
      boolean v18 = false; // RETVAL
      float v19 = 0.0f; // RETVAL
      float v20 = 0.0f; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v5 = true;
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
            if ( (_sw_1 == (22)) ) { _pc = 23; continue _sm; }
            if ( (_sw_1 == (23)) ) { _pc = 24; continue _sm; }
            if ( (_sw_1 == (24)) ) { _pc = 25; continue _sm; }
            if ( (_sw_1 == (25)) ) { _pc = 26; continue _sm; }
            if ( (_sw_1 == (26)) ) { _pc = 27; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 28; continue _sm; }
            _pc = 29;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.a();
            p2.writeNoException();
            return v5;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            v7 = this.b();
            p2.writeNoException();
            p2.writeString(v7);
            return v5;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            if ( p1.readInt() != 0 )
            v8 = LatLngCreator._typed_createFromParcel(p1);
            else
            v8 = null;
            this.a(v8);
            p2.writeNoException();
            return v5;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            v9 = this.c();
            p2.writeNoException();
            if ( v9 != null )
            {
            p2.writeInt(1);
            v9.writeToParcel(p2, 1);
            }
            else
            {
            p2.writeInt(0);
            }
            return v5;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.a(p1.readString());
            p2.writeNoException();
            return v5;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            v10 = this.d();
            p2.writeNoException();
            p2.writeString(v10);
            return v5;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.b(p1.readString());
            p2.writeNoException();
            return v5;
          case 8:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            v11 = this.e();
            p2.writeNoException();
            p2.writeString(v11);
            return v5;
          case 9:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.a(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 10:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            v12 = this.f();
            p2.writeNoException();
            v13 = v12 ? 1 : 0;
            _pc = 22;
            continue _sm;
          case 11:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.g();
            p2.writeNoException();
            return v5;
          case 12:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.h();
            p2.writeNoException();
            return v5;
          case 13:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            v14 = this.i();
            p2.writeNoException();
            v13 = v14 ? 1 : 0;
            _pc = 22;
            continue _sm;
          case 14:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.b(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 15:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            v15 = this.j();
            p2.writeNoException();
            v13 = v15 ? 1 : 0;
            _pc = 22;
            continue _sm;
          case 16:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            v16 = this.a(bc(p1.readStrongBinder()));
            p2.writeNoException();
            v13 = v16 ? 1 : 0;
            _pc = 22;
            continue _sm;
          case 17:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            v17 = this.k();
            p2.writeNoException();
            p2.writeInt(v17);
            return v5;
          case 18:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
            p2.writeNoException();
            return v5;
          case 19:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.a(p1.readFloat(), p1.readFloat());
            p2.writeNoException();
            return v5;
          case 20:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.c(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 21:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            v18 = this.l();
            p2.writeNoException();
            v13 = v18 ? 1 : 0;
            _pc = 22;
            continue _sm;
          case 22:
            p2.writeInt(v13);
            _pc = 30;
            continue _sm;
          case 23:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.a(p1.readFloat());
            p2.writeNoException();
            _pc = 30;
            continue _sm;
          case 24:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            v19 = this.m();
            p2.writeNoException();
            p2.writeFloat(v19);
            _pc = 30;
            continue _sm;
          case 25:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.b(p1.readFloat(), p1.readFloat());
            p2.writeNoException();
            _pc = 30;
            continue _sm;
          case 26:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            this.b(p1.readFloat());
            p2.writeNoException();
            _pc = 30;
            continue _sm;
          case 27:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            v20 = this.n();
            p2.writeNoException();
            p2.writeFloat(v20);
            _pc = 30;
            continue _sm;
          case 28:
            p2.writeString("com.google.android.gms.maps.model.internal.IMarkerDelegate");
            _pc = 30;
            continue _sm;
          case 29:
            v5 = super.onTransact(p0, p1, p2, p3);
            _pc = 30;
            continue _sm;
          case 30:
            return v5;
        }
      }
}

}
