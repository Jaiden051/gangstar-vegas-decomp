// Decompiled from classes.dex (SourceFile: df$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class df$a extends android.os.Binder implements com.google.android.gms.internal.df {
    // Methods
    public static com.google.android.gms.internal.df s(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseManagerCreator");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.df )
        return (com.google.android.gms.internal.df)LocalInterface;
      else
        return (com.google.android.gms.internal.df)new com.google.android.gms.internal.df$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      android.os.IBinder v7; // RETVAL
    
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseManagerCreator");
          v7 = this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()));
          p2.writeNoException();
          p2.writeStrongBinder(v7);
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseManagerCreator");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
