// Decompiled from classes.dex (SourceFile: iz$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
public abstract class iz$a extends android.os.Binder implements com.google.android.gms.internal.iz {
    // Methods
    public static com.google.android.gms.internal.iz ap(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.identity.intents.internal.IAddressService");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.iz )
        return (com.google.android.gms.internal.iz)LocalInterface;
      else
        return (com.google.android.gms.internal.iz)new com.google.android.gms.internal.iz$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      com.google.android.gms.internal.iy v7;
      com.google.android.gms.identity.intents.UserAddressRequest v8;
      android.os.Bundle v9;
      switch ( p0 )
      {
        case 2:
          p1.enforceInterface("com.google.android.gms.identity.intents.internal.IAddressService");
          v7 = iy$a.ao(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v8 = (com.google.android.gms.identity.intents.UserAddressRequest)com.google.android.gms.identity.intents.UserAddressRequest.CREATOR.createFromParcel(p1);
          else
            v8 = null;
          if ( p1.readInt() != 0 )
            v9 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v9 = null;
          this.a(v7, v8, v9);
          p2.writeNoException();
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.identity.intents.internal.IAddressService");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
