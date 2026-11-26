// Decompiled from classes.dex (SourceFile: p$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import com.google.android.gms.maps.model.StreetViewPanoramaCameraCreator;
public abstract class p$a extends android.os.Binder implements com.google.android.gms.maps.internal.p {
    // Methods
    public p$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.maps.internal.IOnStreetViewPanoramaCameraChangeListener");
    }

    public static com.google.android.gms.maps.internal.p aO(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.IOnStreetViewPanoramaCameraChangeListener");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.internal.p )
        return (com.google.android.gms.maps.internal.p)LocalInterface;
      else
        return (com.google.android.gms.maps.internal.p)new com.google.android.gms.maps.internal.p$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      com.google.android.gms.maps.model.StreetViewPanoramaCamera v7;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.maps.internal.IOnStreetViewPanoramaCameraChangeListener");
          if ( p1.readInt() != 0 )
            v7 = StreetViewPanoramaCameraCreator._typed_createFromParcel(p1);
          else
            v7 = null;
          this.a(v7);
          p2.writeNoException();
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.maps.internal.IOnStreetViewPanoramaCameraChangeListener");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
