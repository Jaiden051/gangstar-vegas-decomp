// Decompiled from classes.dex (SourceFile: IStreetViewPanoramaFragmentDelegate$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Bundle;
import com.google.android.gms.maps.StreetViewPanoramaOptionsCreator;
public abstract class IStreetViewPanoramaFragmentDelegate$a extends android.os.Binder implements com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate {
    // Methods
    public static com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate aU(
            android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
      if ( LocalInterface != null
        && LocalInterface instanceof com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate )
      {
        return (com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate)LocalInterface;
      }
      else
      {
        return (com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate)new com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate$a$a(p0);
      }
    }

    public boolean onTransact(
            int p0,
            android.os.Parcel p1,
            android.os.Parcel p2,
            int p3)
 throws android.os.RemoteException {
      android.os.IBinder v5;
      boolean v6;
      com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate v8; // RETVAL
      android.os.IBinder v9;
      com.google.android.gms.dynamic.d v10;
      com.google.android.gms.maps.StreetViewPanoramaOptions v11;
      android.os.Bundle v12;
      android.os.Bundle v13;
      com.google.android.gms.dynamic.d v14;
      com.google.android.gms.dynamic.d v15;
      android.os.Bundle v16;
      com.google.android.gms.dynamic.d v17; // RETVAL
      android.os.Bundle v18;
      boolean v19; // RETVAL
    
      v5 = null;
      v6 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
          v8 = this.a();
          p2.writeNoException();
          if ( v8 != null )
            v9 = v8.asBinder();
          else
            v9 = null;
          p2.writeStrongBinder(v9);
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
          v10 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v11 = StreetViewPanoramaOptionsCreator._typed_createFromParcel(p1);
          else
            v11 = null;
          if ( p1.readInt() != 0 )
            v12 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v12 = null;
          this.a(v10, v11, v12);
          p2.writeNoException();
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
          if ( p1.readInt() != 0 )
            v13 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v13 = null;
          this.a(v13);
          p2.writeNoException();
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
          v14 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
          v15 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v16 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v16 = null;
          v17 = this.a(v14, v15, v16);
          p2.writeNoException();
          if ( v17 != null )
            v5 = v17.asBinder();
          p2.writeStrongBinder(v5);
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
          this.b();
          p2.writeNoException();
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
          this.c();
          p2.writeNoException();
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
          this.d();
          p2.writeNoException();
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
          this.e();
          p2.writeNoException();
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
          this.f();
          p2.writeNoException();
          break;
        case 10:
          p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
          if ( p1.readInt() != 0 )
            v18 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v18 = null;
          this.b(v18);
          p2.writeNoException();
          if ( v18 != null )
          {
            p2.writeInt(1);
            v18.writeToParcel(p2, 1);
          }
          else
          {
            p2.writeInt(0);
          }
          break;
        case 11:
          p1.enforceInterface("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
          v19 = this.g();
          p2.writeNoException();
          p2.writeInt(com.gameloft.android.DecompRT.b2i(v19));
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate");
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
