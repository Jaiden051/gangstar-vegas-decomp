// Decompiled from classes.dex (SourceFile: dg$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class dg$a extends android.os.Binder implements com.google.android.gms.internal.dg {
    // Methods
    public dg$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseResult");
    }

    public static com.google.android.gms.internal.dg t(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseResult");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.dg )
        return (com.google.android.gms.internal.dg)LocalInterface;
      else
        return (com.google.android.gms.internal.dg)new com.google.android.gms.internal.dg$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      String v7; // RETVAL
      android.content.Intent v8; // RETVAL
      int v9; // RETVAL
      boolean v10; // RETVAL
    
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseResult");
          v7 = this.b();
          p2.writeNoException();
          p2.writeString(v7);
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseResult");
          v8 = this.c();
          p2.writeNoException();
          if ( v8 != null )
          {
            p2.writeInt(1);
            v8.writeToParcel(p2, 1);
          }
          else
          {
            p2.writeInt(0);
          }
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseResult");
          v9 = this.d();
          p2.writeNoException();
          p2.writeInt(v9);
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseResult");
          v10 = this.a();
          p2.writeNoException();
          p2.writeInt(com.gameloft.android.DecompRT.b2i(v10));
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseResult");
          this.e();
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseResult");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
