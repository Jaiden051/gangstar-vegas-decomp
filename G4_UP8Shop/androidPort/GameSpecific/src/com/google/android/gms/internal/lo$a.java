// Decompiled from classes.dex (SourceFile: lo$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class lo$a extends android.os.Binder implements com.google.android.gms.internal.lo {
    // Methods
    public static com.google.android.gms.internal.lo br(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.wallet.internal.IWalletDynamiteCreator");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.lo )
        return (com.google.android.gms.internal.lo)LocalInterface;
      else
        return (com.google.android.gms.internal.lo)new com.google.android.gms.internal.lo$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      android.os.IBinder v5;
      boolean v6;
      com.google.android.gms.dynamic.d v8;
      com.google.android.gms.dynamic.c v9;
      com.google.android.gms.wallet.fragment.WalletFragmentOptions v10;
      com.google.android.gms.internal.ll v11; // RETVAL
    
      v5 = null;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IWalletDynamiteCreator");
          v8 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
          v9 = com.google.android.gms.dynamic.c$a.af(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v10 = (com.google.android.gms.wallet.fragment.WalletFragmentOptions)com.google.android.gms.wallet.fragment.WalletFragmentOptions.CREATOR.createFromParcel(p1);
          else
            v10 = null;
          v11 = this.a(v8, v9, v10, lm$a.bp(p1.readStrongBinder()));
          p2.writeNoException();
          if ( v11 != null )
            v5 = v11.asBinder();
          p2.writeStrongBinder(v5);
          v6 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.wallet.internal.IWalletDynamiteCreator");
          v6 = true;
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
