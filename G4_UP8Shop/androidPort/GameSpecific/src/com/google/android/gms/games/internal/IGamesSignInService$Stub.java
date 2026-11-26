// Decompiled from classes.dex (SourceFile: IGamesSignInService$Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

public abstract class IGamesSignInService$Stub extends android.os.Binder implements com.google.android.gms.games.internal.IGamesSignInService {
    // Methods
    public IGamesSignInService$Stub()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.games.internal.IGamesSignInService");
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      String v7; // RETVAL
      String v8; // RETVAL
      String v9; // RETVAL
    
      v5 = true;
      switch ( p0 )
      {
        case 5001:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInService");
          v7 = this.a(p1.readString());
          p2.writeNoException();
          p2.writeString(v7);
          break;
        case 5002:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInService");
          v8 = this.b(p1.readString());
          p2.writeNoException();
          p2.writeString(v8);
          break;
        case 5003:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInService");
          this.a(IGamesSignInCallbacks$Stub.ak(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.createStringArray(), p1.readString());
          p2.writeNoException();
          break;
        case 5004:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInService");
          this.a(IGamesSignInCallbacks$Stub.ak(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.createStringArray());
          p2.writeNoException();
          break;
        case 5005:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInService");
          this.a(IGamesSignInCallbacks$Stub.ak(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.readString());
          p2.writeNoException();
          break;
        case 5006:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInService");
          this.a(IGamesSignInCallbacks$Stub.ak(p1.readStrongBinder()), p1.readString(), p1.readString());
          p2.writeNoException();
          break;
        case 5007:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInService");
          this.b(IGamesSignInCallbacks$Stub.ak(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.readString());
          p2.writeNoException();
          break;
        case 5008:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInService");
          this.b(IGamesSignInCallbacks$Stub.ak(p1.readStrongBinder()), p1.readString(), p1.readString(), p1.createStringArray());
          p2.writeNoException();
          break;
        case 5009:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInService");
          v9 = this.a(p1.readString(), p1.readInt() != 0);
          p2.writeNoException();
          p2.writeString(v9);
          break;
        case 9001:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesSignInService");
          this.a(p1.readString(), p1.readString());
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.games.internal.IGamesSignInService");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
