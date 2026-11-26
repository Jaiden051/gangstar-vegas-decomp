// Decompiled from classes.dex (SourceFile: IUiSettingsDelegate$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

public abstract class IUiSettingsDelegate$a extends android.os.Binder implements com.google.android.gms.maps.internal.IUiSettingsDelegate {
    // Methods
    public static com.google.android.gms.maps.internal.IUiSettingsDelegate aW(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.internal.IUiSettingsDelegate )
        return (com.google.android.gms.maps.internal.IUiSettingsDelegate)LocalInterface;
      else
        return (com.google.android.gms.maps.internal.IUiSettingsDelegate)new com.google.android.gms.maps.internal.IUiSettingsDelegate$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5 = false;
      boolean v7 = false; // RETVAL
      int v8 = 0;
      boolean v9 = false; // RETVAL
      boolean v10 = false; // RETVAL
      boolean v11 = false; // RETVAL
      boolean v12 = false; // RETVAL
      boolean v13 = false; // RETVAL
      boolean v14 = false; // RETVAL
      boolean v15 = false; // RETVAL
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
            if ( (_sw_1 == (1598968902)) ) { _pc = 19; continue _sm; }
            _pc = 20;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            this.a(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            this.b(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            this.c(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            this.d(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            this.e(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            this.f(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            this.g(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 8:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            this.h(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 9:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            v7 = this.a();
            p2.writeNoException();
            v8 = v7 ? 1 : 0;
            _pc = 18;
            continue _sm;
          case 10:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            v9 = this.b();
            p2.writeNoException();
            v8 = v9 ? 1 : 0;
            _pc = 18;
            continue _sm;
          case 11:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            v10 = this.c();
            p2.writeNoException();
            v8 = v10 ? 1 : 0;
            _pc = 18;
            continue _sm;
          case 12:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            v11 = this.d();
            p2.writeNoException();
            v8 = v11 ? 1 : 0;
            _pc = 18;
            continue _sm;
          case 13:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            v12 = this.e();
            p2.writeNoException();
            v8 = v12 ? 1 : 0;
            _pc = 18;
            continue _sm;
          case 14:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            v13 = this.f();
            p2.writeNoException();
            v8 = v13 ? 1 : 0;
            _pc = 18;
            continue _sm;
          case 15:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            v14 = this.g();
            p2.writeNoException();
            v8 = v14 ? 1 : 0;
            _pc = 18;
            continue _sm;
          case 16:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            this.i(p1.readInt() != 0);
            p2.writeNoException();
            return v5;
          case 17:
            p1.enforceInterface("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            v15 = this.h();
            p2.writeNoException();
            v8 = v15 ? 1 : 0;
            _pc = 18;
            continue _sm;
          case 18:
            p2.writeInt(v8);
            _pc = 21;
            continue _sm;
          case 19:
            p2.writeString("com.google.android.gms.maps.internal.IUiSettingsDelegate");
            _pc = 21;
            continue _sm;
          case 20:
            v5 = super.onTransact(p0, p1, p2, p3);
            _pc = 21;
            continue _sm;
          case 21:
            return v5;
        }
      }
}

}
