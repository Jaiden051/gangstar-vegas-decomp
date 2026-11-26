// Decompiled from classes.dex (SourceFile: IProjectionDelegate$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import com.google.android.gms.maps.model.LatLngCreator;
public abstract class IProjectionDelegate$a extends android.os.Binder implements com.google.android.gms.maps.internal.IProjectionDelegate {
    // Methods
    public static com.google.android.gms.maps.internal.IProjectionDelegate aR(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.IProjectionDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.internal.IProjectionDelegate )
        return (com.google.android.gms.maps.internal.IProjectionDelegate)LocalInterface;
      else
        return (com.google.android.gms.maps.internal.IProjectionDelegate)new com.google.android.gms.maps.internal.IProjectionDelegate$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      android.os.IBinder v5;
      boolean v6;
      com.google.android.gms.maps.model.LatLng v8; // RETVAL
      com.google.android.gms.maps.model.LatLng v9;
      com.google.android.gms.dynamic.d v10; // RETVAL
      com.google.android.gms.maps.model.VisibleRegion v11; // RETVAL
    
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.maps.internal.IProjectionDelegate");
          v8 = this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
          p2.writeNoException();
          if ( v8 != null )
          {
            p2.writeInt(1);
            v8.writeToParcel(p2, 1);
          }
          else
          {
            p2.writeInt(0);
          }
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.maps.internal.IProjectionDelegate");
          if ( p1.readInt() != 0 )
            v9 = LatLngCreator._typed_createFromParcel(p1);
          else
            v9 = null;
          v10 = this.a(v9);
          p2.writeNoException();
          if ( v10 != null )
            v5 = v10.asBinder();
          p2.writeStrongBinder(v5);
          v6 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.maps.internal.IProjectionDelegate");
          v11 = this.a();
          p2.writeNoException();
          if ( v11 != null )
          {
            p2.writeInt(1);
            v11.writeToParcel(p2, 1);
          }
          else
          {
            p2.writeInt(0);
          }
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.maps.internal.IProjectionDelegate");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
