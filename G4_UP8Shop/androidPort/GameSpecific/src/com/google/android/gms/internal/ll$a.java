// Decompiled from classes.dex (SourceFile: ll$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.content.Intent;
import android.os.Bundle;
import com.google.android.gms.wallet.MaskedWallet;
import com.google.android.gms.wallet.MaskedWalletRequest;
public abstract class ll$a extends android.os.Binder implements com.google.android.gms.internal.ll {
    // Methods
    public static com.google.android.gms.internal.ll bo(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.ll )
        return (com.google.android.gms.internal.ll)LocalInterface;
      else
        return (com.google.android.gms.internal.ll)new com.google.android.gms.internal.ll$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      android.os.IBinder v5;
      boolean v6;
      com.google.android.gms.dynamic.d v8;
      com.google.android.gms.wallet.fragment.WalletFragmentOptions v9;
      android.os.Bundle v10;
      android.os.Bundle v11;
      com.google.android.gms.dynamic.d v12;
      com.google.android.gms.dynamic.d v13;
      android.os.Bundle v14;
      com.google.android.gms.dynamic.d v15; // RETVAL
      android.os.Bundle v16;
      int Int;
      int v18;
      android.content.Intent v19;
      com.google.android.gms.wallet.fragment.WalletFragmentInitParams v20;
      com.google.android.gms.wallet.MaskedWalletRequest v21;
      int v22; // RETVAL
      com.google.android.gms.wallet.MaskedWallet v23;
      v5 = null;
      v6 = true;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          v8 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v9 = (com.google.android.gms.wallet.fragment.WalletFragmentOptions)com.google.android.gms.wallet.fragment.WalletFragmentOptions.CREATOR.createFromParcel(p1);
          else
            v9 = null;
          if ( p1.readInt() != 0 )
            v10 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v10 = null;
          this.a(v8, v9, v10);
          p2.writeNoException();
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          if ( p1.readInt() != 0 )
            v11 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v11 = null;
          this.a(v11);
          p2.writeNoException();
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          v12 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
          v13 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v14 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v14 = null;
          v15 = this.a(v12, v13, v14);
          p2.writeNoException();
          if ( v15 != null )
            v5 = v15.asBinder();
          p2.writeStrongBinder(v5);
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          this.a();
          p2.writeNoException();
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          this.b();
          p2.writeNoException();
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          this.c();
          p2.writeNoException();
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          this.d();
          p2.writeNoException();
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          if ( p1.readInt() != 0 )
            v16 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v16 = null;
          this.b(v16);
          p2.writeNoException();
          if ( v16 != null )
          {
            p2.writeInt(1);
            v16.writeToParcel(p2, 1);
          }
          else
          {
            p2.writeInt(0);
          }
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          Int = p1.readInt();
          v18 = p1.readInt();
          if ( p1.readInt() != 0 )
            v19 = (android.content.Intent)android.content.Intent.CREATOR.createFromParcel(p1);
          else
            v19 = null;
          this.a(Int, v18, v19);
          p2.writeNoException();
          break;
        case 10:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          if ( p1.readInt() != 0 )
            v20 = (com.google.android.gms.wallet.fragment.WalletFragmentInitParams)com.google.android.gms.wallet.fragment.WalletFragmentInitParams.CREATOR.createFromParcel(p1);
          else
            v20 = null;
          this.a(v20);
          p2.writeNoException();
          break;
        case 11:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          if ( p1.readInt() != 0 )
            v21 = (com.google.android.gms.wallet.MaskedWalletRequest)com.google.android.gms.wallet.MaskedWalletRequest.CREATOR.createFromParcel(p1);
          else
            v21 = null;
          this.a(v21);
          p2.writeNoException();
          break;
        case 12:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          this.a(p1.readInt() != 0);
          p2.writeNoException();
          break;
        case 13:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          v22 = this.e();
          p2.writeNoException();
          p2.writeInt(v22);
          break;
        case 14:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          if ( p1.readInt() != 0 )
            v23 = (com.google.android.gms.wallet.MaskedWallet)com.google.android.gms.wallet.MaskedWallet.CREATOR.createFromParcel(p1);
          else
            v23 = null;
          this.a(v23);
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.wallet.fragment.internal.IWalletFragmentDelegate");
          break;
        default:
          v6 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v6;
    }

}
