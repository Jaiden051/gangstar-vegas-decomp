// Decompiled from classes.dex (SourceFile: IRoomService$Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

public abstract class IRoomService$Stub extends android.os.Binder implements com.google.android.gms.games.internal.IRoomService {
    // Methods
    public IRoomService$Stub()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.games.internal.IRoomService");
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      boolean v6;
      com.google.android.gms.common.data.DataHolder v8;
      v5 = false;
      v6 = true;
      switch ( p0 )
      {
        case 1001:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.a(p1.readStrongBinder(), IRoomServiceCallbacks$Stub.am(p1.readStrongBinder()));
          break;
        case 1002:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.a();
          break;
        case 1003:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.b();
          break;
        case 1004:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.a(p1.readString(), p1.readString(), p1.readString());
          break;
        case 1005:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.c();
          break;
        case 1006:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          if ( p1.readInt() != 0 )
            v8 = com.google.android.gms.common.data.f.x(p1);
          else
            v8 = null;
          if ( p1.readInt() != 0 )
            v5 = true;
          this.a(v8, v5);
          break;
        case 1007:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.d();
          break;
        case 1008:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.a(p1.readInt() != 0);
          break;
        case 1009:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.a(p1.createByteArray(), p1.readString(), p1.readInt());
          break;
        case 1010:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.a(p1.createByteArray(), p1.createStringArray());
          break;
        case 1011:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.a(p1.readString(), p1.readInt());
          break;
        case 1012:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.b(p1.readString(), p1.readInt());
          break;
        case 1013:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.a(p1.readString());
          break;
        case 1014:
          p1.enforceInterface("com.google.android.gms.games.internal.IRoomService");
          this.b(p1.readString());
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.games.internal.IRoomService");
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
