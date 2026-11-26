// Decompiled from classes.dex (SourceFile: n$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

public abstract class n$a extends android.os.Binder implements com.google.android.gms.maps.internal.n {
    // Methods
    public n$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.maps.internal.IOnMyLocationButtonClickListener");
    }

    public static com.google.android.gms.maps.internal.n aM(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.internal.IOnMyLocationButtonClickListener");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.internal.n )
        return (com.google.android.gms.maps.internal.n)LocalInterface;
      else
        return (com.google.android.gms.maps.internal.n)new com.google.android.gms.maps.internal.n$a$a(p0);
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
          p1.enforceInterface("com.google.android.gms.maps.internal.IOnMyLocationButtonClickListener");
          v7 = this.a();
          p2.writeNoException();
          p2.writeInt(com.gameloft.android.DecompRT.b2i(v7));
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.maps.internal.IOnMyLocationButtonClickListener");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
