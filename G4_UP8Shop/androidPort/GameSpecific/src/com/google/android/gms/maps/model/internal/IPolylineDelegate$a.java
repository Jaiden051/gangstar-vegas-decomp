// Decompiled from classes.dex (SourceFile: IPolylineDelegate$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

import com.google.android.gms.maps.model.LatLng;
public abstract class IPolylineDelegate$a extends android.os.Binder implements com.google.android.gms.maps.model.internal.IPolylineDelegate {
    // Methods
    public static com.google.android.gms.maps.model.internal.IPolylineDelegate be(
            android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.model.internal.IPolylineDelegate )
        return (com.google.android.gms.maps.model.internal.IPolylineDelegate)LocalInterface;
      else
        return (com.google.android.gms.maps.model.internal.IPolylineDelegate)new com.google.android.gms.maps.model.internal.IPolylineDelegate$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5 = false;
      String v7 = null; // RETVAL
      java.util.List v8 = null; // RETVAL
      float v9 = 0.0f; // RETVAL
      int v10 = 0; // RETVAL
      float v11 = 0.0f; // RETVAL
      boolean v12 = false; // RETVAL
      int v13 = 0;
      boolean v14 = false; // RETVAL
      boolean v15 = false; // RETVAL
      int v16 = 0; // RETVAL
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
            if ( (_sw_1 == (16)) ) { _pc = 17; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 18; continue _sm; }
            _pc = 19;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            this.a();
            p2.writeNoException();
            return v5;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            v7 = this.b();
            p2.writeNoException();
            p2.writeString(v7);
            return v5;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            this.a(p1.createTypedArrayList((android.os.Parcelable.Creator)LatLng.CREATOR));
            p2.writeNoException();
            return v5;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            v8 = this.c();
            p2.writeNoException();
            p2.writeTypedList(v8);
            return v5;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            this.a(p1.readFloat());
            p2.writeNoException();
            return v5;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            v9 = this.d();
            p2.writeNoException();
            p2.writeFloat(v9);
            return v5;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            this.a(p1.readInt());
            p2.writeNoException();
            return v5;
          case 8:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            v10 = this.e();
            p2.writeNoException();
            p2.writeInt(v10);
            return v5;
          case 9:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            this.b(p1.readFloat());
            p2.writeNoException();
            return v5;
          case 10:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            v11 = this.f();
            p2.writeNoException();
            p2.writeFloat(v11);
            return v5;
          case 11:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            this.a(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 12:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            v12 = this.g();
            p2.writeNoException();
            v13 = v12 ? 1 : 0;
            _pc = 16;
            continue _sm;
          case 13:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            this.b(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 14:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            v14 = this.h();
            p2.writeNoException();
            v13 = v14 ? 1 : 0;
            _pc = 16;
            continue _sm;
          case 15:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            v15 = this.a(be(p1.readStrongBinder()));
            p2.writeNoException();
            v13 = v15 ? 1 : 0;
            _pc = 16;
            continue _sm;
          case 16:
            p2.writeInt(v13);
            _pc = 20;
            continue _sm;
          case 17:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            v16 = this.i();
            p2.writeNoException();
            p2.writeInt(v16);
            _pc = 20;
            continue _sm;
          case 18:
            p2.writeString("com.google.android.gms.maps.model.internal.IPolylineDelegate");
            _pc = 20;
            continue _sm;
          case 19:
            v5 = super.onTransact(p0, p1, p2, p3);
            _pc = 20;
            continue _sm;
          case 20:
            return v5;
        }
      }
}

}
