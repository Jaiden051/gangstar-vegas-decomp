// Decompiled from classes.dex (SourceFile: gd$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class gd$a extends android.os.Binder implements com.google.android.gms.internal.gd {
    // Methods
    public static com.google.android.gms.internal.gd F(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.appstate.internal.IAppStateService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.gd )
        return (com.google.android.gms.internal.gd)LocalInterface;
      else
        return (com.google.android.gms.internal.gd)new com.google.android.gms.internal.gd$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      int v7; // RETVAL
      int v8; // RETVAL
    
      v5 = true;
      switch ( p0 )
      {
        case 5001:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateService");
          v7 = this.a();
          p2.writeNoException();
          p2.writeInt(v7);
          break;
        case 5002:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateService");
          v8 = this.b();
          p2.writeNoException();
          p2.writeInt(v8);
          break;
        case 5003:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateService");
          this.a(gc$a.E(p1.readStrongBinder()), p1.readInt(), p1.createByteArray());
          p2.writeNoException();
          break;
        case 5004:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateService");
          this.a(gc$a.E(p1.readStrongBinder()), p1.readInt());
          p2.writeNoException();
          break;
        case 5005:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateService");
          this.a(gc$a.E(p1.readStrongBinder()));
          p2.writeNoException();
          break;
        case 5006:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateService");
          this.a(gc$a.E(p1.readStrongBinder()), p1.readInt(), p1.readString(), p1.createByteArray());
          p2.writeNoException();
          break;
        case 5007:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateService");
          this.b(gc$a.E(p1.readStrongBinder()), p1.readInt());
          p2.writeNoException();
          break;
        case 5008:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateService");
          this.b(gc$a.E(p1.readStrongBinder()));
          p2.writeNoException();
          break;
        case 5009:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateService");
          this.c(gc$a.E(p1.readStrongBinder()));
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.appstate.internal.IAppStateService");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
