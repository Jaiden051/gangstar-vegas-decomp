// Decompiled from classes.dex (SourceFile: ar$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class ar$a extends android.os.Binder implements com.google.android.gms.internal.ar {
    // Methods
    public ar$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.ads.internal.client.IAdManager");
    }

    public static com.google.android.gms.internal.ar f(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.ads.internal.client.IAdManager");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.ar )
        return (com.google.android.gms.internal.ar)LocalInterface;
      else
        return (com.google.android.gms.internal.ar)new com.google.android.gms.internal.ar$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      int v6;
      boolean v7;
      com.google.android.gms.dynamic.d v9; // RETVAL
      boolean v10; // RETVAL
      boolean v11; // RETVAL
      com.google.android.gms.internal.am v12; // RETVAL
    
      v5 = null;
      v6 = 0;
      v7 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          v9 = this.a();
          p2.writeNoException();
          if ( v9 != null )
            v5 = v9.asBinder();
          p2.writeStrongBinder((android.os.IBinder)v5);
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          this.b();
          p2.writeNoException();
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          v10 = this.c();
          p2.writeNoException();
          p2.writeInt(com.gameloft.android.DecompRT.b2i(v10));
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          if ( p1.readInt() != 0 )
            v5 = ak.b(p1);
          v11 = this.a((com.google.android.gms.internal.aj)v5);
          p2.writeNoException();
          if ( v11 )
            v6 = 1;
          p2.writeInt(v6);
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          this.d();
          p2.writeNoException();
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          this.e();
          p2.writeNoException();
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          this.a(aq$a.e(p1.readStrongBinder()));
          p2.writeNoException();
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          this.a(at$a.h(p1.readStrongBinder()));
          p2.writeNoException();
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          this.f();
          p2.writeNoException();
          break;
        case 10:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          this.g();
          p2.writeNoException();
          break;
        case 11:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          this.h();
          p2.writeNoException();
          break;
        case 12:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          v12 = this.i();
          p2.writeNoException();
          if ( v12 != null )
          {
            p2.writeInt(1);
            v12.writeToParcel(p2, 1);
          }
          else
          {
            p2.writeInt(0);
          }
          break;
        case 13:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          if ( p1.readInt() != 0 )
            v5 = an.c(p1);
          this.a((com.google.android.gms.internal.am)v5);
          p2.writeNoException();
          break;
        case 14:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          this.a(dd$a.q(p1.readStrongBinder()));
          p2.writeNoException();
          break;
        case 15:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
          this.a(dh$a.u(p1.readStrongBinder()), p1.readString());
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.ads.internal.client.IAdManager");
          break;
        default:
          v7 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v7;
    }

}
