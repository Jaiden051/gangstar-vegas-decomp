// Decompiled from classes.dex (SourceFile: IStreetViewPanoramaDelegate$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Parcel;
import com.google.android.gms.maps.model.StreetViewPanoramaCameraCreator;
import com.google.android.gms.maps.model.StreetViewPanoramaLocationCreator;
import com.google.android.gms.maps.model.StreetViewPanoramaOrientationCreator;
class IStreetViewPanoramaDelegate$a$a implements com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate {
    // Fields
    private android.os.IBinder a;

    // Methods
    IStreetViewPanoramaDelegate$a$a(android.os.IBinder p0)
    {
      super();
      this.a = p0;
    }

    public final com.google.android.gms.dynamic.d a(
            com.google.android.gms.maps.model.StreetViewPanoramaOrientation p0)
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
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(19, v2, v3, 0);
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

    public final com.google.android.gms.maps.model.StreetViewPanoramaOrientation a(
            com.google.android.gms.dynamic.d p0)
    {
      com.google.android.gms.maps.model.StreetViewPanoramaOrientation v2 = null;
      android.os.Parcel v3 = null;
      android.os.Parcel v4 = null; // RETVAL
      android.os.Parcel v5 = null;
      android.os.IBinder v6 = null;
      com.google.android.gms.maps.model.StreetViewPanoramaOrientation v7 = null; // RETVAL
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
              v3.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
              if ( p0 != null )
              v6 = p0.asBinder();
              else
              v6 = null;
              v3.writeStrongBinder(v6);
              this.a.transact(18, v3, v5, 0);
              v5.readException();
              if ( v5.readInt() != 0 )
              {
              v7 = StreetViewPanoramaOrientationCreator._typed_createFromParcel(v5);
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

    public final void a(com.google.android.gms.maps.internal.p p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(16, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void a(com.google.android.gms.maps.internal.q p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(15, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void a(com.google.android.gms.maps.internal.r p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      android.os.IBinder v5;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        if ( p0 != null )
          v5 = p0.asBinder();
        else
          v5 = null;
        v2.writeStrongBinder(v5);
        this.a.transact(17, v2, v4, 0);
        v4.readException();
      }
      catch ( Throwable v6 )
      {
        v3.recycle();
        v2.recycle();
        throw v6;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void a(com.google.android.gms.maps.model.LatLng p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        if ( p0 != null )
        {
          v2.writeInt(1);
          p0.writeToParcel(v2, 0);
        }
        else
        {
          v2.writeInt(0);
        }
        this.a.transact(12, v2, v3, 0);
        v4.readException();
        v4.recycle();
        v2.recycle();
        return;
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
    }

    public final void a(com.google.android.gms.maps.model.LatLng p0, int p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        if ( p0 != null )
        {
          v3.writeInt(1);
          p0.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        v3.writeInt(p1);
        this.a.transact(13, v3, v4, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
    }

    public final void a(
            com.google.android.gms.maps.model.StreetViewPanoramaCamera p0,
            long p1)
 throws android.os.RemoteException {
      android.os.Parcel v3;
      android.os.Parcel v4; // RETVAL
      android.os.Parcel v5;
      v3 = Parcel.obtain();
      v4 = Parcel.obtain();
      v5 = v4;
      try
      {
        v3.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        if ( p0 != null )
        {
          v3.writeInt(1);
          p0.writeToParcel(v3, 0);
        }
        else
        {
          v3.writeInt(0);
        }
        v3.writeLong(p1);
        this.a.transact(9, v3, v4, 0);
        v5.readException();
        v5.recycle();
        v3.recycle();
        return;
      }
      catch ( Throwable v6 )
      {
        v4.recycle();
        v3.recycle();
        throw v6;
      }
    }

    public final void a(String p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        v2.writeString(p0);
        this.a.transact(11, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final void a(boolean p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(1, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final boolean a()
 throws android.os.RemoteException {
      boolean v1;
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      int Int; // RETVAL
    
      v1 = false;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        this.a.transact(5, v2, v3, 0);
        v4.readException();
        Int = v4.readInt();
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      if ( Int != 0 )
        v1 = true;
      v4.recycle();
      v2.recycle();
      return v1;
    }

    public android.os.IBinder asBinder()
    {
      return this.a;
    }

    public final void b(boolean p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(2, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final boolean b()
 throws android.os.RemoteException {
      boolean v1;
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      int Int; // RETVAL
    
      v1 = false;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        this.a.transact(6, v2, v3, 0);
        v4.readException();
        Int = v4.readInt();
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      if ( Int != 0 )
        v1 = true;
      v4.recycle();
      v2.recycle();
      return v1;
    }

    public final void c(boolean p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(3, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final boolean c()
 throws android.os.RemoteException {
      boolean v1;
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      int Int; // RETVAL
    
      v1 = false;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        this.a.transact(7, v2, v3, 0);
        v4.readException();
        Int = v4.readInt();
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      if ( Int != 0 )
        v1 = true;
      v4.recycle();
      v2.recycle();
      return v1;
    }

    public final void d(boolean p0)
 throws android.os.RemoteException {
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        v2.writeInt(com.gameloft.android.DecompRT.b2i(p0));
        this.a.transact(4, v2, v3, 0);
        v4.readException();
      }
      catch ( Throwable v5 )
      {
        v3.recycle();
        v2.recycle();
        throw v5;
      }
      v4.recycle();
      v2.recycle();
    }

    public final boolean d()
 throws android.os.RemoteException {
      boolean v1;
      android.os.Parcel v2;
      android.os.Parcel v3; // RETVAL
      android.os.Parcel v4;
      int Int; // RETVAL
    
      v1 = false;
      v2 = Parcel.obtain();
      v3 = Parcel.obtain();
      v4 = v3;
      try
      {
        v2.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
        this.a.transact(8, v2, v3, 0);
        v4.readException();
        Int = v4.readInt();
      }
      catch ( Throwable v7 )
      {
        v3.recycle();
        v2.recycle();
        throw v7;
      }
      if ( Int != 0 )
        v1 = true;
      v4.recycle();
      v2.recycle();
      return v1;
    }

    public final com.google.android.gms.maps.model.StreetViewPanoramaCamera e()
 throws android.os.RemoteException {
      android.os.Parcel v1 = null;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3 = null;
      com.google.android.gms.maps.model.StreetViewPanoramaCamera v4; // RETVAL
      com.google.android.gms.maps.model.StreetViewPanoramaCamera v5 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v1 = Parcel.obtain();
            v2 = Parcel.obtain();
            v3 = v2;
            try
            {
            v1.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            this.a.transact(10, v1, v2, 0);
            v3.readException();
            if ( v3.readInt() == 0 )
            {
            v5 = null;
            { _pc = 1; continue _sm; }
            }
            v4 = StreetViewPanoramaCameraCreator._typed_createFromParcel(v3);
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

    public final com.google.android.gms.maps.model.StreetViewPanoramaLocation f()
 throws android.os.RemoteException {
      android.os.Parcel v1 = null;
      android.os.Parcel v2; // RETVAL
      android.os.Parcel v3 = null;
      com.google.android.gms.maps.model.StreetViewPanoramaLocation v4; // RETVAL
      com.google.android.gms.maps.model.StreetViewPanoramaLocation v5 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v1 = Parcel.obtain();
            v2 = Parcel.obtain();
            v3 = v2;
            try
            {
            v1.writeInterfaceToken("com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate");
            this.a.transact(14, v1, v2, 0);
            v3.readException();
            if ( v3.readInt() == 0 )
            {
            v5 = null;
            { _pc = 1; continue _sm; }
            }
            v4 = StreetViewPanoramaLocationCreator._typed_createFromParcel(v3);
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

}
