// Decompiled from classes.dex (SourceFile: gc$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class gc$a extends android.os.Binder implements com.google.android.gms.internal.gc {
    // Methods
    public gc$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.appstate.internal.IAppStateCallbacks");
    }

    public static com.google.android.gms.internal.gc E(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.appstate.internal.IAppStateCallbacks");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.gc )
        return (com.google.android.gms.internal.gc)LocalInterface;
      else
        return (com.google.android.gms.internal.gc)new com.google.android.gms.internal.gc$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      com.google.android.gms.common.data.DataHolder v5;
      boolean v6;
      int Int;
      v5 = null;
      switch ( p0 )
      {
        case 5001:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateCallbacks");
          Int = p1.readInt();
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.a(Int, v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 5002:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.a(v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 5003:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateCallbacks");
          this.a(p1.readInt(), p1.readInt());
          p2.writeNoException();
          v6 = true;
          break;
        case 5004:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateCallbacks");
          this.a();
          p2.writeNoException();
          v6 = true;
          break;
        case 5005:
          p1.enforceInterface("com.google.android.gms.appstate.internal.IAppStateCallbacks");
          this.a(p1.readInt());
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.appstate.internal.IAppStateCallbacks");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
