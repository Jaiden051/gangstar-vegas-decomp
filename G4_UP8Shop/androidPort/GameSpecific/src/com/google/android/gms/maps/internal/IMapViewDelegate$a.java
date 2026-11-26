// Decompiled from classes.dex (SourceFile: IMapViewDelegate$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Bundle;
public abstract class IMapViewDelegate$a extends android.os.Binder implements com.google.android.gms.maps.internal.IMapViewDelegate {
    // Methods
    public static com.google.android.gms.maps.internal.IMapViewDelegate aC(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.IMapViewDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.internal.IMapViewDelegate )
        return (com.google.android.gms.maps.internal.IMapViewDelegate)LocalInterface;
      else
        return (com.google.android.gms.maps.internal.IMapViewDelegate)new com.google.android.gms.maps.internal.IMapViewDelegate$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5 = null;
      boolean v6 = false;
      com.google.android.gms.maps.internal.IGoogleMapDelegate v8 = null; // RETVAL
      com.google.android.gms.dynamic.d v9 = null; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v5 = null;
            _sw_1 = (p0);
            if ( (_sw_1 == (1)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (4)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (6)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (7)) ) { _pc = 7; continue _sm; }
            if ( (_sw_1 == (8)) ) { _pc = 8; continue _sm; }
            if ( (_sw_1 == (1598968902)) ) { _pc = 10; continue _sm; }
            _pc = 11;
            continue _sm;
          case 1:
            p1.enforceInterface("com.google.android.gms.maps.internal.IMapViewDelegate");
            v8 = this.a();
            p2.writeNoException();
            if ( v8 != null )
            v5 = v8.asBinder();
            _pc = 9;
            continue _sm;
          case 2:
            p1.enforceInterface("com.google.android.gms.maps.internal.IMapViewDelegate");
            if ( p1.readInt() != 0 )
            v5 = Bundle.CREATOR.createFromParcel(p1);
            this.a((android.os.Bundle)v5);
            p2.writeNoException();
            v6 = true;
            _pc = 12;
            continue _sm;
          case 3:
            p1.enforceInterface("com.google.android.gms.maps.internal.IMapViewDelegate");
            this.b();
            p2.writeNoException();
            v6 = true;
            _pc = 12;
            continue _sm;
          case 4:
            p1.enforceInterface("com.google.android.gms.maps.internal.IMapViewDelegate");
            this.c();
            p2.writeNoException();
            v6 = true;
            _pc = 12;
            continue _sm;
          case 5:
            p1.enforceInterface("com.google.android.gms.maps.internal.IMapViewDelegate");
            this.d();
            p2.writeNoException();
            v6 = true;
            _pc = 12;
            continue _sm;
          case 6:
            p1.enforceInterface("com.google.android.gms.maps.internal.IMapViewDelegate");
            this.e();
            p2.writeNoException();
            v6 = true;
            _pc = 12;
            continue _sm;
          case 7:
            p1.enforceInterface("com.google.android.gms.maps.internal.IMapViewDelegate");
            if ( p1.readInt() != 0 )
            v5 = Bundle.CREATOR.createFromParcel(p1);
            this.b((android.os.Bundle)v5);
            p2.writeNoException();
            if ( v5 != null )
            {
            p2.writeInt(1);
            ((android.os.Bundle)v5).writeToParcel(p2, 1);
            }
            else
            {
            p2.writeInt(0);
            }
            v6 = true;
            _pc = 12;
            continue _sm;
          case 8:
            p1.enforceInterface("com.google.android.gms.maps.internal.IMapViewDelegate");
            v9 = this.f();
            p2.writeNoException();
            if ( v9 != null )
            v5 = v9.asBinder();
            _pc = 9;
            continue _sm;
          case 9:
            p2.writeStrongBinder((android.os.IBinder)v5);
            v6 = true;
            _pc = 12;
            continue _sm;
          case 10:
            p2.writeString("com.google.android.gms.maps.internal.IMapViewDelegate");
            v6 = true;
            _pc = 12;
            continue _sm;
          case 11:
            v6 = super.onTransact(p0, p1, p2, p3);
            _pc = 12;
            continue _sm;
          case 12:
            return v6;
        }
      }
}

}
