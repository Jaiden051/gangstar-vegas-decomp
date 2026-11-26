// Decompiled from classes.dex (SourceFile: b$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

import com.google.android.gms.maps.model.LatLngCreator;
public abstract class b$a extends android.os.Binder implements com.google.android.gms.maps.model.internal.b {
    // Methods
    public static com.google.android.gms.maps.model.internal.b aY(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.model.internal.b )
        return (com.google.android.gms.maps.model.internal.b)LocalInterface;
      else
        return (com.google.android.gms.maps.model.internal.b)new com.google.android.gms.maps.model.internal.b$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5 = false;
      String v7 = null; // RETVAL
      com.google.android.gms.maps.model.LatLng v8 = null;
      com.google.android.gms.maps.model.LatLng v9 = null; // RETVAL
      double v10 = 0.0; // RETVAL
      float v11 = 0.0f; // RETVAL
      int v12 = 0; // RETVAL
      int v13 = 0; // RETVAL
      float v14 = 0.0f; // RETVAL
      boolean v15 = false; // RETVAL
      int v16 = 0;
      boolean v17 = false; // RETVAL
      int v18 = 0; // RETVAL
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
            if ( (_sw_1 == (18)) ) { _pc = 19; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 20; continue _sm; }
            _pc = 21;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            this.a();
            p2.writeNoException();
            _pc = 22;
            continue _sm;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            v7 = this.b();
            p2.writeNoException();
            p2.writeString(v7);
            _pc = 22;
            continue _sm;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            if ( p1.readInt() != 0 )
            v8 = LatLngCreator._typed_createFromParcel(p1);
            else
            v8 = null;
            this.a(v8);
            p2.writeNoException();
            _pc = 22;
            continue _sm;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
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
            _pc = 22;
            continue _sm;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            this.a(p1.readDouble());
            p2.writeNoException();
            _pc = 22;
            continue _sm;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            v10 = this.d();
            p2.writeNoException();
            p2.writeDouble(v10);
            _pc = 22;
            continue _sm;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            this.a(p1.readFloat());
            p2.writeNoException();
            _pc = 22;
            continue _sm;
          case 8:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            v11 = this.e();
            p2.writeNoException();
            p2.writeFloat(v11);
            _pc = 22;
            continue _sm;
          case 9:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            this.a(p1.readInt());
            p2.writeNoException();
            _pc = 22;
            continue _sm;
          case 10:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            v12 = this.f();
            p2.writeNoException();
            p2.writeInt(v12);
            _pc = 22;
            continue _sm;
          case 11:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            this.b(p1.readInt());
            p2.writeNoException();
            _pc = 22;
            continue _sm;
          case 12:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            v13 = this.g();
            p2.writeNoException();
            p2.writeInt(v13);
            _pc = 22;
            continue _sm;
          case 13:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            this.b(p1.readFloat());
            p2.writeNoException();
            _pc = 22;
            continue _sm;
          case 14:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            v14 = this.h();
            p2.writeNoException();
            p2.writeFloat(v14);
            _pc = 22;
            continue _sm;
          case 15:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            this.a(p1.readInt() != 0);
            p2.writeNoException();
            _pc = 22;
            continue _sm;
          case 16:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            v15 = this.i();
            p2.writeNoException();
            v16 = v15 ? 1 : 0;
            _pc = 18;
            continue _sm;
          case 17:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            v17 = this.a(aY(p1.readStrongBinder()));
            p2.writeNoException();
            v16 = v17 ? 1 : 0;
            _pc = 18;
            continue _sm;
          case 18:
            p2.writeInt(v16);
            _pc = 22;
            continue _sm;
          case 19:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ICircleDelegate");
            v18 = this.j();
            p2.writeNoException();
            p2.writeInt(v18);
            _pc = 22;
            continue _sm;
          case 20:
            p2.writeString("com.google.android.gms.maps.model.internal.ICircleDelegate");
            _pc = 22;
            continue _sm;
          case 21:
            v5 = super.onTransact(p0, p1, p2, p3);
            _pc = 22;
            continue _sm;
          case 22:
            return v5;
        }
      }
}

}
