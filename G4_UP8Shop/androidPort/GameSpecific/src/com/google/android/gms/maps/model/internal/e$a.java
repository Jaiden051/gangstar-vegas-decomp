// Decompiled from classes.dex (SourceFile: e$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model.internal;

public abstract class e$a extends android.os.Binder implements com.google.android.gms.maps.model.internal.e {
    // Methods
    public static com.google.android.gms.maps.model.internal.e bb(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.maps.model.internal.IIndoorLevelDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.maps.model.internal.e )
        return (com.google.android.gms.maps.model.internal.e)LocalInterface;
      else
        return (com.google.android.gms.maps.model.internal.e)new com.google.android.gms.maps.model.internal.e$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      String v7; // RETVAL
      String v8; // RETVAL
      boolean v9; // RETVAL
      int v10; // RETVAL
    
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.maps.model.internal.IIndoorLevelDelegate");
          v7 = this.a();
          p2.writeNoException();
          p2.writeString(v7);
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.maps.model.internal.IIndoorLevelDelegate");
          v8 = this.b();
          p2.writeNoException();
          p2.writeString(v8);
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.maps.model.internal.IIndoorLevelDelegate");
          this.c();
          p2.writeNoException();
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.maps.model.internal.IIndoorLevelDelegate");
          v9 = this.a(bb(p1.readStrongBinder()));
          p2.writeNoException();
          p2.writeInt(com.gameloft.android.DecompRT.b2i(v9));
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.maps.model.internal.IIndoorLevelDelegate");
          v10 = this.d();
          p2.writeNoException();
          p2.writeInt(v10);
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.maps.model.internal.IIndoorLevelDelegate");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
