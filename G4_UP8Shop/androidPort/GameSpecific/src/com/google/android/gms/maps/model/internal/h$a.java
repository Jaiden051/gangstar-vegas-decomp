// Decompiled from classes.dex (SourceFile: h$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

public abstract class h$a extends android.os.Binder implements com.google.android.gms.maps.model.internal.h {
    // Methods
    public static com.google.android.gms.maps.model.internal.h bf(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.model.internal.h )
        return (com.google.android.gms.maps.model.internal.h)LocalInterface;
      else
        return (com.google.android.gms.maps.model.internal.h)new com.google.android.gms.maps.model.internal.h$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5 = false;
      String v7 = null; // RETVAL
      float v8 = 0.0f; // RETVAL
      boolean v9 = false; // RETVAL
      int v10 = 0;
      boolean v11 = false; // RETVAL
      int v12 = 0; // RETVAL
      boolean v13 = false; // RETVAL
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
            if ( (_sw_1 == (1598968902)) ) { _pc = 13; continue _sm; }
            _pc = 14;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
            this.a();
            p2.writeNoException();
            return v5;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
            this.b();
            p2.writeNoException();
            return v5;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
            v7 = this.c();
            p2.writeNoException();
            p2.writeString(v7);
            return v5;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
            this.a(p1.readFloat());
            p2.writeNoException();
            return v5;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
            v8 = this.d();
            p2.writeNoException();
            p2.writeFloat(v8);
            return v5;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
            this.a(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
            v9 = this.e();
            p2.writeNoException();
            v10 = v9 ? 1 : 0;
            _pc = 12;
            continue _sm;
          case 8:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
            v11 = this.a(bf(p1.readStrongBinder()));
            p2.writeNoException();
            v10 = v11 ? 1 : 0;
            _pc = 12;
            continue _sm;
          case 9:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
            v12 = this.f();
            p2.writeNoException();
            p2.writeInt(v12);
            return v5;
          case 10:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
            this.b(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 11:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
            v13 = this.g();
            p2.writeNoException();
            v10 = v13 ? 1 : 0;
            _pc = 12;
            continue _sm;
          case 12:
            p2.writeInt(v10);
            _pc = 15;
            continue _sm;
          case 13:
            p2.writeString("com.google.android.gms.maps.model.internal.ITileOverlayDelegate");
            _pc = 15;
            continue _sm;
          case 14:
            v5 = super.onTransact(p0, p1, p2, p3);
            _pc = 15;
            continue _sm;
          case 15:
            return v5;
        }
      }
}

}
