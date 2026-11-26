// Decompiled from classes.dex (SourceFile: dc$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class dc$a extends android.os.Binder implements com.google.android.gms.internal.dc {
    // Methods
    public dc$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.ads.internal.purchase.client.IInAppPurchase");
    }

    public static com.google.android.gms.internal.dc p(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.ads.internal.purchase.client.IInAppPurchase");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.dc )
        return (com.google.android.gms.internal.dc)LocalInterface;
      else
        return (com.google.android.gms.internal.dc)new com.google.android.gms.internal.dc$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      String v7; // RETVAL
    
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.ads.internal.purchase.client.IInAppPurchase");
          v7 = this.a();
          p2.writeNoException();
          p2.writeString(v7);
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.ads.internal.purchase.client.IInAppPurchase");
          this.a(p1.readInt());
          p2.writeNoException();
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.ads.internal.purchase.client.IInAppPurchase");
          this.b(p1.readInt());
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.ads.internal.purchase.client.IInAppPurchase");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
