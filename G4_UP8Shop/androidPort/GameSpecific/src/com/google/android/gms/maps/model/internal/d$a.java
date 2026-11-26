// Decompiled from classes.dex (SourceFile: d$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

public abstract class d$a extends android.os.Binder implements com.google.android.gms.maps.model.internal.d {
    // Methods
    public static com.google.android.gms.maps.model.internal.d ba(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.model.internal.IIndoorBuildingDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.model.internal.d )
        return (com.google.android.gms.maps.model.internal.d)LocalInterface;
      else
        return (com.google.android.gms.maps.model.internal.d)new com.google.android.gms.maps.model.internal.d$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5 = false;
      int v7 = 0; // RETVAL
      int v8 = 0; // RETVAL
      java.util.List v9 = null; // RETVAL
      boolean v10 = false; // RETVAL
      int v11 = 0;
      boolean v12 = false; // RETVAL
      int v13 = 0; // RETVAL
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
            if ( (_sw_1 == (6)) ) { _pc = 7; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 8; continue _sm; }
            _pc = 9;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IIndoorBuildingDelegate");
            v7 = this.a();
            p2.writeNoException();
            p2.writeInt(v7);
            _pc = 10;
            continue _sm;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IIndoorBuildingDelegate");
            v8 = this.b();
            p2.writeNoException();
            p2.writeInt(v8);
            _pc = 10;
            continue _sm;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IIndoorBuildingDelegate");
            v9 = this.c();
            p2.writeNoException();
            p2.writeBinderList(v9);
            _pc = 10;
            continue _sm;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IIndoorBuildingDelegate");
            v10 = this.d();
            p2.writeNoException();
            v11 = v10 ? 1 : 0;
            _pc = 6;
            continue _sm;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IIndoorBuildingDelegate");
            v12 = this.a(ba(p1.readStrongBinder()));
            p2.writeNoException();
            v11 = v12 ? 1 : 0;
            _pc = 6;
            continue _sm;
          case 6:
            p2.writeInt(v11);
            _pc = 10;
            continue _sm;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.model.internal.IIndoorBuildingDelegate");
            v13 = this.e();
            p2.writeNoException();
            p2.writeInt(v13);
            _pc = 10;
            continue _sm;
          case 8:
            p2.writeString("com.google.android.gms.maps.model.internal.IIndoorBuildingDelegate");
            _pc = 10;
            continue _sm;
          case 9:
            v5 = super.onTransact(p0, p1, p2, p3);
            _pc = 10;
            continue _sm;
          case 10:
            return v5;
        }
      }
}

}
