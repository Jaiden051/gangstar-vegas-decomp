// Decompiled from classes.dex (SourceFile: hi$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
public abstract class hi$a extends android.os.Binder implements com.google.android.gms.internal.hi {
    // Methods
    public hi$a()
    {
      super();
      this.attachInterface(this, "com.google.android.gms.common.internal.IGmsCallbacks");
    }

    public static com.google.android.gms.internal.hi K(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.common.internal.IGmsCallbacks");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.hi )
        return (com.google.android.gms.internal.hi)LocalInterface;
      else
        return (com.google.android.gms.internal.hi)new com.google.android.gms.internal.hi$a$a(p0);
    }

    public android.os.IBinder asBinder()
    {
      return this;
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      int Int;
      android.os.IBinder StrongBinder;
      android.os.Bundle v9;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.common.internal.IGmsCallbacks");
          Int = p1.readInt();
          StrongBinder = p1.readStrongBinder();
          if ( p1.readInt() != 0 )
            v9 = (android.os.Bundle)android.os.Bundle.CREATOR.createFromParcel(p1);
          else
            v9 = null;
          this.a(Int, StrongBinder, v9);
          p2.writeNoException();
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.common.internal.IGmsCallbacks");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
