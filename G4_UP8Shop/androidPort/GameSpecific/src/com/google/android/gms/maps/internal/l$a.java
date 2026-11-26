// Decompiled from classes.dex (SourceFile: l$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

public abstract class l$a extends android.os.Binder implements com.google.android.gms.maps.internal.l {
    // Methods
    public l$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.maps.internal.IOnMarkerClickListener");
    }

    public static com.google.android.gms.maps.internal.l aK(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.IOnMarkerClickListener");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.internal.l )
        return (com.google.android.gms.maps.internal.l)LocalInterface;
      else
        return (com.google.android.gms.maps.internal.l)new com.google.android.gms.maps.internal.l$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      boolean v7; // RETVAL
    
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.maps.internal.IOnMarkerClickListener");
          v7 = this.a(com.google.android.gms.maps.model.internal.f$a.bc(p1.readStrongBinder()));
          p2.writeNoException();
          p2.writeInt(com.gameloft.android.DecompRT.b2i(v7));
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.maps.internal.IOnMarkerClickListener");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
