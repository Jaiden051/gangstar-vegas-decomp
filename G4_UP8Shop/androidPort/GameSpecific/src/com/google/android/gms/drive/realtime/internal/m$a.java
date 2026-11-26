// Decompiled from classes.dex (SourceFile: m$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

public abstract class m$a extends android.os.Binder implements com.google.android.gms.drive.realtime.internal.m {
    // Methods
    public static com.google.android.gms.drive.realtime.internal.m ac(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.drive.realtime.internal.m )
        return (com.google.android.gms.drive.realtime.internal.m)LocalInterface;
      else
        return (com.google.android.gms.drive.realtime.internal.m)new com.google.android.gms.drive.realtime.internal.m$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      boolean v6;
      String String;
      String v9;
      int Int;
      String v11;
      int v12;
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), n$a.ad(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(c$a.S(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(o$a.ae(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), p1.readString(), f$a.V(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), l$a.ab(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          String = p1.readString();
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.a(String, (com.google.android.gms.common.data.DataHolder)v5, j$a.Z(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), j$a.Z(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.b(p1.readString(), l$a.ab(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.b(p1.readString(), n$a.ad(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 10:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), p1.readInt(), p1.readString(), j$a.Z(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 11:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), p1.readInt(), p1.readInt(), j$a.Z(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 12:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), p1.readString(), j$a.Z(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 13:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.b(p1.readString(), f$a.V(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 14:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.c(p1.readString(), l$a.ab(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 15:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          v9 = p1.readString();
          Int = p1.readInt();
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.a(v9, Int, (com.google.android.gms.common.data.DataHolder)v5, j$a.Z(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 16:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          v11 = p1.readString();
          v12 = p1.readInt();
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.a(v11, v12, (com.google.android.gms.common.data.DataHolder)v5, g$a.W(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 17:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), p1.readInt(), p1.readInt(), g$a.W(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 18:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.realtime.internal.BeginCompoundOperationRequest)com.google.android.gms.drive.realtime.internal.BeginCompoundOperationRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.realtime.internal.BeginCompoundOperationRequest)v5, o$a.ae(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 19:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.realtime.internal.EndCompoundOperationRequest)com.google.android.gms.drive.realtime.internal.EndCompoundOperationRequest.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.realtime.internal.EndCompoundOperationRequest)v5, o$a.ae(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 20:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), f$a.V(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 21:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), p1.readString(), g$a.W(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 22:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(j$a.Z(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 23:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.b(j$a.Z(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 24:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.c(c$a.S(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 25:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.d(c$a.S(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 26:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.realtime.internal.ParcelableIndexReference)com.google.android.gms.drive.realtime.internal.ParcelableIndexReference.CREATOR.createFromParcel(p1);
          this.a((com.google.android.gms.drive.realtime.internal.ParcelableIndexReference)v5, n$a.ad(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 27:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), k$a.aa(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 28:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), p1.readInt(), o$a.ae(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 29:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(l$a.ab(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 30:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readInt(), j$a.Z(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 31:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(e$a.U(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 32:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(d$a.T(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 33:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.b(c$a.S(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 34:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(i$a.Y(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 35:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.b(o$a.ae(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 36:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(h$a.X(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 37:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), p1.readInt(), p1.readString(), p1.readInt(), j$a.Z(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 38:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.a(p1.readString(), o$a.ae(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 39:
          p1.enforceInterface("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          this.b(p1.readString(), o$a.ae(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.drive.realtime.internal.IRealtimeService");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
