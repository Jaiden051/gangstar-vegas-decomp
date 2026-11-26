// Decompiled from classes.dex (SourceFile: IProjectionDelegate$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Parcel;
import com.google.android.gms.maps.model.LatLngCreator;
import com.google.android.gms.maps.model.VisibleRegionCreator;
class IProjectionDelegate$a$a implements com.google.android.gms.maps.internal.IProjectionDelegate {
    // Fields
    private android.os.IBinder a;

    // Methods
    IProjectionDelegate$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.dynamic.d a(com.google.android.gms.maps.model.LatLng p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      com.google.android.gms.dynamic.d result; // RETVAL
    
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IProjectionDelegate");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(2, v2, v3, 0);
        v4.readException();
        result = com.google.android.gms.dynamic.d$a.ag(v4.readStrongBinder());
        v4.recycle();
        v2.recycle();
        return result;
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
    }

    public final com.google.android.gms.maps.model.LatLng a(com.google.android.gms.dynamic.d p0)
    {
      com.google.android.gms.maps.model.LatLng v2 = null;
      android.os.Parcel v3 = null;
      android.os.Parcel v4 = null; // RETVAL
      android.os.Parcel v5 = null;
      android.os.IBinder v6 = null;
      com.google.android.gms.maps.model.LatLng v7 = null; // RETVAL
      Throwable _cv_1 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              v2 = null;
              v3 = Parcel.obtain();
              v4 = Parcel.obtain();
              v5 = v4;
              _ehCatchPc = 2;
              v3.writeInterfaceToken("com.google.android.gms.maps.internal.IProjectionDelegate");
              if ( p0 != null )
              v6 = p0.asBinder();
              else
              v6 = null;
              v3.writeStrongBinder(v6);
              this.a.transact(1, v3, v5, 0);
              v5.readException();
              if ( v5.readInt() != 0 )
              {
              v7 = LatLngCreator._typed_createFromParcel(v5);
              { _pc = 4; continue _sm; }
              }
              _pc = 1;
              continue _sm;
            case 1:
              v5.recycle();
              v3.recycle();
              return v2;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v4.recycle();
              v3.recycle();
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              v2 = v7;
              _pc = 1;
              continue _sm;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    public final com.google.android.gms.maps.model.VisibleRegion a()
 throws android.os.RemoteException {
      android.os.Parcel v1 = null;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3 = null;
      com.google.android.gms.maps.model.VisibleRegion v4; // RETVAL
      com.google.android.gms.maps.model.VisibleRegion v5 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v1 = Parcel.obtain();
            v2 = Parcel.obtain();
            v3 = v2;
            try
            {
            v1.writeInterfaceToken("com.google.android.gms.maps.internal.IProjectionDelegate");
            this.a.transact(3, v1, v2, 0);
            v3.readException();
            if ( v3.readInt() == 0 )
            {
            v5 = null;
            { _pc = 1; continue _sm; }
            }
            v4 = VisibleRegionCreator._typed_createFromParcel(v3);
            }
            catch ( Throwable v7 )
            {
            v2.recycle();
            v1.recycle();
            throw v7;
            }
            v5 = v4;
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v3.recycle();
            v1.recycle();
            return v5;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

}
