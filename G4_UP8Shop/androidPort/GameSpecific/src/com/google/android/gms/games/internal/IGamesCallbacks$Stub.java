// Decompiled from classes.dex (SourceFile: IGamesCallbacks$Stub.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import android.os.Bundle;
import com.google.android.gms.drive.Contents;
public abstract class IGamesCallbacks$Stub extends android.os.Binder implements com.google.android.gms.games.internal.IGamesCallbacks {
    // Methods
    public IGamesCallbacks$Stub()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.games.internal.IGamesCallbacks");
    }

    public static com.google.android.gms.games.internal.IGamesCallbacks ai(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.games.internal.IGamesCallbacks");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.games.internal.IGamesCallbacks )
        return (com.google.android.gms.games.internal.IGamesCallbacks)LocalInterface;
      else
        return (com.google.android.gms.games.internal.IGamesCallbacks)new com.google.android.gms.games.internal.IGamesCallbacks$Stub$Proxy(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      boolean v6;
      com.google.android.gms.common.data.DataHolder v8;
      com.google.android.gms.common.data.DataHolder v9;
      com.google.android.gms.games.multiplayer.realtime.RealTimeMessage v10;
      int Int;
      android.os.Bundle v12;
      int v13;
      android.os.Bundle v14;
      int v15;
      android.os.Bundle v16;
      com.google.android.gms.common.data.DataHolder v17;
      com.google.android.gms.drive.Contents v18;
      com.google.android.gms.common.data.DataHolder v19;
      String String;
      com.google.android.gms.drive.Contents v21;
      com.google.android.gms.drive.Contents v22;
      int v23;
      android.os.Bundle v24;
      int v25;
      android.os.Bundle v26;
      v5 = null;
      v6 = true;
      switch ( p0 )
      {
        case 5001:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.a(p1.readInt(), p1.readString());
          p2.writeNoException();
          break;
        case 5002:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v8 = com.google.android.gms.common.data.f.x(p1);
          else
            v8 = null;
          this.a(v8);
          p2.writeNoException();
          break;
        case 5003:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.b(p1.readInt(), p1.readString());
          p2.writeNoException();
          break;
        case 5004:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.c((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5005:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v9 = com.google.android.gms.common.data.f.x(p1);
          else
            v9 = null;
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.a(v9, (com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5006:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.d((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5007:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.e((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5008:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.f((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5009:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.g((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5010:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.h((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5011:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.i((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5016:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.a();
          p2.writeNoException();
          break;
        case 5017:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.k((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5018:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.s((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5019:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.t((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5020:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.d(p1.readInt(), p1.readString());
          p2.writeNoException();
          break;
        case 5021:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.u((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5022:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.v((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5023:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.w((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5024:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.x((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5025:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.y((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5026:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.a((com.google.android.gms.common.data.DataHolder)v5, p1.createStringArray());
          p2.writeNoException();
          break;
        case 5027:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.b((com.google.android.gms.common.data.DataHolder)v5, p1.createStringArray());
          p2.writeNoException();
          break;
        case 5028:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.c((com.google.android.gms.common.data.DataHolder)v5, p1.createStringArray());
          p2.writeNoException();
          break;
        case 5029:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.d((com.google.android.gms.common.data.DataHolder)v5, p1.createStringArray());
          p2.writeNoException();
          break;
        case 5030:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.e((com.google.android.gms.common.data.DataHolder)v5, p1.createStringArray());
          p2.writeNoException();
          break;
        case 5031:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.f((com.google.android.gms.common.data.DataHolder)v5, p1.createStringArray());
          p2.writeNoException();
          break;
        case 5032:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v10 = (com.google.android.gms.games.multiplayer.realtime.RealTimeMessage)com.google.android.gms.games.multiplayer.realtime.RealTimeMessage.CREATOR.createFromParcel(p1);
          else
            v10 = null;
          this.a(v10);
          p2.writeNoException();
          break;
        case 5033:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.a(p1.readInt(), p1.readInt(), p1.readString());
          p2.writeNoException();
          break;
        case 5034:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.a(p1.readInt(), p1.readString(), p1.readInt() != 0);
          p2.writeNoException();
          break;
        case 5035:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.A((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5036:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.a(p1.readInt());
          p2.writeNoException();
          break;
        case 5037:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.l((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5038:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.z((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5039:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.B((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 5040:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.b(p1.readInt());
          p2.writeNoException();
          break;
        case 6001:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.d(p1.readString());
          p2.writeNoException();
          break;
        case 6002:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.e(p1.readString());
          p2.writeNoException();
          break;
        case 8001:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.C((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 8002:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          Int = p1.readInt();
          if ( p1.readInt() != 0 )
            v12 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v12 = null;
          this.a(Int, v12);
          p2.writeNoException();
          break;
        case 8003:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.n((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 8004:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.o((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 8005:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.p((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 8006:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.q((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 8007:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.c(p1.readInt(), p1.readString());
          p2.writeNoException();
          break;
        case 8008:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.r((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 8009:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.c(p1.readString());
          p2.writeNoException();
          break;
        case 8010:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.a(p1.readString());
          p2.writeNoException();
          break;
        case 9001:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.j((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 10001:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.m((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 10002:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.b(p1.readString());
          p2.writeNoException();
          break;
        case 10003:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.D((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 10004:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.E((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 10005:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          v13 = p1.readInt();
          if ( p1.readInt() != 0 )
            v14 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v14 = null;
          this.b(v13, v14);
          p2.writeNoException();
          break;
        case 10006:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.F((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 11001:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          v15 = p1.readInt();
          if ( p1.readInt() != 0 )
            v16 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v16 = null;
          this.c(v15, v16);
          p2.writeNoException();
          break;
        case 12001:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.G((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 12003:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          v23 = p1.readInt();
          if ( p1.readInt() != 0 )
            v24 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v24 = null;
          this.d(v23, v24);
          p2.writeNoException();
          break;
        case 12004:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v17 = com.google.android.gms.common.data.f.x(p1);
          else
            v17 = null;
          if ( p1.readInt() != 0 )
            v18 = (com.google.android.gms.drive.Contents)com.google.android.gms.drive.Contents.CREATOR.createFromParcel(p1);
          else
            v18 = null;
          this.a(v17, v18);
          p2.writeNoException();
          break;
        case 12005:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.H((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 12006:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.I((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 12007:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.J((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 12008:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.M((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 12011:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.b((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 12012:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          this.e(p1.readInt(), p1.readString());
          p2.writeNoException();
          break;
        case 12013:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.N((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 12014:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.K((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 12015:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          v25 = p1.readInt();
          if ( p1.readInt() != 0 )
            v26 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v26 = null;
          this.e(v25, v26);
          p2.writeNoException();
          break;
        case 12016:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v5 = com.google.android.gms.common.data.f.x(p1);
          this.L((com.google.android.gms.common.data.DataHolder)v5);
          p2.writeNoException();
          break;
        case 12017:
          p1.enforceInterface("com.google.android.gms.games.internal.IGamesCallbacks");
          if ( p1.readInt() != 0 )
            v19 = com.google.android.gms.common.data.f.x(p1);
          else
            v19 = null;
          String = p1.readString();
          if ( p1.readInt() != 0 )
            v21 = (com.google.android.gms.drive.Contents)com.google.android.gms.drive.Contents.CREATOR.createFromParcel(p1);
          else
            v21 = null;
          if ( p1.readInt() != 0 )
            v22 = (com.google.android.gms.drive.Contents)com.google.android.gms.drive.Contents.CREATOR.createFromParcel(p1);
          else
            v22 = null;
          if ( p1.readInt() != 0 )
            v5 = (com.google.android.gms.drive.Contents)com.google.android.gms.drive.Contents.CREATOR.createFromParcel(p1);
          this.a(v19, String, v21, v22, (com.google.android.gms.drive.Contents)v5);
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.games.internal.IGamesCallbacks");
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
