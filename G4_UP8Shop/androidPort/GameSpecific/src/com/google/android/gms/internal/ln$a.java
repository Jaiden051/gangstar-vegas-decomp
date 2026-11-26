// Decompiled from classes.dex (SourceFile: ln$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
import com.google.android.gms.wallet.MaskedWalletRequest;
public abstract class ln$a extends android.os.Binder implements com.google.android.gms.internal.ln {
    // Methods
    public static com.google.android.gms.internal.ln bq(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.wallet.internal.IOwService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.ln )
        return (com.google.android.gms.internal.ln)LocalInterface;
      else
        return (com.google.android.gms.internal.ln)new com.google.android.gms.internal.ln$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      com.google.android.gms.wallet.MaskedWalletRequest v7;
      android.os.Bundle v8;
      com.google.android.gms.wallet.FullWalletRequest v9;
      android.os.Bundle v10;
      String String;
      String v12;
      android.os.Bundle v13;
      com.google.android.gms.wallet.NotifyTransactionStatusRequest v14;
      android.os.Bundle v15;
      android.os.Bundle v16;
      com.google.android.gms.wallet.d v17;
      android.os.Bundle v18;
      com.google.android.gms.wallet.MaskedWalletRequest v19;
      android.os.Bundle v20;
      com.google.android.gms.internal.lh v21;
      android.os.Bundle v22;
      android.os.Bundle v23;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IOwService");
          if ( p1.readInt() != 0 )
            v7 = (com.google.android.gms.wallet.MaskedWalletRequest)com.google.android.gms.wallet.MaskedWalletRequest.CREATOR.createFromParcel(p1);
          else
            v7 = null;
          if ( p1.readInt() != 0 )
            v8 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v8 = null;
          this.a(v7, v8, lq$a.bt(p1.readStrongBinder()));
          v5 = true;
          break;
        case 2:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IOwService");
          if ( p1.readInt() != 0 )
            v9 = (com.google.android.gms.wallet.FullWalletRequest)com.google.android.gms.wallet.FullWalletRequest.CREATOR.createFromParcel(p1);
          else
            v9 = null;
          if ( p1.readInt() != 0 )
            v10 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v10 = null;
          this.a(v9, v10, lq$a.bt(p1.readStrongBinder()));
          v5 = true;
          break;
        case 3:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IOwService");
          String = p1.readString();
          v12 = p1.readString();
          if ( p1.readInt() != 0 )
            v13 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v13 = null;
          this.a(String, v12, v13, lq$a.bt(p1.readStrongBinder()));
          v5 = true;
          break;
        case 4:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IOwService");
          if ( p1.readInt() != 0 )
            v14 = (com.google.android.gms.wallet.NotifyTransactionStatusRequest)com.google.android.gms.wallet.NotifyTransactionStatusRequest.CREATOR.createFromParcel(p1);
          else
            v14 = null;
          if ( p1.readInt() != 0 )
            v15 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v15 = null;
          this.a(v14, v15);
          v5 = true;
          break;
        case 5:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IOwService");
          if ( p1.readInt() != 0 )
            v16 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v16 = null;
          this.a(v16, lq$a.bt(p1.readStrongBinder()));
          v5 = true;
          break;
        case 6:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IOwService");
          if ( p1.readInt() != 0 )
            v17 = (com.google.android.gms.wallet.d)com.google.android.gms.wallet.d.CREATOR.createFromParcel(p1);
          else
            v17 = null;
          if ( p1.readInt() != 0 )
            v18 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v18 = null;
          this.a(v17, v18, lq$a.bt(p1.readStrongBinder()));
          v5 = true;
          break;
        case 7:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IOwService");
          if ( p1.readInt() != 0 )
            v19 = (com.google.android.gms.wallet.MaskedWalletRequest)com.google.android.gms.wallet.MaskedWalletRequest.CREATOR.createFromParcel(p1);
          else
            v19 = null;
          if ( p1.readInt() != 0 )
            v20 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v20 = null;
          this.a(v19, v20, lp$a.bs(p1.readStrongBinder()));
          v5 = true;
          break;
        case 8:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IOwService");
          if ( p1.readInt() != 0 )
            v21 = (com.google.android.gms.internal.lh)com.google.android.gms.internal.lh.CREATOR.createFromParcel(p1);
          else
            v21 = null;
          if ( p1.readInt() != 0 )
            v22 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v22 = null;
          this.a(v21, v22, lq$a.bt(p1.readStrongBinder()));
          v5 = true;
          break;
        case 9:
          p1.enforceInterface("com.google.android.gms.wallet.internal.IOwService");
          if ( p1.readInt() != 0 )
            v23 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v23 = null;
          this.a(v23);
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.wallet.internal.IOwService");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
