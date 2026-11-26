// Decompiled from classes.dex (SourceFile: o$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

public abstract class o$a extends android.os.Binder implements com.google.android.gms.maps.internal.o {
    // Methods
    public o$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.maps.internal.IOnMyLocationChangeListener");
    }

    public static com.google.android.gms.maps.internal.o aN(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.IOnMyLocationChangeListener");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.internal.o )
        return (com.google.android.gms.maps.internal.o)LocalInterface;
      else
        return (com.google.android.gms.maps.internal.o)new com.google.android.gms.maps.internal.o$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.maps.internal.IOnMyLocationChangeListener");
          this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.maps.internal.IOnMyLocationChangeListener");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
