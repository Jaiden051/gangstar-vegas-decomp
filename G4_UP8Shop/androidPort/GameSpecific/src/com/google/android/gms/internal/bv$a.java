// Decompiled from classes.dex (SourceFile: bv$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class bv$a extends android.os.Binder implements com.google.android.gms.internal.bv {
    // Methods
    public bv$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
    }

    public static com.google.android.gms.internal.bv j(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.bv )
        return (com.google.android.gms.internal.bv)LocalInterface;
      else
        return (com.google.android.gms.internal.bv)new com.google.android.gms.internal.bv$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      Object v5;
      boolean v6;
      com.google.android.gms.dynamic.d v8;
      com.google.android.gms.internal.am v9;
      com.google.android.gms.internal.aj v10;
      com.google.android.gms.dynamic.d v11; // RETVAL
      com.google.android.gms.dynamic.d v12;
      com.google.android.gms.dynamic.d v13;
      com.google.android.gms.internal.am v14;
      com.google.android.gms.internal.aj v15;
      com.google.android.gms.dynamic.d v16;
      com.google.android.gms.internal.aj v17;
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
          v8 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v9 = an.c(p1);
          else
            v9 = null;
          if ( p1.readInt() != 0 )
            v10 = ak.b(p1);
          else
            v10 = null;
          this.a(v8, v9, v10, p1.readString(), bw$a.k(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
          v11 = this.a();
          p2.writeNoException();
          if ( v11 != null )
            v5 = v11.asBinder();
          p2.writeStrongBinder((android.os.IBinder)v5);
          v6 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
          v12 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v5 = ak.b(p1);
          this.a(v12, (com.google.android.gms.internal.aj)v5, p1.readString(), bw$a.k(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
          this.b();
          p2.writeNoException();
          v6 = true;
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
          this.c();
          p2.writeNoException();
          v6 = true;
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
          v13 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v14 = an.c(p1);
          else
            v14 = null;
          if ( p1.readInt() != 0 )
            v15 = ak.b(p1);
          else
            v15 = null;
          this.a(v13, v14, v15, p1.readString(), p1.readString(), bw$a.k(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
          v16 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v17 = ak.b(p1);
          else
            v17 = null;
          this.a(v16, v17, p1.readString(), p1.readString(), bw$a.k(p1.readStrongBinder()));
          p2.writeNoException();
          v6 = true;
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
          this.d();
          p2.writeNoException();
          v6 = true;
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
          this.e();
          p2.writeNoException();
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
