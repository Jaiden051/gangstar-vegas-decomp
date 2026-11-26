// Decompiled from classes.dex (SourceFile: g$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

import com.google.android.gms.maps.model.LatLng;
public abstract class g$a extends android.os.Binder implements com.google.android.gms.maps.model.internal.g {
    // Methods
    public static com.google.android.gms.maps.model.internal.g bd(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.model.internal.g )
        return (com.google.android.gms.maps.model.internal.g)LocalInterface;
      else
        return (com.google.android.gms.maps.model.internal.g)new com.google.android.gms.maps.model.internal.g$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5 = false;
      String v7 = null; // RETVAL
      java.util.List v8 = null; // RETVAL
      java.util.List v9 = null; // RETVAL
      float v10 = 0.0f; // RETVAL
      int v11 = 0; // RETVAL
      int v12 = 0; // RETVAL
      float v13 = 0.0f; // RETVAL
      boolean v14 = false; // RETVAL
      int v15 = 0;
      boolean v16 = false; // RETVAL
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
            if ( (_sw_1 == (18)) ) { _pc = 18; continue _sm; }
            if ( (_sw_1 == (19)) ) { _pc = 19; continue _sm; }
            if ( (_sw_1 == (20)) ) { _pc = 21; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 22; continue _sm; }
            _pc = 23;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            this.a();
            p2.writeNoException();
            return v5;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            v7 = this.b();
            p2.writeNoException();
            p2.writeString(v7);
            return v5;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            this.a(p1.createTypedArrayList((android.os.Parcelable.Creator)LatLng.CREATOR));
            p2.writeNoException();
            return v5;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            v8 = this.c();
            p2.writeNoException();
            p2.writeTypedList(v8);
            return v5;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            this.b(p1.readArrayList(this.getClass().getClassLoader()));
            p2.writeNoException();
            return v5;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            v9 = this.d();
            p2.writeNoException();
            p2.writeList(v9);
            return v5;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            this.a(p1.readFloat());
            p2.writeNoException();
            return v5;
          case 8:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            v10 = this.e();
            p2.writeNoException();
            p2.writeFloat(v10);
            return v5;
          case 9:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            this.a(p1.readInt());
            p2.writeNoException();
            return v5;
          case 10:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            v11 = this.f();
            p2.writeNoException();
            p2.writeInt(v11);
            return v5;
          case 11:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            this.b(p1.readInt());
            p2.writeNoException();
            return v5;
          case 12:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            v12 = this.g();
            p2.writeNoException();
            p2.writeInt(v12);
            return v5;
          case 13:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            this.b(p1.readFloat());
            p2.writeNoException();
            return v5;
          case 14:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            v13 = this.h();
            p2.writeNoException();
            p2.writeFloat(v13);
            return v5;
          case 15:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            this.a(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 16:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            v14 = this.i();
            p2.writeNoException();
            v15 = v14 ? 1 : 0;
            _pc = 20;
            continue _sm;
          case 17:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            this.b(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 18:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            v16 = this.j();
            p2.writeNoException();
            v15 = v16 ? 1 : 0;
            _pc = 20;
            continue _sm;
          case 19:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            v17 = this.a(bd(p1.readStrongBinder()));
            p2.writeNoException();
            v15 = v17 ? 1 : 0;
            _pc = 20;
            continue _sm;
          case 20:
            p2.writeInt(v15);
            _pc = 24;
            continue _sm;
          case 21:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            v18 = this.k();
            p2.writeNoException();
            p2.writeInt(v18);
            _pc = 24;
            continue _sm;
          case 22:
            p2.writeString("com.google.android.gms.maps.model.internal.IPolygonDelegate");
            _pc = 24;
            continue _sm;
          case 23:
            v5 = super.onTransact(p0, p1, p2, p3);
            _pc = 24;
            continue _sm;
          case 24:
            return v5;
        }
      }
}

}
