// Decompiled from classes.dex (SourceFile: IRoomServiceCallbacks$Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import android.os.ParcelFileDescriptor;
public abstract class IRoomServiceCallbacks$Stub extends android.os.Binder implements com.google.android.gms.games.internal.IRoomServiceCallbacks {
    // Methods
    public IRoomServiceCallbacks$Stub()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.games.internal.IRoomServiceCallbacks");
    }

    public static com.google.android.gms.games.internal.IRoomServiceCallbacks am(
            android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.games.internal.IRoomServiceCallbacks )
        return (com.google.android.gms.games.internal.IRoomServiceCallbacks)LocalInterface;
      else
        return (com.google.android.gms.games.internal.IRoomServiceCallbacks)new com.google.android.gms.games.internal.IRoomServiceCallbacks$Stub$Proxy(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      boolean v6;
      v5 = null;
      switch ( p0 )
      {
        case 1001:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.a(p1.readInt(), p1.readInt(), p1.readString());
          v6 = true;
          break;
        case 1002:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.a(p1.readString(), p1.createByteArray(), p1.readInt());
          v6 = true;
          break;
        case 1003:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.a(p1.readString());
          v6 = true;
          break;
        case 1004:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.b(p1.readString());
          v6 = true;
          break;
        case 1005:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.c(p1.readString());
          v6 = true;
          break;
        case 1006:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.d(p1.readString());
          v6 = true;
          break;
        case 1007:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.e(p1.readString());
          v6 = true;
          break;
        case 1008:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.a(p1.readString(), p1.createStringArray());
          v6 = true;
          break;
        case 1009:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.b(p1.readString(), p1.createStringArray());
          v6 = true;
          break;
        case 1010:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.c(p1.readString(), p1.createStringArray());
          v6 = true;
          break;
        case 1011:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.d(p1.readString(), p1.createStringArray());
          v6 = true;
          break;
        case 1012:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.e(p1.readString(), p1.createStringArray());
          v6 = true;
          break;
        case 1013:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.f(p1.readString(), p1.createStringArray());
          v6 = true;
          break;
        case 1014:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.f(p1.readString());
          v6 = true;
          break;
        case 1015:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.g(p1.readString());
          v6 = true;
          break;
        case 1016:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.a();
          v6 = true;
          break;
        case 1017:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.g(p1.readString(), p1.createStringArray());
          v6 = true;
          break;
        case 1018:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.h(p1.readString());
          v6 = true;
          break;
        case 1019:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.i(p1.readString());
          v6 = true;
          break;
        case 1020:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.a(p1.readInt());
          v6 = true;
          break;
        case 1021:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.a(p1.readStrongBinder());
          v6 = true;
          break;
        case 1022:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = ConnectionInfoCreator.bf(p1);
          this.a((com.google.android.gms.games.internal.ConnectionInfo)v5);
          v6 = true;
          break;
        case 1023:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.b();
          v6 = true;
          break;
        case 1024:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          if ( p1.readInt() != 0 )
            v5 = (android.os.ParcelFileDescriptor)android.os.ParcelFileDescriptor.CREATOR.createFromParcel(p1);
          this.a((android.os.ParcelFileDescriptor)v5, p1.readInt());
          v6 = true;
          break;
        case 1025:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          this.a(p1.readString(), p1.readInt());
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.games.internal.IRoomServiceCallbacks");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
