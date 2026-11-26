// Decompiled from classes.dex (SourceFile: iy$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
public abstract class iy$a extends android.os.Binder implements com.google.android.gms.internal.iy {
    // Methods
    public iy$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.identity.intents.internal.IAddressCallbacks");
    }

    public static com.google.android.gms.internal.iy ao(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.identity.intents.internal.IAddressCallbacks");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.iy )
        return (com.google.android.gms.internal.iy)LocalInterface;
      else
        return (com.google.android.gms.internal.iy)new com.google.android.gms.internal.iy$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      int Int;
      android.os.Bundle v8;
      switch ( p0 )
      {
        case 2:
          p1.enforceInterface("com.google.android.gms.identity.intents.internal.IAddressCallbacks");
          Int = p1.readInt();
          if ( p1.readInt() != 0 )
            v8 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v8 = null;
          this.a(Int, v8);
          p2.writeNoException();
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.identity.intents.internal.IAddressCallbacks");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
