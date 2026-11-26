// Decompiled from classes.dex (SourceFile: lq$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
import com.google.android.gms.common.api.StatusCreator;
import com.google.android.gms.wallet.MaskedWallet;
public abstract class lq$a extends android.os.Binder implements com.google.android.gms.internal.lq {
    // Methods
    public lq$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.wallet.internal.IWalletServiceCallbacks");
    }

    public static com.google.android.gms.internal.lq bt(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.wallet.internal.IWalletServiceCallbacks");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.lq )
        return (com.google.android.gms.internal.lq)LocalInterface;
      else
        return (com.google.android.gms.internal.lq)new com.google.android.gms.internal.lq$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      int Int;
      com.google.android.gms.wallet.MaskedWallet v8;
      android.os.Bundle v9;
      int v10;
      com.google.android.gms.wallet.FullWallet v11;
      android.os.Bundle v12;
      int v13;
      boolean v14;
      android.os.Bundle v15;
      int v16;
      android.os.Bundle v17;
      com.google.android.gms.common.api.Status v18;
      com.google.android.gms.internal.lj v19;
      android.os.Bundle v20;
      v5 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IWalletServiceCallbacks");
          Int = p1.readInt();
          if ( p1.readInt() != 0 )
            v8 = (com.google.android.gms.wallet.MaskedWallet)com.google.android.gms.wallet.MaskedWallet.CREATOR.createFromParcel(p1);
          else
            v8 = null;
          if ( p1.readInt() != 0 )
            v9 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v9 = null;
          this.a(Int, v8, v9);
          p2.writeNoException();
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IWalletServiceCallbacks");
          v10 = p1.readInt();
          if ( p1.readInt() != 0 )
            v11 = (com.google.android.gms.wallet.FullWallet)com.google.android.gms.wallet.FullWallet.CREATOR.createFromParcel(p1);
          else
            v11 = null;
          if ( p1.readInt() != 0 )
            v12 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v12 = null;
          this.a(v10, v11, v12);
          p2.writeNoException();
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IWalletServiceCallbacks");
          v13 = p1.readInt();
          v14 = p1.readInt() != 0;
          if ( p1.readInt() != 0 )
            v15 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v15 = null;
          this.a(v13, v14, v15);
          p2.writeNoException();
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IWalletServiceCallbacks");
          v16 = p1.readInt();
          if ( p1.readInt() != 0 )
            v17 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v17 = null;
          this.a(v16, v17);
          p2.writeNoException();
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IWalletServiceCallbacks");
          if ( p1.readInt() != 0 )
            v18 = StatusCreator._typed_createFromParcel(p1);
          else
            v18 = null;
          if ( p1.readInt() != 0 )
            v19 = (com.google.android.gms.internal.lj)com.google.android.gms.internal.lj.CREATOR.createFromParcel(p1);
          else
            v19 = null;
          if ( p1.readInt() != 0 )
            v20 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v20 = null;
          this.a(v18, v19, v20);
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.wallet.internal.IWalletServiceCallbacks");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
