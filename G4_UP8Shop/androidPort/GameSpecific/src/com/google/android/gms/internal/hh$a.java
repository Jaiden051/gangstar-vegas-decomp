// Decompiled from classes.dex (SourceFile: hh$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class hh$a extends android.os.Binder implements com.google.android.gms.internal.hh {
    // Methods
    public static com.google.android.gms.internal.hh J(android.os.IBinder p0)
    {
      android.os.IInterface LocalInterface; // RETVAL
    
      if ( p0 == null )
        return null;
      LocalInterface = p0.queryLocalInterface("com.google.android.gms.common.internal.ICancelToken");
      if ( LocalInterface != null && LocalInterface instanceof com.google.android.gms.internal.hh )
        return (com.google.android.gms.internal.hh)LocalInterface;
      else
        return (com.google.android.gms.internal.hh)new com.google.android.gms.internal.hh$a$a(p0);
    }

    public boolean onTransact(int p0, android.os.Parcel p1, android.os.Parcel p2, int p3)
 throws android.os.RemoteException {
      boolean v5;
      v5 = true;
      switch ( p0 )
      {
        case 2:
          p1.enforceInterface("com.google.android.gms.common.internal.ICancelToken");
          this.a();
          p2.writeNoException();
          break;
        case 1598968902:
          p2.writeString("com.google.android.gms.common.internal.ICancelToken");
          break;
        default:
          v5 = super.onTransact(p0, p1, p2, p3);
          break;
      }
      return v5;
    }

}
