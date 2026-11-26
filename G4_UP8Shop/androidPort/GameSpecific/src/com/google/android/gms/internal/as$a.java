// Decompiled from classes.dex (SourceFile: as$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class as$a extends android.os.Binder implements com.google.android.gms.internal.as {
    // Methods
    public static com.google.android.gms.internal.as g(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.ads.internal.client.IAdManagerCreator");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.as )
        return (com.google.android.gms.internal.as)LocalInterface;
      else
        return (com.google.android.gms.internal.as)new com.google.android.gms.internal.as$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      com.google.android.gms.dynamic.d v7;
      com.google.android.gms.internal.am v8;
      android.os.IBinder v9; // RETVAL
    
      switch ( p0 )
      {
        case 1:
          p1.enforceInterface("com.google.android.gms.ads.internal.client.IAdManagerCreator");
          v7 = com.google.android.gms.dynamic.d$a.ag(p1.readStrongBinder());
          if ( p1.readInt() != 0 )
            v8 = an.c(p1);
          else
            v8 = null;
          v9 = this.a(v7, v8, p1.readString(), bu$a.i(p1.readStrongBinder()), p1.readInt());
          p2.writeNoException();
          p2.writeStrongBinder(v9);
          v5 = true;
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.ads.internal.client.IAdManagerCreator");
          v5 = true;
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
