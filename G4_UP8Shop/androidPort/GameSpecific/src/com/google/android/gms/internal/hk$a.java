// Decompiled from classes.dex (SourceFile: hk$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class hk$a extends android.os.Binder implements com.google.android.gms.internal.hk {
    // Methods
    public static com.google.android.gms.internal.hk M(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.common.internal.ISignInButtonCreator");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.hk )
        return (com.google.android.gms.internal.hk)LocalInterface;
      else
        return (com.google.android.gms.internal.hk)new com.google.android.gms.internal.hk$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      com.google.android.gms.dynamic.d v7; // RETVAL
      android.os.IBinder v8;
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.common.internal.ISignInButtonCreator");
          v7 = this.a(com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder()), p1.readInt(), p1.readInt());
          p2.writeNoException();
          if ( v7 != null )
            v8 = v7.asBinder();
          else
            v8 = null;
          p2.writeStrongBinder(v8);
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.common.internal.ISignInButtonCreator");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
