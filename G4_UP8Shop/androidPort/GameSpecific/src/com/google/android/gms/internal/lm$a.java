// Decompiled from classes.dex (SourceFile: lm$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
public abstract class lm$a extends android.os.Binder implements com.google.android.gms.internal.lm {
    // Methods
    public lm$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.wallet.fragment.internal.IWalletFragmentStateListener");
    }

    public static com.google.android.gms.internal.lm bp(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentStateListener");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.lm )
        return (com.google.android.gms.internal.lm)LocalInterface;
      else
        return (com.google.android.gms.internal.lm)new com.google.android.gms.internal.lm$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      int Int;
      int v8;
      android.os.Bundle v9;
      switch ( p0 )
      {
        case 2:
          p1.enforceInterface("com.google.android.gms.wallet.fragment.internal.IWalletFragmentStateListener");
          Int = p1.readInt();
          v8 = p1.readInt();
          if ( p1.readInt() != 0 )
            v9 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v9 = null;
          this.a(Int, v8, v9);
          p2.writeNoException();
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.wallet.fragment.internal.IWalletFragmentStateListener");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
