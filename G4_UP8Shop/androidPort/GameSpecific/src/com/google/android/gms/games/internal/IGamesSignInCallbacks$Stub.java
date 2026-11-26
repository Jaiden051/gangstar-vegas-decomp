// Decompiled from classes.dex (SourceFile: IGamesSignInCallbacks$Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import android.content.Intent;
public abstract class IGamesSignInCallbacks$Stub extends android.os.Binder implements com.google.android.gms.games.internal.IGamesSignInCallbacks {
    // Methods
    public IGamesSignInCallbacks$Stub()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.games.internal.IGamesSignInCallbacks");
    }

    public static com.google.android.gms.games.internal.IGamesSignInCallbacks ak(
            android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.games.internal.IGamesSignInCallbacks");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.games.internal.IGamesSignInCallbacks )
        return (com.google.android.gms.games.internal.IGamesSignInCallbacks)LocalInterface;
      else
        return (com.google.android.gms.games.internal.IGamesSignInCallbacks)new com.google.android.gms.games.internal.IGamesSignInCallbacks$Stub$Proxy(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      boolean v6;
      int Int;
      v5 = null;
      switch ( p0 )
      {
        case 5001:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInCallbacks");
          Int = p1.readInt();
          if ( p1.readInt() != 0 )
            v5 = Intent.CREATOR.createFromParcel(p1);
          this.a(Int, (android.content.Intent)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 5002:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.a((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 5003:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.b((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 5004:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInCallbacks");
          this.a(p1.readInt());
          p2.writeNoException();
          v6 = true;
          break;
        case 5005:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.c((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          v6 = true;
          break;
        case 5006:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInCallbacks");
          this.b(p1.readInt());
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.games.internal.IGamesSignInCallbacks");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
